/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000d88();                            /* extern */
M2C_UNK func_02000dcc();                            /* extern */
M2C_UNK func_02000e60();                            /* extern */
M2C_UNK func_02001a88(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02002ee4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02002f1c();                            /* extern */
M2C_UNK func_02002f50();                            /* extern */
M2C_UNK func_02003014(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02003080(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02004fd0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200503c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02008f6c();                            /* extern */
M2C_UNK func_0200e9b4(void *);                      /* extern */
M2C_UNK func_0200e9b8(void *);                      /* extern */
M2C_UNK func_0200eb88(void *);                      /* extern */
M2C_UNK func_0200ed9c(void *);                      /* extern */
M2C_UNK func_0200ef94(void *);                      /* extern */
M2C_UNK func_02066ac0();                            /* extern */
M2C_UNK func_02066b54();                            /* extern */
M2C_UNK func_020673ac(M2C_UNK);                     /* extern */
M2C_UNK func_020674a0(M2C_UNK);                     /* extern */
M2C_UNK func_02068048();                            /* extern */
extern M2C_UNK data_020ce12c;
extern s32 data_0217ff60;
extern s32 data_0217ff64;

void func_0200e7bc(void *arg0, void *arg1) {
    s16 temp_r1;

    M2C_FIELD(&data_020ce12c, s16 *, 0x68) = 0;
    M2C_FIELD(&data_020ce12c, s16 *, 0x6E) = 0;
    M2C_FIELD(&data_020ce12c, s8 *, 0x6D)  = 0;
    M2C_FIELD(&data_020ce12c, s8 *, 1)     = 0;
    func_02000d88();
    M2C_FIELD(arg1, s8 *, 0x193) = (s8) M2C_FIELD(arg0, s16 *, 2);
    M2C_FIELD(arg1, u8 *, 0x194) = 1U;
    func_02066ac0();
    func_02068048();
    M2C_FIELD(arg1, s16 *, 0x2C5FC) = 0;
    if (M2C_FIELD(arg1, u8 *, 0x194) != 0) {
        func_02000dcc();
        func_02000e60();
        func_02002f50();
        func_02002f1c();
        func_02002ee4(0x20, 0x10);
        func_02008f6c();
        func_02001a88(0x021B0000, 0x1F0000, 0, 0);
    }
    func_0200ef94(arg1);
    temp_r1 = M2C_FIELD(arg0, s16 *, 2);
    if (temp_r1 != -1) {
        M2C_FIELD(&data_020ce12c, s8 *, 0x45) = (s8) temp_r1;
    }
    if (M2C_FIELD(arg0, s16 *, 0) != 0) {
        M2C_FIELD(arg1, s32 *, 0x28418) = 1;
    }
    M2C_FIELD(&data_020ce12c, s32 *, 0x2C) = 0;
    if (M2C_FIELD(&data_020ce12c, u8 *, 0x44) == 2) {
        M2C_FIELD(arg1, s8 *, 0x2B11A) = 0x3A;
    }
    if (M2C_FIELD(&data_020ce12c, u8 *, 0x44) == 3) {
        M2C_FIELD(arg1, s8 *, 0x2B11A) = 0x49;
    }
    if (M2C_FIELD(&data_020ce12c, u8 *, 0x44) == 4) {
        M2C_FIELD(arg1, s8 *, 0x2B11A) = 0x68;
    }
    *(u16 *) 0x04000304 &= ~0x8000;
    *(u16 *) 0x04000304 |= 0x8000;
    if (M2C_FIELD(arg1, u8 *, 0x194) != 0) {
        func_0200503c(0x10, 4);
        func_02003080(0x20, 0x100);
        func_02004fd0(0, 0);
        func_02003014(0, 0);
        func_020674a0(3);
        func_020673ac(0x40);
    }
    func_0200e9b8(arg1);
    func_0200ed9c(arg1);
    func_0200eb88(arg1);
    M2C_FIELD(arg1, s32 *, 0x19C) = (s32) data_0217ff64;
    M2C_FIELD(arg1, s32 *, 0x1A0) = (s32) data_0217ff60;
    func_0200e9b4(arg1);
    M2C_FIELD(&data_020ce12c, s8 *, 2) = 1;
    func_02066b54();
    *(s32 *) 0x04001000 |= 0x10000;
}
