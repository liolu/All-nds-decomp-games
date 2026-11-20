/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024770();                            /* extern */
M2C_UNK func_02024ae4(void *, s32);                 /* extern */
extern s32 data_020cf834;

void func_020246e8(void *arg0, s32 arg1, s32 arg2) {
    func_02024770();
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    switch (arg2) {                                 /* irregular */
        case 0:
        case 2:
            func_02024ae4(arg0, 0);
            break;
        case 1:
            func_02024ae4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u8 *, 0x15) - 1);
            break;
    }
    M2C_FIELD(arg0, s8 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (data_020cf834 + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u8 *, 0x14) + 1));
}
