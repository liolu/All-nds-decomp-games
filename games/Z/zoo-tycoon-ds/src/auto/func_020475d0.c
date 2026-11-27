/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002e88();                            /* extern */
M2C_UNK func_02002ec8();                            /* extern */
M2C_UNK func_02002f00();                            /* extern */
M2C_UNK func_020055d4(void *);                      /* extern */
M2C_UNK func_02047634(void *);                      /* extern */
M2C_UNK func_0204789c(void *);                      /* extern */
extern u16 data_020ce124;

void func_020475d0(s32 arg0, void *arg1) {
    func_02002ec8();
    func_02002e88();
    func_02002f00();
    if ((M2C_FIELD(arg1, u8 *, 0xB2) == 0) && ((s32) M2C_FIELD(arg1, s16 *, 0xB0) >= 3)) {
        if (data_020ce124 & 1) {
            M2C_FIELD(arg1, u8 *, 0xB2) = 1U;
        }
        func_02047634(arg1);
    }
    func_020055d4(arg1);
    func_0204789c(arg1);
}
