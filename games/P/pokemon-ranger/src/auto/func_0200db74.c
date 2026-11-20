#include "engine.h"
#include "m2c.h"

void func_0200dbf4(M2C_UNK);
void func_0200dc0c(M2C_UNK);
void func_02010b58(M2C_UNK);

void func_0200db74(s32 arg0) {
    u16 temp_r1;
    u16 temp_r2;
    u16 temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0x5FA);
    if (temp_r2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x5FA) = (u16) (temp_r2 - 1);
        if (M2C_FIELD(arg0, u16 *, 0x5FA) == 0) {
            func_0200dc0c(arg0);
        } else {
            temp_r2_2 = M2C_FIELD(arg0, u16 *, 0x6E4);
            if (temp_r2_2 != 0) {
                M2C_FIELD(arg0, u16 *, 0x6E4) = (u16) (temp_r2_2 - 1);
            } else {
                func_02010b58(arg0);
            }
        }
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x5FC);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x5FC) = (u16) (temp_r1 - 1);
    if (M2C_FIELD(arg0, u16 *, 0x5FC) != 0) {
        return;
    }
    func_0200dbf4(arg0);
}
