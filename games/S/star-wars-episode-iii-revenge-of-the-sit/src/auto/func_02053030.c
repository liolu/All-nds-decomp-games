/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02051db4();                                /* extern */
M2C_UNK func_02052ff4(s32, s32, M2C_UNK);           /* extern */
extern s32 data_020b3cf4;

void func_02053030(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_02051db4() != 0) {
        M2C_FIELD((data_020b3cf4 + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_02052ff4(arg0, arg1, arg2);
}
