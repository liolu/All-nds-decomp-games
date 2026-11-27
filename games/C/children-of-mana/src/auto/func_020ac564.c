/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010b2c(M2C_UNK *, s32);              /* extern */
s32 func_0201e150(M2C_UNK);                         /* extern */
s32 func_020f1c18(M2C_UNK);                         /* extern */
extern s8 data_02127e88;
extern M2C_UNK data_02127ea0;

void func_020ac564(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE4);
    if ((temp_r0 != 2) && (temp_r0 != 3) && (temp_r0 != 5)) {
        return;
    }
    if (func_020f1c18(arg1) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (M2C_FIELD(arg0, s32 *, 0xEC) - 1);
    if (M2C_FIELD(arg0, s32 *, 0xEC) != 0) {
        return;
    }
    func_02010b2c(&data_02127ea0, func_0201e150(arg1));
    data_02127e88 = 1;
}
