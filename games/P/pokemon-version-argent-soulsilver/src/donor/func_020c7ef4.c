/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02087440 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02087440.legacy_sp3.c (license:
 * MIT), reused by tools/donor_match.py */
struct Func02087528Self {
    int f0;
    int pad4;
    int f8;
};
extern void func_020d52c8(int x, int arg);
void func_020c7ef4(struct Func02087528Self *self, int arg) {
    if (self->f8 == 0) {
        return;
    }
    func_020d52c8(1 << self->f0, arg);
}
