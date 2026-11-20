#include "m2c.h"

s32 func_0200581c(M2C_UNK);                         /* extern */
s32 func_02005900(M2C_UNK);                         /* extern */
M2C_UNK func_020059a8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020059bc(M2C_UNK, s32);                /* extern */
extern s32 data_020d0ebc;

void func_02005684(void) {
    if (data_020d0ebc != 0) {
        return;
    }
    data_020d0ebc = 1;
    func_020059a8(0, func_0200581c(0));
    func_020059bc(0, func_02005900(0));
    func_020059bc(2, 0);
    func_020059a8(2, 0);
    func_020059a8(3, func_0200581c(3));
    func_020059bc(3, func_02005900(3));
    func_020059a8(4, func_0200581c(4));
    func_020059bc(4, func_02005900(4));
    func_020059a8(5, func_0200581c(5));
    func_020059bc(5, func_02005900(5));
    func_020059a8(6, func_0200581c(6));
    func_020059bc(6, func_02005900(6));
}
