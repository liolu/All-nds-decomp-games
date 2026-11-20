/* compiler: 2.0/sp1p5  */
/* func_0203bc84 from projets/battle-of-giants-dinosaurs/src/auto/func_0203bc84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef double f64;
extern u8 *func_02025c10(u8 *p, s32 *out);
typedef struct {
    s32 f00;
    u8 *f04;
} Arg1;
typedef struct {
    u8 f00[0x14];
    s32 f14;
    s32 f18;
    u8 f1c[0x1c];
    s32 f38;
    u8 f3c[0xc];
    s32 f48;
    u8 f4c[0x14];
    s32 f60;
    s32 f64;
    u16 f68;
    u8 f6a;
    u8 f6b;
    u8 f6c;
} Self;
void func_02027418(Self *self, Arg1 *arg1) {
    u8 *p    = arg1->f04;
    u8 flags = *p;
    u8 *q;

    self->f6b = (flags & 0x40) != 0;
    self->f6a = (flags & 0x20) != 0;
    self->f6c = (flags & 0x80) != 0;
    self->f68 = p[1] << 4;
    self->f68 |= 0x4000;
    q = func_02025c10(p + 2, &self->f60);
    if (flags & 0x40) {
        func_02025c10(q, &self->f64);
    }
    if (flags & 0x40) {
        if (flags & 0x80) {
            self->f18 = self->f38;
        } else {
            self->f18 = self->f48;
        }
    } else {
        self->f18 = self->f14;
    }
}
