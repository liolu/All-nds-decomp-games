/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();         /* extern */
u32 func_0200f040();                  /* extern */
M2C_UNK func_02012178();                /* extern */
s32 func_020121b4();                /* extern */
extern M2C_UNK data_02101bb4;
extern M2C_UNK data_02101bcc;
extern M2C_UNK data_02101bdc;

void func_02087bf4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101bb4, temp_r6, temp_r0);
    temp_r5 = temp_r6 + ((u32) (((temp_r0 + 1) - temp_r6) * (func_0200f040(&data_02101bcc, 0x4AC) >> 0x10)) >> 0x10);
    func_0200e8c8(&data_02101bdc, temp_r5);
    func_02012178(arg0, temp_r5);
}
