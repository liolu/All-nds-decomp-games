/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0200f2c4();                            /* extern */

void func_0208db7c(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x14), s32 *, 0x14) != 0) {
        func_0200e0f8();
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14), s32 *, 0x14) = 0;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14) != NULL) {
        func_0200f2c4();
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x24) == NULL) {
        return;
    }
    func_0200f2c4();
    M2C_FIELD(arg0, void **, 0x24) = NULL;
}
