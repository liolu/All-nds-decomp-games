/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02074ac8();                      /* extern */
M2C_UNK func_02076b54();                      /* extern */
M2C_UNK func_0205ba28();                   /* extern */
M2C_UNK func_0205ba98();                   /* extern */
extern s32 data_02123cf4;
extern M2C_UNK data_0212419c;

void func_02076bc8(void *arg0) {
    func_0205ba98(&data_0212419c);
    if (data_02123cf4 != 0) {
        func_0205ba98(data_02123cf4 + 0x498);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_02074ac8(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    }
    func_02076b54(arg0);
    func_0205ba28(&data_0212419c);
    if (data_02123cf4 == 0) {
        return;
    }
    func_0205ba28(data_02123cf4 + 0x498);
}
