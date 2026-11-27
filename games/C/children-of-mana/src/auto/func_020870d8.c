/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
s32 func_0201218c(void *, M2C_UNK);                 /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020b060c(s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_021005b0;
extern M2C_UNK data_0210197c;

void func_020870d8(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020121b4(arg0, 0);
    temp_r5 = func_0201218c(arg0, 1);
    temp_r0 = func_020121b4(arg0, 2);
    func_0200e8c8(&data_0210197c, &data_021005b0, temp_r6, temp_r5, temp_r0);
    func_020b060c(M2C_FIELD(arg0, s32 *, 0x300), temp_r6, temp_r5, temp_r0, M2C_FIELD(arg0, s32 *, 0x2F8),
                  M2C_FIELD(arg0, s32 *, 0x33C));
}
