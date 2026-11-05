#include "m2c.h"

extern u8 data_021dfde4[];
void func_020c81d0(u32 *);
u8 *func_020b4d14(u8 *, s32);
void func_020c88a4(u8 *);
u32 *func_020c88dc(s32);
void func_020c8800(u8 *, u32 *);

u32 *func_020c85fc(u32 *p, s32 idx, s32 prio) {
    u8 *pl = data_021dfde4 + idx * 0x24;
    u32 *r = (u32 *) *p;
    u8 *o;
    if (r != 0) {
        func_020c81d0(p);
    }
    if (*(u16 *) (pl + 8) >= *(u32 *) (pl + 0x18)) {
        o = func_020b4d14(pl, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o[0x3d]) {
            return 0;
        }
        func_020c88a4(o);
    }
    r = func_020c88dc(prio);
    if (r == 0) {
        return 0;
    }
    func_020c8800(pl, r);
    *r = (u32) p;
    *p = (u32) r;
    return r;
}
