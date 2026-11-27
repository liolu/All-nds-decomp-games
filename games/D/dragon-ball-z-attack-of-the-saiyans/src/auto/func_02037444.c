#include "m2c.h"

M2C_UNK func_0200b94c(M2C_UNK);                     /* extern */
M2C_UNK func_0200b974(M2C_UNK);                     /* extern */
M2C_UNK func_0200b99c(s16);                         /* extern */
M2C_UNK func_0200bab0(s16);                         /* extern */
extern M2C_UNK data_020cc620;

void func_02037444(s16 arg0) {
    func_0200b974(0);
    func_0200b99c(arg0);
    func_0200bab0(arg0);
    func_0200b94c(1);
    func_0200b94c(2);
    M2C_FIELD(&data_020cc620, s16 *, 0xA2) = (s16) M2C_FIELD(&data_020cc620, s16 *, 0xA0);
    M2C_FIELD(&data_020cc620, s16 *, 0xA0) = arg0;
    M2C_FIELD(&data_020cc620, s8 *, 0xA4)  = 0;
}
