/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02076a98();           /* extern */
M2C_UNK func_02076b0c();                            /* extern */
M2C_UNK func_02076c6c();                      /* extern */
extern s32 data_02123cf4;
extern M2C_UNK data_021241b0;

void func_02076b54(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02076b0c(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x160)(arg0);
    func_02076a98(&data_021241b0, arg0);
    if (data_02123cf4 != 0) {
        func_02076a98(data_02123cf4 + 0x4AC, arg0);
    }
    func_02076c6c(arg0);
}
