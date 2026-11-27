#include "m2c.h"

void *func_02071388(s32, void *);                   /* extern */

void func_0205f1a8(void *arg0) {
    void *temp_r0;

    temp_r0                      = func_02071388(M2C_FIELD(arg0, s32 *, 0x60), arg0 + 0x64);
    M2C_FIELD(arg0, s8 *, 0x6A)  = (s8) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(arg0, s16 *, 0xC)  = (s16) M2C_FIELD(temp_r0, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 6)    = (s16) M2C_FIELD(temp_r0, s32 *, 0x10);
}
