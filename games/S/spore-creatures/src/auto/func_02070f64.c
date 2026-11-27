#include "m2c.h"

M2C_UNK func_01ff9b54();                            /* extern */
M2C_UNK func_020b06d4(s32, M2C_UNK);                /* extern */

void func_02070f64(M2C_UNK arg0, s32 arg1) {
    func_01ff9b54();
    M2C_FIELD((void *) 0x04000450, volatile s32 *, 0)     = arg1;
    M2C_FIELD((void *) 0x04000450, volatile s32 *, -0x10) = 0;
    M2C_FIELD((void *) 0x04000450, volatile s32 *, -0xC)  = 0;
    M2C_FIELD((void *) 0x04000450, volatile s32 *, 4)     = 0;
    do {

    } while (M2C_FIELD((void *) 0x04000450, volatile s32 *, 0x1B0) & 0x08000000);
    func_020b06d4(0x04000640, arg0);
    M2C_FIELD((void *) 0x04000448, volatile s32 *, 0)  = 1;
    M2C_FIELD((void *) 0x04000448, volatile s32 *, -8) = 1;
}
