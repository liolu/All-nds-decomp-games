#include "m2c.h"

M2C_UNK func_02001f60(s32);                         /* extern */
M2C_UNK func_0200b784(s32);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_0209d4c8(s32);                         /* extern */

s32 *func_0200b974(s32 *arg0) {
    s32 temp_r4;

    func_0200b784(*arg0);
    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_02001f60(temp_r4 + 0xB4);
        func_02001f60(temp_r4 + 0xA8);
        func_0209d4c8(temp_r4 + 0x24);
        func_020934a8(temp_r4);
    }
    return arg0;
}
