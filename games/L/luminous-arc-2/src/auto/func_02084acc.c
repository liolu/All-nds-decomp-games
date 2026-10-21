#include "m2c.h"

M2C_UNK func_0208631c();                            /* extern */
M2C_UNK func_02087570();                            /* extern */
M2C_UNK func_02088450();                            /* extern */
M2C_UNK func_02088464();                            /* extern */
M2C_UNK func_02088660();                            /* extern */
M2C_UNK func_0208ab70();                            /* extern */
M2C_UNK func_02091324();                            /* extern */
M2C_UNK func_020ac790(void *);                      /* extern */
M2C_UNK func_020ac7ac(void *);                      /* extern */
M2C_UNK func_020ac7e0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b9ad4();                            /* extern */
M2C_UNK func_020bb8d0();                            /* extern */
M2C_UNK func_020c0488();                            /* extern */
M2C_UNK func_020a7370();                            /* extern */
extern void *data_02170354;

void func_02084acc(void) {
    if (data_02170354 == NULL) {
        return;
    }
    if (M2C_FIELD(data_02170354, s32 *, 0x388) != 0) {
        func_020c0488();
        M2C_FIELD(data_02170354, s32 *, 0x388) = 0;
    }
    M2C_FIELD(data_02170354, s8 *, 0x390) = 0;
    if (M2C_FIELD(data_02170354, s32 *, 0x45C) != 0) {
        func_020a7370();
        M2C_FIELD(data_02170354, s32 *, 0x45C) = 0;
    }
    func_02088660();
    func_02088450();
    func_020b9ad4();
    func_02088464();
    if (M2C_FIELD(data_02170354, s32 *, 0x1C) != 0) {
        func_020ac7e0(data_02170354 + 0x1C, 0, 0, 0);
        func_020ac7e0(data_02170354 + 0x1C, 3, 0, 0);
        func_020ac7e0(data_02170354 + 0x1C, 1, 0, 0);
        func_020ac7e0(data_02170354 + 0x1C, 2, 0, 0);
        func_020ac7ac(data_02170354 + 0x1C);
        func_020ac790(data_02170354 + 0x1C);
        M2C_FIELD(data_02170354, s32 *, 0x1C) = 0;
    }
    func_0208631c();
    func_02087570();
    func_0208ab70();
    func_02091324();
    if (M2C_FIELD(data_02170354, s32 *, 0) != 0) {
        func_020bb8d0();
        M2C_FIELD(data_02170354, s32 *, 0) = 0;
    }
    data_02170354 = NULL;
}
