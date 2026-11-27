/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_020b5d70();                            /* extern */
extern s32 data_02127ff0;
extern s32 data_02127ff4;
extern s32 data_02127ff8;

void func_020c2b1c(void) {
    func_020b5d70();
    if (data_02127ff0 != 0) {
        func_0200e0f8();
        data_02127ff0 = 0;
    }
    if (data_02127ff8 != 0) {
        func_0200e0f8();
        data_02127ff8 = 0;
    }
    if (data_02127ff4 == 0) {
        return;
    }
    func_0200e0f8();
    data_02127ff4 = 0;
}
