/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bdd44(M2C_UNK);                         /* extern */
extern M2C_UNK func_020bf934;
extern M2C_UNK func_020bf938;
extern M2C_UNK func_020bf958;
extern M2C_UNK func_020bf95c;
extern M2C_UNK func_020bf98c;
extern M2C_UNK func_020bf99c;
extern M2C_UNK func_020bf9d8;
extern M2C_UNK func_020bf9e8;

void func_020bfa68(void *arg0, M2C_UNK arg1) {
    if (func_020bdd44(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x15C) = &func_020bf9e8;
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_020bf9d8;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020bf99c;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020bf98c;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x15C) = &func_020bf95c;
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_020bf958;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020bf938;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020bf934;
}
