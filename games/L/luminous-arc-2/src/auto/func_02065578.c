#include "m2c.h"

M2C_UNK func_02066c08();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ccd04(M2C_UNK);                     /* extern */
M2C_UNK func_020cddec(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0210e514;
extern M2C_UNK data_0210e53c;
extern s16 data_02152c24;
extern M2C_UNK data_0216ce68;

void func_02065578(void) {
    func_02066c08();
    func_020ccd04(1);
    func_020cddec(3, &data_0210e514);
    func_020cddec(7, &data_0210e53c);
    data_02152c24 = 0;
    func_020caa3c(3, 0, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
