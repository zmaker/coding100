Button bt1 = new Button(10,10);
Button bt2 = new Button(10,50);
Button bt3 = new Button(10,90);
Led led = new Led(150,30);

void setup() {
   size(400, 300);
}

void draw() {
  bt1.draw();
  bt2.draw();
  bt3.draw();
  
  led.draw();
}

void mousePressed() {
  bt1.clicked(mouseX, mouseY);
  bt2.clicked(mouseX, mouseY);
  bt3.clicked(mouseX, mouseY);
  if (
    (bt1.isClicked() && bt2.isClicked()) ||
    bt3.isClicked()
  ){
    led.setStato(true);
  } else {
    led.setStato(false);
  }
}