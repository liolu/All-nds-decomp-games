#include "m2c.h"

M2C_UNK func_020d4a50(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020a99dc(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0211071c;
extern M2C_UNK data_02110720;
extern M2C_UNK data_02110724;

void func_020a9a78(M2C_UNK arg0) {
    u8 sp20[16];
    u8 sp10[16];
    u8 sp0[16];

    func_020a99dc(sp0, &data_0211071c, arg0);
    func_020a99dc(sp10, &data_02110720, arg0);
    func_020a99dc(sp20, &data_02110724, arg0);
    func_020d4a50(sp0, arg0, 0x30);
}
