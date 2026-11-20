#include "m2c.h"

M2C_UNK func_0203a594(u8);                          /* extern */
M2C_UNK func_0203a60c(M2C_UNK);                     /* extern */
M2C_UNK func_0203a7b0();                            /* extern */
M2C_UNK func_0203bcfc();                            /* extern */
M2C_UNK func_0203bec0();                            /* extern */
M2C_UNK func_0203eee4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f0b8();                            /* extern */
M2C_UNK func_0203f234();                            /* extern */
M2C_UNK func_02041ee8();                            /* extern */
M2C_UNK func_0204bd20();                            /* extern */
M2C_UNK func_0204cdec();                            /* extern */
M2C_UNK func_0204d098();                            /* extern */
M2C_UNK func_0204d130();                            /* extern */
M2C_UNK func_0204d18c();                            /* extern */
s32 func_020c8664();                                /* extern */
extern M2C_UNK data_02151514;
extern M2C_UNK data_02151570;
extern u8 data_02158050;
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_0217b34c;
extern M2C_UNK func_0203aed4;
extern M2C_UNK func_0203bbd8;
extern M2C_UNK func_0203cab0;
extern M2C_UNK func_0203eba8;
extern M2C_UNK func_0203ef18;
extern M2C_UNK func_0204e374;
extern M2C_UNK func_020cf958;

void func_0204da2c(void) {
    func_0203a594((u8) (data_02158050 - 1));
    func_0203a60c(1);
    if (func_020c8664() != 0) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x6A) = 0;
        func_0203eee4(1, 0x200);
        M2C_FIELD(&data_02151570, M2C_UNK **, 8) = &func_0203ef18;
    }
    func_0203a7b0();
    if (func_020c8664() != 0) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x6A) = 0;
        func_0203eee4(1, 0x200);
        M2C_FIELD(&data_02151570, M2C_UNK **, 8) = &func_0203ef18;
    }
    func_0203bec0();
    func_0204d098();
    func_0204d130();
    func_0203bcfc();
    func_0203f0b8();
    func_0203f234();
    func_02041ee8();
    M2C_FIELD(&data_02175a4c, M2C_UNK **, 0x1A0) = &func_0203bbd8;
    M2C_FIELD(&data_02175a4c, M2C_UNK **, 0x1A4) = &func_0203cab0;
    M2C_FIELD(&data_02175a4c, M2C_UNK **, 0x1A8) = &func_0203eba8;
    M2C_FIELD(&data_02151570, M2C_UNK **, 0x1C)  = &func_020cf958;
    func_0203eee4(1, 0xB);
    M2C_FIELD(&data_02151570, M2C_UNK **, 8) = &func_0203ef18;
    M2C_FIELD(&data_02151514, M2C_UNK **, 4) = &func_0203aed4;
    func_0203eee4(1, 0x80);
    func_0204cdec();
    func_0204d18c();
    func_0204bd20();
    M2C_FIELD(&data_02175a4c, M2C_UNK **, 0x1AC) = &func_0204e374;
}
