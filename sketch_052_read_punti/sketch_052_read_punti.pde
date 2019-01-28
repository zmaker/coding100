
void setup() {
  BufferedReader reader = createReader("posizioni.txt");
  String line = null;
  try {
    
    while ( (line = reader.readLine()) != null){
      String[] token = split(line, ',');  //12, 34
      int x = int(token[0].trim());
      int y = int(token[1].trim());
      point(x, y);
    } 
    reader.close();
  
  } catch (Exception e) {
    e.printStackTrace();
  }
}

void draw() {}