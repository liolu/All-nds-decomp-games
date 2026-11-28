/* compiler: 1.2/sp3 -flag no-opt_propagation */
/* near start: 11 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    s32 a0, a4, a8, ac, a10, a14;
} S;
typedef struct {
    u8 pad[0x10];
    s32 v10;
    u8 pad2[0x24];
    s32 v38;
} T;

void func_02020d04(void *, void *, s32, s32);
s32 func_02024c28(s32);
void func_ov123_0207a140(s32, S *);
s32 func_ov123_0207ac60(s32);
s32 func_ov123_0207e0f0(s32, S *, s32);
s32 func_ov123_0207e128(s32, S *, void *);
s32 func_ov123_0207e158(s32, S *, s32, s32);
s32 func_ov123_0207e260(s32, S *, s32);
extern u8 data_ov123_020dab68[];
extern u8 data_ov123_020dab78[];
extern u8 data_ov123_020dabb8[];
extern u8 data_ov123_020dabc8[];
extern u8 data_ov123_020dabcc[];
extern u8 data_ov123_020dabd4[];

s32 func_ov123_02082478(s32 arg0, T *arg1, s32 arg2, s32 arg3) {
    S sp;
    S *p;
    s32 r4;
    s32 r;

    if (arg1 == NULL) {
        func_02020d04(data_ov123_020dab68, data_ov123_020dab78, 0, 0x340);
    }
    if (arg3 == 0) {
        func_02020d04(data_ov123_020dabb8, data_ov123_020dab78, 0, 0x341);
    }
    r4     = func_02024c28(arg3);
    p      = &sp;
    p->a0  = 0;
    p->a4  = 0;
    p->a8  = 0;
    p->ac  = 0;
    p->a10 = 0;
    p->a14 = 0;
    sp.a10 = arg2;
    r      = func_ov123_0207e128(arg0, &sp, data_ov123_020dabc8);
    if (r != 0) {
        return r;
    }
    r = func_ov123_0207e0f0(arg0, &sp, arg2);
    if (r != 0) {
        return r;
    }
    r = func_ov123_0207e128(arg0, &sp, data_ov123_020dabcc);
    if (r != 0) {
        return r;
    }
    r = func_ov123_0207e0f0(arg0, &sp, r4);
    if (r != 0) {
        return r;
    }
    r = func_ov123_0207e128(arg0, &sp, data_ov123_020dabd4);
    if (r != 0) {
        return r;
    }
    sp.a14 = sp.a8;
    r      = func_ov123_0207e158(arg0, &sp, arg3, r4);
    if (r != 0) {
        return r;
    }
    r = func_ov123_0207e260(arg0, &sp, 0);
    if (r != 0) {
        return r;
    }
    func_ov123_0207a140(arg1->v38, &sp);
    arg1->v10 = func_ov123_0207ac60(0) + 0x12C;
    return 0;
}
