/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022244(s32);                         /* extern */
M2C_UNK func_0202286c(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_02022924(void *);                      /* extern */
extern s32 data_020ec368;

void func_02022288(void *arg0, s32 arg1) {
    if (data_020ec368 != 0) {
        func_0202286c(arg0, func_02022244);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_02022924(arg0);
        return;
    }
    func_02022244(arg1);
}
