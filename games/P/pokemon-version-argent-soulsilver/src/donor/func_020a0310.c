/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02052ecc from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02052ecc.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    unsigned char pad[0x1c];
    void *value;
    int unused;
    int arg;
} Object;
extern unsigned long long func_0209fcc8(void *self, int arg1);
unsigned long long func_020a0310(Object *self) {
    unsigned long long result = 0;
    if (self->value != 0) {
        result = func_0209fcc8(self->value, self->arg);
    }
    return result;
}
