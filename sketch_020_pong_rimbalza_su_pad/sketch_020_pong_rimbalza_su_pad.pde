/*
* aggiungiamo il rimbalzo sul pad
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
  
  //pad - va spostato prima della palla
  pady = mouseY;
  if (pady < 0) pady = 0;
  if (pady > (height - 50)) pady = height - 50;
  rect(10, pady, 10, 50);
  
  //palla che rimbalza
  rect(x,y, 10,10);
  if ((x > (width - 10)) || (x < 0)) {
    dx = -dx;
  }
  if ((y > (height - 10)) || (y < 0)) {
    dy = -dy;
  }
  //verifica rimbalzo su pad
  if (x <= 20) {
    if ((y > pady) && (y < (pady+50))) {
      //rimbalza sul pad
      dx = -dx;
    }
  }
  
  //calcolo delle coordinate della palla
  x = x + dx;
  y = y + dy;
  
    
}