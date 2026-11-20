#include "m2c.h"

M2C_UNK func_020049b8(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_02084588(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020845c0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02087434(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
void *func_02090a40();                              /* extern */
extern M2C_UNK data_0211d698;
extern M2C_UNK data_0211d6ac;
extern M2C_UNK data_0211d6e0;
extern M2C_UNK data_0211d6e4;

s32 func_0208aaa0(void) {
    u8 sp20[12];
    u8 sp0[32];

    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) != 2) {
        return 0;
    }
    func_020049b8(sp20, 0xC, &data_0211d698, M2C_FIELD(func_02090a40(), u8 *, 0x16) + 1);
    func_02084588(&data_0211d6e0, sp20, sp0, 0x2F);
    func_020049b8(sp20, 0xC, &data_0211d698, M2C_FIELD(func_02090a40(), u8 *, 0xD) + 1);
    func_020845c0(&data_0211d6e4, sp20, sp0, 0x2F);
    func_020049b8(sp20, 0xC, &data_0211d698, 3);
    func_020845c0(&data_0211d6ac, sp20, sp0, 0x2F);
    return func_02087434(6, sp0, 0);
}
