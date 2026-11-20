#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK *func_020726b8(M2C_UNK, s32);               /* extern */
extern M2C_UNK data_020ccdc4;
extern M2C_UNK data_020dd84c;

s32 func_02063784(M2C_UNK arg0, void *arg1) {
    func_02014050(&data_020dd84c, &data_020ccdc4, func_020726b8(arg0, 0x3EA));
    func_02014050(arg1 + 6, M2C_FIELD(M2C_FIELD(arg1, void **, 0x108), M2C_UNK **, 0x8C), &data_020dd84c);
    return 0;
}
