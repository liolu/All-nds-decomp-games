#include "m2c.h"

M2C_UNK func_ov004_020b8df8(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov004_020ce524;
extern M2C_UNK data_ov004_020cf968;
extern M2C_UNK data_ov004_020cf970;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd090(void) {
    func_ov004_020b8df8(&data_ov004_020cf970);
    M2C_FIELD(&data_ov004_020cf968, M2C_UNK **, 8) = &data_ov004_020ce524;
}
