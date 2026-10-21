#include "m2c.h"

M2C_UNK func_0206f074(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_02119440;
extern M2C_UNK data_02119458;
extern M2C_UNK data_0211946c;
extern M2C_UNK data_021194a0;
extern M2C_UNK data_021194e4;
extern M2C_UNK data_021194f4;
extern M2C_UNK data_02119508;

void *func_0206c998(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &data_021194e4;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02119508;
    M2C_FIELD(arg0, s32 *, 4)         = 0x73776420;
    M2C_FIELD(arg0, s32 *, 8)         = 0;
    M2C_FIELD(arg0, s32 *, 0xC)       = -0x40;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021194f4;
    func_0206f074(arg0 + 0x10, &data_021194a0);
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02119440;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_02119458;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &data_0211946c;
    return arg0;
}
