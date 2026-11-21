#include "m2c.h"
typedef struct {
    s32 f0;
    u8 pad[0xAC];
    s32 fb0;
} O;
typedef struct {
    u8 buf[0x800];
    s32 n;
} L;
void func_ov000_022111f8(u8 *, s32, u8 *);
void func_ov000_021ff9a4(s32, u8 *, s32, s32, u8 *, s32);
s32 func_ov000_021ff388(void);

void func_ov000_02211dbc(O *o) {
    L l;
    l.n = 0;
    func_ov000_022111f8(l.buf, 8, (u8 *) o + 0x84);
    func_ov000_021ff9a4(o->f0, l.buf, l.n, 0, (u8 *) o + 0xCC, 8);
    o->fb0 = func_ov000_021ff388();
}
