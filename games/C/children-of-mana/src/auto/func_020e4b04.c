/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02061d40(M2C_UNK *);                       /* extern */
extern s32 data_0212e964;
extern M2C_UNK func_020e588c;

s32 func_020e4b04(void) {
    if (func_02061d40(&func_020e588c) != 2) {
        data_0212e964 = 1;
        return 0;
    }
    return 1;
}
