#include <Servo.h>

int inByte = 0; //Signal from OV
int button = 0; //Button from OV
/*Servo minimo; //PWM 3
Servo anelar; //PWM 5
Servo medio; //PWM 6
Servo indicador; //PWM 9
Servo polegar; //PWM 10
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  // Configura a porta PWM de cada servo
  /*
  minimo.attach(3);
  anelar.attach(5);
  medio.attach(6);
  indicador.attach(9);
  polegar.attach(10);

  // Fechar todos os dedos
  minimo.write(90);
  anelar.write(90);
  medio.write(90);
  indicador.write(90);
  polegar.write(90);
  */

  
  //mg946r.attach(9); //Define o pino 9 como saída PWM
  //mg946r.write(90); //Zera a referência do servomotor
  //digitalWrite(13, LOW);
}

void loop() {
/*
minimo.write(180);
delay(500); 
minimo.write(0);
delay(500);
minimo.write(90);
delay(500);

anelar.write(180);
delay(500);
anelar.write(0);
delay(500);
anelar.write(90);
delay(500);

medio.write(180);
delay(500);
medio.write(0);
delay(500);
medio.write(90);
delay(500);

indicador.write(180);
delay(500);
indicador.write(0);
delay(500);
indicador.write(90);
delay(500);

polegar.write(180);
delay(500);
polegar.write(0);
delay(500);
polegar.write(90);
delay(500);

minimo.write(180);
anelar.write(180);
medio.write(180);
indicador.write(180);
polegar.write(180);

delay(1000);

minimo.write(0);
anelar.write(0);
medio.write(0);
indicador.write(0);
polegar.write(0);

delay(1000);

minimo.write(90);
anelar.write(90);
medio.write(90);
indicador.write(90);
polegar.write(90);

delay(1000);
*\

 */
   //test if there's new data from C++ client
  if (Serial.available())  
 // if (1)  
  {
      // get the first byte of incoming serial data available
     //this will be the EEG command, whether to turn pumps on or off
      inByte = Serial.read();   
      //inByte = -1;
      //button = Serial.read();
      
 
      if (inByte == 1){
      //minimo.write(90);
      //anelar.write(90);
      //medio.write(90);
      //indicador.write(90);
     // polegar.write(90);
     digitalWrite(13,HIGH);

     // delay(1000);
      }

      if (inByte == 0){
     // minimo.write(180);
     // anelar.write(180);
     // medio.write(180);
     // indicador.write(180);
     // polegar.write(180);

     digitalWrite(13,LOW);
     

     // delay(1000);
      }
      
      /*if (inByte == 3){
       minimo.write(0);
       anelar.write(0);
       medio.write(0);
       indicador.write(0);
       polegar.write(0);

      //delay(1000);
      }
 //else {
//      digitalWrite(13, LOW);
   //   mg946r.write(0);
     // }
  }
}

*/


  }
}


     
         

     
  

