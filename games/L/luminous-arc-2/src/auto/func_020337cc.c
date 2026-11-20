#include "m2c.h"

M2C_UNK func_0202c68c();                            /* extern */
M2C_UNK func_0202c9ac();                            /* extern */
void *func_02032f64(u8, M2C_UNK);                   /* extern */
M2C_UNK func_02033c7c();                            /* extern */
M2C_UNK func_02033e00();                            /* extern */
M2C_UNK func_0203480c();                            /* extern */
extern M2C_UNK data_02181a4c;

void func_020337cc(void) {
    M2C_FIELD(func_02032f64(M2C_FIELD(&data_02181a4c, u8 *, 0x274), 0x1C), s8 *, 0xE) = 5;
    func_0203480c();
    func_0202c68c();
    func_0202c9ac();
    M2C_FIELD(&data_02181a4c, s8 *, 0x267) = 0;
    func_02033c7c();
    func_02033e00();
    M2C_FIELD(&data_02181a4c, s8 *, 0x260) = 9;
}
