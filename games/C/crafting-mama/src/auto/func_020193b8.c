#include "m2c.h"

M2C_UNK func_02017584(s32, M2C_UNK);                /* extern */
M2C_UNK func_020193a0(s32);                         /* extern */
extern M2C_UNK data_0208396c;

void func_020193b8(s32 arg0) {
    func_02017584(*((M2C_UNK *) ((s8 *) &data_0208396c + (arg0 * 4))), 0);
    func_020193a0(arg0);
}
