/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_0210082c;
extern M2C_UNK data_02101acc;

void func_020876bc(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r4 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101acc, &data_0210082c, temp_r4, temp_r0);
    if (temp_r0 == 0) {
        temp_r0_2                          = func_020aac90();
        M2C_FIELD(temp_r0_2, u16 *, 0x42E) = (u16) (M2C_FIELD(temp_r0_2, u16 *, 0x42E) & ~(1 << temp_r4));
        return;
    }
    temp_r0_3                          = func_020aac90();
    M2C_FIELD(temp_r0_3, u16 *, 0x42E) = (u16) (M2C_FIELD(temp_r0_3, u16 *, 0x42E) | (1 << temp_r4));
}
