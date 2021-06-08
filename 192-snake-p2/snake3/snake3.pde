int x[] = {width/2, (width/2)-10, (width/2)-20};
int y[] = {height/2, height/2, height/2};
int dir[] = {1, 1, 1};

int fx,fy;

int currdir = 1;

void setup() {
  size(400, 400);
  background(0);
  food();
}

void draw() {
  background(0);
  
  //food
  fill(255,0,0);
  rect(fx,fy, 10, 10);
  fill(255);
  
  if ((x[0] == fx) && (y[0] == fy)) {
    grow();
  }
  
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
    if (x[i] > width) x[i]= 0;
    if (y[i] > height) y[i]= 0;
    if (x[i] < 0) x[i]= width;
    if (y[i] < 0) y[i]= height;
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

void food() {
  fx = 10 + ((int)random(width-20)/10)*10;
  fy = 10 + ((int)random(height-20)/10)*10;
}

void grow() {
  int lastx = x[x.length-1];
  int lasty = y[y.length-1];
  int lastdir = dir[dir.length-1];
  switch(lastdir){
    case 1:
      lastx -= 10;
      break;
    case 2:
      lastx += 10;
      break;
    case 3:
      lasty -= 10;
      break;
    case 4:
      lasty += 10;
      break;
  }
  x = append(x, lastx);
  y = append(y, lasty);
  dir = append(dir, lastdir);
  
  food();
}
