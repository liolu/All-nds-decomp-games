/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020017e4(M2C_UNK);                     /* extern */
M2C_UNK func_020144a8(void *, M2C_UNK, void *);     /* extern */

void func_0205dc04(void *arg0, s8 arg1) {
    void *temp_r5;

    M2C_FIELD(arg0, s8 *, 0x1C724)  = 1;
    temp_r5                         = ((s8 *) arg0 + 0x1C724);
    M2C_FIELD(temp_r5, s8 *, 1)     = arg1;
    M2C_FIELD(temp_r5, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x11974);
    M2C_FIELD(temp_r5, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x1197C);
    if (arg1 == 0) {
        func_020017e4(0x90);
    } else {
        func_020017e4(0x8F);
    }
    func_020144a8(arg0, 0, temp_r5 + 8);
    M2C_FIELD(temp_r5, s8 *, 5) = 0;
}
