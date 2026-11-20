/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02065680();                            /* extern */
M2C_UNK func_0206584c();                            /* extern */
extern s32 data_020dbae8;

void func_02064c78(void) {
    if (data_020dbae8 != 0) {
        return;
    }
    data_020dbae8 = 1;
    func_02065680();
    func_0206584c();
}
