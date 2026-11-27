/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020cdff8(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02100d04;

void func_02081e94(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;

    temp_r9 = func_020121b4(arg0, 0);
    temp_r8 = func_020121b4(arg0, 1);
    temp_r7 = func_020121b4(arg0, 2);
    temp_r6 = func_020121b4(arg0, 3);
    temp_r5 = func_020121b4(arg0, 4);
    temp_r4 = func_020121b4(arg0, 5);
    temp_r0 = func_020121b4(arg0, 6);
    func_0200e8c8(&data_02100d04, temp_r9, temp_r8, temp_r7, temp_r6, temp_r5, temp_r4, temp_r0);
    func_020cdff8(temp_r9, temp_r8, temp_r7 << 0xC, temp_r6 << 0xC, temp_r5 << 0xC, temp_r4, temp_r0,
                  M2C_FIELD(arg0, s32 *, 0x2FC));
}
