/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02005b00(s32);                             /* extern */
extern s32 data_02157e10;

s32 func_02014bf8(s32 arg0, s32 arg1) {
    if ((func_02005b00(data_02157e10) != 0) || (M2C_FIELD((arg0 + arg1), u8 *, 0x58) != 0)) {
        return 1;
    }
    return 0;
}
