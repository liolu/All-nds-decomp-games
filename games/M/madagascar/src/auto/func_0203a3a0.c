/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0203a878(M2C_UNK);

extern s32 data_0208eff0;

void func_0203a3a0(s32 arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x28) <= (s32) data_0208eff0) {
        return;
    }
    func_0203a878(arg0);
}
