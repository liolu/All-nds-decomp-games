/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiEncodeString from https://github.com/Project-Holon/aletheia src/game/ov009/gpiutility.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern void gpiEncodeString(const char *plaintext, char *encoded);
typedef unsigned long size_t;
extern size_t strlen(const char *str);
extern void Util_RandSeed(unsigned int v);
extern unsigned int Util_RandInt(unsigned int min, unsigned int max);
extern void B64Encode(const char *input, char *output, int inlen, int encodingType);
extern void gpiEncodeString(const char *plaintext, char *encoded);
void gpiEncodeString(const char *plaintext, char *encoded) {
    char temp[0x20];
    unsigned int i;
    unsigned int len;

    len = strlen(plaintext);
    Util_RandSeed(0x79707367);
    for (i = 0; i < len; i++) {
        temp[i] = plaintext[i] ^ (char) Util_RandInt(0, 0xff);
    }
    temp[i] = 0;
    B64Encode(temp, encoded, len, 1);
}
