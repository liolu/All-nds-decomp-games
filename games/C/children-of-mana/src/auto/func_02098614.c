#include "m2c.h"

void func_02098614(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;

    if (M2C_FIELD(arg0, s32 *, 0x3C) != 1) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x97) != 0) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0xE8);
        switch (temp_r1) {                          /* irregular */
            case 0:
                temp_r1_2 = M2C_FIELD(arg0, s32 *, 0xEC);
                if (temp_r1_2 < 6) {
                    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r1_2 + 1);
                } else {
                    M2C_FIELD(arg0, s32 *, 0xE8) = 1;
                }
                return;
            case 1:
                temp_r1_3 = M2C_FIELD(arg0, s32 *, 0xEC);
                if (temp_r1_3 > 0) {
                    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r1_3 - 1);
                } else {
                    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
                }
                return;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xE8) = 0;
        M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    }
}
