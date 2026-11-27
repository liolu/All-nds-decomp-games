/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02028d28(void *, s32);                 /* extern */
M2C_UNK func_02028e30(void *, s32);                 /* extern */
void *func_02089c18(s32);                           /* extern */
s16 func_0208f638();                                /* extern */

void func_0208dcc4(void *arg0) {
    void *temp_r2;
    void *temp_r5;

    func_02001cc8(M2C_FIELD(arg0, void **, 0x1C), 0, M2C_FIELD(arg0, s32 *, 0x20) * 0x14);
    temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14);
    func_02001cc8(M2C_FIELD(temp_r2, void **, 0x14), 0, M2C_FIELD(temp_r2, s32 *, 0x10));
    func_02001cc8(arg0 + 0x70, 0, 0x150);
    func_02028d28(arg0 + 0x70, M2C_FIELD(arg0, s32 *, 4));
    temp_r5 = func_02089c18(M2C_FIELD(arg0, s32 *, 0x14));
    func_02001cc8(arg0 + 0x28, 0, 0x40);
    func_02028e30(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, void **, 0x2C) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14);
    M2C_FIELD(arg0, s32 *, 0x30)   = (s32) M2C_FIELD(temp_r5, s32 *, 4);
    M2C_FIELD(arg0, s16 *, 0x3C)   = func_0208f638();
    M2C_FIELD(arg0, s16 *, 0x3E)   = (s16) M2C_FIELD(temp_r5, s16 *, 0);
    M2C_FIELD(arg0, s8 *, 0x1D8)   = 1;
}
