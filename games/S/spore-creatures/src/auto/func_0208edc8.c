#include "m2c.h"

M2C_UNK func_0208ee1c();                            /* extern */
M2C_UNK func_020914e4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020b7a30();                            /* extern */
M2C_UNK func_020b7a4c();                            /* extern */
s32 func_020be7f0();                                /* extern */
M2C_UNK func_020bed18(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e707c;
extern M2C_UNK data_020e7090;
extern s32 data_027e05e8;
extern M2C_UNK func_0208f0b8;

void func_0208edc8(void) {
    func_020bed18(&func_0208f0b8);
    data_027e05e8 |= 0x40;
    func_020b7a30();
    M2C_FIELD(&data_020e707c, s32 *, 4) = func_020be7f0();
    func_020b7a4c();
    func_020914e4(&data_020e7090, 5);
    func_0208ee1c();
}
