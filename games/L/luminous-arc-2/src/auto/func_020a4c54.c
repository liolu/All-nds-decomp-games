#include "m2c.h"

M2C_UNK func_02083a28();                            /* extern */
M2C_UNK func_02086cd8(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020a4b24(void *);                      /* extern */
extern M2C_UNK data_0217296c;
extern M2C_UNK func_020a50c0;

void func_020a4c54(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r0;

    if (arg0 != 0) {
        temp_r0 = M2C_FIELD(arg2, u8 *, 0x77B);
        if ((((u32) temp_r0 < 0x27U) || ((u32) temp_r0 > 0x30U)) && (temp_r0 != 0x23)) {
            func_020a4b24(arg2);
            M2C_FIELD(arg2, u8 *, 0x77B) = 0x27U;
            return;
        }
        func_02083a28();
        return;
    }
    if (arg1 != 0) {
        M2C_FIELD(&data_0217296c, s32 *, 0xE84) = 1;
    }
    M2C_FIELD(arg2, u8 *, 0x77B) = 0x17U;
    func_02086cd8(&func_020a50c0, arg2);
}
