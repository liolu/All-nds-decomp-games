/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02019a30(M2C_UNK);
M2C_UNK func_02037878(M2C_UNK);
void func_02037964(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02037b44(s32 arg0, s32 arg1) {
    s32 temp_r1;
    u8 temp_r4;
    u8 temp_r4_2;

    if (M2C_FIELD(arg1, s32 *, 0) != 7) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            temp_r4 = M2C_FIELD(arg0, u8 *, 0x14);
            if (temp_r4 != 0) {
                return;
            }
            func_02037964(arg0, func_02019a30((s32) M2C_FIELD(arg1, s32 ***, 8)), (s32) temp_r4);
            return;
        case 1:
            temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x14);
            if (temp_r4_2 == 0) {
                return;
            }
            func_02037964(arg0, func_02019a30((s32) M2C_FIELD(arg1, s32 ***, 8)), (s32) temp_r4_2);
            return;
        case 2:
            **M2C_FIELD(arg1, s32 ***, 8) = func_02037878(arg0);
            return;
    }
}
