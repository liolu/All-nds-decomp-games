/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK func_02068d4c();                            /* extern */
M2C_UNK func_02068e18();                            /* extern */
M2C_UNK func_02068e60();                            /* extern */
M2C_UNK func_02069034();                            /* extern */
extern void *data_0217ff6c;
extern u32 data_0217ff70;

void func_02009558(void) {
    u32 temp_r0;
    void *var_r6;

    var_r6 = data_0217ff6c;
    do {
        data_0217ff70 = 0;
        VBlankIntrWait();
        func_02069034();
        func_02068e18();
        if (var_r6 != NULL) {
        loop_2:
            temp_r0       = data_0217ff70 + M2C_FIELD(var_r6, s32 *, 8);
            data_0217ff70 = temp_r0;
            if (temp_r0 <= 0xA000U) {
                M2C_FIELD(var_r6, M2C_UNK(**)(s32, s32, s32), 0xC)(M2C_FIELD(var_r6, s32 *, 0), M2C_FIELD(var_r6, s32 *, 4),
                                                                   M2C_FIELD(var_r6, s32 *, 8));
                var_r6 = M2C_FIELD(var_r6, void **, 0x10);
                if (var_r6 != NULL) {
                    goto loop_2;
                }
            }
        }
        func_02068e60();
        func_02068d4c();
    } while (var_r6 != NULL);
}
