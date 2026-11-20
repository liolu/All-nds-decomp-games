/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0206a250[];
void func_02041d28(u32 *);
u8 *func_02040e14(u8 *, s32);
void func_0204176c(u8 *);
u32 *func_020416f0(s32);
void func_02041808(u8 *, u32 *);

u32 *func_0204199c(u32 *p, s32 idx, s32 prio) {
    u8 *pl = data_0206a250 + idx * 0x1C;
    u32 *r = (u32 *) *p;
    u8 *o;
    if (r != 0) {
        func_02041d28(p);
    }
    if (*(u16 *) (pl + 8) >= *(u32 *) (pl + 0x18)) {
        o = func_02040e14(pl, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o[0x3d]) {
            return 0;
        }
        func_0204176c(o);
    }
    r = func_020416f0(prio);
    if (r == 0) {
        return 0;
    }
    func_02041808(pl, r);
    *r = (u32) p;
    *p = (u32) r;
    return r;
}
