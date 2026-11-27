/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020e5c58();                            /* extern */
M2C_UNK func_020e5cf0();                            /* extern */
extern s32 data_0212e964;
extern s32 data_0212e988;

void func_020e57dc(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        switch (data_0212e988) {                    /* irregular */
            case 0:
                data_0212e964 = 0;
                return;
            case 3:
                data_0212e964 = 0;
                func_020e5cf0();
                return;
            case 4:
                data_0212e964 = 0;
                func_020e5c58();
                return;
        }
    } else {
        data_0212e964 = 1;
    }
}
