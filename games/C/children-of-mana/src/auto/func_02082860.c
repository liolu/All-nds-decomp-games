/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
s32 func_0203d13c();                                /* extern */
M2C_UNK func_0203d14c(M2C_UNK);                     /* extern */
M2C_UNK func_020ad850(s32, s32);                    /* extern */
M2C_UNK func_020ae518(s32);                         /* extern */
M2C_UNK func_020ae7e4(s32);                         /* extern */
extern M2C_UNK data_021005d8;
extern M2C_UNK data_02100e88;

void func_02082860(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100e88, &data_021005d8, temp_r0);
    M2C_FIELD(arg0, s32 *, 0x344) = func_0203d13c();
    if (M2C_FIELD(arg0, s32 *, 0x344) != 0) {
        func_020ae7e4(M2C_FIELD(arg0, s32 *, 0x300));
        func_0203d14c(0);
        func_020ae518(M2C_FIELD(arg0, s32 *, 0x300));
    }
    func_020ad850(M2C_FIELD(arg0, s32 *, 0x300), temp_r0);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x15;
}
