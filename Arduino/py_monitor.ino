#include <MPU6050_tockn.h>
#include <Wire.h>

MPU6050 mpu6050(Wire);
int v, last_position; //1=vertical, 0=horizontal

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  //mpu6050.calcGyroOffsets(true);
}

void loop() {
  mpu6050.update();
  if (mpu6050.getAngleX() + 90 < 45) {
    v = 0;
  }
  else {
    v = 1;
  }
  if (v != last_position) {
    if ( v == 0) {
      Serial.println("horizontal");

    }
    else {
      Serial.println("vertical");
    }

  }
  prethodna_poz = v;
}
