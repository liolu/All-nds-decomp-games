#include "m2c.h"

M2C_UNK func_02083b04(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02088660();                            /* extern */
M2C_UNK func_0208efa0();                            /* extern */
void *func_02090a40();                              /* extern */
M2C_UNK func_02090a50(M2C_UNK);                     /* extern */
M2C_UNK func_020a7370(s32);                         /* extern */
extern M2C_UNK data_021704fc;

void func_0208b044(void) {
    if (func_02090a40() == NULL) {
        return;
    }
    if (M2C_FIELD(func_02090a40(), s32 *, 0xE4) != 0) {
        if (M2C_FIELD(&data_021704fc, s32 *, 0x18) != 0) {
            M2C_FIELD(&data_021704fc, s32 *, 0x14) = 1;
        } else {
            func_020a7370(M2C_FIELD(func_02090a40(), s32 *, 0xE4));
            M2C_FIELD(func_02090a40(), s32 *, 0xE4) = 0;
        }
    }
    func_02088660();
    func_02090a50(0);
    if (M2C_FIELD(&data_021704fc, s32 *, 8) != 0) {
        func_02083b04(4, M2C_FIELD(&data_021704fc, s32 *, 8), 0);
        M2C_FIELD(&data_021704fc, s32 *, 8) = 0;
    }
    func_0208efa0();
    M2C_FIELD(func_02090a40(), s8 *, 0x18) = 1;
}
