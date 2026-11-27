/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c3028();                                /* extern */
extern s32 data_02127f24;

s32 func_020b9fcc(s32 arg0) {
    return data_02127f24 = (s32) M2C_FIELD(((arg0 * 0x1E) + func_020c3028()), s8 *, 0x12);
}
