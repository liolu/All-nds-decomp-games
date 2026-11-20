/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202caf0();                            /* extern */
M2C_UNK func_020526ac();                            /* extern */
extern s32 data_020d08bc;
extern s32 data_020d08c0;

void func_0202d1bc(void) {
    if (data_020d08bc != 0) {
        func_020526ac();
    }
    if (data_020d08c0 == 0) {
        return;
    }
    func_0202caf0();
}
