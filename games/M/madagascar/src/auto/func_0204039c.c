/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203de10(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204037c(void *);                      /* extern */
extern s32 data_0208efe4;

void func_0204039c(void *arg0) {
    func_0203de10(arg0, 0x17);
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x28) > (s32) data_0208efe4) {
        return;
    }
    func_0204037c(arg0);
}
