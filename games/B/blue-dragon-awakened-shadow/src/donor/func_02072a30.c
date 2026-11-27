/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066650 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02066650.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *__memcpy(void *dst, const void *src, unsigned long n);
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 b[6];
} Magic;
extern Magic data_020e4ffc;
typedef struct {
    u8 pad[0xa0];
    void (*special)(u32, void *);
    void (*normal)(u8 *, int, void *);
    u8 pad2[0x64];
    void *user;
} Obj;
void func_02072a30(Obj *o, u8 *data, int len) {
    Magic magic = data_020e4ffc;
    int i;
    int match = 1;
    u8 *p     = magic.b;
    u32 value;
    if (len >= 10) {
        for (i = 0; i < 6; i++, p++) {
            if (*p != data[i]) {
                match = 0;
                break;
            }
        }
    } else {
        match = 0;
    }
    if (match) {
        __memcpy(&value, data + 6, 4);
        if (o->special == 0) {
            return;
        }
        o->special(((value >> 24) & 0xff) | ((value >> 8) & 0xff00) | ((value << 8) & 0xff0000) | ((value << 24) & 0xff000000),
                   o->user);
    } else {
        if (o->normal == 0) {
            return;
        }
        o->normal(data, len, o->user);
    }
}
