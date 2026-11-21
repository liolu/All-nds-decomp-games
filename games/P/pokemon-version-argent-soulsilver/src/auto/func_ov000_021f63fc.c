#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    void **p4;
    u8 pad1[5];
    u8 fd;
    u8 pad2[9];
    u8 f17;
    u8 pad3[8];
    s32 f20;
    s32 a24[32];
    u16 aa4[40];
    s32 af4[45];
    u8 f1a8;
    u8 pad4[0x348 - 0x1a9];
    s32 f348;
} G;

G *func_ov000_021f957c(void);
s32 func_ov000_021f4324(s32, s32, s32, u16, void *, s32);
void func_ov000_0220d258(void *);

s32 func_ov000_021f63fc(void) {
    s32 i = 1;
    s32 t;
    if ((s32) func_ov000_021f957c()->fd >= 1) {
        do {
            G *a = func_ov000_021f957c();
            G *b = func_ov000_021f957c();
            G *c = func_ov000_021f957c();
            G *d = func_ov000_021f957c();
            t    = func_ov000_021f4324(10, a->af4[i], b->a24[i], c->aa4[i], &d->f348, func_ov000_021f957c()->f348 + 1);
            if (t != 0) {
                return t;
            }
            i++;
        } while (i <= func_ov000_021f957c()->fd);
    }
    func_ov000_021f957c()->f17  = 0;
    func_ov000_021f957c()->f20  = 0;
    func_ov000_021f957c()->f1a8 = 1;
    func_ov000_0220d258(*func_ov000_021f957c()->p4);
    func_ov000_021f957c()->f1a8 = 0;
    return 0;
}
