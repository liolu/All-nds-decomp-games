/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001dfc(); /* extern */
s16 func_0200fc98(); /* extern */
M2C_UNK func_0205bba4();                    /* extern */
extern M2C_UNK data_02101ef0;

void func_0208a040(void *arg0, M2C_UNK arg1) {
    u8 sp4[132];
    void *temp_r1;

    func_02001dfc(sp4, &data_02101ef0, arg1);
    M2C_FIELD(arg0, s16 *, 0x50) = func_0200fc98(sp4, 1, 5, arg0 + 0x54, 0);
    temp_r1                      = M2C_FIELD(arg0, void **, 0x54);
    func_0205bba4(M2C_FIELD(temp_r1, s32 *, 0xC), M2C_FIELD(temp_r1, s32 *, 8));
}
