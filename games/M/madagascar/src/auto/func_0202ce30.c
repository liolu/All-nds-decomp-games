/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202cdf4(s32);                         /* extern */
extern s32 data_020d08a4;
extern s32 data_020d08ac;
extern s32 data_020d08b0;
extern s32 data_020d08b8;

void func_0202ce30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    switch (arg3) {                                 /* irregular */
        case 0:
            data_020d08b0 = arg0;
            data_020d08ac = arg2;
            break;
        case 1:
            data_020d08a4 = arg0;
            data_020d08b8 = arg2;
            break;
        case 2:
            data_020d08b0 = arg0;
            data_020d08ac = arg2;
            data_020d08a4 = arg0;
            data_020d08b8 = arg2;
            break;
    }
    if (arg1 != 0) {
        return;
    }
    func_0202cdf4(arg3);
}
