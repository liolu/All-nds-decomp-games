#include "m2c.h"

M2C_UNK func_02074a50(void *, M2C_UNK);             /* extern */
M2C_UNK func_02074b18(void *, s32);                 /* extern */
M2C_UNK func_02074b90(void *, s32);                 /* extern */
M2C_UNK func_02074b98(void *, s32);                 /* extern */
M2C_UNK func_02074ba0(void *, s32);                 /* extern */

s32 func_020747a8(void *arg0) {
    func_02074a50(arg0, 6);
    func_02074a50(arg0, 5);
    func_02074a50(arg0, 4);
    func_02074a50(arg0, 3);
    func_02074b18(arg0, M2C_FIELD(arg0, s32 *, 0x34));
    func_02074b90(arg0, M2C_FIELD(arg0, s32 *, 0x34));
    func_02074b98(arg0, M2C_FIELD(arg0, s32 *, 0x34));
    func_02074ba0(arg0, M2C_FIELD(arg0, s32 *, 0x34));
    return 1;
}
