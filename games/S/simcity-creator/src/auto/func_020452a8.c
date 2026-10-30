#include "m2c.h"

M2C_UNK func_02043ccc();                            /* extern */
s32 func_02044430();                                /* extern */
M2C_UNK func_020449d8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02044b90();                            /* extern */
M2C_UNK func_02044ddc(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020dd620;

void func_020452a8(void *arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0x470) = 2;
    if (M2C_FIELD(&data_020dd620, s32 *, 0xC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x464) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x460) >= (s32) M2C_FIELD(arg0, s32 *, 0x484)) {
        M2C_FIELD(arg0, s32 *, 0x464) = -2;
    } else if (M2C_FIELD(arg0, s32 *, 0x474) != 0) {
        M2C_FIELD(arg0, s32 *, 0x464) = -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x464) == 0) {
        return;
    }
    if (func_02044430() == 2) {
        func_02043ccc();
        return;
    }
    if (func_02044430() != 1) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x464);
    switch (temp_r1) {                              /* irregular */
        case 1:
            func_020449d8(5, M2C_FIELD(&data_020dd620, s32 *, 8));
            func_02044ddc(arg0, 6);
            return;
        case -1:
            func_02044b90();
            func_02044ddc(arg0, 0xD);
            return;
        case -2:
            func_02044b90();
            func_02044ddc(arg0, 7);
            return;
    }
}
