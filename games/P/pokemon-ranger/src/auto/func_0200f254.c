#include "m2c.h"

M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_02010184(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */

void func_0200f254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 9;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 0x12);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601) = 0;
    M2C_FIELD(arg0, s8 *, 0x600) = 1;
    func_02010184(arg0);
}
