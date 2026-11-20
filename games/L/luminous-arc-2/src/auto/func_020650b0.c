#include "m2c.h"

M2C_UNK func_02024184();                            /* extern */
s8 func_0205cb3c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0205de80(s8);                          /* extern */
M2C_UNK func_0205dfd8(s32, s8);                     /* extern */
extern M2C_UNK data_0216be68;

void func_020650b0(void) {
    func_0205de80(M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x98), s8 *, 0x18));
    func_02024184();
    M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x98), s8 *, 0x18) =
        func_0205cb3c(0x22, 0x28, 0x11, 6, 2, 2, 2, 0, 1, 0, 0, 0);
    func_0205dfd8(M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x98), s32 *, 4) +
                      (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x98), u16 *, 0xC) << 9),
                  M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x98), s8 *, 0x18));
}
