#include "m2c.h"

M2C_UNK func_0205de80(s8);                          /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cd7d0();                            /* extern */
extern M2C_UNK data_0216be68;

void func_020618e4(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 4) != 0) {
        func_020cd7d0();
        M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 4) = 0;
    }
    if (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 4) != 0) {
        func_020cd7d0();
        M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 4) = 0;
    }
    func_020caa3c(2, 1, 0x10);
    func_0205de80(M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s8 *, 8));
    M2C_FIELD(&data_0216be68, u8 *, 0xAC) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAC) + 1);
}
