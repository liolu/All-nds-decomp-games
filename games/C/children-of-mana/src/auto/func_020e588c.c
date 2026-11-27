/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020e4a8c();                            /* extern */
M2C_UNK func_020e4ac8();                            /* extern */
extern s32 data_0212e964;
extern s32 data_0212e988;

void func_020e588c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_0212e988) {                    /* irregular */
            case 0:
                func_020e4ac8();
                return;
            case 3:
            case 4:
                func_020e4a8c();
                return;
        }
    } else {
        data_0212e964 = 1;
    }
}
