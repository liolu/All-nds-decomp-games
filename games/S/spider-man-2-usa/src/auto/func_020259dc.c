/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4(void *, M2C_UNK *);           /* extern */
s32 func_01ffb0f0(void *);                          /* extern */
M2C_UNK func_020245c0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0202461c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0202aa30(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0207a4b0;

void func_020259dc(void *arg0) {
    func_0202461c(arg0, 1, 1, 0);
    func_020245c0(arg0, 1, 0);
    func_0202aa30(arg0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x398) = func_01ffb0f0(arg0);
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    M2C_FIELD(arg0, s32 *, 0x28C) = 3;
    func_01ff93d4(arg0, &data_0207a4b0);
}
