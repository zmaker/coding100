PrintWriter file;

void setup() {
  file = createWriter("posizioni.txt");
}

void draw() {
  point(mouseX, mouseY);
  file.println(mouseX+","+mouseY);
}

void keyPressed() {
  file.flush();
  file.close();
  exit(); 
}