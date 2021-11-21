#include<iostream>
#include<cstdint>
#include"uECC.h"
using namespace std;
main() {
   cout << "This is C++ ECC program" << endl;
   //secp256r1 private key must be 32 bytes long
  //all large integers are represented using little-endian words
  //so the least significant word is first
  //prime modulus for the curve secp128r1 is FFFFFFFD FFFFFFFF FFFFFFFF FFFFFFFF
  //uint32_t p[4] = {0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffd};

  const struct uECC_Curve_t * curves[5];
  curves[0] = uECC_secp160r1();
  curves[1] = uECC_secp192r1();
  curves[2] = uECC_secp224r1();
  curves[3] = uECC_secp256r1();
  curves[4] = uECC_secp256k1();

  const uint8_t *public_key_prt;
  uint8_t public_key[] = {0x03,0x46,0x46,0xae,0x50,0x47,0x31,0x6b,0x42,0x30,
                          0xd0,0x08,0x6c,0x8a,0xce,0xc6,0x87,0xf0,0x0b,0x1c,
                          0xd9,0xd1,0xdc,0x63,0x4f,0x6c,0xb3,0x58,0xac,0x0a,
                          0x9a,0x8f,0xff};
  public_key_prt = public_key;
  
  const uint8_t *private_key_prt;
  uint8_t private_key[] = {0x01,0x23,0x45,0x67,0x89,0xab,0xcd,0xef,0x01,0x23,
                           0x45,0x67,0x89,0xab,0xcd,0xef,0x01,0x23,0x45,0x67,
                           0x89,0xab,0xcd,0xef,0x01,0x23,0x45,0x67,0x89,0xab,
                           0xcd,0xef};
  private_key_prt = private_key;

  //const uint8_t *compressed_prt;
  //uint8_t compressed[] = {0x48,0x69,0x20,0x54,0x68,0x65,0x72,0x65}; //"Hi There"
  //compressed_prt = compressed;

  //uECC_compress(const unit8_t *public_key, unit8_t *compressed, uECC_Curve curve)
  //uECC_decompress(const unit8_t *compressed, unit8_t *public_key, uECC_Curve curve)
  
  //uECC_compress(public_key_prt,compressed_prt,curves[4]);
  //size_t n = sizeof(compressed)/sizeof(compressed[0]);
  //for (size_t i = 0; i < n; i++) {
  // std::cout << compressed[i];
  //}
  //std::cout << endl;
  
  /*uECC_decompress(compressed_prt, private_key_prt,curve);
  for (size_t i = 0; i < n; i++) {
    std::cout << compressed[i];
  }
  std::cout << endl;
  */
}



