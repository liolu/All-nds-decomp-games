/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* select_method from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct CPSSslConfig {
    unsigned short methods[2];
    unsigned long priority;
} CPSSslConfig;
extern CPSSslConfig data_021106d0;
extern int func_020a95c8(unsigned char *methods, int num, int size);
extern int func_020a957c(unsigned char *s, int num, int size, unsigned short method);
int func_020a957c(unsigned char *s, int num, int size, unsigned short method);
int func_020a95c8(unsigned char *methods, int num, int size) {
    u32 i;

    for (i = 0; i < 2; i++) {
        if (func_020a957c(methods, num, size, data_021106d0.methods[i])) {
            return data_021106d0.methods[i];
        }
    }
    return 0;
}
