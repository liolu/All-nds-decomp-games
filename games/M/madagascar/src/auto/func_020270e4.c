/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0200342c(void *, void *, M2C_UNK *);     /* extern */
void *func_0200b6a4(void *, s32);                   /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
M2C_UNK func_0202483c(s32, M2C_UNK);                /* extern */
void *func_02024f60(void *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_020266c4(void *);                      /* extern */
M2C_UNK func_02026720(void *);                      /* extern */
M2C_UNK func_02026dbc(void *);                      /* extern */
M2C_UNK func_02026e00(void *);                      /* extern */
M2C_UNK func_02026e74(void *);                      /* extern */
M2C_UNK func_02026f08(void *);                      /* extern */
s32 func_020484b4(M2C_UNK *);                       /* extern */
void *func_0207b068(M2C_UNK);                       /* extern */
extern s32 data_02082858;
extern s32 data_0208285c;
extern M2C_UNK data_02082860;
extern M2C_UNK data_02082868;
extern M2C_UNK data_02082870;
extern M2C_UNK data_0208ea58;
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf998;
extern M2C_UNK data_020bfbd8;
extern M2C_UNK data_020d0760;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void *func_020270e4(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;
    void *var_r1;
    void *var_r1_2;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;

    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_020bf998;
    M2C_FIELD(arg0, s32 *, 4)       = arg1;
    M2C_FIELD(arg0, s32 *, 8)       = 0;
    M2C_FIELD(arg0, s32 *, 0xC)     = 0;
    M2C_FIELD(arg0, s32 *, 0x10)    = 0;
    temp_r3                         = arg0 + 0x20;
    *(M2C_S12 *) ((s8 *) arg0 + 32) = *(M2C_S12 *) ((s8 *) arg2 + 0);

    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x30)  = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0x3C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x50)  = 0;
    func_02026f08(arg0);
    func_02026e74(arg0);
    func_02026720(arg0);
    func_020266c4(arg0);
    var_r5 = func_0207b068(0x128);
    if (var_r5 != NULL) {
        var_r5 = func_02024f60(var_r5, func_020484b4(&data_0208ea58), &data_02082868, &data_020d0760, &data_020bfbd8, 0);
    }
    M2C_FIELD(arg0, void **, 0x14) = var_r5;
    func_02024698(1);
    var_r5_2 = func_0207b068(0x28);
    if (var_r5_2 != NULL) {
        temp_r0 = func_0207b068(0x40);
        var_r1  = temp_r0;
        if (var_r1 != NULL) {
            var_r1 = func_0200b6a4(temp_r0, data_0208285c);
        }
        var_r5_2 = func_0200342c(var_r5_2, var_r1, &data_02082870);
    }
    M2C_FIELD(arg0, void **, 0x1C) = var_r5_2;
    func_0202483c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x20), 2);
    func_02024698(0);
    var_r5_3 = func_0207b068(0x28);
    if (var_r5_3 != NULL) {
        temp_r0_2 = func_0207b068(0x40);
        var_r1_2  = temp_r0_2;
        if (var_r1_2 != NULL) {
            var_r1_2 = func_0200b6a4(temp_r0_2, data_02082858);
        }
        var_r5_3 = func_0200342c(var_r5_3, var_r1_2, &data_02082860);
    }
    M2C_FIELD(arg0, void **, 0x18) = var_r5_3;
    func_0202483c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x20), 2);
    M2C_FIELD(arg0, s8 *, 0x50) = 1;
    temp_r0_3                   = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0_3) {                            /* irregular */
        case 0:
            func_02026e00(arg0);
            break;
        case 1:
            func_02026dbc(arg0);
            break;
    }
    return arg0;
}
