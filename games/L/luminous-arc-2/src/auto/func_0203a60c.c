#include "m2c.h"

M2C_UNK func_02001964(M2C_UNK);                     /* extern */
M2C_UNK func_02001bf4(M2C_UNK);                     /* extern */
M2C_UNK func_02001d44(M2C_UNK);                     /* extern */
M2C_UNK func_020023b0(M2C_UNK);                     /* extern */
M2C_UNK func_02002458(M2C_UNK);                     /* extern */
M2C_UNK func_0200266c();                            /* extern */
M2C_UNK func_02002680();                            /* extern */
M2C_UNK func_02002694();                            /* extern */
M2C_UNK func_020483bc();                            /* extern */
M2C_UNK func_020c985c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c9b30(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cc554(M2C_UNK);                     /* extern */
M2C_UNK func_020cd2fc();                            /* extern */
M2C_UNK func_020cd324();                            /* extern */
M2C_UNK func_020cf43c();                            /* extern */
M2C_UNK func_020cf474(M2C_UNK);                     /* extern */
extern s32 data_02175a48;

void func_0203a60c(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_020cf43c();
            func_020023b0(4);
            func_02002458(8);
            func_020cc554(3);
            func_020cc3fc(0, 0x80, 3);
            break;
        case 1:
            func_020cf474(1);
            func_0200266c();
            func_02002680();
            func_02002694();
            func_020cc554(1);
            func_020cc3fc(0, 0x80, 1);
            break;
    }
    func_02001964(1);
    func_02001bf4(0x10);
    func_02001d44(0x40);
    func_020c985c(2, 2);
    func_020483bc();
    data_02175a48 = func_020c9b30(0x100, 0);
    func_020cd2fc();
    func_020cd324();
    func_020cc554(3);
}
