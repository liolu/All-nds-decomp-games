#include "m2c.h"

M2C_UNK func_0203a594(u8);                          /* extern */
M2C_UNK func_0203a60c(M2C_UNK);                     /* extern */
M2C_UNK func_0203a7b0();                            /* extern */
M2C_UNK func_0203a830();                            /* extern */
M2C_UNK func_0203a8cc();                            /* extern */
M2C_UNK func_0203bcfc();                            /* extern */
M2C_UNK func_0203bec0();                            /* extern */
M2C_UNK func_0203eee4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f0b8();                            /* extern */
M2C_UNK func_0203f234();                            /* extern */
M2C_UNK func_02041ee8();                            /* extern */
M2C_UNK func_ov002_021d90d4();                      /* extern */
M2C_UNK func_ov002_021d945c();                      /* extern */
extern M2C_UNK data_02151514;
extern M2C_UNK data_02151570;
extern u8 data_02158048;
extern u8 data_02158050;
extern M2C_UNK data_02175a4c;
extern M2C_UNK func_0203aed4;
extern M2C_UNK func_0203bbd8;
extern M2C_UNK func_0203cab0;
extern M2C_UNK func_0203eba8;
extern M2C_UNK func_0203ef18;
extern M2C_UNK func_020cf958;

void func_02038c54(void) {
    func_ov002_021d90d4();
    func_ov002_021d945c();
    func_0203a594((u8) (data_02158050 - 1));
    func_0203a60c(0);
    func_0203a7b0();
    func_0203a8cc();
    func_0203a830();
    func_0203bec0();
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
    data_02158048 += 1;
}
