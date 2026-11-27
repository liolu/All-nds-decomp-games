/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_02012178(M2C_UNK, u8);                 /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_02100818;
extern M2C_UNK data_02101ae0;

void func_02087754(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02101ae0, &data_02100818, temp_r0);
    func_02012178(arg0, (u8) (((s32) M2C_FIELD(func_020aac90(), u16 *, 0x42E) >> temp_r0) & 1));
}
