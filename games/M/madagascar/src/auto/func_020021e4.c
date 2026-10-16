/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207b000(s32);                         /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcd00;

void *func_020021e4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd00;
    func_0207b000(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
