/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020624cc();                      /* extern */
M2C_UNK func_02062634(); /* extern */
s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c();                         /* extern */
M2C_UNK func_02072438();                         /* extern */
extern void *data_020ded80;
extern M2C_UNK func_020724f0;

void func_02072468(void *arg0, s32 arg1) {
    s32 temp_ip;
    s32 temp_r4;

    temp_r4 = func_02063cf8();
    if (data_020ded80 == NULL) {
        data_020ded80 = arg0;
        func_02072438(arg0 + 0x98);
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
        temp_ip                      = (arg1 - 0xB8) & ~3;
        func_02062634(arg0, &func_020724f0, arg0, arg0 + 0xB8 + temp_ip, temp_ip, 0);
        func_020624cc(arg0);
    }
    func_02063d0c(temp_r4);
}
