#include "m2c.h"

M2C_UNK func_0202f274(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0202f424(M2C_UNK *);                   /* extern */
s32 func_020742ec(M2C_UNK);                         /* extern */
s32 func_020953f4();                                /* extern */
M2C_UNK func_020958a0(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_020e6911;
extern s32 data_020fc4a8;

void func_020c0fc8(void) {
    M2C_UNK sp10;
    s32 var_r0;

    func_0202f274(&sp10, &data_020e6911);
    if (data_020fc4a8 == 0) {
        var_r0 = func_020742ec(0x32C);
        if (var_r0 != 0) {
            var_r0 = func_020953f4();
        }
        data_020fc4a8 = var_r0;
    }
    func_020958a0(data_020fc4a8, &sp10, 0, 0, 0, 0, 0x3E8000, 0x1000);
    func_0202f424(&sp10);
}
