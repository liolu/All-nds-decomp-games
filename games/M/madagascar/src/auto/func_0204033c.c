/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203de10(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204031c(void *);                      /* extern */
extern s32 data_0208efe0;

void func_0204033c(void *arg0) {
    func_0203de10(arg0, 0x17);
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x28) > (s32) data_0208efe0) {
        return;
    }
    func_0204031c(arg0);
}
