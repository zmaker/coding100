Button bt = new Button(10,10);
Led led = new Led(30,100);

void setup() {
   size(400, 300);
}

void draw() {
  bt.draw();
  
  led.setStato(bt.isClicked());
  led.draw();
}

void mousePressed() {
  bt.clicked();  
}