Button bt = new Button(10,10);

void setup() {
   size(400, 300);
}

void draw() {
  bt.draw();
}

void mousePressed() {
  bt.clicked();
}