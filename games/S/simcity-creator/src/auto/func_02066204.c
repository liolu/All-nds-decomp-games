#include "m2c.h"

s32 func_020621d8(s32, M2C_UNK *, M2C_UNK *);       /* extern */
M2C_UNK func_02062288(s32, s32);                    /* extern */
M2C_UNK func_020622a4(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020622fc(s32, s32, M2C_UNK);           /* extern */
s32 func_0206235c(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_0206bbe8(s32);                         /* extern */
s32 func_0206bbf0(s32);                             /* extern */
extern M2C_UNK data_020cd2d4;
extern M2C_UNK data_020cd2d8;

s32 func_02066204(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_0206bbe8(M2C_FIELD(arg0, s32 *, 4));
    temp_r0   = func_0206bbf0(M2C_FIELD(arg0, s32 *, 4));
    temp_r0_2 = func_020621d8(temp_r0, &data_020cd2d4, &data_020cd2d8);
    func_020622fc(temp_r0, func_0206235c(temp_r0, temp_r0_2, 1), 0x200);
    func_020622fc(temp_r0, func_0206235c(temp_r0, temp_r0_2, 3), 0x6200);
    func_020622a4(temp_r0, func_0206235c(temp_r0, temp_r0_2, 0), 0x18000);
    func_020622a4(temp_r0, func_0206235c(temp_r0, temp_r0_2, 2), 0x10000);
    func_02062288(temp_r0, temp_r0_2);
    return 1;
}
