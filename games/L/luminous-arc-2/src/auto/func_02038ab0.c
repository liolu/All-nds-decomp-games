/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_02038948();                                /* extern */
s32 func_0203896c();                                /* extern */
M2C_UNK func_020d63cc(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern M2C_UNK data_0216bc50;

void func_02038ab0(void) {
    do {

    } while (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xE0) == 0);
    do {

    } while (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xE4) != 1);
    M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xE4) = 0;
    if ((M2C_FIELD(&data_0216bc50, u8 *, 4) & 1) && (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), u8 *, 0x11E) == 0)) {
        func_020d63cc(M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xC0), func_02038948(), 0x100, 0);
    }
    if ((M2C_FIELD(&data_0216bc50, u8 *, 4) & 2) && (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), u8 *, 0x11F) == 0)) {
        func_020d63cc(M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xC4), func_0203896c(), 0x100, 0);
    }
    M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xE0) = 0;
}
