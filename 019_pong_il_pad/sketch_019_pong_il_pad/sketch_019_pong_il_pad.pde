/*
* Prende come base il video 14 - palla che rimbalza
* aggiungiamo il pad che si sposta con il mouse
*/

int x = 100;
int y = 100;
int dx = 1;
int dy = 1;

//posizione iniziale del pad
int pady = 10;

void setup(){
  size(500, 400);
  background(0);
}

void draw(){
  background(0);
  
  //palla che rimbalza
  rect(x,y, 10,10);
  if ((x > (width - 10)) || (x < 0)) {
    dx = -dx;
  }
  if ((y > (height - 10)) || (y < 0)) {
    dy = -dy;
  }
  x = x + dx;
  y = y + dy;
  
  //pad
  pady = mouseY;
  if (pady < 0) pady = 0;
  if (pady > (height - 50)) pady = height - 50;
  rect(10, pady, 10, 50);  
}