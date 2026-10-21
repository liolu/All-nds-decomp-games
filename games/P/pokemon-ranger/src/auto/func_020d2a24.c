/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c9fb8();                            /* extern */
s32 func_020ca19c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020ca1c4(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020d275c();                            /* extern */
M2C_UNK func_020d2858();                            /* extern */
extern s32 data_020f9d68;
extern s32 data_020f9d6c;
extern M2C_UNK func_020d27bc;
extern M2C_UNK func_020d281c;

void func_020d2a24(void) {
    if (data_020f9d68 != 0) {
        return;
    }
    data_020f9d68 = 1;
    func_020d275c();
    func_020c9fb8();
    do {

    } while (func_020ca19c(0xD, 1) == 0);
    func_020ca1c4(0xD, &func_020d281c);
    func_020d2858();
    func_020ca1c4(0xD, NULL);
    func_020ca1c4(0xD, &func_020d27bc);
    data_020f9d6c = 0;
}
