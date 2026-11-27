/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202863c(void *, s32, s16, M2C_UNK);   /* extern */
u8 func_020290ec(s32, M2C_UNK);                     /* extern */
M2C_UNK func_02029688(void *, s32, s16, M2C_UNK);   /* extern */
M2C_UNK func_0203fd2c(void *, u8);                  /* extern */
M2C_UNK func_0203fe28(void *, void *);              /* extern */
void *func_02089c18(s32);                           /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_0208e278(void *arg0) {
    s32 temp_r2;
    void *temp_r0;

    func_0209304c(2);
    func_0202863c(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s16 *, 0x3C), 0);
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
    temp_r0                       = func_02089c18(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, u8 *, 0x62)   = func_020290ec(M2C_FIELD(M2C_FIELD(temp_r0, void **, 4), s32 *, 0xC), 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 8) = (s32) (M2C_FIELD(arg0, u8 *, 0x62) << 5);
    func_02029688(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(temp_r0, s16 *, 0), 0);
    temp_r2                     = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg0, u8 *, 0x61) = (u8) ((s32) (temp_r2 + ((u32) (temp_r2 >> 4) >> 0x1B)) >> 5);
    func_0203fd2c(arg0 + 0x70, M2C_FIELD(arg0, u8 *, 0x61));
    func_0203fe28(arg0 + 0x28, arg0 + 0x70);
}
