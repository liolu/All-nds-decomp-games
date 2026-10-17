/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020021e4();                            /* extern */
extern M2C_UNK data_020c3018;
extern s32 data_020d8794;

M2C_UNK **func_0202f014(M2C_UNK **arg0) {
    data_020d8794 = 0;
    *arg0         = &data_020c3018;
    func_020021e4();
    return arg0;
}
