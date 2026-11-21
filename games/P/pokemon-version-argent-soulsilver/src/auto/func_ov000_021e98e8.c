#include "m2c.h"

extern s32 func_020d168c(char *, s32, char *, char *, char *);
extern void *func_020e5af8(void *, const void *, u32);
extern s32 func_020e9580(char *);
extern char *func_020e9ad0(s32, char *);
extern s32 func_ov000_021e9bfc(u8 *, s32 *, s32);
extern char data_ov000_022166e4[];
extern char data_ov000_022167bc[];

s32 func_ov000_021e98e8(u8 *arg0, char *arg1, char *arg2) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r9;
    s8 temp_r9_2;
    char *temp_r8;
    char *temp_r0;
    s32 *temp_r5;

    temp_r5   = (s32 *) (arg0 + 0x19F8);
    temp_r4   = func_020e9580(arg2);
    temp_r9   = func_020e9580(data_ov000_022167bc);
    temp_r4_2 = temp_r4 + ((temp_r9 - 4) + func_020e9580(arg1));
    temp_r1   = temp_r5[2] - temp_r5[1];
    if ((temp_r4_2 + 1 > temp_r1) && (func_ov000_021e9bfc(arg0, temp_r5, (temp_r4_2 - temp_r1) + 1) == 0)) {
        return 1;
    }
    temp_r0   = func_020e9ad0(temp_r5[0], data_ov000_022166e4);
    temp_r8   = temp_r0 + 2;
    temp_r9_2 = temp_r0[2];
    func_020e5af8(temp_r8 + temp_r4_2, temp_r8, func_020e9580(temp_r8) + 1);
    temp_r8[func_020d168c(temp_r8, temp_r4_2 + 1, data_ov000_022167bc, arg1, arg2)] = temp_r9_2;
    temp_r5[1]                                                                      = temp_r5[1] + temp_r4_2;
    return 0;
}
