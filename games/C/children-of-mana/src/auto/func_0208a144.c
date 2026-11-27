/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200fa5c(s16);                         /* extern */
s16 func_0200ff08(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void *func_0201381c();                              /* extern */

void func_0208a144(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s16 *, 0) = func_0200ff08(arg1, 1, arg2, 0);
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0));
    M2C_FIELD(arg0, void **, 4) = func_0201381c();
    M2C_FIELD(arg0, void **, 8) = (void *) (M2C_FIELD(arg0, void **, 4) + 0x1C);
    M2C_FIELD(arg0, s32 *, 0xC) =
        (s32) ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) * 0xA) + (s32) M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, s8 *, 0x25C) = 1;
}
