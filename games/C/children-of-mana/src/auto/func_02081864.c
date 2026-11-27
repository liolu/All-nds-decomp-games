/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020ad824(s32, s32);                    /* extern */
extern M2C_UNK data_02100608;
extern M2C_UNK data_02100bfc;

void func_02081864(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100bfc, &data_02100608, temp_r0);
    func_020ad824(M2C_FIELD(arg0, s32 *, 0x300), temp_r0);
}
