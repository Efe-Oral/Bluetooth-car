
//L298N Bağlantısı   
  const int motorA1  = 5;  // IN1
  const int motorA2  = 6;  // IN2
  const int motorB1  = 10; // IN3
  const int motorB2  = 9;  // IN3
  int       Far      = 13; 
  int       i        = 0;
  int state; 
  int vSpeed=255;     
void setup() {

    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);
    pinMode(Far    , OUTPUT);    
    Serial.begin(9600);
}
 
void loop() {

   if(Serial.available() > 0){ 
    state = Serial.read();
    Serial.write(state);
   }
   
   
    if (state == '0'){
      vSpeed=0;}
    else if (state == '1'){
      vSpeed=50;}
    else if (state == '2'){
      vSpeed=180;}
    else if (state == '3'){
      vSpeed=200;}
    else if (state == '4'){
      vSpeed=255;}
     
  //If the value is 'F' car goes forward
    if (state == 'F' or state == 'f') {
      analogWrite(motorA1, vSpeed); 
      analogWrite(motorA2, vSpeed);
      analogWrite(motorB1, 0);      
      analogWrite(motorB2, 0); 
    }
  //If the value is 'G' car goes left-cross
    else if (state == 'G' or state == 'g') {
      analogWrite(motorA1, 100 );
      analogWrite(motorA2, vSpeed);  
      analogWrite(motorB1, 0);    
      analogWrite(motorB2, 0); 
    }
  //If the value is 'I' car goes right-cross
    else if (state == 'I' or state == 'ı') {
        analogWrite(motorA1, vSpeed); 
        analogWrite(motorA2, 100); 
        analogWrite(motorB1, 0);      
        analogWrite(motorB2, 0); 
    }
  //If the value is 'B' car goes back
    else if (state == 'B' or state == 'b') {
      analogWrite(motorA1, 0);   
      analogWrite(motorA2, 0); 
      analogWrite(motorB1, vSpeed);   
      analogWrite(motorB2, vSpeed); 
    }
  //If the value is 'H' car goes back-left-cross
    else if (state == 'H' or state == 'h') {
      analogWrite(motorA1, 0);   
      analogWrite(motorA2, 0); 
      analogWrite(motorB1, vSpeed); 
      analogWrite(motorB2, 100); 
    }
  //If the value is 'J' car goes back-right-cross
    else if (state == 'J' or state == 'j') {
      analogWrite(motorA1, 0);   
      analogWrite(motorA2, 0); 
      analogWrite(motorB1, 100);   
      analogWrite(motorB2, vSpeed); 
    }
  //If the value is 'L' car turns left
    else if (state == 'L' or state == 'l') {
      analogWrite(motorA1, 0);   
      analogWrite(motorA2, 150); 
      analogWrite(motorB1, 0); 
      analogWrite(motorB2, 150); 
    }
  //If the value is 'R' car turns right
    else if (state == 'R' or state == 'r') {
      analogWrite(motorA1, 150);   
      analogWrite(motorA2, 0); 
      analogWrite(motorB1, 150);   
      analogWrite(motorB2, 0);     
    }
  
  //If the value is 'S' car stops
    else if (state == 'S' || state == 's'){
        analogWrite(motorA1, 0); 
        analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);  
        analogWrite(motorB2, 0);
    }  
    //Blinking headlights
    else if(state == 'W' or state == 'w'){ 
      while(i < 8){
        digitalWrite(Far, HIGH);
        delay(250);
        digitalWrite(Far, LOW);
        delay(250);
        i +=1;
      }
    i = 0; // Reset i
     }
}
