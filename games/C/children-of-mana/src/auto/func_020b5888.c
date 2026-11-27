/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204b760(s32, s32);                    /* extern */
M2C_UNK func_0204b76c(s32, s32, M2C_UNK);           /* extern */
s32 func_020afb40(s32);                             /* extern */

void func_020b5888(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_0204b76c(func_020afb40(M2C_FIELD(arg0, s32 *, 4)), arg2, arg3);
            return;
        case 1:
            func_0204b760(func_020afb40(M2C_FIELD(arg0, s32 *, 4)), arg2 - 3);
            return;
    }
}
