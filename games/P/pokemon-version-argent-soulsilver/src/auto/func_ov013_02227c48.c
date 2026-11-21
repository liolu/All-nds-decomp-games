#include "m2c.h"

extern void func_ov013_02227d38(void);
extern void func_ov013_02240028(s32, s32, s32);
extern void func_ov013_0223ff38(s32, s32, s32, s32);
extern s32 func_ov013_022401d0(s32, s32, s32);
extern s32 *data_ov013_0224f4d0;

void func_ov013_02227c48(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 j;
    s32 i;

    j = 6;
    func_ov013_02227d38();
    i = 0;
    do {
        data_ov013_0224f4d0[i] = func_ov013_022401d0(0, j, 1);
        func_ov013_02240028(data_ov013_0224f4d0[i], -1, 1);
        i += 1;
        j += 1;
    } while (i < 4);
    func_ov013_0223ff38(data_ov013_0224f4d0[0], -1, arg0, arg2);
    func_ov013_0223ff38(data_ov013_0224f4d0[1], -1, arg1, arg2);
    func_ov013_0223ff38(data_ov013_0224f4d0[2], -1, arg0, arg3);
    func_ov013_0223ff38(data_ov013_0224f4d0[3], -1, arg1, arg3);
}
