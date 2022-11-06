#include <math.h>

int p_id = 0;
float pressure = 101300;
float alt = 0;
int state = 0;
float hiz = 0;
//float ltd = 39.892706;
//float lon = 41.238703;
float ltd = 0;
float lon = 0;
int sayac = 0;
int gpsstate = false;

void setup() {
  Serial.begin(115200);
}
/*
  double randomDouble_1(double minf_1, double maxf_1)
  {
  return minf_1 + random(1UL << 31) * (maxf_1 - minf_1) / (1UL << 31);
  }
  double randomDouble_2(double minf_2, double maxf_2)
  {
  return minf_2 + random(1UL << 31) * (maxf_2 - minf_2) / (1UL << 31);
  }
*/
void loop() {

  sayac++;
  p_id++;
  hiz = hiz + 0.5;

  if (sayac == 11) {
    ltd = 39.892706;
    lon = 41.238703;
    gpsstate = true;
  }
  if (gpsstate == true) {
    ltd = ltd + 0.001000;
    lon = lon + 0.001000;
  }

  //ltd = ltd + 0.000500;
  //lon = lon + 0.000500;
  pressure = pressure - 50;
  state++;
  if (state == 8) {
    state = 0;
  }

  alt = 44330 * (1 - (pow(pressure / 101300, 1 / 5.255)));

  Serial.print("a"); Serial.print(p_id); Serial.print("b");
  Serial.print("c"); Serial.print(pressure); Serial.print("d");
  Serial.print("e"); Serial.print(alt); Serial.print("f");
  Serial.print("g"); Serial.print(state); Serial.print("h");
  Serial.print("i"); Serial.print(ltd, 6); Serial.print("j");
  Serial.print("k"); Serial.print(lon, 6); Serial.print("l");
  /*Serial.print("i"); Serial.print(randomDouble_1(39.01, 42.00), 6); Serial.print("j");
    Serial.print("k"); Serial.print(randomDouble_2(39.01, 42.00), 6); Serial.print("l");*/
  Serial.print("m"); Serial.print(hiz); Serial.println("n");

  delay(250);
}
