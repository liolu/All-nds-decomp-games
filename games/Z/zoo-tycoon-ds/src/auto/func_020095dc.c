/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02068d4c();                            /* extern */
M2C_UNK func_02068e18();                            /* extern */
M2C_UNK func_02068e60();                            /* extern */
M2C_UNK func_02069034();                            /* extern */
extern void *data_0217ff6c;

void func_020095dc(void) {
    void *var_r4;

    var_r4 = data_0217ff6c;
    func_02069034();
    func_02068e18();
    if (var_r4 != NULL) {
        do {
            M2C_FIELD(var_r4, M2C_UNK(**)(s32, s32, s32), 0xC)(M2C_FIELD(var_r4, s32 *, 0), M2C_FIELD(var_r4, s32 *, 4),
                                                               M2C_FIELD(var_r4, s32 *, 8));
            var_r4 = M2C_FIELD(var_r4, void **, 0x10);
        } while (var_r4 != NULL);
    }
    func_02068e60();
    func_02068d4c();
}
