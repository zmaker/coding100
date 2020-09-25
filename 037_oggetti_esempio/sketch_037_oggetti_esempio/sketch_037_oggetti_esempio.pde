class LED {
 int stato = 0;
 
 LED() {
   stato = 0;   
 }
 
 void acceso() {
   stato = 1;
 }
 
 void spento() {
   stato = 0;
 }
 
 void print() {
   println("st: " + stato);   
 } 
}


//------------------------

LED l1;

l1 = new LED();
l1.print();
l1.acceso();
l1.print();