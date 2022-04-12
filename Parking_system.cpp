#include<iostream>

main()
{
const int     trigpin=9; 
 const int     echopin=11;//defines pin numbers//
 long  duration;
 int     distance;  //defines varibles//

void   setup(){
pinmode (trigpin,OUTPUT);//sets the trigpin as an output//
pinmode  (echopin,INPUT); //sets the echopin as an input//
serial.begin (9600);  //sets the serial communication//}

 void loop(){
digitalwrite (trigpin,LOW);//clears the trigpin//
delaymicroseconds(2);
digitalwrite(trigpin,HIGH);//sets trigpin on//
delaymicroseconds(5);
digitalwrite(trigpin,LOW);
Duration = pulsein (echopin,HIGH);
Distance = duration*0.034/2;//caluclating the distance//
Serial.print  (‘DISTANCE:’);//prints the distance on serial monitor//
Serial.printIn  (distance);   }
return(0); 
}