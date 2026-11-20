/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003c80(void *);                      /* extern */
M2C_UNK func_02005880();                            /* extern */
M2C_UNK func_02027f68(void *);                      /* extern */
s32 func_0202c368(M2C_UNK);                         /* extern */
M2C_UNK func_0202cfa8(s32);                         /* extern */
s32 func_0202d12c(s32);                             /* extern */
s32 func_0202d144();                                /* extern */
M2C_UNK func_020539c8(s32, void *);                 /* extern */
void *func_02056650(s32);                           /* extern */
extern M2C_UNK data_020bfbe4;

void *func_020281d0(void *arg0, M2C_UNK arg1) {
    void *temp_r5;

    func_02005880();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfbe4;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = -1;
    func_02003c80(arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0202d144();
    M2C_FIELD(arg0, s32 *, 0x4C) = func_0202c368(arg1);
    func_0202cfa8(M2C_FIELD(arg0, s32 *, 0x4C));
    temp_r5 = func_02056650(M2C_FIELD(arg0, s32 *, 0x4C));
    func_020539c8(func_0202d12c(M2C_FIELD(arg0, s32 *, 0x14)),
                  temp_r5 + M2C_FIELD((temp_r5 + M2C_FIELD(temp_r5, u16 *, 0xE)), s32 *, 0xC));
    func_02027f68(arg0);
    return arg0;
}
