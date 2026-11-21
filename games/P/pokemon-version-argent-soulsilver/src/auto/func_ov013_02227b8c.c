#include "m2c.h"
void func_ov013_02227d38(void);
s32 func_ov013_022401d0(s32, u8, s32);
void func_ov013_02240028(s32, s32, s32);
void func_ov013_0223ff38(s32, s32, s32, s32);
extern u8 data_ov013_02244f58[];
extern s32 *data_ov013_0224f4d0;
void func_ov013_02227b8c(s32 n, s32 a, s32 b, s32 c) {
    s32 i;
    u8 *t;
    func_ov013_02227d38();
    t = data_ov013_02244f58 + n * 2;
    for (i = 0; i < 2; i++, t++) {
        data_ov013_0224f4d0[i] = func_ov013_022401d0(0, *t, 1);
        func_ov013_02240028(data_ov013_0224f4d0[i], -1, 1);
    }
    func_ov013_0223ff38(data_ov013_0224f4d0[0], -1, a, c);
    func_ov013_0223ff38(data_ov013_0224f4d0[1], -1, b, c);
}
