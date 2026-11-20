/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203cbcc(M2C_UNK **);                  /* extern */
M2C_UNK func_ov001_020ab110();                            /* extern */
extern M2C_UNK data_ov001_020ad470;

M2C_UNK **func_ov001_020ab374(M2C_UNK **arg0) {
    *arg0 = &data_ov001_020ad470;
    func_ov001_020ab110();
    func_0203cbcc(arg0);
    return arg0;
}
