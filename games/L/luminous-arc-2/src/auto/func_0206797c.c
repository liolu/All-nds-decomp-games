#include "m2c.h"

M2C_UNK func_02068970(M2C_UNK);                     /* extern */
M2C_UNK func_02069260(M2C_UNK);                     /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020d4e68(u8);                          /* extern */
M2C_UNK func_020d503c(u8);                          /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

s32 func_0206797c(void) {
    func_020d4e68(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
    func_020d503c(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
    func_02068970(2);
    func_02069260(1);
    func_020caa3c(3, 0, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) + 1);
    return 0;
}
