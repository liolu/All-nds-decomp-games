#include "m2c.h"

void *func_02060e9c();                              /* extern */
s32 func_0207d494(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_0207d5e4(s32);                         /* extern */
extern M2C_UNK data_020c80b0;
extern M2C_UNK data_020c812c;
extern M2C_UNK data_020c81a8;

void func_020604a4(void) {
    void *temp_r4;

    func_0207d5e4(func_02060e9c() + 0x18);
    temp_r4                         = func_02060e9c();
    M2C_FIELD(temp_r4, s32 *, 0x18) = func_0207d494(&data_020c81a8, &data_020c812c, &data_020c80b0, 0, 0x13);
}
