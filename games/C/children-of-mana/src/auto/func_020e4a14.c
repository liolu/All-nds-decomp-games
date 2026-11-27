/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020615fc(M2C_UNK *);                       /* extern */
extern s32 data_0212e964;
extern M2C_UNK func_020e5634;

s32 func_020e4a14(void) {
    if (func_020615fc(&func_020e5634) != 0) {
        data_0212e964 = 1;
        return 0;
    }
    return 1;
}
