public class Button extends Item{

  boolean clicked; 
  
  public Button(int x, int y){
    this.x = x;
    this.y = y;
    this.w = 100;
    this.h = 30;
    clicked = false;
  }
  
  public void draw(){
    if (clicked) {
      fill(255);      
    } else {
      fill(127);
    }
    stroke(0);
    rect(x,y, w,h);
  }
  
  public void clicked(){
    clicked = !clicked;
  }
  
  public boolean isClicked() {
    return clicked;
  }
}