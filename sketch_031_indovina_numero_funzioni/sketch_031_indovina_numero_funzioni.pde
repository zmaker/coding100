import javax.swing.JOptionPane;
//chiede un testo
  
int stato = 0;
int numero = 0;
int tentativi = 3;

void setup() {}

void draw() {
  switch(stato) {
   case 0:
     pensaUnNumero();     
     break;
   case 1:
     indovina();     
   break;
   case 2:
     vittoria();
   break;
   case 4:
     perso();
   break;
  }
}

void pensaUnNumero() {
  //il prog pensa un numero     
  numero = (int)random(10);
  println("ho pensato a un numero, prova a indovinarlo:");
  stato = 1;
}

void indovina() {
  //l'utente prova a indovinarlo
  String txt = JOptionPane.showInputDialog("Numero? ");
  int n = Integer.parseInt(txt);
        
  if (n == numero) {
    stato = 2;
  } else {
    tentativi--;
    println("sbagliato, riprova");
    if (n < numero) println("il mio numero è più grande");
    if (n > numero) println("il mio numero è più piccolo");
  }
   
  if (tentativi == 0) {
    stato = 4;
  }
}

void vittoria() {
  //l'utente indovina
  println("Bravo, hai indovinato!\n\n");
  tentativi = 3;
  stato = 0;
}

void perso() {
  //l'utente sbaglia (rìtemina i 3 tentativi)
  println("Non hai indovinato!\n\n");
  tentativi = 3;
  stato = 0;
}