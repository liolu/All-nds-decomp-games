/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a0240(void *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02105688;
extern M2C_UNK data_02105738;
extern M2C_UNK data_021057e8;

void func_020a0198(void *arg0, M2C_UNK arg1) {
    s32 temp_lr;

    temp_lr = M2C_FIELD(arg0, s32 *, 0x3C);
    func_020a0240(arg0, arg1, *((M2C_UNK *) ((s8 *) &data_02105738 + (temp_lr * 4))),
                  *((M2C_UNK *) ((s8 *) &data_02105688 + (temp_lr * 4))),
                  *((M2C_UNK *) ((s8 *) &data_021057e8 + (temp_lr * 4))));
    M2C_FIELD(arg0, s8 *, 0x7A) = 1;
}
