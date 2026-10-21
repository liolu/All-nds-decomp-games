#include "m2c.h"

M2C_UNK func_0202c1bc(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205737c();                            /* extern */
M2C_UNK func_020573ac();                            /* extern */
extern M2C_UNK data_020c7ee4;
extern s32 data_020c7f48;

void func_0205f9f8(void) {
    func_020573ac();
    if (data_020c7f48 == 0) {
        return;
    }
    func_0205737c();
    func_0202c1bc(&data_020c7ee4, 0, 0x50);
}
