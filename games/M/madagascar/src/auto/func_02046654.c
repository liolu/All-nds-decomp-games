/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02046654(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30C);
    switch (temp_r1) {                              /* irregular */
        case 1:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x78)(arg0);
            return;
        case 0:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x74)(arg0);
            return;
    }
}
