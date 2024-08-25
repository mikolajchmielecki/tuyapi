#include "cipher.h"

TuyaCipher cipher;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Cipher test");
  char input[] = "xdxd";
  char result[17];
  cipher.md5(result, input);
  Serial.println(result);

}

void loop() {

}