/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002584();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bf570;
extern s32 data_020d0268;

M2C_UNK **func_0202619c(M2C_UNK **arg0) {
    *arg0         = &data_020bf570;
    data_020d0268 = 0;
    func_02002584(arg0);
    func_0207b040(arg0);
    return arg0;
}
