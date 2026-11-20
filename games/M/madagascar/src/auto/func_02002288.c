/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207b00c(s32);                             /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcd00;

void *func_02002288(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd00;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 4)      = func_0207b00c(arg1 * 4);
    return arg0;
}
