/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207961c();           /* extern */
M2C_UNK func_020796fc();                            /* extern */
M2C_UNK func_02079b98();                      /* extern */
extern s32 data_020eb2e8;
extern M2C_UNK data_020ebb80;

void func_02079784(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020796fc(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_0207961c(&data_020ebb80, arg0);
    if (data_020eb2e8 != 0) {
        func_0207961c(data_020eb2e8 + 0x4E0, arg0);
    }
    func_02079b98(arg0);
}
