//Firmaware development by @guiruyz
int pwm_out1 = 3;
int transd_pin = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  char *msg = (char *)malloc(16); 
}

void loop() {
  // put your main code here, to run repeatedly:
  char *msg = (char *)malloc(16); 
  while (1){
  pinMode (pwm_out1 , OUTPUT);
  analogWrite(pwm_out1, 255);
  int value = analogRead(transd_pin);
  snprintf(msg, 16 , "Value: %d \n", value);
  Serial.print(msg);
  }
}