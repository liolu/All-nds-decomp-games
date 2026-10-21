#include "m2c.h"

M2C_UNK func_02049c58(s32);                         /* extern */
M2C_UNK func_0204a3d4();                            /* extern */
M2C_UNK func_0204a3fc();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, s16, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020c4504();                            /* extern */
M2C_UNK func_020c89f0(M2C_UNK, M2C_UNK, M2C_UNK, u8); /* extern */
s32 func_020c9048(u8);                              /* extern */
extern M2C_UNK data_0213338e;
extern u8 data_02158048;
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_0217aa4c;
extern M2C_UNK data_0218005c;

void func_0203a398(void) {
    func_02049c58((M2C_FIELD(&data_0217aa4c, u8 *, 0xB3E) * 0xC0) + (s32) &data_0218005c);
    if (func_020c9048(M2C_FIELD(&data_0217aa4c, u8 *, 0xB3E)) != 0) {
        func_0204a3d4();
        func_020c4504();
        func_020c89f0(2, 0x7F0, 0xA, M2C_FIELD(&data_02175a4c, u8 *, 0x18B));
        func_0204a3fc();
        func_0206c4b4(1, M2C_FIELD(&data_0213338e, s16 *, 0x98), 0x7F, 0x7F, 0, 0x100);
    }
    data_02158048 += 1;
}
