#include "m2c.h"

M2C_UNK func_020cddec(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0211bad0;
extern M2C_UNK data_0211baf8;
extern M2C_UNK data_0211bb28;
extern M2C_UNK data_0211bb58;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_020788b0(void) {
    func_020cddec(3, &data_0211bad0);
    func_020cddec(7, &data_0211baf8);
    if (M2C_FIELD(&data_0216be68, u8 *, 0x76) == 2) {
        func_020cddec(6, &data_0211bb28);
    } else {
        func_020cddec(6, &data_0211bb58);
    }
    M2C_FIELD(&data_0216ce68, u8 *, 0xBB1) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBB1) + 1);
}
