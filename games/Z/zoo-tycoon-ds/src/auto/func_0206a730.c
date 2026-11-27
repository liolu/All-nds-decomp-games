/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206a064();                                /* extern */
M2C_UNK func_0206a4f8(M2C_UNK, s32);                /* extern */
M2C_UNK func_0206a50c(M2C_UNK, s32);                /* extern */
s32 func_0206a520(M2C_UNK);                         /* extern */
s32 func_0206a608(M2C_UNK);                         /* extern */
M2C_UNK func_0206a8f0(s32);                         /* extern */
extern s32 data_021848fc;

void func_0206a730(void) {
    func_0206a50c(2, func_0206a608(2));
    func_0206a4f8(2, func_0206a520(2));
    if ((data_021848fc != 0) && ((func_0206a064() & 3) != 1)) {
        return;
    }
    func_0206a8f0(0x0200002B);
}
