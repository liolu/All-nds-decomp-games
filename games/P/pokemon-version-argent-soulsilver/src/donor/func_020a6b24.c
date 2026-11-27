/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02070ce0 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02070ce0.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    unsigned char _pad_00[8];
    unsigned char f8;
    unsigned char _pad_09[0x14 - 9];
    int f14;
    unsigned short f18;
    unsigned char _pad_1a[2];
    int f1c;
} Conn;
typedef struct {
    char pad[0xa4];
    Conn *f_a4;
} Mid;
typedef struct {
    char pad[4];
    Mid *ptr_4;
} Root;
extern Root data_021e16c0;
int func_020a6b24(unsigned short *a, int *b) {
    Conn *c = data_021e16c0.ptr_4->f_a4;
    if (c != 0) {
        if (c->f8 == 4 || c->f8 == 10) {
            if (a != 0) {
                *a = c->f18;
            }
            if (b != 0) {
                *b = c->f14;
            }
            return c->f1c;
        }
    }
    return 0;
}
