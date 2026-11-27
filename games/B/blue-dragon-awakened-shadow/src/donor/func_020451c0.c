/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203d4d4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0203d4d4.c (license: MIT), reused
 * by tools/donor_match.py */
extern char *func_020449a8(int sel);
extern void func_02044c44(void *p);
typedef struct {
    short f0;
    short f2;
    void *f4;
    int f8;
} Obj_d524;
void func_020451c0(Obj_d524 *p) {
    char *base = func_020449a8(0x10);
    if (p->f0 == 5) {
        if (p->f2 == 0) {
            return;
        }
        switch (p->f8) {
            case 0xd:
                base[0xd14] = 1;
                break;
            case 0xf:
                base[0xd14] = 2;
                break;
            case 0x11:
                base[0xd14] = 3;
                break;
            default:
                base[0xd14] = 4;
                break;
        }
    } else if (p->f0 == 7) {
        func_02044c44(p->f4);
    }
}
