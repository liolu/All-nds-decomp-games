#include "m2c.h"

void *func_02030644();                              /* extern */
M2C_UNK func_0205f574(u16);                         /* extern */
M2C_UNK func_0205f604();                            /* extern */
M2C_UNK func_02060e38();                            /* extern */
void *func_02060e9c();                              /* extern */
s32 func_020615cc();                                /* extern */

void func_020615f0(void) {
    u32 temp_r3;
    void *temp_r0;

    func_02060e38();
    if (M2C_FIELD(func_02060e9c(), s32 *, 4) == 6) {
        func_0205f574(2U);
        return;
    }
    if (M2C_FIELD(func_02060e9c(), s32 *, 4) == 0xC) {
        func_0205f574(5U);
        return;
    }
    if ((M2C_FIELD(func_02060e9c(), s32 *, 4) == 0xB) && (M2C_FIELD(func_02060e9c(), s32 *, 8) == 1)) {
        if (func_020615cc() != 0) {
            return;
        }
        func_0205f574(4U);
        return;
    }
    if ((M2C_FIELD(func_02060e9c(), s32 *, 4) == 0xB) && (M2C_FIELD(func_02060e9c(), s32 *, 8) == 4)) {
        if (func_020615cc() == 0) {
            return;
        }
        func_0205f604();
        return;
    }
    temp_r0 = func_02030644();
    temp_r3 = (M2C_FIELD(temp_r0, s32 *, 4) * M2C_FIELD(temp_r0, u32 *, 0)) + M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(temp_r0, u32 *, 0) = temp_r3;
    func_0205f574((u16) ((u16) ((u32) ((temp_r3 >> 0x10) * 2) >> 0x10) + 2));
}
