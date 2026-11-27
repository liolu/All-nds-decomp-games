/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e4920();                                /* extern */
s32 func_020e4984();                                /* extern */
M2C_UNK func_020e49bc();                            /* extern */
s32 func_020e4a14();                                /* extern */
M2C_UNK func_020e4a50();                            /* extern */
M2C_UNK func_020e599c();                            /* extern */
M2C_UNK func_020e5a28();                            /* extern */
extern s32 data_0212e964;
extern s32 data_0212e988;

void func_020e56dc(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_0212e988) {                    /* irregular */
            case 0:
                func_020e4a50();
                return;
            case 3:
                if (func_020e4a14() == 0) {
                    return;
                }
                func_020e5a28();
                if (func_020e4984() != 0) {
                    return;
                }
                data_0212e988 = 0;
                func_020e49bc();
                return;
            case 4:
                if (func_020e4a14() != 1) {
                    return;
                }
                func_020e599c();
                if (func_020e4920() != 0) {
                    return;
                }
                data_0212e988 = 0;
                func_020e49bc();
                return;
        }
    } else {
        data_0212e964 = 1;
    }
}
