String c = "i love rock";
char ch = c.charAt(2);
println(ch);

for (int i = 0; i < c.length(); i++) {
  char cc = c.charAt(i);
  println(cc);
}

String d = c.substring(0,6);
println(d);

//replace
String e = c.replaceAll("o", "x");
println(e);

String e2 = c.replaceAll("rock", "punk");
println(e2);

//trim
String m = "      salame    ";
println("#"+m+"#");
println("#"+m.trim()+"#");