#include "m2c.h"

M2C_UNK func_02007d24(void *, M2C_UNK);             /* extern */
void *func_0203272c();                              /* extern */
void *func_020742ec(s32);                           /* extern */
extern M2C_UNK data_020ef77c;

void func_0203338c(M2C_UNK arg0) {
    void *var_r0;
    void *var_r0_2;

    if (M2C_FIELD(&data_020ef77c, void **, 8) == NULL) {
        var_r0 = func_020742ec(0x2AD8);
        if (var_r0 != NULL) {
            var_r0 = func_0203272c();
        }
        M2C_FIELD(&data_020ef77c, void **, 8) = var_r0;
    }
    if (M2C_FIELD(M2C_FIELD(&data_020ef77c, void **, 8), s32 *, 0x2A04) != 0) {
        var_r0_2 = M2C_FIELD(&data_020ef77c, void **, 8) + 0x924;
    } else {
        var_r0_2 = M2C_FIELD(&data_020ef77c, void **, 8) + 0x940;
    }
    func_02007d24(var_r0_2, arg0);
}
