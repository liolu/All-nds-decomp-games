/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063010(void *, M2C_UNK);             /* extern */
s32 func_0206b228();                                /* extern */
void *func_0206b244();                              /* extern */

u16 func_0206b714(void) {
    u16 temp_r0;
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_0206b244();
    if (func_0206b228() != 0) {
        return 0U;
    }
    func_02063010(M2C_FIELD(temp_r4, void **, 4), 2);
    temp_r2 = M2C_FIELD(temp_r4, void **, 4);
    temp_r0 = M2C_FIELD(temp_r2, u16 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 9:
            func_02063010(temp_r2 + 0x17E, 2);
            if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x17E) == 0) {
                return 0U;
            }
        case 10:
        case 11:
            func_02063010(M2C_FIELD(temp_r4, void **, 4) + 0xB8, 2);
            return M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0xB8);
        default:
            return 0U;
    }
}
