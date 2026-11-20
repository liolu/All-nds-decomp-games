#include "m2c.h"

void func_0205c288(void) {
    M2C_FIELD((void *) 0x040004C0, s32 *, 0) = 0x4210FFFF;
    M2C_FIELD((void *) 0x040004C0, u32 *, 4) = (u32) (0x4210FFFFU >> 0x10);
    *(u16 *) 0x04000060                      = (*(u16 *) 0x04000060 & ~0x3000) | 8;
}
