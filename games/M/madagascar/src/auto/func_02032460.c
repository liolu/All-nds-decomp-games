/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207b040();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf35c;
extern M2C_UNK data_020c354c;

M2C_UNK **func_02032460(M2C_UNK **arg0) {
    *arg0 = &data_020c354c;
    *arg0 = &data_020bf35c;
    *arg0 = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
