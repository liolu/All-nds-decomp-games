/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                         /* extern */
M2C_UNK func_0207b770();                         /* extern */
extern s32 data_02117564;
extern s32 data_02117568;
extern s32 data_0211756c;

void func_0203f588(void) {
    s32 temp_r4;

    temp_r4 = data_0211756c;
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_0207b770(temp_r4);
            func_0200f2c4(temp_r4);
        }
        data_0211756c = 0;
    }
    if (data_02117568 != 0) {
        func_0200f2c4();
        data_02117568 = 0;
    }
    if (data_02117564 == 0) {
        return;
    }
    func_0200f2c4();
    data_02117564 = 0;
}
