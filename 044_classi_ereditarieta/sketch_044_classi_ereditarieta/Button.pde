public class Button extends Item {

  public Button(int x, int y){
    this.x = x;
    this.y = y;
    this.w = 100;
    this.h = 30;
  }
  
  public void draw(){
    fill(127);
    stroke(0);
    rect(x,y, w,h);
  }
}