#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_0209667c(void *);                      /* extern */

void *func_ov000_02125a84(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 20);
    if (temp_r4 != NULL) {
        func_0209667c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
