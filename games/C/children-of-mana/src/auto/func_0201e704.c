/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201e704(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x94);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 1:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x20)(arg0);
            return;
        case 2:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x24)(arg0);
            return;
    }
}
