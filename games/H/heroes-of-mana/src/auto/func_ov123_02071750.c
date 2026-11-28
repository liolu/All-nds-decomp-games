/* compiler: 1.2/sp2p3 */
/* near start: 11 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

s32 func_ov123_02070d58(void *, void *);
void *func_ov123_02070e98(s32, void *, s8);
extern u8 func_ov123_020716c4[];

typedef struct {
    u8 pad0[0x70];
    s16 f70;
    s8 f72;
    u8 pad1;
    u16 f74;
    u16 f76;
    u32 f78;
} Ob;

s32 func_ov123_02071750(Ob *o) {
    u8 *r;

    r = func_ov123_02070e98((s32) func_ov123_020716c4, o, o->f72);
    if (r == NULL) {
        return -0x21;
    }
    *(u16 *) (r + 0x10) = o->f74;
    *(u16 *) (r + 0x12) = o->f76;
    *(u32 *) (r + 0x14) = o->f78;
    o->f70 |= 2;
    return func_ov123_02070d58(o, r);
}
