#include "m2c.h"

M2C_UNK _Z15CleanCacheRangePKvj(void *, M2C_UNK);             /* extern */
M2C_UNK func_02086468();                            /* extern */
M2C_UNK func_0208647c();                            /* extern */

void func_02086ed8(void *arg0) {
    void *temp_r6;
    void *var_r0;

    func_02086468();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6                       = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0)   = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            _Z15CleanCacheRangePKvj(var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    func_0208647c();
}
