/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202c368(M2C_UNK);                         /* extern */
s32 func_0202d12c(s32);                             /* extern */
M2C_UNK func_020537f8(s32, s32);                    /* extern */
M2C_UNK func_02053a30(s32, s32, void *, M2C_UNK);   /* extern */
s32 func_02056570(s32, s32, void *);                /* extern */
void *func_02056650(s32);                           /* extern */
s32 func_02056a28(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcf34;

void *func_02003f58(void *arg0, s32 arg1, void *arg2, M2C_UNK arg3) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r6;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcf34;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, void **, 8)    = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    M2C_FIELD(arg0, s8 *, 0x11)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = func_0202c368(arg3);
    temp_r5                        = func_02056a28(M2C_FIELD(arg0, s32 *, 0x14), 0);
    temp_r0                        = func_02056650(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x4C));
    temp_r6                        = temp_r0 + M2C_FIELD((temp_r0 + M2C_FIELD(temp_r0, u16 *, 0xE)), s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x18)   = func_02056570(M2C_FIELD(arg0, s32 *, 4), temp_r5, temp_r6);
    func_02053a30(M2C_FIELD(arg0, s32 *, 0x18), temp_r5, temp_r6, 0);
    func_020537f8(func_0202d12c(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x18));
    return arg0;
}
