/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0202f98c(M2C_UNK, u16);                  /* extern */
extern M2C_UNK data_020ffb10;

u16 func_0207e1bc(s32 arg0, M2C_UNK arg1) {
    u16 temp_r4;

    temp_r4 = *((u16 *) ((s8 *) &data_020ffb10 + (arg0 * 2)));
    return (u16) ((temp_r4 + M2C_FIELD(func_0202f98c(arg1, temp_r4), u8 *, 0xA)) - 1);
}
