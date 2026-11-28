/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_ov014_02136e70(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_02004330(s32, M2C_UNK *, s32);         /* extern */
s32 func_02004508(s32);                             /* extern */
extern M2C_UNK data_ov014_0214765c;

void func_ov014_02136e04(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;

    func_ov014_02136e70(arg0, arg2, arg3);
    func_02004330(arg2, &data_ov014_0214765c, (arg3 - func_02004508(arg2)) - 1);
    temp_r4 = func_02004508(arg2);
    func_ov014_02136e70(arg1, arg2 + temp_r4, 4 - func_02004508(arg2));
}
