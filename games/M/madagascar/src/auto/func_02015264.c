/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200342c(s32, s32, M2C_UNK *);             /* extern */
s32 func_0200b6a4(s32, s32);                        /* extern */
M2C_UNK func_0200be28(M2C_UNK *);                   /* extern */
M2C_UNK func_0201624c(void *);                      /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
M2C_UNK func_0202cd90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202cdb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_0208234c;
extern s32 data_02082354;
extern M2C_UNK data_02082360;
extern M2C_UNK data_02082398;
extern M2C_UNK data_020d00a8;
extern s32 data_020d0228;
extern s32 data_020d022c;

void func_02015264(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r5;
    s32 var_r5_2;

    func_0200be28(&data_020d00a8);
    func_0202cdb8(2, 0, 1);
    M2C_FIELD(arg0, s8 *, 0xBE)  = 0;
    M2C_FIELD(arg0, s8 *, 0xBD)  = 1;
    M2C_FIELD(arg0, s16 *, 0xEA) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x25C);
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 0x25C);
    data_020d0228 += M2C_FIELD(arg0, s32 *, 0xD8);
    data_020d022c += M2C_FIELD(arg0, s32 *, 0xDC);
    func_0201624c(arg0);
    func_02024698(0);
    var_r5 = func_0207b068(0x28);
    if (var_r5 != 0) {
        temp_r0 = func_0207b068(0x40);
        var_r1  = temp_r0;
        if (var_r1 != 0) {
            var_r1 = func_0200b6a4(temp_r0, data_02082354);
        }
        var_r5 = func_0200342c(var_r5, var_r1, &data_02082360);
    }
    M2C_FIELD(arg0, s32 *, 0xE0) = var_r5;
    var_r5_2                     = func_0207b068(0x28);
    if (var_r5_2 != 0) {
        temp_r0_2 = func_0207b068(0x40);
        var_r1_2  = temp_r0_2;
        if (var_r1_2 != 0) {
            var_r1_2 = func_0200b6a4(temp_r0_2, data_0208234c);
        }
        var_r5_2 = func_0200342c(var_r5_2, var_r1_2, &data_02082398);
    }
    M2C_FIELD(arg0, s32 *, 0xE4) = var_r5_2;
    func_0202cd90(2, 1, 1);
}
