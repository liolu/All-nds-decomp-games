#include "m2c.h"

M2C_UNK func_02035404(void *);                      /* extern */
extern s32 data_020d1d24;

void func_0203549c(void) {
    s32 var_r4;
    u8 temp_r0;
    void *var_r5;

    var_r4 = 0;
    var_r5 = data_020d1d24 + 0x634;
    do {
        temp_r0 = M2C_FIELD(var_r5, u8 *, 0x74);
        switch (temp_r0) {
            default:
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                func_02035404(var_r5);
                if (M2C_FIELD(var_r5, u8 *, 0x74) == 5) {
                    func_02035404(M2C_FIELD(var_r5, void **, 0xB8));
                }
                break;
        }
        var_r4 += 1;
        var_r5 += 0xEC;
    } while (var_r4 < 0x20);
}
