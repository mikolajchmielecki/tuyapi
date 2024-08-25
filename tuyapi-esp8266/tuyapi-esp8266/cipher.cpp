#include "cipher.h"
#include <MD5.h>


void convertToHex(char result[], byte bytes[], size_t len) {
  int i;
  for (i=0; i<len; i++) {
    sprintf(result+i*2, "%02x", bytes[i]);
  }
}


void TuyaCipher::md5(char* result, char* data) {
  unsigned char* hash = MD5::make_hash(data);
  byte* resultBytes = (byte*) hash;
  char resultStr[32];
  convertToHex(resultStr, resultBytes, 16);
  memcpy(result, resultStr+8, 16);
  result[16] = 0;
}

byte* TuyaCipher::randomBytes() {
  static byte buffer[16];
  for (int i = 0; i < 16; i++) {
    buffer[i] = random(0, 256);
  }
  return buffer;
}
