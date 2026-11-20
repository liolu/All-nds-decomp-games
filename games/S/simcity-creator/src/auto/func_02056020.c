#include "m2c.h"

M2C_UNK func_020560b8(void *);                      /* extern */
M2C_UNK func_02056270();                            /* extern */
M2C_UNK func_02056310();                            /* extern */
M2C_UNK func_02072894(s32, M2C_UNK);                /* extern */

void func_02056020(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x18) == 0) {
        func_02056270(arg0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x54);
    switch (temp_r1) {                              /* irregular */
        case 0:
        case 1:
            func_02072894(M2C_FIELD(arg0, s32 *, 8), 0);
            func_020560b8(arg0);
            return;
        case 2:
            func_02056310(arg0);
            return;
    }
}
