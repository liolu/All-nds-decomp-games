/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202863c(void *, s32, s16, M2C_UNK);   /* extern */
M2C_UNK func_02029688(void *, s32, s16, M2C_UNK);   /* extern */
M2C_UNK func_020401f0(void *, void *);              /* extern */
M2C_UNK func_020402cc(void *, void *);              /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_0208eadc(void *arg0) {
    func_0209304c(2);
    func_0202863c(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s16 *, 0x3C), 0);
    func_02029688(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s16 *, 0x3E), 0);
    func_020402cc(arg0 + 0x28, arg0 + 0x134);
    func_020401f0(arg0 + 0x28, arg0 + 0x158);
}
