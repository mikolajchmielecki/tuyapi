#ifndef TUYA_CIPHER_H
#define TUYA_CIPHER_H

#include <Arduino.h>


class TuyaCipher {
private:

public:

    /**
     * @brief Calculates a MD5 hash.
     * @param data The data to hash.
     * @return The MD5 hash (characters 8 through 16).
     */
  void md5(char* result, char* data);


    /**
     * @brief Generates 16 random bytes.
     * @return The random bytes.
     */
    byte* randomBytes();
};

#endif // TUYA_CIPHER_H
