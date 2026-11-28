/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov014_02136f98(M2C_UNK *);                   /* extern */
s32 func_ov014_021374ac(s32);                             /* extern */
M2C_UNK func_ov014_0213f444(s32, s32);                    /* extern */
extern M2C_UNK data_ov014_021477d8;

void func_ov014_02139808(void *arg0, s16 arg1) {
    s32 var_r2;

    if (arg0 == NULL) {
        func_ov014_02136f98(&data_ov014_021477d8);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    if (M2C_FIELD(arg0, s8 *, 0xA9) != 1) {
        var_r2 = 0;
    } else {
        var_r2 = func_ov014_021374ac(M2C_FIELD(arg0, s32 *, 4));
    }
    func_ov014_0213f444(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s16 *, 0x40) + var_r2);
}
