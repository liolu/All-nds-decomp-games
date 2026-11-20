/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204579c(s32);                         /* extern */
extern s32 data_0215f8d4;
extern s32 data_0215f8dc;
extern s32 data_0215f8e0;
extern s32 data_0215f8e8;

void func_020457d4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    switch (arg3) {                                 /* irregular */
        case 0:
            data_0215f8e0 = arg0;
            data_0215f8dc = arg2;
            break;
        case 1:
            data_0215f8d4 = arg0;
            data_0215f8e8 = arg2;
            break;
        case 2:
            data_0215f8e0 = arg0;
            data_0215f8dc = arg2;
            data_0215f8d4 = arg0;
            data_0215f8e8 = arg2;
            break;
    }
    if (arg1 != 0) {
        return;
    }
    func_0204579c(arg3);
}
