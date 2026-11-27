/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GSMD5Print from https://github.com/Project-Holon/aletheia src/game/ov009/md5c.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
extern void MD5Print(unsigned char *digest, char *output);
extern void MD5Print(unsigned char *digest, char *output);
extern char data_020e4d34[];
void MD5Print(unsigned char *digest, char *output) {
    unsigned int i;

    for (i = 0; i < 16; i++) {
        output[i * 2]     = data_020e4d34[digest[i] / 16];
        output[i * 2 + 1] = data_020e4d34[digest[i] % 16];
    }
    output[32] = 0;
}
