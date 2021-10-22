int buzzer = 7; // siren 
int lever = 6;  // the mechanical lever used in rail crossings
int ir1 = 3;
int ir2 = 4;
int ir3 = 5;

void setup() {
  pinMode (ir1, INPUT);
  pinMode (ir2, INPUT);
  pinMode (ir3, INPUT);
  pinMode (lever, OUTPUT);
  pinMode (buzzer, OUTPUT);
}

void loop() {
  
  //Serial.begin(9600);
  //Serial.println(digitalRead(ir1));
  //Serial.println(digitalRead(ir1) + digitalRead(ir2) + digitalRead(ir3));
  
  if (digitalRead(ir1) == HIGH && digitalRead(ir2) == HIGH && digitalRead(ir3) == HIGH)
  {
    tone(lever, 85); //this will be replcaed with lever on-off
    tone(buzzer, 85); //this triggers the siren
    delay(1000);
    noTone(lever);
    noTone(buzzer);
    delay(1000);
    // show warning sign in lcd
  }
  else
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(lever, HIGH);
    delay(2000);
    digitalWrite(buzzer, LOW);
    digitalWrite(lever, LOW);
    delay(2000);
    //show time/date/others in display

  }

}
