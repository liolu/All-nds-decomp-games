#include "m2c.h"

M2C_UNK func_020074b8(M2C_UNK, void *, M2C_UNK);    /* extern */
void *func_0207b9f4(M2C_UNK);                       /* extern */
u8 func_0207cbfc(void *);                           /* extern */
u8 func_0207cc5c(void *);                           /* extern */
u8 func_0207ce50();                                 /* extern */
s8 func_0207cee0(void *);                           /* extern */

u8 func_0207cb1c(s32 arg0) {
    void *temp_r4;

    temp_r4 = func_0207b9f4(0x10);
    switch (arg0) {                                 /* irregular */
        case 0:
            func_020074b8(0, temp_r4 + 0x300, 0x144);
            M2C_FIELD(temp_r4, u8 *, 0xD10) = func_0207cbfc(temp_r4);
            break;
        case 1:
            M2C_FIELD(temp_r4, u8 *, 0xD10) = func_0207ce50();
            M2C_FIELD(temp_r4, s8 *, 0xD0F) = func_0207cee0(temp_r4);
            break;
        case 2:
            func_020074b8(0, temp_r4 + 0x300, 0x144);
            M2C_FIELD(temp_r4, s8 *, 0xD0F) = 0;
            M2C_FIELD(temp_r4, u8 *, 0xD10) = func_0207cc5c(temp_r4);
            break;
    }
    return M2C_FIELD(temp_r4, u8 *, 0xD10);
}
