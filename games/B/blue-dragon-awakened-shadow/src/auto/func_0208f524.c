/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 *func_0207d4a4(M2C_UNK);                        /* extern */
M2C_UNK func_0207d4cc();                            /* extern */
extern M2C_UNK data_02164ee4;

s32 func_0208f524(void *arg0) {
    s32 *temp_r0;

    if (M2C_FIELD(&data_02164ee4, s32 **, 0xC) != NULL) {
        func_0207d4cc();
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        M2C_FIELD(&data_02164ee4, s32 **, 0xC) = NULL;
    } else {
        temp_r0                                                    = func_0207d4a4(8);
        M2C_FIELD(&data_02164ee4, s32 **, 0xC)                     = temp_r0;
        *temp_r0                                                   = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(M2C_FIELD(&data_02164ee4, s32 **, 0xC), s8 *, 6) = (s8) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(M2C_FIELD(&data_02164ee4, s32 **, 0xC), s8 *, 7) = (s8) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(M2C_FIELD(&data_02164ee4, s32 **, 0xC), s8 *, 4) = 0;
        M2C_FIELD(M2C_FIELD(&data_02164ee4, s32 **, 0xC), s8 *, 5) = 0;
    }
    return 0;
}
