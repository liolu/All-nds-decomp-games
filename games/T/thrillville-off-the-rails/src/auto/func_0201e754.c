/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202208c();                      /* extern */
M2C_UNK func_02022324(); /* extern */
s32 func_02024624();                                /* extern */
M2C_UNK func_02024638();                         /* extern */
M2C_UNK func_0201e724();                         /* extern */
extern void *data_020ec2c0;
extern M2C_UNK func_0201e7dc;

void func_0201e754(void *arg0, s32 arg1) {
    s32 temp_ip;
    s32 temp_r4;

    temp_r4 = func_02024624();
    if (data_020ec2c0 == NULL) {
        data_020ec2c0 = arg0;
        func_0201e724(arg0 + 0xC4);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        temp_ip                      = (arg1 - 0xE4) & ~3;
        func_02022324(arg0, &func_0201e7dc, arg0, arg0 + 0xE4 + temp_ip, temp_ip, 0);
        func_0202208c(arg0);
    }
    func_02024638(temp_r4);
}
