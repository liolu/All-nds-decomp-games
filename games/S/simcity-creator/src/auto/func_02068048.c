#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_020cd5f8;
extern M2C_UNK data_020cd61c;
extern M2C_UNK data_020cd62c;
extern M2C_UNK data_020cd638;
extern M2C_UNK data_020cd648;
extern M2C_UNK data_020cd710;
extern M2C_UNK data_020dd898;

M2C_UNK *func_02068048(void *arg0, s32 arg1) {
    func_02014050(&data_020dd898, &data_020cd710, *((M2C_UNK *) ((s8 *) &data_020cd5f8 + (M2C_FIELD(arg0, u8 *, 0x34) * 4))),
                  *((M2C_UNK *) ((s8 *) &data_020cd62c + (M2C_FIELD(arg0, s32 *, 0x30) * 4))),
                  *((M2C_UNK *) ((s8 *) &data_020cd61c + (M2C_FIELD(arg0, u8 *, 0x35) * 4))), arg1,
                  *((M2C_UNK *) ((s8 *) &data_020cd648 + (M2C_FIELD(arg0, u8 *, 0x37) * 4))),
                  *((M2C_UNK *) ((s8 *) &data_020cd638 + (M2C_FIELD(arg0, u8 *, 0x36) * 4))));
    return &data_020dd898;
}
