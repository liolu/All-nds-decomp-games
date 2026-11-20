#include "m2c.h"

M2C_UNK func_0202eae0(void *);                      /* extern */
M2C_UNK func_0203a280(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0203a838(M2C_UNK);                     /* extern */
M2C_UNK func_0203a9f4(s32);                         /* extern */
s32 func_0203aa60();                                /* extern */
M2C_UNK func_0203fde8(void *);                      /* extern */
M2C_UNK func_0203fe00(void *);                      /* extern */

void func_0202ea6c(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_0203a280(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0203fde8(arg0 + 8);
        func_0203fe00(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_0203aa60();
        func_0203a838(1);
        func_0203a9f4(temp_r5);
    }
    func_0202eae0(arg0);
}
