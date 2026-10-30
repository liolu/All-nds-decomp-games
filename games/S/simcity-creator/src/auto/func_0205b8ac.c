#include "m2c.h"

M2C_UNK func_0205642c(s32, s8);                     /* extern */
s32 func_02071e38(s32);                             /* extern */
u32 func_02071e50(s32);                             /* extern */
M2C_UNK func_02071e60(s32, M2C_UNK);                /* extern */
s32 func_020b132c();                                /* extern */
extern M2C_UNK data_020cc864;

void func_0205b8ac(void *arg0) {
    if (func_020b132c() == 8) {
        return;
    }
    if (func_02071e38(M2C_FIELD(arg0, s32 *, 0x30)) == 0) {
        return;
    }
    if (func_02071e50(M2C_FIELD(arg0, s32 *, 0x30)) < 1U) {
        return;
    }
    func_0205642c(M2C_FIELD(arg0, s32 *, 0x44), ((s8 *) &data_020cc864)[func_02071e50(M2C_FIELD(arg0, s32 *, 0x30))]);
    func_02071e60(M2C_FIELD(arg0, s32 *, 0x30), 0);
}
