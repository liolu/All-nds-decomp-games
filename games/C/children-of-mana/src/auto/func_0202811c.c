/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209303c();                                /* extern */
extern s32 data_02115404;
extern M2C_UNK data_02115424;

void func_0202811c(s32 arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg0) {                                 /* irregular */
        case 0:
            return;
        case 1:
            return;
        case 2:
            data_02115404 += arg1;
            temp_r0 = func_0209303c();
            *((M2C_UNK *) ((s8 *) &data_02115424 + (temp_r0 * 4))) =
                *((M2C_UNK *) ((s8 *) &data_02115424 + (temp_r0 * 4))) + arg1;
            return;
    }
}
