/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_0201c538();                            /* extern */
s32 func_0201cb08();                                /* extern */
M2C_UNK func_0201cb50();                            /* extern */
M2C_UNK func_0201cf88(s32, s32);                    /* extern */
M2C_UNK func_0201d350(s32, s32);                    /* extern */
M2C_UNK func_020215ac();                            /* extern */
M2C_UNK func_0204bfa8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02053114();                            /* extern */
s32 func_0205369c();                                /* extern */
s32 func_020537f8();                                /* extern */
M2C_UNK func_020538fc();                            /* extern */
M2C_UNK func_020ae68c(s32, s32);                    /* extern */
s32 *func_ov015_02171944(M2C_UNK);                  /* extern */

void func_0204ba48(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r6;
    s32 temp_r6_2;

    if (M2C_FIELD(arg0, s32 *, 0x37FD4) == 0) {
        func_ov015_02171944(arg1);
        temp_r6 = func_020537f8();
        func_0201d350(temp_r6, *func_ov015_02171944(arg1));
        func_ov015_02171944(arg1);
        func_020537f8();
        func_020215ac();
        func_0201cb50();
        temp_r0 = func_0201cb08();
        if (temp_r0 == 0) {
            func_ov015_02171944(arg1);
            temp_r6_2 = func_020537f8();
            func_ov015_02171944(arg1);
            func_0201cf88(temp_r6_2, func_0205369c());
        } else if (temp_r0 == 3) {
            func_0204bfa8(arg0, 0x16);
        }
    }
    temp_r1                         = M2C_FIELD(arg0, s32 *, 0x37FD4) + 1;
    M2C_FIELD(arg0, s32 *, 0x37FD4) = temp_r1;
    if (temp_r1 <= 0x78) {
        return;
    }
    func_ov015_02171944(arg1);
    func_020ae68c(func_0205369c(), 0x100A);
    M2C_FIELD(arg0, s32 *, 0x37FD4) = 0;
    func_0204bfa8(arg0, 0x16);
    func_0201c538();
    func_02053114();
    func_020538fc();
}
