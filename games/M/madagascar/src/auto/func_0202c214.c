/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020035c0(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_0202c440(s32);                             /* extern */
s32 func_0202c4d4();                                /* extern */
s32 func_02075b54();                                /* extern */
extern M2C_UNK data_020d02c8;

void func_0202c214(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020035c0(0, arg0, func_02075b54());
    if (func_0202c4d4() != 0) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_020d02c8 + (func_0202c440(temp_r4) * 0xC))) = arg1;
}
