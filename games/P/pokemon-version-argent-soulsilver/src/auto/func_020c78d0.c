#include "m2c.h"

M2C_UNK func_020d54d0();                            /* extern */
M2C_UNK func_020db960(M2C_UNK *);                   /* extern */
M2C_UNK func_020db978(M2C_UNK *);                   /* extern */
M2C_UNK func_020c7c74();                            /* extern */
M2C_UNK func_020c83e4();                            /* extern */
M2C_UNK func_020c908c();                            /* extern */
extern M2C_UNK data_021dd440;
extern M2C_UNK data_021dd450;
extern M2C_UNK data_021dd45c;
extern M2C_UNK func_020c7b34;
extern M2C_UNK func_020c7b6c;

void func_020c78d0(void) {
    if (M2C_FIELD(&data_021dd440, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_021dd440, s32 *, 0xC) = 1;
    func_020d54d0();
    M2C_FIELD(&data_021dd440, M2C_UNK **, 0x10) = &func_020c7b34;
    M2C_FIELD(&data_021dd440, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_021dd440, M2C_UNK **, 0x1C) = &func_020c7b6c;
    M2C_FIELD(&data_021dd440, s32 *, 0x20)      = 0;
    func_020db960(&data_021dd450);
    func_020db978(&data_021dd45c);
    func_020c7c74();
    func_020c908c();
    func_020c83e4();
    M2C_FIELD(&data_021dd440, s8 *, 0)  = -1;
    M2C_FIELD(&data_021dd440, s32 *, 4) = 1;
}
