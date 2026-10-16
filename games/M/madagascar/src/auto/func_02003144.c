/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002b60();                            /* extern */

void func_02003144(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    func_02002b60(arg0, arg1);
}
