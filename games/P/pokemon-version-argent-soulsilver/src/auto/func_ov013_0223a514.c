#include "m2c.h"

typedef struct S {
    u8 pad[0xc0];
    u8 c0[4];
    u8 c4[4];
    u8 c8[8];
    u8 d0;
    u8 pad2[0xf0 - 0xd1];
} S;

typedef struct Cur {
    S s;
    u8 f0[4];
    u8 f4;
    u8 f5;
    u8 f6;
} Cur;

typedef struct G {
    u8 pad[0x400];
    Cur cur;
} G;

void func_020d4994(void *, s32, s32);
void func_020d4a50(void *, void *, s32);
s8 func_0209e788(void *);
void func_ov013_0223a910(u8);
extern G *data_ov013_0224f5c4;

void func_ov013_0223a514(void) {
    Cur *c  = &data_ov013_0224f5c4->cur;
    S *slot = (S *) ((u8 *) data_ov013_0224f5c4 + (c->f4 << 8));
    *slot   = c->s;
    if (c->f5 != 0) {
        func_020d4994(slot->c0, 0, 4);
        func_020d4994(slot->c4, 0, 4);
        slot->d0 = 0;
    } else {
        func_020d4a50(c->s.c0, slot->c0, 4);
        func_020d4a50(c->s.c4, slot->c4, 4);
        slot->d0 = func_0209e788(c->f0);
    }
    if (c->f6 != 0) {
        func_020d4994(slot->c8, 0, 8);
    } else {
        func_020d4a50(c->s.c8, slot->c8, 8);
    }
    func_ov013_0223a910(c->f4);
}
