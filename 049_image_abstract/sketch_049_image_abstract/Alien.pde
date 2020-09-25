public class Alien extends Item {
  PImage img;

  public Alien() {
    img = loadImage("alien.jpg");
    img.resize(width, 0);
  }
  
  public void draw() {
    image(img, 0,0);
  }
}