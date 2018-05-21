#include <adns3080.h>

adns3080 ADNS_3080(4,10);

void setup() {
  Serial.begin(9600);
  ADNS_3080.initSPI();
  ADNS_3080.powerUp();

  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);

  
  //ADNS_3080.writeTo(FRAME_PERIOD_MAXB_LOWER_REG,0x7E);
  //ADNS_3080.writeTo(FRAME_PERIOD_MAXB_UP_REG,0xE);

}

byte SQUAL;

void loop() {  

  SQUAL  = ADNS_3080.readFrom(SQUAL_REG,1);
  Serial.write(SQUAL);

  delay(50);
  
}
