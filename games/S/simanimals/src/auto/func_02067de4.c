#include "m2c.h"

M2C_UNK func_02068354();                            /* extern */
extern s32 data_02090578;

void func_02067de4(s32 arg0) {
    if (data_02090578 != 0) {
        return;
    }
    data_02090578 = 1;
    func_02068354(arg0);
}
