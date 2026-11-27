/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020e4958();                                /* extern */
M2C_UNK func_020e49bc();                            /* extern */
extern s32 data_0212e988;

void func_020e547c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_0212e988) {                    /* irregular */
            case 0:
                func_020e49bc();
                return;
            case 3:
                if (func_020e4958() != 0) {
                    return;
                }
                data_0212e988 = 0;
                func_020e49bc();
                return;
            case 4:
                data_0212e988 = 4;
                func_020e49bc();
                return;
        }
    } else {
        data_0212e988 = 0;
        func_020e49bc();
    }
}
