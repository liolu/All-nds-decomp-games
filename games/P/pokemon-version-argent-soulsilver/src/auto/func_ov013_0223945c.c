#include "m2c.h"

typedef struct S24 {
    s32 h;
    u8 pad4[8];
    s32 fC;
    u8 pad10[9];
    u8 b19;
    u8 b1A;
    u8 b1B;
} S24;

s32 func_ov013_02240028(s32, s32, s32);
s32 func_ov013_0223ff38(s32, s32, s32, s32);
s32 func_ov013_022401d0(s32, u8, s32);
void func_ov013_02240e70(s32, s32, void *);
S24 *func_ov013_022412ac(s32, s32);
s32 func_ov013_02242548(s32, void *, s32, s32);
extern u8 data_ov013_022457b0[];
extern S24 *data_ov013_0224f5bc;
extern u8 func_ov013_022395d4;

void func_ov013_0223945c(u8 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    data_ov013_0224f5bc      = func_ov013_022412ac(0x20, 4);
    data_ov013_0224f5bc->b1B = arg0;
    data_ov013_0224f5bc->b19 = arg1;
    data_ov013_0224f5bc->b1A = arg4;
    func_ov013_02240e70(arg2, arg3, (u8 *) data_ov013_0224f5bc + 0x10);
    data_ov013_0224f5bc->h = func_ov013_022401d0(0, data_ov013_022457b0[arg0], 1);
    func_ov013_0223ff38(data_ov013_0224f5bc->h, -1, arg2, arg3 + arg4);
    func_ov013_02240028(data_ov013_0224f5bc->h, -1, 1);
    data_ov013_0224f5bc->fC = func_ov013_02242548(0, &func_ov013_022395d4, 0, 0x80);
}
