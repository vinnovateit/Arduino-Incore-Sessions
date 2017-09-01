int LED_h=10;
int LED_l=9;

void setup() {
  
  Serial.begin(9600);
  pinMode(LED_h,OUTPUT);
  pinMode(LED_l,OUTPUT);
  digitalWrite(LED_h,LOW);
  digitalWrite(LED_l,LOW);
  
  
}

void loop() {

digitalWrite(LED_h,HIGH);
Serial.println("Led is ON!!!")
delay(2000);
digitalWrite(LED_h,LOW);
Serial.println("LED is OFF");
}
