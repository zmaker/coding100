int x[] = {width/2, (width/2)-10, (width/2)-20};
int y[] = {height/2, height/2, height/2};
int dir[] = {1, 1, 1};

int currdir = 1;

void setup() {
  size(400, 400);
  background(0);
}

void draw() {
  background(0);
  for (int i = 0; i < x.length; i++) {
    rect(x[i], y[i], 10, 10);
  }
  
  
  int dir_blocco_che_precede = 0;
  int d = 0;
  for (int i = 0; i < x.length; i++) {
    if (i == 0) {
       dir_blocco_che_precede = dir[0];
       dir[0] = currdir;
    } else {
       d = dir[i];
       dir[i] = dir_blocco_che_precede;
       dir_blocco_che_precede = d;
    } 
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
