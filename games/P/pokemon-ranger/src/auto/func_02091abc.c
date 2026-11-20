#include "engine.h"
#include "m2c.h"

void func_02091548(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02091574(M2C_UNK, M2C_UNK);
M2C_UNK func_020d8bd4(M2C_UNK, M2C_UNK);

void func_02091abc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;
    u16 temp_r1;
    u32 temp_r0;

    temp_r0 = (u32) func_020d8bd4(arg1 - (M2C_FIELD(arg0, s32 *, 0x494) + 0x38), 0x28);
    switch (temp_r0) {
        default:
        /* fallthrough */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x50C) = 2;
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x50C) = 3;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x50C) = 4;
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x50C) = 5;
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x51C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x51A) = (s16) arg2;
    temp_r2                       = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x51C), s32 *, 0xC);
    if (temp_r2 != 0) {
        func_02091548(arg0, 1, temp_r2);
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x51C), u16 *, 0x10);
    if (temp_r1 == 0) {
        return;
    }
    func_02091574(arg0, (s32) temp_r1);
}
