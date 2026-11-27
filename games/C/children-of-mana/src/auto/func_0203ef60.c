/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202811c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0202908c(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0206e9bc(s32);                         /* extern */
s32 func_0207b614(s32, s16, s32);                   /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */
extern s32 data_0211756c;

void func_0203ef60(void *arg0) {
    void *temp_r4;

    func_0209304c(1);
    temp_r4 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r4 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r4, s32 *, 4) == 0) {
        return;
    }
    if (func_0207b614(data_0211756c, M2C_FIELD(temp_r4, s16 *, 0x16), M2C_FIELD(temp_r4, s32 *, 0x18)) == 0) {
        return;
    }
    func_0202811c(2, 0 - (((u32) (M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 8) & 0x7FFF0000) >> 0x10) * 0x10));
    func_0202908c(2, 0, 0 - (((u32) (M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 0x2C) & ~0xFFFF) >> 0x10) * 8));
    func_0206e9bc(M2C_FIELD(temp_r4, s32 *, 4));
}
