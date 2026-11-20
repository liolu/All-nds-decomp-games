#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
M2C_UNK func_0200b704(M2C_UNK *);                   /* extern */
M2C_UNK func_0200b724(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0200bbcc(M2C_UNK);                     /* extern */
s32 func_0200bbe4(M2C_UNK);                         /* extern */
extern M2C_UNK data_021635b0;
extern M2C_UNK data_021635c0;
extern M2C_UNK func_020b0fa0;

void func_020b125c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    func_0200b724(0, 4, &data_021635c0, 5);
    func_0200bbcc(2);
    if (func_0200bbe4(2) != 0) {
        func_02006964();
    }
    M2C_FIELD(&data_021635b0, s32 *, 4)   = 0;
    M2C_FIELD(&data_021635b0, s16 *, 0xC) = 0;
    M2C_FIELD(&data_021635b0, s16 *, 0xE) = 3;
    func_0200b704(&func_020b0fa0);
}
