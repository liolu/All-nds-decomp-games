/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e90(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02002760(void *);                      /* extern */
s32 func_02003ba0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02003ca8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201bf9c(void *);                      /* extern */
void *func_02025b48(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
void *func_02025d34(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
void *func_02026544(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02027fd0(void *, s32, s32, M2C_UNK);   /* extern */
void *func_020281d0(void *, s32);                   /* extern */
M2C_UNK func_0202c368(s32);                         /* extern */
M2C_UNK func_0203bca4(void *);                      /* extern */
void *func_0207b068(M2C_UNK);                       /* extern */
extern M2C_UNK data_0208251c;
extern M2C_UNK data_02082524;
extern M2C_UNK data_02082530;
extern M2C_UNK data_020bcd20;
extern s32 data_020be964;
extern s32 data_020be968;
extern s32 data_020be96c;
extern s32 data_020be970;
extern s32 data_020be974;
extern s32 data_020be978;
extern s32 data_020be980;
extern s32 data_020be984;
extern s32 data_020be988;
extern s32 data_020be98c;
extern s32 data_020be990;
extern M2C_UNK data_020be9ac;
extern M2C_UNK data_020be9b8;
extern M2C_UNK data_020be9c4;
extern M2C_UNK data_020beb24;

void *func_0201d3e4(void *arg0, s32 arg1) {
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r6;
    void *temp_r1;
    void *temp_r2;
    void *var_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r0_7;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020beb24;
    M2C_FIELD(arg0, void **, 4)    = NULL;
    M2C_FIELD(arg0, void **, 0xC)  = NULL;
    M2C_FIELD(arg0, s32 *, 0x18)   = arg1;
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
    M2C_FIELD(arg0, void **, 0x20) = NULL;
    M2C_FIELD(arg0, void **, 0x24) = NULL;
    M2C_FIELD(arg0, void **, 0x28) = NULL;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    func_0203bca4(arg0 + 0x44);
    M2C_FIELD(arg0, s16 *, 0x90) = 0x7FFF;
    M2C_FIELD(arg0, s16 *, 0x92) = 0x7FFF;
    M2C_FIELD(arg0, s16 *, 0x94) = 0x7FFF;
    M2C_FIELD(arg0, s16 *, 0x96) = 0;
    M2C_FIELD(arg0, s16 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s8 *, 0xAC)  = 0;
    func_0202c368(data_020be970);
    func_0202c368(data_020be990);
    func_0202c368(data_020be98c);
    func_0202c368(data_020be964);
    func_0202c368(data_020be974);
    func_0202c368(data_020be978);
    func_0202c368(data_020be980);
    func_0202c368(data_020be988);
    func_0202c368(data_020be96c);
    func_0202c368(data_020be968);
    func_0202c368(data_020be984);
    var_r0 = func_0207b068(0x50);
    if (var_r0 != NULL) {
        var_r0 = func_020281d0(var_r0, data_020be970);
    }
    M2C_FIELD(arg0, void **, 0x1C) = var_r0;
    func_02027fd0(M2C_FIELD(arg0, void **, 0x1C), M2C_FIELD(arg0, s32 *, 0x18), data_020be990, 3);
    temp_r2                        = M2C_FIELD(arg0, void **, 0x1C);
    temp_r6                        = M2C_FIELD(&data_02082530, s32 *, 0);
    M2C_FIELD(temp_r2, s32 *, 4)   = temp_r6;
    temp_r5                        = M2C_FIELD(&data_02082530, s32 *, 4);
    M2C_FIELD(temp_r2, s32 *, 8)   = temp_r5;
    temp_r4                        = M2C_FIELD(&data_02082530, s32 *, 8);
    M2C_FIELD(temp_r2, s32 *, 0xC) = temp_r4;
    var_r0_2                       = func_0207b068(0x50);
    if (var_r0_2 != NULL) {
        var_r0_2 = func_020281d0(var_r0_2, data_020be964);
    }
    M2C_FIELD(arg0, void **, 0x20) = var_r0_2;
    func_02027fd0(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x18), data_020be980, 2);
    func_02003ca8(func_02003ba0(M2C_FIELD(arg0, void **, 0x20) + 0x18, 0), 0);
    func_02027fd0(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x18), data_020be974, 3);
    temp_r1                        = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(temp_r1, s32 *, 4)   = temp_r6;
    M2C_FIELD(temp_r1, s32 *, 8)   = temp_r5;
    M2C_FIELD(temp_r1, s32 *, 0xC) = temp_r4;
    var_r0_3                       = func_0207b068(0x50);
    if (var_r0_3 != NULL) {
        var_r0_3 = func_020281d0(var_r0_3, data_020be96c);
    }
    M2C_FIELD(arg0, void **, 0x24) = var_r0_3;
    var_r0_4                       = func_0207b068(0x50);
    if (var_r0_4 != NULL) {
        var_r0_4 = func_020281d0(var_r0_4, data_020be968);
    }
    M2C_FIELD(arg0, void **, 0x28) = var_r0_4;
    func_0201bf9c(arg0);
    func_02000e90(arg0 + 0x78, &data_02082524);
    var_r0_5 = func_0207b068(0x24);
    if (var_r0_5 != NULL) {
        var_r0_5 = func_02025b48(var_r0_5, &data_020be9ac, 0, 0, 0x100, 0xC0);
    }
    M2C_FIELD(arg0, void **, 4) = var_r0_5;
    var_r0_6                    = func_0207b068(0x30);
    if (var_r0_6 != NULL) {
        var_r0_6 = func_02025d34(var_r0_6, &data_020be9b8, 0, 0, 0x100, 0xC0, 8, 8);
    }
    M2C_FIELD(arg0, void **, 8) = var_r0_6;
    var_r0_7                    = func_0207b068(0x1C);
    if (var_r0_7 != NULL) {
        var_r0_7 = func_02026544(var_r0_7, &data_020be9c4, 0, 0, 0x100, 0xC0);
    }
    M2C_FIELD(arg0, void **, 0xC) = var_r0_7;
    M2C_FIELD(arg0, s32 *, 0x10)  = (s32) M2C_FIELD(&data_0208251c, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14)  = (s32) M2C_FIELD(&data_0208251c, s32 *, 4);
    func_02002760(arg0);
    return arg0;
}
