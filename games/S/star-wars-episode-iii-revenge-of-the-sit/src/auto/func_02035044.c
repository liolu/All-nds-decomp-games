/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02034f10(M2C_UNK);                     /* extern */
M2C_UNK func_0203e82c();                            /* extern */
extern M2C_UNK (*data_020af8dc)();
extern s32 data_020af8e4;

void func_02035044(M2C_UNK arg0) {
    if (data_020af8e4 == 0) {
        func_0203e82c();
        if (data_020af8dc != NULL) {
            data_020af8dc();
            data_020af8dc = NULL;
        }
    }
    func_02034f10(arg0);
}
