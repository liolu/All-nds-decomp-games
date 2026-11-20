#include "m2c.h"

M2C_UNK func_0203b29c();                            /* extern */
M2C_UNK func_0203b3a8(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0203b3f4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02041bec();                            /* extern */
M2C_UNK func_02041ebc(M2C_UNK);                     /* extern */
M2C_UNK func_02041fb8();                            /* extern */
M2C_UNK func_0204225c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021604b0;
extern M2C_UNK data_021605a0;
extern M2C_UNK func_020421ac;
extern M2C_UNK func_020421d8;
extern M2C_UNK func_02042248;

void func_02041f04(void) {
    if (M2C_FIELD(&data_021604b0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_021604b0, s32 *, 8) = 1;
    func_02041bec();
    M2C_FIELD(&data_021604b0, s32 *, 0xC) = 0;
    func_0203b29c();
    do {

    } while (func_0203b3f4(0xD, 1) == 0);
    func_0203b3a8(0xD, &func_020421ac);
    func_02041fb8();
    func_0203b3a8(0xD, NULL);
    func_0203b3a8(0xD, &func_020421d8);
    M2C_FIELD(&data_021604b0, s32 *, 0x18) = 0;
    func_0204225c(&data_021605a0);
    func_0203b3a8(0x11, &func_02042248);
    func_02041ebc(0);
}
