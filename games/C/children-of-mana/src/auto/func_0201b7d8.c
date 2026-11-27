/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201b74c();                                /* extern */
s32 func_0201c484(void *);                          /* extern */
s32 func_0201d1d4(void *);                          /* extern */
void *func_0201e150(void *);                        /* extern */

s32 func_0201b7d8(void *arg0) {
    if (func_0201b74c() == 0) {
        return 0;
    }
    if (func_0201d1d4(arg0) == 0) {
        return 0;
    }
    if (M2C_FIELD(func_0201e150(arg0), s32 *, 8) != 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x70) == 0x21) {
        return 0;
    }
    if (func_0201c484(arg0) != 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0xD9) != 0) {
        return 1;
    }
    return 0;
}
