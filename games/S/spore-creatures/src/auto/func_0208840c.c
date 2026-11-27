#include "m2c.h"

M2C_UNK func_02084a40();                            /* extern */
M2C_UNK func_0208589c(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02086938(M2C_UNK);                     /* extern */
M2C_UNK func_02086c68(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02088560(M2C_UNK);                     /* extern */
M2C_UNK func_02088588(M2C_UNK);                     /* extern */
M2C_UNK func_020885d0(M2C_UNK);                     /* extern */
M2C_UNK func_02088600(M2C_UNK);                     /* extern */
extern M2C_UNK data_020dfd24;
extern M2C_UNK data_020e69c0;
extern M2C_UNK data_020e69cc;

void func_0208840c(void) {
    func_02084a40();
    M2C_FIELD(&data_020e69c0, s32 *, 0xB4) = 0x18;
    func_0208589c(&data_020e69cc, &data_020dfd24, 0, 0);
    func_02086938(2);
    func_02088560(0x7F);
    func_02088588(0x7F);
    func_020885d0(0x7F);
    func_02088600(0x7F);
    func_02086c68(0xA, 2);
}
