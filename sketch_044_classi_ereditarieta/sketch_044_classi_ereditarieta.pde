Button bt = new Button(10,10);
Led ld = new Led(30,100);

void setup() {
   size(400, 300);
}

void draw() {
  bt.draw();
  ld.draw();
}