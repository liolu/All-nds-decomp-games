#include "m2c.h"

M2C_UNK func_02004104(void *);                      /* extern */
M2C_UNK func_020042d8(void *);                      /* extern */
M2C_UNK func_0203fe28(void *);                      /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */

void *func_02042754(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r4 != NULL) {
        func_0203fe28(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020042d8(arg0 + 0x10);
    func_02004104(arg0 + 0x14);
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
