import pygame
import math

class Colore:
    WHITE = (255, 255, 255)
    YELLOW = (255, 255, 0)
    BLACK = (0, 0, 0)
    GRAY = (30,30,30)

class Item:
    def __init__(self, x, y):
        self.x = x
        self.y = y

class Pac(Item):
    def __init__(self, x, y, r=10):
        super().__init__(x,y)
        self.r = r
    
    def draw(self, screen, counter, offsetx=0, offsety=0):
        if (counter%2) == 0:
            pygame.draw.circle(screen, Colore.YELLOW, (self.x+offsetx,self.y+offsety), self.r)
        else:
            start_angle = math.pi / 4  #45
            end_angle = 7 * math.pi / 4 #315
            xi = self.x - self.r + offsetx
            yi = self.y - self.r + offsety
            pygame.draw.arc(screen, Colore.YELLOW, (xi,yi, 2*self.r,2*self.r), start_angle, end_angle, self.r)    

    def move(self, dir):
        if (dir == '^'):
            self.y -= 1
        elif (dir == 'v'):
            self.y += 1
        elif (dir == '>'):
            self.x += 1
        elif (dir == '<'):
            self.x -= 1

class Line:
    def __init__(self, xi, yi, xo, yo, name="--"):
        if xi < xo:
            self.xi = xi
            self.xo = xo
        else:
            self.xi = xo
            self.xo = xi
        
        if yi < yo:
            self.yi = yi
            self.yo = yo
        else:
            self.yi = yo
            self.yo = yi
    
        self.name = name

    def draw(self, screen, offsetx=0, offsety=0):
        pygame.draw.line(screen, Colore.GRAY, (self.xi+offsetx, self.yi+offsety), (self.xo+offsetx, self.yo+offsety), 1)

    def hasPac(self, pac):
        if (pac.x >= self.xi) and (pac.x <= self.xo) and (pac.y >= self.yi) and (pac.y <= self.yo):
            return True
        else:
            return False
    
    def getMoves(self, pac):
        if (self.xi == self.xo): 
            #vert
            if (pac.y == self.yi):
                return ('v')
            elif (pac.y == self.yo):
                return ('^')
            else:
                return ('v', '^')
        else:
            #orizz
            if (pac.x == self.xi):
                return ('>')
            elif (pac.x == self.xo):
                return ('<')
            else:
                return ('<', '>')
    
    def checkMove(self, pac, direzione_movimento):
        new_x = pac.x
        new_y = pac.y
        if direzione_movimento == '^':
            new_y -= 1
        elif (direzione_movimento == 'v'):
            new_y += 1
        elif (direzione_movimento == '>'):
            new_x += 1
        elif (direzione_movimento == '<'):
            new_x -= 1 

        if (new_x >= self.xi) and (new_x <= self.xo) and (new_y >= self.yi) and (new_y <= self.yo):
            return True
        else:
            return False
        
    def getDots(self):
        dots = []
        if (self.xi == self.xo):
            for dy in range(self.yi, self.yo, Dot.dot_step):
                dots.append(Dot(self.xi, dy))
        else:
            for dx in range(self.xi, self.xo, Dot.dot_step):
                dots.append(Dot(dx, self.yi))
        return dots

class Dot:
    dot_step = 10

    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.r = 3
        self.value = 1

    def draw(self, screen, offsetx=0, offsety=0):        
        pygame.draw.circle(screen, Colore.WHITE, (self.x+offsetx,self.y+offsety), self.r)
    
    def hasPac(self, pac):
        ans = False
        if self.x == pac.x and self.y == pac.y:
            ans = True
        return ans
    
class Ghost(Item):
    def __init__(self, x, y, sprites):
        super().__init__(x, y)
        self.width = 22
        self.height = 22
        self.sprites = sprites
        riga = 4
        col = 0
        sprite_rect_1 = pygame.Rect(32*col, 32*riga, 32, 32)
        col = 1
        sprite_rect_2 = pygame.Rect(32*col, 32*riga, 32, 32)

        self.sprite1 = self.sprites.subsurface(sprite_rect_1)
        self.sprite2 = self.sprites.subsurface(sprite_rect_2)

        self.sprite1 = pygame.transform.scale(self.sprite1, (self.width, self.height))
        self.sprite2 = pygame.transform.scale(self.sprite2, (self.width, self.height))

        self.direzione = 'x'

    def draw(self, screen, counter=0, offsetx=0, offsety=0):
        px = self.x - self.width/2 + offsetx
        py = self.y - self.height/2 + offsety
        if (counter%2) == 0:
            screen.blit(self.sprite1, (px,py))
        else:
            screen.blit(self.sprite2, (px,py))
    
    def move(self):
        dir = self.direzione
        if (dir == '^'):
            self.y -= 1
        elif (dir == 'v'):
            self.y += 1
        elif (dir == '>'):
            self.x += 1
        elif (dir == '<'):
            self.x -= 1


if __name__ == "__main__":
    print("non eseguibile")