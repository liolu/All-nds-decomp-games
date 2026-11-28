/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02007140(void *arg0, void *arg1) {
    s32 temp_r1;

    temp_r1 = *M2C_FIELD(arg1, s32 **, 0x24);
    switch (temp_r1) {                              /* irregular */
        case 2:
            M2C_FIELD(arg0, s32 *, 0x2C0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B4), u16 *, 6);
            return;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x2C0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B4), u16 *, 2);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x2C0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B4), u16 *, 4);
            return;
    }
}
