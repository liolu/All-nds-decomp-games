/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6418(void *);                      /* extern */
M2C_UNK func_020c6d4c(void *, void *);              /* extern */
s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */
extern M2C_UNK data_020f699c;

void func_020c6ea4(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_020c8070();
    temp_r7 = M2C_FIELD(&data_020f699c, void **, 8);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 4) = temp_r7;
        M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        func_020c6d4c(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x78) = arg0;
        func_020c6418(arg0);
        M2C_FIELD(temp_r7, void **, 0x78) = NULL;
        goto loop_1;
    }
    func_020c8084(temp_r4);
}
