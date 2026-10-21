#include "m2c.h"

M2C_UNK func_020074fc(M2C_UNK, M2C_UNK *, s32);     /* extern */
M2C_UNK func_0206b87c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bc68;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_02183e24;

void func_0205f418(void) {
    func_020074fc(0, &data_02175a4c, 0xF660);
    func_020074fc(0, &data_0216bc68, 0x18);
    func_020074fc(0, &data_0216be68, 0x1BB8);
    func_020074fc(0, &data_02183e24, 4);
    func_0206b87c(0xB4, 0);
    func_0206b87c(0xB5, 1);
    func_0206c4b4(0, 0x16, 0, 0, 0, 0);
    func_0206c4b4(3, 0x16, 0, 0, 0, 0);
    M2C_FIELD(&data_02158048, u8 *, 2) = (u8) (M2C_FIELD(&data_02158048, u8 *, 2) + 1);
}
