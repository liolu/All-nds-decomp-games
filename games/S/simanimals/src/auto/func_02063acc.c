#include "m2c.h"

s32 func_02063c64(M2C_UNK);                         /* extern */
s32 func_02063d48(M2C_UNK);                         /* extern */
M2C_UNK func_02063df0(M2C_UNK, s32);                /* extern */
M2C_UNK func_02063e04(M2C_UNK, s32);                /* extern */
extern s32 data_0208e844;

void func_02063acc(void) {
    if (data_0208e844 != 0) {
        return;
    }
    data_0208e844 = 1;
    func_02063df0(0, func_02063c64(0));
    func_02063e04(0, func_02063d48(0));
    func_02063e04(2, 0);
    func_02063df0(2, 0);
    func_02063df0(3, func_02063c64(3));
    func_02063e04(3, func_02063d48(3));
    func_02063df0(4, func_02063c64(4));
    func_02063e04(4, func_02063d48(4));
    func_02063df0(5, func_02063c64(5));
    func_02063e04(5, func_02063d48(5));
    func_02063df0(6, func_02063c64(6));
    func_02063e04(6, func_02063d48(6));
}
