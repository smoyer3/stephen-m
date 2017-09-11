

#define LED1 D5
#define LED2 D6
#define LED3 D7
#define LED4 D8
#define ANA A0

int val = 0;

void setup() {

  Serial.begin(115200);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(ANA,INPUT);
  
}

void loop() {

  val = analogRead(ANA) ;

  val = map(val, 0, 1000, 0, 100);

  analogWrite(LED1,ledBrightness(val, 1));
  analogWrite(LED2,ledBrightness(val, 2));
  analogWrite(LED3,ledBrightness(val, 3));
  analogWrite(LED4,ledBrightness(val, 4));

  Serial.println(val);
  delay(30);
}
int ledBrightness(int val, int pin) {
  switch(pin) {
  case 1:
    if(val >= 25) {
      return 1023;
    } else{
      return map(val, 0, 25, 0, 1023);
    }
    break;
  case 2:
      if(val >= 50) {
      return 1023;
    } else if (val >= 25) {
      val -= 25;
      return map(val, 0, 25, 0, 1023);
    } else {
      return 0;
    }
    break;
  case 3:
      if(val >= 75) {
      return 1023;
    } else if (val >= 50) {
      val -= 50;
      return map(val, 0, 25, 0, 1023);
    } else {
      return 0;
    }
    break;
  case 4:
      if(val >= 100) {
      return 1023;
    } else if (val >= 75) {
      val -= 75;
      return map(val, 0, 25, 0, 1023);
    } else {
      return 0;
    }
    break;
  }
}
  
