#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02065efc(void *);                      /* extern */
M2C_UNK func_02065f38(void *);                      /* extern */
M2C_UNK func_02066204(void *);                      /* extern */
M2C_UNK func_020662cc(void *);                      /* extern */
M2C_UNK func_020663d0(void *);                      /* extern */
M2C_UNK func_0206655c(void *);                      /* extern */
M2C_UNK func_02066a1c(void *);                      /* extern */
M2C_UNK func_02066ec8(void *);                      /* extern */
M2C_UNK func_02067050(void *);                      /* extern */
M2C_UNK func_020676b0(void *);                      /* extern */
M2C_UNK func_020b771c(s32, void *, M2C_UNK *);      /* extern */

void func_02064f64(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp0;

    M2C_FIELD(arg0, s32 *, 0)     = arg1;
    M2C_FIELD(arg0, s32 *, 4)     = arg2;
    M2C_FIELD(arg0, s32 *, 8)     = arg3;
    M2C_FIELD(arg0, s32 *, 0x434) = -1;
    M2C_FIELD(arg0, s16 *, 0x43C) = 0;
    M2C_FIELD(arg0, s8 *, 0x439)  = 0;
    M2C_FIELD(arg0, s8 *, 0x438)  = 0;
    M2C_FIELD(arg0, s8 *, 0x43A)  = 0;
    M2C_FIELD(arg0, s8 *, 0x43B)  = 0;
    M2C_FIELD(arg0, s8 *, 0x474)  = 0;
    M2C_FIELD(arg0, s32 *, 0x424) = 0;
    M2C_FIELD(arg0, s32 *, 0x478) = 0;
    M2C_FIELD(arg0, s32 *, 0x47C) = 0;
    M2C_FIELD(arg0, s32 *, 0x480) = 0;
    M2C_FIELD(arg0, s32 *, 0x470) = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    func_02006ee8(arg0 + 0x440, 0, 0x10);
    func_02006ee8(arg0 + 0x450, 0, 0x10);
    func_02006ee8(arg0 + 0x584, 0, 3);
    func_02006ee8(arg0 + 0x460, 0, 0x10);
    func_02065efc(arg0);
    func_0206655c(arg0);
    func_02065f38(arg0);
    func_02066204(arg0);
    func_020662cc(arg0);
    func_020663d0(arg0);
    func_02067050(arg0);
    func_020676b0(arg0);
    func_02066a1c(arg0);
    func_02066ec8(arg0);
    func_020b771c(M2C_FIELD(arg0, s32 *, 8), arg0 + 0x430, &sp0);
}
