#include "m2c.h"

M2C_UNK func_02008cd4();                            /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02008e2c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02017b48();                            /* extern */
M2C_UNK func_02017e18(M2C_UNK);                     /* extern */
M2C_UNK func_02017f14();                            /* extern */
M2C_UNK func_020181b8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021508e0;
extern M2C_UNK data_021509c0;
extern M2C_UNK func_02018108;
extern M2C_UNK func_02018134;
extern M2C_UNK func_020181a4;

void func_02017e60(void) {
    if (M2C_FIELD(&data_021508e0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_021508e0, s32 *, 8) = 1;
    func_02017b48();
    M2C_FIELD(&data_021508e0, s32 *, 0xC) = 0;
    func_02008cd4();
    do {

    } while (func_02008e2c(0xD, 1) == 0);
    func_02008de0(0xD, &func_02018108);
    func_02017f14();
    func_02008de0(0xD, NULL);
    func_02008de0(0xD, &func_02018134);
    M2C_FIELD(&data_021508e0, s32 *, 0x18) = 0;
    func_020181b8(&data_021509c0);
    func_02008de0(0x11, &func_020181a4);
    func_02017e18(0);
}
