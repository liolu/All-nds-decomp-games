#include "m2c.h"
typedef struct {
    u8 a;
    u8 b;
    u16 c;
    s32 d;
} Pk;
void func_ov000_021ff9a4(s32, s32, s32, s32, Pk *, s32);

void func_ov000_0220fbb0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    Pk p;
    p.d = a1;
    p.b = 2;
    p.c = ((a2 >> 8) & 0xFF) | ((a2 << 8) & 0xFF00);
    func_ov000_021ff9a4(a0, a3, a4, 0, &p, 8);
}
