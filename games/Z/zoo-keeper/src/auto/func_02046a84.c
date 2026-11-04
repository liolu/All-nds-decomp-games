/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046970(s32 *);                           /* extern */
s32 func_02046944(s32 *);                           /* extern */

void func_02046a84(void) {
    s32 sp4;
    s32 sp0;

    *(s32 *) 0x04000600 |= 0x8000;
    do {

    } while (func_02046970(&sp4) != 0);
    do {

    } while (func_02046944(&sp0) != 0);
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 0;
    if (sp0 != 0) {
        M2C_FIELD((void *) 0x04000440, s32 *, 8) = sp0;
    }
    M2C_FIELD((void *) 0x04000454, s32 *, 0)     = 0;
    M2C_FIELD((void *) 0x04000454, s32 *, -0x14) = 2;
    M2C_FIELD((void *) 0x04000454, s32 *, -0xC)  = sp4;
    M2C_FIELD((void *) 0x04000454, s32 *, 0)     = 0;
}
