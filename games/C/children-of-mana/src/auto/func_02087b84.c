/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();         /* extern */
M2C_UNK func_02012178();                /* extern */
s32 func_020121b4();                /* extern */
s32 func_0204fa68();               /* extern */
extern M2C_UNK data_02101b8c;
extern M2C_UNK data_02101ba8;

void func_02087b84(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101b8c, temp_r5, temp_r0);
    temp_r0_2 = func_0204fa68(temp_r5, temp_r0, 0);
    func_0200e8c8(&data_02101ba8, temp_r0_2);
    func_02012178(arg0, temp_r0_2);
}
