#include "engine.h"
#include "m2c.h"

void func_02028498(M2C_UNK, M2C_UNK);
void func_02028634(M2C_UNK, M2C_UNK);
void func_02039904(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_021566c8;

void func_0202869c(s32 arg0) {
    u8 sp0[416];
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;

    if ((M2C_FIELD(arg0, s32 *, 0) & 0x10) == 0x10) {
        func_02039904(0, arg0 + 0x3C, 0x10);
        func_02039904(0, arg0 + 0x4C, 0x10);
        func_02039904(0, arg0 + 0x5C, 0x10);
        temp_r1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r1 != 0) {
            func_02028634(arg0 + 0x3C, temp_r1);
        }
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r1_2 != 0) {
            func_02028634(arg0 + 0x4C, temp_r1_2);
        }
        temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r1_3 != 0) {
            func_02028634(arg0 + 0x5C, temp_r1_3);
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x10);
    }
    if (data_021566c8 != 0) {
        func_02028498(data_021566c8, arg0);
        return;
    }
    data_021566c8 = (s32) sp0;
    func_02028498((s32) sp0, arg0);
    data_021566c8 = 0;
}
