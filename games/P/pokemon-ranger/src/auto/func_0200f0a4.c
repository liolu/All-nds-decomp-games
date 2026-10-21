#include "m2c.h"

M2C_UNK func_02004204(void *);                      /* extern */
M2C_UNK func_02005530(void *);                      /* extern */
M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_02012574(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */

void func_0200f0a4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 0x37;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 3);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601) = 0;
    func_02005530(arg0);
    M2C_FIELD(arg0, s8 *, 0x600) = 1;
    func_02004204(arg0);
    func_02012574(arg0);
}
