/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc338();             /* extern */
M2C_UNK func_020c6370();                      /* extern */
M2C_UNK func_020c64f4(); /* extern */
M2C_UNK func_020c6f30();                      /* extern */
extern M2C_UNK func_020bf8c4;

void func_020c0830(void *arg0, s32 arg1) {
    func_020c64f4(arg0, &func_020bf8c4, arg0, arg0 + 0x494, 0x400, arg1);
    func_020bc338(arg0 + 0x4AC, 0);
    func_020c6f30(arg0 + 0x498);
    M2C_FIELD(arg0, s16 *, 0x494) = 0;
    func_020c6370(arg0);
}
