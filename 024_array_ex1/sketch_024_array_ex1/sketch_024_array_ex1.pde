//array - uso con un for che lo riwmpie

float[] gray;
 void setup() {
   size(500, 400);
   gray = new float[width];
   for (int i = 0; i < gray.length; i++) {
     gray[i] = random(0, 255);
   }
}
 void draw() {
   for (int i = 0; i < gray.length; i++) {
     stroke(gray[i]);
     line(i, 0, i, height);
   }
   //parte 2
   delay(1000);
   for (int i = 0; i < gray.length; i++){
    gray[i] = random(0, 255);
   }
}