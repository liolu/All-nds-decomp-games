/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_020290ec();                     /* extern */
s32 func_02029688();       /* extern */
M2C_UNK func_0203fd2c();                  /* extern */
M2C_UNK func_02040040();              /* extern */
M2C_UNK func_0204033c();              /* extern */
M2C_UNK func_02040d54();                         /* extern */
M2C_UNK func_0209304c();                     /* extern */

void func_020417d4(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r1;
    s32 var_r1_2;
    s32 var_r3;
    s32 var_r5;
    void *temp_ip;
    void *temp_r2;

    func_0209304c(0);
    var_r5 = 0;
    func_02040d54(arg0 + 0xF8);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x160);
    switch (temp_r1) {                              /* irregular */
        case 2:
            var_r5 = func_02029688(arg0 + 0x160, temp_r1, M2C_FIELD(arg0, s16 *, 0x176), 0);
            break;
        case 0:
        case 1:
            temp_r2 = M2C_FIELD(arg0, void **, 0x168);
            if (M2C_FIELD(temp_r2, s32 *, 4) != 0) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            M2C_FIELD(arg0, u8 *, 0x19A) = func_020290ec(M2C_FIELD(temp_r2, s32 *, 0xC), var_r1);
            temp_ip                      = M2C_FIELD(arg0, void **, 0x168);
            if (M2C_FIELD(temp_ip, s32 *, 4) != 0) {
                var_r3 = 0x200;
            } else {
                var_r3 = 0x20;
            }
            M2C_FIELD(temp_ip, s32 *, 8) = (s32) (M2C_FIELD(arg0, u8 *, 0x19A) * var_r3);
            var_r5 = func_02029688(arg0 + 0x160, M2C_FIELD(arg0, s32 *, 0x160), M2C_FIELD(arg0, s16 *, 0x176), 0);
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x168), s32 *, 4) != 0) {
                var_r1_2 = 0x200;
            } else {
                var_r1_2 = 0x20;
            }
            M2C_FIELD(arg0, u8 *, 0x199) = (u8) ((s32) M2C_FIELD(arg0, s32 *, 0x184) / var_r1_2);
            func_0203fd2c(arg0 + 0x10, M2C_FIELD(arg0, u8 *, 0x199));
            break;
    }
    if (var_r5 == 0) {
        func_02040040(arg0 + 0x160, arg0 + 0xF8);
    } else {
        func_0204033c(arg0 + 0x160, arg0 + 0xF8);
    }
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 0x20);
}
