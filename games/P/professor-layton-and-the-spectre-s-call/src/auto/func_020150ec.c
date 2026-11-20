#include "m2c.h"

M2C_UNK func_02014c04(s32, void *);                 /* extern */
M2C_UNK func_02014ce4(void *);                      /* extern */
M2C_UNK func_020152cc(void *);                      /* extern */
M2C_UNK func_02015388();                            /* extern */
M2C_UNK func_020155fc();                            /* extern */
M2C_UNK func_0201562c();                            /* extern */
M2C_UNK func_02015abc(void *);                      /* extern */
M2C_UNK func_020176e4();                            /* extern */
extern M2C_UNK data_020349c4;

void func_020150ec(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_020349c4, void ***, 8);
    func_020155fc();
    func_02015abc(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02014c04(temp_r0, temp_r4);
    }
    func_02014ce4(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020152cc(temp_r4 + 0x9C);
    func_0201562c();
    func_02015388();
    func_020176e4();
}
