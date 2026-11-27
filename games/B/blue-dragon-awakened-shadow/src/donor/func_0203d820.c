/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* select_method from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct CPSSslConfig {
    unsigned short methods[2];
    unsigned long priority;
} CPSSslConfig;
extern CPSSslConfig sConfig;
extern int func_0203d820(unsigned char *methods, int num, int size);
extern int func_0203d7d4(unsigned char *s, int num, int size, unsigned short method);
int func_0203d7d4(unsigned char *s, int num, int size, unsigned short method);
int func_0203d820(unsigned char *methods, int num, int size) {
    u32 i;

    for (i = 0; i < 2; i++) {
        if (func_0203d7d4(methods, num, size, sConfig.methods[i])) {
            return sConfig.methods[i];
        }
    }
    return 0;
}
