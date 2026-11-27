/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f310(s32);                         /* extern */
M2C_UNK func_0200f324(s32);                         /* extern */
extern s32 data_0212e824;

void func_020dd898(s32 arg0) {
    if (data_0212e824 == 0) {
        return;
    }
    if (arg0 != 0) {
        func_0200f324(data_0212e824);
        return;
    }
    func_0200f310(data_0212e824);
}
