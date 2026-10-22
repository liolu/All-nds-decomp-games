/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f930();                            /* extern */
extern M2C_UNK data_02115830;
extern s32 data_0215bf3c;

M2C_UNK **func_0201fbb8(M2C_UNK **arg0) {
    *arg0         = &data_02115830;
    data_0215bf3c = 0;
    func_0201f930(arg0);
    return arg0;
}
