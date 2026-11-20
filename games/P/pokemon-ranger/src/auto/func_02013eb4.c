#include "m2c.h"

s32 func_02058668(void *);                          /* extern */

void func_02013eb4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x300) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x550), u8 *, 0x10) << 9);
    M2C_FIELD(arg0, s32 *, 0x304) = func_02058668(arg0 + 0x2FC);
}
