/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202811c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0202908c(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0206afc4(s32, void *);                 /* extern */
M2C_UNK func_0206eb48(s32);                         /* extern */
void *func_0206efbc(s32);                           /* extern */
s32 func_0206effc(s32);                             /* extern */
s32 func_0207b6a4(void *, s16);                     /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */
extern void *data_0211756c;

void func_0203f20c(void *arg0) {
    void *temp_r4;

    func_0209304c(1);
    temp_r4                          = M2C_FIELD(arg0, void **, 0x80);
    M2C_FIELD(temp_r4, void **, 0xC) = func_0206efbc(M2C_FIELD(temp_r4, s32 *, 4));
    if (func_0207b6a4(data_0211756c, M2C_FIELD(temp_r4, s16 *, 0x16)) == 0) {
        func_0206eb48(M2C_FIELD(temp_r4, s32 *, 4));
        func_0202811c(2, ((u32) (M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 8) & 0x7FFF0000) >> 0x10) * 0x10);
        func_0202908c(2, 0, ((u32) (M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 0x2C) & ~0xFFFF) >> 0x10) * 8);
    }
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) M2C_FIELD(data_0211756c, s32 *, 8);
    func_0206afc4(func_0206effc(M2C_FIELD(temp_r4, s32 *, 0)), M2C_FIELD(temp_r4, void **, 0xC));
}
