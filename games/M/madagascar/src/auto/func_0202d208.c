/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202cb08(M2C_UNK);                         /* extern */
s32 func_020526b8(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_020d08bc;
extern s32 data_020d08c0;

void func_0202d208(void) {
    s32 temp_r0;

    temp_r0       = func_0202cb08(0x40000);
    data_020d08c0 = temp_r0;
    data_020d08bc = func_020526b8(temp_r0, 0x40000, 0);
}
