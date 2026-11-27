/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064104(s32 *);                       /* extern */
M2C_UNK func_02064154(s32 *, M2C_UNK);              /* extern */
extern s32 data_020fe260;

void func_0200176c(void) {
    if (data_020fe260 == 0) {
        return;
    }
    func_02064154(&data_020fe260, 4);
    func_02064104(&data_020fe260);
}
