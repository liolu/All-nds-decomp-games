/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020ac4cc(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            return;
        case 1:
            temp_r1 = M2C_FIELD(arg0, volatile s32 *, 0x10);
            if (temp_r1 == 0) {
                M2C_FIELD(arg0, volatile s32 *, 8) = (s32) M2C_FIELD(arg0, volatile s32 *, 4);
                M2C_FIELD(arg0, volatile s32 *, 0) = 0;
                return;
            }
            M2C_FIELD(arg0, volatile s32 *, 8) =
                (s32) (M2C_FIELD(arg0, volatile s32 *, 8) +
                       ((s32) (M2C_FIELD(arg0, volatile s32 *, 4) - M2C_FIELD(arg0, volatile s32 *, 8)) / temp_r1));
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) - 1);
            return;
    }
}
