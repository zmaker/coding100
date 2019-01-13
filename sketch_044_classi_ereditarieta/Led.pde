public class Led extends Item {
  
  public Led(int x, int y){
    this.x = x;
    this.y = y;
    this.w = 30;
    this.h = 30;
  }
  
  public void draw(){
    fill(127,0,0);
    stroke(0);
    ellipse(x,y, w,h);
  }
}