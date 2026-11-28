/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 func_ov123_02072cc4[];
typedef struct {
    u8 pad[0x68];
    void *f68;
    u8 pad3[4];
    volatile s16 f70;
    u8 pad2;
    s8 f73;
} S;

s32 func_ov123_02073378(s32);
s32 func_ov123_020733a8(s32);
s32 func_ov123_02070df8(void *, s32);
void *func_ov123_02070e98(s32, void *, s8);
void func_ov123_02070ddc(void *, void *);

s32 func_ov123_02072d6c(S *p) {
    s32 r1;
    void *q;

    if ((s32) p <= 0) {
        return -28;
    }
    if (func_ov123_02073378((s32) p) != 0) {
        return -26;
    }
    if (func_ov123_020733a8((s32) p) != 0) {
        return 0;
    }
    r1 = 0;
    if (p != 0) {
        r1 = (p->f70 & 1) ? 1 : 0;
    }
    if (r1 == 0) {
        return -39;
    }
    if (p->f70 & 0x10) {
        return -26;
    }
    p->f70 = p->f70 | 0x18;
    r1     = 1;
    if (p->f73 != 0) {
        if (p->f73 != 4) {
            r1 = 0;
        }
    }
    if (r1 != 0) {
        func_ov123_02070df8(p->f68, 0);
    }
    q                       = func_ov123_02070e98((s32) func_ov123_02072cc4, p, 1);
    *(s32 *) ((u8 *) q + 8) = 0;
    func_ov123_02070ddc(p, q);
    return 0;
}
