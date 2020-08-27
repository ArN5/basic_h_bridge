//PB1=9, PB2=10, PB3=11, PD6=6
#define MOTOR_PIN1 9 //n channel? p channel
#define MOTOR_PIN2 10
#define MOTOR_PIN3 11
#define MOTOR_PIN4 6

void setup() {
  // put your setup code here, to run once:

  //we will use all 4 pins as outputs 
  //to control the h bridge
  pinMode(MOTOR_PIN1, OUTPUT);
  pinMode(MOTOR_PIN2, OUTPUT);
  pinMode(MOTOR_PIN3, OUTPUT);
  pinMode(MOTOR_PIN4, OUTPUT);

  digitalWrite(MOTOR_PIN1,LOW);//0v is low
  digitalWrite(MOTOR_PIN2,LOW);
  digitalWrite(MOTOR_PIN3,LOW);
  digitalWrite(MOTOR_PIN4,LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

void clockwise(){
  digitalWrite(MOTOR_PIN1,LOW);//0v is low
  digitalWrite(MOTOR_PIN2,LOW);
  digitalWrite(MOTOR_PIN3,HIGH);
  digitalWrite(MOTOR_PIN4,LOW);
}

void counter_clockwise(){
  digitalWrite(MOTOR_PIN1,HIGH);//0v is low
  digitalWrite(MOTOR_PIN2,LOW);
  digitalWrite(MOTOR_PIN3,LOW);
  digitalWrite(MOTOR_PIN4,LOW);
}
