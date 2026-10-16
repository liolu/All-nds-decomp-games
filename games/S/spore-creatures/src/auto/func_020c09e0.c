#include "m2c.h"

M2C_UNK func_020b8d4c();                            /* extern */
M2C_UNK func_020b8e58(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020b8ea4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c06c8();                            /* extern */
M2C_UNK func_020c0998(M2C_UNK);                     /* extern */
M2C_UNK func_020c0a94();                            /* extern */
M2C_UNK func_020c0d38(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f4360;
extern M2C_UNK data_020f4440;
extern M2C_UNK func_020c0c88;
extern M2C_UNK func_020c0cb4;
extern M2C_UNK func_020c0d24;

void func_020c09e0(void) {
    if (M2C_FIELD(&data_020f4360, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_020f4360, s32 *, 8) = 1;
    func_020c06c8();
    M2C_FIELD(&data_020f4360, s32 *, 0xC) = 0;
    func_020b8d4c();
    do {

    } while (func_020b8ea4(0xD, 1) == 0);
    func_020b8e58(0xD, &func_020c0c88);
    func_020c0a94();
    func_020b8e58(0xD, NULL);
    func_020b8e58(0xD, &func_020c0cb4);
    M2C_FIELD(&data_020f4360, s32 *, 0x18) = 0;
    func_020c0d38(&data_020f4440);
    func_020b8e58(0x11, &func_020c0d24);
    func_020c0998(0);
}
