#include "m2c.h"

M2C_UNK func_020293f8(void **);                     /* extern */
void *func_02029490();                              /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_02067190(void) {
    void *sp0;
    s16 temp_r1;
    void *temp_r0;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;

    temp_r0 = func_02029490();
    sp0     = temp_r0;
    temp_r1 = M2C_FIELD(temp_r0, s16 *, 0x26);
    switch (temp_r1) {                              /* irregular */
        case 0:
            temp_r1_2                         = M2C_FIELD(temp_r0, void **, 0x1C);
            M2C_FIELD(temp_r1_2, u16 *, 0x1E) = (u16) (M2C_FIELD(temp_r1_2, u16 *, 0x1E) + 2);
            temp_r1_3                         = M2C_FIELD(sp0, void **, 0x1C);
            if ((u32) M2C_FIELD(temp_r1_3, u16 *, 0x1E) < 0x1FU) {
                return;
            }
            M2C_FIELD(temp_r1_3, u16 *, 0x1E) = 0x1FU;
            M2C_FIELD(sp0, s16 *, 0x26)       = 1;
            return;
        case 1:
            M2C_FIELD(temp_r0, s16 *, 0x24) = (s16) (M2C_FIELD(temp_r0, s16 *, 0x24) + 1);
            if ((s32) M2C_FIELD(sp0, s16 *, 0x24) >= (s32) M2C_FIELD(sp0, s32 *, 0x20)) {
                M2C_FIELD(sp0, s16 *, 0x26) = 2;
            }
            return;
        case 2:
            temp_r1_4                         = M2C_FIELD(temp_r0, void **, 0x1C);
            M2C_FIELD(temp_r1_4, u16 *, 0x1E) = (u16) (M2C_FIELD(temp_r1_4, u16 *, 0x1E) - 3);
            if ((u32) M2C_FIELD(M2C_FIELD(sp0, void **, 0x1C), u16 *, 0x1E) >= 3U) {
                return;
            }
            func_0205e6a8(sp0 + 0x1C);
            M2C_FIELD(sp0, s16 *, 0x26) = 3;
            func_020293f8(&sp0);
            return;
    }
}
