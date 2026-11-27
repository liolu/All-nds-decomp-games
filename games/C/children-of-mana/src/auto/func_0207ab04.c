/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_020290ec(s32, M2C_UNK);                     /* extern */
s32 func_02029688(void *, s32, s16, M2C_UNK);       /* extern */
M2C_UNK func_02040040(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_0207ab04(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r5;
    void *temp_ip;
    void *temp_r2;

    func_0209304c(2);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    var_r5  = 0;
    switch (temp_r1) {                              /* irregular */
        case 2:
            var_r5 = func_02029688(arg0, temp_r1, M2C_FIELD(arg0, s16 *, 0x16), 0);
            break;
        case 0:
        case 1:
            temp_r2 = M2C_FIELD(arg0, void **, 8);
            if (M2C_FIELD(temp_r2, s32 *, 4) != 0) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            M2C_FIELD(arg0, u8 *, 0x3A) = func_020290ec(M2C_FIELD(temp_r2, s32 *, 0xC), var_r1);
            temp_ip                     = M2C_FIELD(arg0, void **, 8);
            if (M2C_FIELD(temp_ip, s32 *, 4) != 0) {
                var_r2 = 0x200;
            } else {
                var_r2 = 0x20;
            }
            M2C_FIELD(temp_ip, s32 *, 8) = (s32) (M2C_FIELD(arg0, u8 *, 0x3A) * var_r2);
            var_r5                       = func_02029688(arg0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s16 *, 0x16), 0);
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) != 0) {
                var_r1_2 = 0x200;
            } else {
                var_r1_2 = 0x20;
            }
            M2C_FIELD(arg0, s8 *, 0x39) = (s8) ((s32) M2C_FIELD(arg0, s32 *, 0x24) / var_r1_2);
            break;
    }
    if (var_r5 == 0) {
        func_02040040(arg0, 0);
    }
    M2C_FIELD(arg0, u8 *, 0x5F) = (u8) (M2C_FIELD(arg0, u8 *, 0x5F) | 4);
}
