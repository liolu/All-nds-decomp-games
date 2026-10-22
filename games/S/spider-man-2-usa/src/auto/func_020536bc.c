/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205378c();                            /* extern */
extern s32 data_021611d0;

void func_020536bc(s32 arg0) {
    if (data_021611d0 != 0) {
        return;
    }
    data_021611d0 = 1;
    func_0205378c(arg0);
}
