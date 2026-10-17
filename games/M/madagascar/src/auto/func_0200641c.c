/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010438(M2C_UNK);                     /* extern */
void **func_02016d24(void **, void *, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32); /* extern */
s32 func_02017bfc();                                /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
M2C_UNK func_020322a4(M2C_UNK);                     /* extern */
void *func_02038668();                              /* extern */
M2C_UNK func_020386c4(s32, s32);                    /* extern */
s32 func_02038c6c();                                /* extern */
void **func_0207b068(M2C_UNK);                      /* extern */
extern M2C_UNK data_0207fafc;
extern M2C_UNK data_0207fb08;
extern s32 data_020d01f0;
extern s32 data_020d01f4;

void func_0200641c(void ***arg0) {
    s32 temp_r4;
    void **temp_r0;
    void **var_r0;
    void *temp_r1;
    void *temp_r4_2;

    temp_r4 = func_02038c6c();
    func_020386c4(temp_r4, func_02017bfc());
    func_02038c6c();
    temp_r4_2 = func_02038668();
    var_r0    = func_0207b068(0xEC);
    if (var_r0 != NULL) {
        temp_r1 = M2C_FIELD(temp_r4_2, void **, 0);
        var_r0  = func_02016d24(var_r0, temp_r1, &data_0207fb08, &data_0207fafc, M2C_FIELD(temp_r1, s32 *, 0x14),
                                M2C_FIELD(temp_r1, s32 *, 0x10), 0, data_020d01f0, data_020d01f4);
    }
    *arg0 = var_r0;
    func_02010438(0);
    func_02024698(0);
    temp_r0 = *arg0;
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x18)(temp_r0, M2C_FIELD(temp_r4_2, s32 *, 8));
    func_020322a4(0);
}
