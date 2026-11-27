/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02054940();                            /* extern */
extern s32 data_0211aed0;

void func_020548e4(s32 arg0) {
    if (data_0211aed0 != 0) {
        return;
    }
    data_0211aed0 = 1;
    func_02054940(arg0);
}
