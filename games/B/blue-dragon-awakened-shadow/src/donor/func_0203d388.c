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
extern void MD5Init(void *p);
extern void MD5Update(void *p, int a, int n);
extern void MD5Final(void *p, void *q);
extern void SHA1Init(void *p);
extern void SHA1Update(void *p, int a, int n);
extern void SHA1Final(void *p, void *q);
extern int func_0203cb68(Ctx *c, void *q);
extern int func_0203d1e0(Ctx *c, int r);
unsigned int func_0203d388(Ctx *c) {
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
            MD5Init(p);
            MD5Update(p, c->f460, c->f464 - c->f460);
            MD5Final(p, (char *) c + 0x468);
            c->f47c = 0x10;
            break;
        case 4:
            p = c->b348;
            SHA1Init(p);
            SHA1Update(p, c->f460, c->f464 - c->f460);
            SHA1Final(p, (char *) c + 0x468);
            c->f47c = 0x14;
            break;
        default:
            return flag | 3;
    }
    r = func_0203cb68(c, (char *) c + 0x5b0);
    if (r == 0) {
        return flag | 1;
    }
    return flag | func_0203d1e0(c, r);
}
