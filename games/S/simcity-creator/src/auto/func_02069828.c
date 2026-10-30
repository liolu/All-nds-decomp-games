#include "m2c.h"

M2C_UNK func_02054b18(s32);                         /* extern */
M2C_UNK func_0205a38c(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0205a6c8(s32);                         /* extern */
M2C_UNK func_0205f034(s32);                         /* extern */
M2C_UNK func_0205f9f4(s32);                         /* extern */
M2C_UNK func_02063b54(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_020698f0(M2C_UNK);                     /* extern */
M2C_UNK func_0206990c(void *);                      /* extern */
M2C_UNK func_0206b0fc();                            /* extern */
M2C_UNK func_0206b138(void *);                      /* extern */
M2C_UNK func_0206b254(void *);                      /* extern */
M2C_UNK func_0206b358(void *);                      /* extern */
M2C_UNK func_0206b4b4(void *);                      /* extern */
M2C_UNK func_0206bd44(s32);                         /* extern */
M2C_UNK func_02073644(s32, M2C_UNK);                /* extern */
M2C_UNK func_02073b2c(s32, M2C_UNK);                /* extern */

void func_02069828(void *arg0) {
    func_0206b0fc();
    func_0206b138(arg0);
    func_0206b254(arg0);
    func_0206b4b4(arg0);
    func_0205a38c(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(arg0, s32 *, 0x14));
    func_0205a6c8(M2C_FIELD(arg0, s32 *, 0xC));
    func_02063b54(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1C),
                  M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x20));
    func_0206bd44(M2C_FIELD(arg0, s32 *, 4));
    func_02073644(M2C_FIELD(arg0, s32 *, 0x1C), 1);
    func_0205f034(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0xCC) = 7;
    func_0206b358(arg0);
    func_0206990c(arg0);
    func_02073b2c(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    func_020698f0(1);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    func_02054b18(M2C_FIELD(arg0, s32 *, 0x14));
    func_0205f9f4(M2C_FIELD(arg0, s32 *, 0x10));
}
