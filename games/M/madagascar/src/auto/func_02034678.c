/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020343a8(void *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020892a8;
extern M2C_UNK data_020892b0;
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020c358c;

void *func_02034678(void *arg0) {
    s32 *var_r1;
    s32 *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c358c;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    var_r2                         = arg0 + 0x14;
    do {
        *var_r2 = 0;
        var_r2  = (s32 *) ((s8 *) var_r2 + 8);
    } while (var_r2 != (arg0 + 0x94));
    var_r1 = arg0 + 0xB8;
    do {
        *var_r1 = 0;
        var_r1  = (s32 *) ((s8 *) var_r1 + 8);
    } while (var_r1 != (arg0 + 0x138));
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C0)  = 0xC;
    M2C_FIELD(arg0, s8 *, 0x1C1)  = 0;
    func_020343a8(arg0, &data_020892b0, &data_020892a8);
    return arg0;
}
