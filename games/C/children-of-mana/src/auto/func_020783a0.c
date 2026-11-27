/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208f618(s16);                         /* extern */

void func_020783a0(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x1A8;
    func_0208f618(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s16 *, 0x20));
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s16 *, 0x20) = -1;
    *(s8 *) (M2C_FIELD(arg0, s32 *, 0x14) + temp_r4)                 = 0;
}