#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_02058120(void *);                      /* extern */
M2C_UNK func_0209667c(void *);                      /* extern */

void *func_ov002_020fa730(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r4 != NULL) {
        func_0209667c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_02058120(arg0);
    func_020934a8(arg0);
    return arg0;
}
