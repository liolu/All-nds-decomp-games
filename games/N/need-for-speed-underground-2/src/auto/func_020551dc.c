/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02179e44[];
void func_02055340(u32 *);
u8 *func_02054554(u8 *, s32);
void func_02055000(u8 *);
u32 *func_02054f84(s32);
void func_0205509c(u8 *, u32 *);

u32 *func_020551dc(u32 *p, s32 idx, s32 prio) {
    u8 *pl = data_02179e44 + idx * 0x1C;
    u32 *r = (u32 *) *p;
    u8 *o;
    if (r != 0) {
        func_02055340(p);
    }
    if (*(u16 *) (pl + 8) >= *(u32 *) (pl + 0x18)) {
        o = func_02054554(pl, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o[0x3d]) {
            return 0;
        }
        func_02055000(o);
    }
    r = func_02054f84(prio);
    if (r == 0) {
        return 0;
    }
    func_0205509c(pl, r);
    *r = (u32) p;
    *p = (u32) r;
    return r;
}
