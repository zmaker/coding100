PImage img;

void setup() {
  size(500,400);
  String url = "https://processing.org/img/processing-web.png";
  img = loadImage("alien.jpg");
  //img = loadImage(url, "png");
}

void draw() {
  image(img, 0,0);
}
