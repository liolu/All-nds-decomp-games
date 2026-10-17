/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028cc8(void *, s32, s32, M2C_UNK *, s32); /* extern */
void *func_020290b8();                              /* extern */
extern M2C_UNK data_020bfa74;
extern M2C_UNK data_020bfa78;
extern M2C_UNK func_02026b14;
extern M2C_UNK func_02026b40;

void func_02026a60(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(func_020290b8(), s32 *, 8) != 3) {
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r4 == 0x27) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x30) == 0) {
        func_02028cc8(func_020290b8(), *((M2C_UNK *) ((s8 *) &data_020bfa78 + (temp_r4 * 8))),
                      *((M2C_UNK *) ((s8 *) &data_020bfa74 + (temp_r4 * 8))), &func_02026b40, 4);
        return;
    }
    func_02028cc8(func_020290b8(), *((M2C_UNK *) ((s8 *) &data_020bfa78 + (temp_r4 * 8))),
                  *((M2C_UNK *) ((s8 *) &data_020bfa74 + (temp_r4 * 8))), &func_02026b14, 0);
}
