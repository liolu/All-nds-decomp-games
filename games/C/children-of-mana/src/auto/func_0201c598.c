/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010dd8();                         /* extern */

void func_0201c598(void *arg0) {
    func_02010dd8(arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
}
