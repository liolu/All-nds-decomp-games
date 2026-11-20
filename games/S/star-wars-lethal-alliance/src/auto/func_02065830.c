/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020657ec(s32);                         /* extern */
M2C_UNK func_02065d28(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_02065de0(void *);                      /* extern */
extern s32 data_020e6314;

void func_02065830(void *arg0, s32 arg1) {
    if (data_020e6314 != 0) {
        func_02065d28(arg0, func_020657ec);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_02065de0(arg0);
        return;
    }
    func_020657ec(arg1);
}
