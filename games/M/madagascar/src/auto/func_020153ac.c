/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0200342c(void *, void *, M2C_UNK *);     /* extern */
void *func_0200b6a4(void *, s32);                   /* extern */
M2C_UNK func_0200be28(M2C_UNK *);                   /* extern */
M2C_UNK func_0201624c(void *);                      /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
M2C_UNK func_0202483c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02024ae4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0202cd90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202cdb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *func_0207b068(M2C_UNK);                       /* extern */
extern s32 data_02082340;
extern s32 data_0208234c;
extern s32 data_02082350;
extern s32 data_02082354;
extern M2C_UNK data_02082360;
extern M2C_UNK data_02082398;
extern M2C_UNK data_020d00a8;
extern s32 data_020d0228;
extern s32 data_020d022c;

void func_020153ac(void *arg0) {
    s32 temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;

    func_0200be28(&data_020d00a8);
    func_0202cdb8(2, 0, 1);
    M2C_FIELD(arg0, s8 *, 0xBD)  = 1;
    M2C_FIELD(arg0, s8 *, 0xBE)  = 1;
    M2C_FIELD(arg0, s16 *, 0xEA) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x25C);
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 0x25C);
    data_020d0228 += M2C_FIELD(arg0, s32 *, 0xD8);
    data_020d022c += M2C_FIELD(arg0, s32 *, 0xDC);
    func_0201624c(arg0);
    func_02024698(0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD8) - M2C_FIELD(arg0, s32 *, 0xDC);
    if (temp_r0 > 0) {
        var_r5 = func_0207b068(0x28);
        if (var_r5 != NULL) {
            temp_r0_2 = func_0207b068(0x40);
            var_r1    = temp_r0_2;
            if (var_r1 != NULL) {
                var_r1 = func_0200b6a4(temp_r0_2, data_02082350);
            }
            var_r5 = func_0200342c(var_r5, var_r1, &data_02082360);
        }
        M2C_FIELD(arg0, void **, 0xE0) = var_r5;
        var_r5_2                       = func_0207b068(0x28);
        if (var_r5_2 != NULL) {
            temp_r0_3 = func_0207b068(0x40);
            var_r1_2  = temp_r0_3;
            if (var_r1_2 != NULL) {
                var_r1_2 = func_0200b6a4(temp_r0_3, data_0208234c);
            }
            var_r5_2 = func_0200342c(var_r5_2, var_r1_2, &data_02082398);
        }
        M2C_FIELD(arg0, void **, 0xE4) = var_r5_2;
    } else if (temp_r0 == 0) {
        var_r5_3 = func_0207b068(0x28);
        if (var_r5_3 != NULL) {
            temp_r0_4 = func_0207b068(0x40);
            var_r1_3  = temp_r0_4;
            if (var_r1_3 != NULL) {
                var_r1_3 = func_0200b6a4(temp_r0_4, data_02082350);
            }
            var_r5_3 = func_0200342c(var_r5_3, var_r1_3, &data_02082360);
        }
        M2C_FIELD(arg0, void **, 0xE0) = var_r5_3;
        var_r5_4                       = func_0207b068(0x28);
        if (var_r5_4 != NULL) {
            temp_r0_5 = func_0207b068(0x40);
            var_r1_4  = temp_r0_5;
            if (var_r1_4 != NULL) {
                var_r1_4 = func_0200b6a4(temp_r0_5, data_02082340);
            }
            var_r5_4 = func_0200342c(var_r5_4, var_r1_4, &data_02082398);
        }
        M2C_FIELD(arg0, void **, 0xE4) = var_r5_4;
        func_02024ae4(M2C_FIELD(M2C_FIELD(arg0, void **, 0xE4), s32 *, 0x20), 0);
        func_0202483c(M2C_FIELD(M2C_FIELD(arg0, void **, 0xE4), s32 *, 0x20), 2);
    } else {
        var_r5_5 = func_0207b068(0x28);
        if (var_r5_5 != NULL) {
            temp_r0_6 = func_0207b068(0x40);
            var_r1_5  = temp_r0_6;
            if (var_r1_5 != NULL) {
                var_r1_5 = func_0200b6a4(temp_r0_6, data_02082354);
            }
            var_r5_5 = func_0200342c(var_r5_5, var_r1_5, &data_02082360);
        }
        M2C_FIELD(arg0, void **, 0xE0) = var_r5_5;
        var_r5_6                       = func_0207b068(0x28);
        if (var_r5_6 != NULL) {
            temp_r0_7 = func_0207b068(0x40);
            var_r1_6  = temp_r0_7;
            if (var_r1_6 != NULL) {
                var_r1_6 = func_0200b6a4(temp_r0_7, data_02082340);
            }
            var_r5_6 = func_0200342c(var_r5_6, var_r1_6, &data_02082398);
        }
        M2C_FIELD(arg0, void **, 0xE4) = var_r5_6;
        func_02024ae4(M2C_FIELD(M2C_FIELD(arg0, void **, 0xE4), s32 *, 0x20), 0);
        func_0202483c(M2C_FIELD(M2C_FIELD(arg0, void **, 0xE4), s32 *, 0x20), 2);
    }
    func_0202cd90(2, 1, 1);
}
