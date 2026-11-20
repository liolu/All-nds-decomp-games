/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74(void *);                      /* extern */
M2C_UNK func_02007ab0(void *);                      /* extern */
s32 func_02012224(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_0202cd90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202cdb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bd1fc;

void func_0200694c(void *arg0, s32 arg1, void *arg2) {
    s32 var_r0;

    M2C_FIELD(&data_020bd1fc, s32 *, 8)    = arg1;
    M2C_FIELD(&data_020bd1fc, s32 *, 0xC)  = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(&data_020bd1fc, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(&data_020bd1fc, s32 *, 0x14) = (s32) M2C_FIELD(arg2, s32 *, 8);
    func_0202cdb8(2, 0, 1);
    func_02007a74(arg0);
    func_02007ab0(arg0);
    var_r0 = func_0207b068(0x1C);
    if (var_r0 != 0) {
        var_r0 = func_02012224(var_r0, &data_020bd1fc);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 0x10;
    func_0202cd90(2, 1, 1);
}
