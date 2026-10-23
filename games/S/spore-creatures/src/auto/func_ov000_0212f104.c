#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_ov000_0212ef5c(void *);                      /* extern */

void *func_ov000_0212f104(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 16);
    if (temp_r4 != NULL) {
        func_ov000_0212ef5c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
