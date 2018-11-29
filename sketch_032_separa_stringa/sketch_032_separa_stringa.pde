String str = "  mela , pera,  banana, fragola";
//ci sono strutture "migliori" ma per oggi usiamo questa!
String[] list = new String[4];

void setup(){
  int i = 0; //indice array
  
  String token;
  
  //puntatori stringa
  int n = 0;  
  int m = 0;
  /*
  n = 0;  
  m = str.indexOf(",", n);
  println(m);
  token = str.substring(n, m);  
  println(token);
  list[i] = token.trim();
  i++;  
  
  n = m+1;  
  m = str.indexOf(",", n);
  println(m);
  token = str.substring(n, m);  
  println(token);
  list[i] = token.trim();
  i++;
  */
   
  while (m >= 0) {
    n = m+1;  
    m = str.indexOf(",", n);
    println(m);
    if ((m < 0) && (n < str.length())) {
      token = str.substring(n+1);
    } else {
      token = str.substring(n, m);
    }
    println(token);
    list[i] = token.trim();
    i++; 
  }
  
  for (int j = 0; j < list.length; j++) {
    println("("+j+") <"+list[j]+">");
  }
}

void draw(){}