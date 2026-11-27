/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_0201c2e4(void *);
void func_0208f948(M2C_UNK, M2C_UNK);

void func_02036dd8(s32 arg0, s32 arg1) {
    void *temp_r0;

    func_0208f948(M2C_FIELD(arg0, s32 *, 0x1C8), arg1);
    temp_r0 = M2C_FIELD(arg0, void **, 0x634);
    if (temp_r0 == NULL) {
        return;
    }
    func_0208f948(func_0201c2e4(temp_r0), arg1);
}
