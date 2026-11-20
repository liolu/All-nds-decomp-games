/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069e1c(s32);                         /* extern */
M2C_UNK func_0206a464();                            /* extern */
extern s32 data_020d0058;

s32 func_020057bc(s32 arg0) {
    func_0206a464();
    switch (arg0) {                                 /* irregular */
        case 0x1000:
            func_02069e1c(0x901);
            break;
        case 0x10000:
            func_02069e1c(0xD01);
            break;
    }
    return data_020d0058 = (s32) (arg0 + ((u32) (arg0 >> 2) >> 0x1D)) >> 3;
}
