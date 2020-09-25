public class Led extends Item {

  boolean stato; 
  
  public Led(int xl, int yl){
    x = xl;
    y = yl;
    w = 20;
    h = 20;
    stato = false;
  }
  
  public void draw(){
    if (stato) {
      fill(255,0,0);      
    } else {
      fill(100,0,0);
    }
    stroke(0);
    ellipse(x,y, w,h);
  }
  
  public void setStato(boolean st){
    this.stato = st;
  }
}