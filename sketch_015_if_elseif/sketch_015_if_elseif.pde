int x = 10;
int dx = 1;

void setup(){
  size(500, 400);
  background(0);
}

void draw(){
  rect(x,100, 10,10);
  
  if ((x > (width - 10)) || (x < 0)) {
    dx = -dx;
  }
  
  if (x > 300) {
    fill(color(255,0,0));
  } else if ((x <= 300) && (x > 100)){
    fill(color(255,255,0));
  } else {
    fill(255);
  }
  
  x = x + dx;
  
}