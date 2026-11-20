#include "m2c.h"

M2C_UNK func_02074ba8();                         /* extern */

void *func_02074670(void *arg0) {
    func_02074ba8();
    func_02074ba8(arg0 + 0xC);
    func_02074ba8(arg0 + 0x18);
    func_02074ba8(arg0 + 0x24);
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
    return arg0;
}
