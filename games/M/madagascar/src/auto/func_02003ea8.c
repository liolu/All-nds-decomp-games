/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202c2b8(s32);                         /* extern */
s32 func_0202d12c(s32);                             /* extern */
M2C_UNK func_0205371c(s32, s32);                    /* extern */
M2C_UNK func_02056564(s32, s32);                    /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcf34;

void *func_02003ea8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcf34;
    func_0205371c(func_0202d12c(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x18));
    func_02056564(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x18));
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
