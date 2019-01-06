void setup() {
     size(480, 500);
     strokeWeight(4);
     smooth();
     stroke(0, 102);
}

void draw() {
     line(mouseX, mouseY, pmouseX, pmouseY);
}