/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020326fc();                                /* extern */
M2C_UNK func_0203a574(void *);                      /* extern */
extern s32 data_0208eff0;

void func_0203a2d4(void *arg0) {
    if ((func_020326fc() == 0) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x28) <= (s32) data_0208eff0)) {
        return;
    }
    func_0203a574(arg0);
}
