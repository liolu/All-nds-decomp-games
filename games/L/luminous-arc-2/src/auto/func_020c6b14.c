#include "m2c.h"

M2C_UNK func_0205de80(s8);                          /* extern */
s32 func_020668a8(M2C_UNK);                         /* extern */
M2C_UNK func_020a2624();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cd7d0();                            /* extern */
extern M2C_UNK data_0216be68;

void func_020c6b14(void) {
    if (func_020668a8(0xF) == 0) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0xA4), s32 *, 0) != 0) {
        func_020cd7d0();
        M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0xA4), s32 *, 0) = 0;
    }
    if (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0xA4), s32 *, 0) != 0) {
        func_020cd7d0();
        M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0xA4), s32 *, 0) = 0;
    }
    func_0205de80(M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0xA4), s8 *, 0x24));
    func_020a2624();
    func_020caa3c(2, 1, 0x10);
    M2C_FIELD(&data_0216be68, u8 *, 0xAB) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAB) + 1);
}
