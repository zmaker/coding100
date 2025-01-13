import pygame
import sys
from pacman import *
import random

# Inizializza Pygame
pygame.init()

# Imposta la finestra di gioco
screen_width, screen_height = 800, 600
screen = pygame.display.set_mode((screen_width, screen_height))

pygame.mixer.init()
pac_sound1 = "pacman_chomp.wav"

FPS = pygame.time.Clock()

#timer per il gioco / pac apre-chiude
last_time = pygame.time.get_ticks()
counter = 0

#classi per il gioco
#offset gioco
offx = 100
offy = 100

pac = Pac(0,10)
direzione_movimento = 0
direzione_movimento_wish = 0
moves = []

lines = []
lines.append(Line(0,0, 40,0, "AB"))
lines.append(Line(40,0, 40,20, "BC"))
lines.append(Line(40,20, 40,40, "CD"))
lines.append(Line(40,20, 20,20, "CF"))
lines.append(Line(40,40, 0,40, "DE"))
lines.append(Line(0,40, 0,0, "EA"))

dots = []
for l in lines:
    dots.extend(l.getDots())

#sprites
spritesheet = pygame.image.load("sprites.png").convert_alpha()
blinky = Ghost(40,0, spritesheet)
bk_moves = []

punteggio = 0

running = True
while running:
    screen.fill(Colore.BLACK)
    
    #gestione counter non bloccante
    current_time = pygame.time.get_ticks()
    if (current_time - last_time) >= 500:
        counter += 1
        last_time = pygame.time.get_ticks()

    #disegno i puntini
    for d in dots:
        d.draw(screen, offsetx=offx, offsety=offy)

    #disegno pacman
    pac.draw(screen, counter, offsetx=offx, offsety=offy)

    #disegno Blinky
    blinky.draw(screen, counter, offsetx=offx, offsety=offy)

    #verifico se pacman è su un dot
    for dot in dots:
        if dot.hasPac(pac):
            dots.remove(dot)
            punteggio += dot.value
            pygame.mixer.Sound(pac_sound1).play()
            print(punteggio)

    #gestione eventi
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    direzione_movimento_wish = 'x'
    keys = pygame.key.get_pressed()
    if keys[pygame.K_q]:
        running = False
    if keys[pygame.K_UP]:
        direzione_movimento_wish = '^'
    if keys[pygame.K_DOWN]:
        direzione_movimento_wish = 'v'
    if keys[pygame.K_LEFT]:
        direzione_movimento_wish = '<'
    if keys[pygame.K_RIGHT]:
        direzione_movimento_wish = '>'

    #disegno il labirinto
    moves.clear()
    bk_moves.clear()
    for l in lines:
        l.draw(screen, offsetx=offx, offsety=offy)
        if l.hasPac(pac):
            moves.extend(l.getMoves(pac))
        if l.hasPac(blinky):
            bk_moves.extend(l.getMoves(blinky))
    
    print(moves, bk_moves)
    if (blinky.direzione == 'x'):
        blinky.direzione = bk_moves[0]

    if direzione_movimento_wish in moves:
        direzione_movimento = direzione_movimento_wish
        
    can_move = 0
    bk_can_move = 0
    for l in lines:
        if (l.checkMove(pac, direzione_movimento)):
            can_move += 1
        if (l.checkMove(blinky, blinky.direzione)):
            bk_can_move += 1
    
    if (can_move > 0):
        pac.move(direzione_movimento)
    if (bk_can_move > 0):
        blinky.move()
    else:
        random.shuffle(bk_moves)
        blinky.direzione = bk_moves[0]

    pygame.display.flip()
    FPS.tick(60)


# Chiudi Pygame
pygame.quit()
sys.exit()
