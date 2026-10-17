/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e50(void *, s32);                 /* extern */
M2C_UNK func_0202f478(void *);                      /* extern */
s32 func_020326ac(void *);                          /* extern */
s32 func_020326d4(void *);                          /* extern */
void *func_020372d4();                              /* extern */

void func_02030808(void *arg0, s32 arg1) {
    s32 var_r4;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void *temp_r6;

    temp_r6 = func_020372d4();
    var_r4  = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x18);
    if (var_r4 < 0) {
        var_r4 = 0 - var_r4;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1EC) != 0xB) && ((func_020326d4(arg0) != 0) || (func_020326ac(arg0) != 0))) {
        func_0202f478(arg0);
        return;
    }
    if (arg1 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x174) < (s32) M2C_FIELD(temp_r6, s32 *, 0x174)) {
            func_02000e50(M2C_FIELD(arg0, void **, 0x1BC) + 4, var_r4);
            temp_r0 = M2C_FIELD(arg0, void ***, 0x1C4);
            M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xC)(temp_r0, 0);
            return;
        }
        func_02000e50(M2C_FIELD(arg0, void **, 0x1BC) + 4, 0 - var_r4);
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x1C4);
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0xC)(temp_r0_2, 1);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x174) > (s32) M2C_FIELD(temp_r6, s32 *, 0x174)) {
        func_02000e50(M2C_FIELD(arg0, void **, 0x1BC) + 4, var_r4);
        temp_r0_3 = M2C_FIELD(arg0, void ***, 0x1C4);
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0xC)(temp_r0_3, 1);
        return;
    }
    func_02000e50(M2C_FIELD(arg0, void **, 0x1BC) + 4, 0 - var_r4);
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x1C4);
    M2C_FIELD(*temp_r0_4, M2C_UNK(**)(void **, M2C_UNK), 0xC)(temp_r0_4, 0);
}
