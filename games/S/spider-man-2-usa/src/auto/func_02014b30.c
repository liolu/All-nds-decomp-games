/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014b04(void *);                          /* extern */
s32 func_02014b1c(void *);                          /* extern */

void func_02014b30(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) < 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > func_02014b1c(arg0)) {
        M2C_FIELD(arg0, s32 *, 0x18) = func_02014b1c(arg0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) < 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) <= func_02014b04(arg0)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = func_02014b04(arg0);
}
