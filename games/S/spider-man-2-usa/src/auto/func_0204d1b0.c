/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a570(s32);                         /* extern */
M2C_UNK func_02059f64(s32);                         /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */

void *func_0204d1b0(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;

    if (M2C_FIELD(arg0, u8 *, 0xB0) != 0) {
        func_0204a570(M2C_FIELD(arg0, s32 *, 0xAC));
    }
    if (M2C_FIELD(arg0, u8 *, 0xB8) != 0) {
        func_0204a570(M2C_FIELD(arg0, s32 *, 0xB4));
    }
    func_0204a570(M2C_FIELD(arg0, s32 *, 0x98));
    temp_r4 = M2C_FIELD(arg0, void **, 0);
    if (temp_r4 != NULL) {
        func_02059f64(M2C_FIELD(temp_r4, s32 *, 4));
        func_02059f70(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x40);
    if (temp_r4_2 != NULL) {
        func_02059f64(M2C_FIELD(temp_r4_2, s32 *, 4));
        func_02059f70(temp_r4_2);
    }
    return arg0;
}
