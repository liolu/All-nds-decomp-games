/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02076d28(M2C_UNK);                         /* extern */
extern M2C_UNK func_020787a4;
extern M2C_UNK func_020787a8;
extern M2C_UNK func_020787c8;
extern M2C_UNK func_020787cc;
extern M2C_UNK func_020787fc;
extern M2C_UNK func_0207880c;
extern M2C_UNK func_02078848;
extern M2C_UNK func_02078858;

void func_020788d8(void *arg0, M2C_UNK arg1) {
    if (func_02076d28(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_02078858;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02078848;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0207880c;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020787fc;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_020787cc;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020787c8;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020787a8;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020787a4;
}
