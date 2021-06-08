int x[] = {width/2};
int y[] = {height/2};
int dir[] = {1};

int currdir = 1;

void setup() {
  size(400, 400);
  background(0);
}

void draw() {
  background(0);
  for (int i = 0; i < x.length; i++) {
    rect(x[i], y[i], 10, 10);
    dir[i] = currdir;
    switch(dir[i]) {
      case 1:
        x[i] += 10;
        break;
      case 2:
        x[i] -= 10;
        break;  
      case 3:
        y[i] += 10;
        break;
      case 4:
        y[i] -= 10;
        break;
    }
  }
  
  delay(100);
}

void keyPressed() {
  if (key == CODED) {
    if (keyCode == UP){
      currdir = 4;
    } else if (keyCode == DOWN){
      currdir = 3;
    } else if (keyCode == RIGHT){
      currdir = 1;
    } else if (keyCode == LEFT){
      currdir = 2;
    }
  }
}
