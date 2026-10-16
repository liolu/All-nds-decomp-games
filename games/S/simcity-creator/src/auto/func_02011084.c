#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020084d8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02010d6c();                            /* extern */
M2C_UNK func_0201103c(M2C_UNK);                     /* extern */
M2C_UNK func_02011138();                            /* extern */
M2C_UNK func_020113dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d41a0;
extern M2C_UNK data_020d4280;
extern M2C_UNK func_0201132c;
extern M2C_UNK func_02011358;
extern M2C_UNK func_020113c8;

void func_02011084(void) {
    if (M2C_FIELD(&data_020d41a0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_020d41a0, s32 *, 8) = 1;
    func_02010d6c();
    M2C_FIELD(&data_020d41a0, s32 *, 0xC) = 0;
    func_02008380();
    do {

    } while (func_020084d8(0xD, 1) == 0);
    func_0200848c(0xD, &func_0201132c);
    func_02011138();
    func_0200848c(0xD, NULL);
    func_0200848c(0xD, &func_02011358);
    M2C_FIELD(&data_020d41a0, s32 *, 0x18) = 0;
    func_020113dc(&data_020d4280);
    func_0200848c(0x11, &func_020113c8);
    func_0201103c(0);
}
