#include "m2c.h"

s32 func_02018a0c();                         /* extern */
s32 func_02018e00();                         /* extern */
M2C_UNK func_02018f6c();                            /* extern */

void func_02018d68(M2C_UNK arg0) {
    if (func_02018e00() != 0) {
        return;
    }
    do {

    } while (func_02018a0c(0) != 0);
    if (func_02018e00(arg0) != 0) {
        return;
    }
    func_02018f6c();
    if (func_02018e00(arg0) != 0) {
        return;
    }
    do {
        func_02018a0c(1);
    } while (func_02018e00(arg0) == 0);
}
