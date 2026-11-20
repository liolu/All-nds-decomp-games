/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020484b4(M2C_UNK *);                       /* extern */
M2C_UNK func_02073864(void *, M2C_UNK *, s32);      /* extern */
s32 func_02075b54(void *);                          /* extern */
extern M2C_UNK data_0208ea04;
extern M2C_UNK data_020bdbdc;

void func_0200f74c(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 0)  = 0;
    M2C_FIELD(arg1, s32 *, 4) = -1;
    func_02073864(arg1 + 0xC, &data_020bdbdc, func_020484b4(&data_0208ea04));
    M2C_FIELD(arg1, s32 *, 8) = func_02075b54(arg1 + 0xC);
}
