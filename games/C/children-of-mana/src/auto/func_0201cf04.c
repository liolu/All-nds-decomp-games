/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb208;
extern M2C_UNK data_020fb20c;

void func_0201cf04(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) * ((M2C_UNK *) ((s8 *) &data_020fb208 + (arg0 * 8)));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (0 - *((M2C_UNK *) ((s8 *) &data_020fb20c + (arg0 * 8))));
    M2C_FIELD(arg1, s32 *, 8) = 0;
}
