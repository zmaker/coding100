void setup() {  
  try {
    
    String[] lines = loadStrings("test.txt");
    if (lines != null) {
      println("Ci sono " + lines.length + " linee");
      for (int i = 0; i < lines.length; i++) {
        println(lines[i]);
      }
    }    
  } catch (Exception e) {
    e.printStackTrace();    
  }
 
}
 
void draw() {  
} 