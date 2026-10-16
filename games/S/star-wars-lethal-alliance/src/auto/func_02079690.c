/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065684();                      /* extern */
M2C_UNK func_020658cc(); /* extern */
M2C_UNK func_0206627c();                      /* extern */
M2C_UNK func_0207a444();             /* extern */
extern M2C_UNK func_02078744;

void func_02079690(void *arg0, s32 arg1) {
    func_020658cc(arg0, &func_02078744, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0207a444(arg0 + 0x4E0, 0);
    func_0206627c(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg0, s32 *, 0x4C4);
    func_02065684(arg0);
}
