#include "m2c.h"

M2C_UNK func_02067718(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02067bf0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02067c18(s32, M2C_UNK);                /* extern */
M2C_UNK func_02068234(s32);                         /* extern */
M2C_UNK func_02068260(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_02068370(s32, s32);                    /* extern */
M2C_UNK func_0206855c(s32);                         /* extern */
M2C_UNK func_02068a54(s32, M2C_UNK);                /* extern */
M2C_UNK func_02069074(s32, M2C_UNK);                /* extern */
s32 func_020692a4(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_020cd76c;

void func_020686f0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02068234(arg0 + 4);
    func_02068260(arg0 + 4, &data_020cd76c, func_020692a4(arg0, 0, 0));
    func_02067718(arg0 + 0xD0, arg1, 0, 0);
    func_02067c18(arg0 + 0xD0, arg2);
    func_02067bf0(arg0 + 0xD0, 0x68, 0x30);
    func_02068a54(arg0, 0);
    func_02069074(arg0, 0);
    func_02068370(arg0 + 4, arg0 + 0xD0);
    func_0206855c(arg0 + 4);
}
