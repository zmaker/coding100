void setup(){
  size(500, 400);
  background(0);
}

void draw(){
  if (mousePressed) {
    fill(255);
  } else {
    fill(0);
  }
  rect(mouseX, mouseY, 10, 10);
}