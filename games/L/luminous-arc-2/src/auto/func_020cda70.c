#include "m2c.h"

M2C_UNK func_02001d44(M2C_UNK);                     /* extern */
M2C_UNK func_020024c8(M2C_UNK);                     /* extern */
M2C_UNK func_02002624();                            /* extern */
M2C_UNK func_020026e4();                            /* extern */
M2C_UNK func_02007558(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_02175764;
extern M2C_UNK data_02175794;

void func_020cda70(void) {
    if (M2C_FIELD(&data_02175764, u8 *, 0x2B) & 1) {
        func_02002624();
        func_02007558(
            &data_02175794,
            (M2C_FIELD(&data_02175764, u8 *, 0x2C) << 0xD) + 0x06890000 + (M2C_FIELD(&data_02175764, u8 *, 0x2E) << 9), 0x200);
        func_02001d44(0x60);
    }
    if (!(M2C_FIELD(&data_02175764, u8 *, 0x2B) & 2)) {
        return;
    }
    func_020026e4();
    func_02007558(&data_02175794,
                  (M2C_FIELD(&data_02175764, u8 *, 0x2D) << 0xD) + 0x06898000 + (M2C_FIELD(&data_02175764, u8 *, 0x2F) << 9),
                  0x200);
    func_020024c8(0x80);
}
