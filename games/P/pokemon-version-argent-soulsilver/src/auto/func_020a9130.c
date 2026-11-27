/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020770bc from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_020770bc.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    unsigned char _pad_00[0x348];
    unsigned char b348[0xb4];
    unsigned char b3fc[0x5c];
    int f458;
    int f45c;
    int f460;
    int f464;
    unsigned char _pad_468[0x47c - 0x468];
    int f47c;
    unsigned char _pad_480[0x5af - 0x480];
    unsigned char f5af;
} Ctx;
extern void func_020abec0(void *p);
extern void func_020abf08(void *p, int a, int n);
extern void func_020abfc0(void *p, void *q);
extern void func_020ac780(void *p);
extern void func_020ac7d4(void *p, int a, int n);
extern void func_020ac88c(void *p, void *q);
extern int func_020a8910(Ctx *c, void *q);
extern int func_020a8f88(Ctx *c, int r);
unsigned int func_020a9130(Ctx *c) {
    unsigned int flag;
    void *p;
    int r;

    flag = c->f5af != 0 ? 0 : 0x8000;
    if (c->f45c == -1) {
        return flag | 4;
    }
    switch (c->f458) {
        case 3:
            p = c->b3fc;
            func_020abec0(p);
            func_020abf08(p, c->f460, c->f464 - c->f460);
            func_020abfc0(p, (char *) c + 0x468);
            c->f47c = 0x10;
            break;
        case 4:
            p = c->b348;
            func_020ac780(p);
            func_020ac7d4(p, c->f460, c->f464 - c->f460);
            func_020ac88c(p, (char *) c + 0x468);
            c->f47c = 0x14;
            break;
        default:
            return flag | 3;
    }
    r = func_020a8910(c, (char *) c + 0x5b0);
    if (r == 0) {
        return flag | 1;
    }
    return flag | func_020a8f88(c, r);
}
