#include "m2c.h"

typedef struct B {
    u8 pad[0x14];
    u8 f14;
    u8 pad2[7];
    s32 f1c;
} B;
typedef struct A A;
struct A {
    u8 pad[0x44];
    void (*fn)(A *, s32, B *, s32);
    s32 arg;
};
extern u8 data_ov000_0221a4ec[];
s32 func_020e9ad0(s32, void *);
void func_ov000_02212fe4(B *, s32);
s32 func_ov000_021ff388(void);
void func_ov000_022123a4(void *, B *);

void func_ov000_02212844(A *a, B *b, s32 c) {
    s32 on;
    if (func_020e9ad0(c, data_ov000_0221a4ec) != 0) {
        on = 1;
    } else {
        on = 0;
    }
    func_ov000_02212fe4(b, c);
    if (on == 0) {
        return;
    }
    if (b->f14 & 4) {
        b->f14 |= 0x41;
    } else {
        b->f14 |= 0x42;
    }
    b->f14 &= 0xF3;
    b->f1c = func_ov000_021ff388() - b->f1c;
    func_ov000_022123a4((u8 *) a + 8, b);
    a->fn(a, 0, b, a->arg);
}
