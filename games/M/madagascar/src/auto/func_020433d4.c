/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02043138(M2C_UNK);
void func_0204318c(M2C_UNK);
void func_020431d0(M2C_UNK);

void func_020433d4(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1E8);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_020431d0(arg0);
            return;
        case 1:
            func_0204318c(arg0);
            return;
        case 2:
            func_02043138(arg0);
            return;
    }
}
