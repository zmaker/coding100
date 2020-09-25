void setup() {
 size(500,400);
 background(0);
 noStroke();
}

void draw() {
  fill(255);
  rect(10,10, 20,20);
  
  if (buttonClicked()) {
    rect(100,100, 40,20);
  } else {
    fill(0);
    rect(100,100, 40,20);
  }
}

boolean buttonClicked() {
  boolean ret = false;
  if ((mouseX > 10) && (mouseX < 30) && (mouseY > 10) && (mouseY < 30) && mousePressed ) ret = true; 
  return ret;
}
