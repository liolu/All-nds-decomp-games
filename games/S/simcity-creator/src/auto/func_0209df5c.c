#include "m2c.h"

M2C_UNK func_020230d0(M2C_UNK *);                   /* extern */
M2C_UNK func_020230f4(M2C_UNK *);                   /* extern */
M2C_UNK func_0202312c(M2C_UNK *, M2C_UNK *, s32 *, M2C_UNK, s32); /* extern */
s32 func_020953d0(s32);                             /* extern */
s32 func_020953d8(s32);                             /* extern */
M2C_UNK func_02095404(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209542c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020cf21c;
extern M2C_UNK data_020cf240;
extern M2C_UNK data_020cf260;
extern M2C_UNK data_020cf284;

void func_0209df5c(void *arg0) {
    u8 sp8[88];
    s32 sp4;

    func_020230d0(sp8);
    *(s32 *) 0x04001000 &= 0xFFCFFFEF;
    func_02095404(M2C_FIELD(arg0, s32 *, 0x18), 1);
    func_0209542c(M2C_FIELD(arg0, s32 *, 0x18), 0);
    sp4 = func_020953d0(M2C_FIELD(arg0, s32 *, 0x18));
    func_0202312c(sp8, &data_020cf21c, &sp4, 0x20, 0x200);
    sp4 += 0x80;
    func_0202312c(sp8, &data_020cf240, &sp4, 0x20, 0x80);
    sp4 = func_020953d8(M2C_FIELD(arg0, s32 *, 0x18));
    func_0202312c(sp8, &data_020cf260, &sp4, 0x24, 0x2000);
    sp4 += 0x2000;
    func_0202312c(sp8, &data_020cf284, &sp4, 0x24, 0x2000);
    func_020230f4(sp8);
}
