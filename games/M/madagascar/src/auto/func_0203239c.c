/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002584();                            /* extern */
extern M2C_UNK data_020c3508;
extern s32 data_020d8798;

M2C_UNK **func_0203239c(M2C_UNK **arg0) {
    *arg0         = &data_020c3508;
    data_020d8798 = 0;
    func_02002584(arg0);
    return arg0;
}
