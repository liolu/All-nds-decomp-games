/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200fa5c(s16);                         /* extern */
void *func_0201381c();                              /* extern */

void func_02077744(void *arg0) {
    void *temp_r0;

    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x14));
    temp_r0                                             = func_0201381c();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 2)    = (s16) M2C_FIELD(temp_r0, s16 *, 8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0)    = (s16) M2C_FIELD(temp_r0, s16 *, 0xA);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4)    = (s32) M2C_FIELD(temp_r0, s8 *, 0xC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8)    = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC)  = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x14));
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x14) = (s32) (func_0201381c() + 0x10);
}
