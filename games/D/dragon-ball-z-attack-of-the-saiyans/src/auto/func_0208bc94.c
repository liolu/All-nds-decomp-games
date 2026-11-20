#include "m2c.h"

extern u8 data_020ddfe4[];
void func_0208b9ac(u32 *);
u8 *func_0208ab04(u8 *, s32);
void func_0208bf3c(u8 *);
u32 *func_0208bf74(s32);
void func_0208be98(u8 *, u32 *);

u32 *func_0208bc94(u32 *p, s32 idx, s32 prio) {
    u8 *pl = data_020ddfe4 + idx * 0x24;
    u32 *r = (u32 *) *p;
    u8 *o;
    if (r != 0) {
        func_0208b9ac(p);
    }
    if (*(u16 *) (pl + 8) >= *(u32 *) (pl + 0x18)) {
        o = func_0208ab04(pl, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o[0x3d]) {
            return 0;
        }
        func_0208bf3c(o);
    }
    r = func_0208bf74(prio);
    if (r == 0) {
        return 0;
    }
    func_0208be98(pl, r);
    *r = (u32) p;
    *p = (u32) r;
    return r;
}
