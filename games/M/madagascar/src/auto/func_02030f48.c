/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020310a8(void *);                      /* extern */
s32 func_020326fc();                                /* extern */
extern s32 data_0208eff0;

void func_02030f48(void *arg0) {
    if ((func_020326fc() == 0) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x28) <= (s32) data_0208eff0)) {
        return;
    }
    func_020310a8(arg0);
}
