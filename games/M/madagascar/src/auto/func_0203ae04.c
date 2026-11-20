/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0203a630(M2C_UNK);
void func_0203a9f0(M2C_UNK);

void func_0203ae04(s32 arg0, s32 arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x10) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 8) != M2C_FIELD(arg0, s32 *, 0x1E4)) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 2:
            func_0203a9f0(arg0);
            return;
        case 3:
            func_0203a630(arg0);
            return;
    }
}
