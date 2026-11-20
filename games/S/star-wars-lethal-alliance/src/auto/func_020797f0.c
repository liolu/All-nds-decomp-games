/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02066180();                   /* extern */
M2C_UNK func_020661f0();                   /* extern */
M2C_UNK func_020760ec();                      /* extern */
M2C_UNK func_02079784();                      /* extern */
extern s32 data_020eb2e8;
extern M2C_UNK data_020ebb68;

void func_020797f0(void *arg0) {
    func_020661f0(&data_020ebb68);
    if (data_020eb2e8 != 0) {
        func_020661f0(data_020eb2e8 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_020760ec(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_02079784(arg0);
    func_02066180(&data_020ebb68);
    if (data_020eb2e8 == 0) {
        return;
    }
    func_02066180(data_020eb2e8 + 0x4C8);
}
