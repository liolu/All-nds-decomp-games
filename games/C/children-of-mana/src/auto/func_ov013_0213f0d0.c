/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ce224(M2C_UNK **);                  /* extern */
M2C_UNK func_ov013_0213ee6c();                            /* extern */
extern M2C_UNK data_ov013_02149620;

M2C_UNK **func_ov013_0213f0d0(M2C_UNK **arg0) {
    *arg0 = &data_ov013_02149620;
    func_ov013_0213ee6c();
    func_020ce224(arg0);
    return arg0;
}
