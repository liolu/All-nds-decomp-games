#include "m2c.h"

void *func_02031164();                              /* extern */
M2C_UNK func_0203e328(s32, u8, M2C_UNK);            /* extern */

void func_0203e194(s32 arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(func_02031164(), u8 *, 0x15);
    switch (arg0) {                                 /* irregular */
        case 1:
            func_0203e328(arg0, temp_r1, 1);
            return;
        case 2:
            func_0203e328(arg0, temp_r1, 1);
            return;
    }
}
