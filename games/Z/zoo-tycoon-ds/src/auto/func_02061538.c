/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK func_02001858();                            /* extern */
M2C_UNK func_02002dd0();                            /* extern */
M2C_UNK func_0200559c(M2C_UNK);                     /* extern */
M2C_UNK func_02061cbc(M2C_UNK);                     /* extern */

void func_02061538(s32 arg0, M2C_UNK arg1) {
    VBlankIntrWait();
    func_02061cbc(arg1);
    func_0200559c(arg1);
    func_02002dd0();
    func_02001858();
}
