/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020012bc(s32);                             /* extern */
M2C_UNK func_0200182c(s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02001b64(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_02001c70(s32);                         /* extern */
s32 func_02001cbc();                                /* extern */
M2C_UNK func_020189b0(M2C_UNK *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02018c1c(M2C_UNK *);                   /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */
s32 func_0202c3d4(M2C_UNK *);                       /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bf200;
extern M2C_UNK data_020d1d30;

void func_02023258(void *arg0) {
    s32 temp_r5;
    s32 var_r4;

    if (M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        return;
    }
    temp_r5 = func_0202c3d4(&data_020bf200);
    var_r4  = func_0207b068(0x2BC);
    if (var_r4 != 0) {
        var_r4 = func_02001cbc();
    }
    func_02001b64(var_r4, func_020012bc(temp_r5), 0x0620C000, 0x100);
    func_0200182c(var_r4, arg0 + 0x74, 0x06200000, 0x100);
    if (var_r4 != 0) {
        func_02001c70(var_r4);
        func_0207b040(var_r4);
    }
    func_0202c2b8(temp_r5);
    func_02018c1c(&data_020d1d30);
    func_020189b0(&data_020d1d30, arg0 + 0x74, 0, 0x10);
}
