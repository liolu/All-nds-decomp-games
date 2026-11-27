/* Reconstructed from USA ARM9 at 0x020d27ec (132 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

M2C_UNK func_020b5230(void *);                      /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
M2C_UNK func_020b9068(void *, s32);                 /* extern */
s32 func_020b9ca0(void *);                          /* extern */
M2C_UNK func_020b9eb4();                            /* extern */

void func_020ba6e0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r5;

    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x100) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        void *p;

        p                                     = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x100);
        func_020b9068(p, arg1);
        if (func_020b9ca0(arg0) == 0) {
            return;
        }
        func_020b9eb4();
        return;
    }
    temp_r5                                  = M2C_FIELD(arg0, void **, 0x24);
    temp_r0                                  = func_020b6bd0();
    M2C_FIELD(temp_r5, volatile s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x1C)    = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x200);
    func_020b5230(arg0 + 0xC);
    func_020b6be4(temp_r0);
}
