/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02027fd0(void **, void *, s32, M2C_UNK); /* extern */
void **func_020281d0(void **, s32);                 /* extern */
M2C_UNK func_02028308(s32);                         /* extern */
void **func_0207b068(M2C_UNK);                      /* extern */
extern s32 data_020be724;
extern s32 data_020be728;
extern s32 data_020be72c;
extern s32 data_020be738;
extern s32 data_020be73c;
extern s32 data_020be744;

void func_0201a474(void *arg0, u32 arg1) {
    void **temp_r0;
    void **var_r0;
    void **var_r0_2;
    void **var_r0_3;

    func_02028308(M2C_FIELD(arg0, s32 *, 0x1C0));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1C8);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x1C8) = NULL;
    }
    switch (arg1) {
        case 0:
            break;
        default:
            break;
        case 1:
            var_r0 = func_0207b068(0x50);
            if (var_r0 != NULL) {
                var_r0 = func_020281d0(var_r0, data_020be744);
            }
            M2C_FIELD(arg0, void ***, 0x1C8) = var_r0;
            func_02027fd0(M2C_FIELD(arg0, void ***, 0x1C8), arg0 + 0xBC, data_020be738, 0);
            break;
        case 2:
            var_r0_2 = func_0207b068(0x50);
            if (var_r0_2 != NULL) {
                var_r0_2 = func_020281d0(var_r0_2, data_020be72c);
            }
            M2C_FIELD(arg0, void ***, 0x1C8) = var_r0_2;
            func_02027fd0(M2C_FIELD(arg0, void ***, 0x1C8), arg0 + 0xBC, data_020be724, 0);
            break;
        case 3:
            var_r0_3 = func_0207b068(0x50);
            if (var_r0_3 != NULL) {
                var_r0_3 = func_020281d0(var_r0_3, data_020be73c);
            }
            M2C_FIELD(arg0, void ***, 0x1C8) = var_r0_3;
            func_02027fd0(M2C_FIELD(arg0, void ***, 0x1C8), arg0 + 0xBC, data_020be728, 0);
            break;
    }
    M2C_FIELD(arg0, u32 *, 0x1C4) = arg1;
}
