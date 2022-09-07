 /*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/




void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  // this is a highly reusable code as the user just has to call the method of the letters of the word
    c(); h();e();t(); a(); l();   //chetal
   

  delay(10000); //delay for 10 seconds

}

void Dash() // method for displaying a single dash or line
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1200);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

void Dot() // method for dot
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}


  void a()      
  {
     Dot();
    Dash();             
  }
  void b()
  {
    Dash();
    Dot();
    Dot();
    Dot();
  }
void c()
  {
    Dash();
    Dot();
    Dash();
    Dot();
  }

 void d()
  {
    Dash();
    Dot();
    Dot();
  }

  void e()
  {
    Dot();
  }

  void f()
  {
    Dot();
    Dot();
    Dash();
    Dot();
  }

  void g()
  {
    Dash();
    Dash();
    Dot();
  }
  void h()
  {
    Dot();
    Dot();
    Dot();
    Dot();
  }

  void i()
  {
    Dot();
    Dot();
  }

  void j()
  {
    Dot();
    Dash();
    Dash();
    Dash();
  }

  void k()
  {
    Dash();
    Dot();
    Dash();
  }

  void l()
  {
    Dot();
    Dash();
    Dot();
    Dot();
  }

  void m()
  {
    Dash();
    Dash();
  }

  void n()
  {
    Dash();
    Dot();
  }

  void o()
  {
    Dash();
    Dash();
    Dash();
  }

  void p()
  {
    Dot();
    Dash();
    Dash();
    Dot();

  }

  void q()
  {
    Dash();
    Dash();
    Dot();
    Dash();
  }

  void r()
  {

    Dot();
    Dash();
    Dot();
  }

  void s()
  {
    Dot();
    Dot();
    Dot();
  }

  void t()
  {
    Dot();
    Dot();
    Dot();
    Dot();
  }

  void u()
  {
    Dot();
    Dot();
    Dash();
  }

  void v()
  {
    Dot();
    Dot();
    Dot();
    Dash();
  }

  void w()
  {

    Dot();
    Dash();
    Dash();
  }

  void x()
  {
    Dash();
    Dot();
    Dot();
    Dash();
  }

  void y()
  {
    Dash();
    Dot();
    Dash();
    Dash();
  }

  void z()
  {
    Dash();
    Dash();
    Dot();
  }
