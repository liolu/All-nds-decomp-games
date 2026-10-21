#include "m2c.h"

M2C_UNK func_020aa020();                            /* extern */
extern s32 data_0217447c;

void func_020bee18(void) {
    if (data_0217447c == 0) {
        return;
    }
    func_020aa020();
    data_0217447c = 0;
}
