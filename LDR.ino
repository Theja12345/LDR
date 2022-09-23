void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
 int val=analogRead(A0);
 Serial.println(val);
 if(val<700){
  digitalWrite(5,HIGH);
 }
 else{
  digitalWrite(5,LOW);
 }
}
