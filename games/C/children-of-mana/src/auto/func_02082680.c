/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s8);    /* extern */
s8 func_020121b4(void *, M2C_UNK);                  /* extern */
M2C_UNK func_0204f82c(M2C_UNK, s8);                 /* extern */
M2C_UNK func_0204f8a4(M2C_UNK, s8, M2C_UNK, M2C_UNK); /* extern */
s32 func_0204f9b8(M2C_UNK, s8, M2C_UNK);            /* extern */
M2C_UNK func_02050894(void **, M2C_UNK, M2C_UNK, s8); /* extern */
void *func_020aac90();                              /* extern */
M2C_UNK func_020ac780(s32, M2C_UNK, s8, s32);       /* extern */
s32 func_020ae36c(s32);                             /* extern */
extern M2C_UNK data_021004d8;
extern M2C_UNK data_02100e6c;

void func_02082680(void *arg0) {
    void *sp0;
    s8 temp_r0;
    void *temp_r4;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100e6c, &data_021004d8, temp_r0);
    if ((func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)) != 0) && (M2C_FIELD(arg0, s32 *, 0x33C) == 1)) {
        return;
    }
    func_02050894(&sp0, 0, 2, temp_r0);
    temp_r4 = func_020aac90();
    if (func_0204f9b8(2, temp_r0, 1) != 0) {
        func_0204f8a4(2, temp_r0, 1, 1);
    }
    if (M2C_FIELD((temp_r4 + M2C_FIELD(sp0, s32 *, 4)), u8 *, 0x438) != 0) {
        return;
    }
    func_0204f82c(2, temp_r0);
    M2C_FIELD((temp_r4 + M2C_FIELD(sp0, s32 *, 4)), s8 *, 0x438) = temp_r0;
    if (M2C_FIELD(temp_r4, s8 *, 0x40F) != -1) {
        return;
    }
    func_020ac780(M2C_FIELD(arg0, s32 *, 0x300), 0, M2C_FIELD(temp_r4, s8 *, 0x40E), M2C_FIELD(sp0, s32 *, 4));
}
