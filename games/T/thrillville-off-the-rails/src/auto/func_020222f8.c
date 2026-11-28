/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022288(s32, M2C_UNK);                /* extern */
M2C_UNK func_02024624();                            /* extern */
extern M2C_UNK data_020ec380;

void func_020222f8(void) {
    func_02024624();
    func_02022288(M2C_FIELD(&data_020ec380, s32 *, 4), 0);
}
