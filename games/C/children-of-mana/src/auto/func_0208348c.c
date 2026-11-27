/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();    /* extern */
M2C_UNK func_02012178();             /* extern */
s32 func_020121b4();                 /* extern */
M2C_UNK func_0204f8a4();  /* extern */
s32 func_0204f9b8();               /* extern */
s32 func_0204fa68();               /* extern */
void *func_020aac90();                              /* extern */
s32 func_020ae36c();                             /* extern */
extern M2C_UNK data_02101098;
extern M2C_UNK data_021010ac;
extern M2C_UNK data_021010c0;
extern M2C_UNK data_021010c8;
extern M2C_UNK data_021010e0;

void func_0208348c(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    void *temp_r0_2;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101098, temp_r5, temp_r0);
    if ((func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)) != 0) && (M2C_FIELD(arg0, s32 *, 0x33C) == 1)) {
        func_02012178(arg0, 0);
        return;
    }
    if (temp_r5 == 0) {
        temp_r0_2 = func_020aac90();
        func_0200e8c8(&data_021010ac, M2C_FIELD(temp_r0_2, s32 *, 0x28));
        M2C_FIELD(temp_r0_2, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 0x28) + temp_r0);
        if ((s32) M2C_FIELD(temp_r0_2, s32 *, 0x28) > 0xF423F) {
            M2C_FIELD(temp_r0_2, s32 *, 0x28) = 0xF423F;
            func_02012178(arg0, 0);
        } else {
            func_02012178(arg0, 1);
        }
        func_0200e8c8(&data_021010c0, M2C_FIELD(temp_r0_2, s32 *, 0x28));
        return;
    }
    func_0200e8c8(&data_021010c8, temp_r5, temp_r0, func_0204fa68(temp_r5, temp_r0, 0));
    if (func_0204f9b8(temp_r5, temp_r0, 1) != 0) {
        func_0204f8a4(temp_r5, temp_r0, 1, 1);
        func_02012178(arg0, 1);
    } else {
        func_02012178(arg0, 0);
    }
    func_0200e8c8(&data_021010e0, func_0204fa68(temp_r5, temp_r0, 0));
}
