#include "m2c.h"

M2C_UNK func_02062d54(s32, void *);                 /* extern */
M2C_UNK func_02062e38(void *);                      /* extern */
M2C_UNK func_020632ec(void *);                      /* extern */
M2C_UNK func_020633a4();                            /* extern */
M2C_UNK func_02063568();                            /* extern */
M2C_UNK func_0206359c();                            /* extern */
M2C_UNK func_020638a8(void *);                      /* extern */
M2C_UNK func_02064c14();                            /* extern */
extern M2C_UNK data_0208e5c8;

void func_02063240(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0208e5c8, void ***, 8);
    func_02063568();
    func_020638a8(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02062d54(temp_r0, temp_r4);
    }
    func_02062e38(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020632ec(temp_r4 + 0x9C);
    func_0206359c();
    func_020633a4();
    func_02064c14();
}
