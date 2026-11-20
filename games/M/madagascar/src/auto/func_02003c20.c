/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020021e4(M2C_UNK **);                  /* extern */
M2C_UNK func_02001f74();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bcf54;

M2C_UNK **func_02003c20(M2C_UNK **arg0) {
    *arg0 = &data_020bcf54;
    func_02001f74();
    func_020021e4(arg0);
    func_0207b040(arg0);
    return arg0;
}
