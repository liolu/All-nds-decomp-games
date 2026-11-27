/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028e30(void *, M2C_UNK);             /* extern */
M2C_UNK func_02077434(void *);                      /* extern */
M2C_UNK func_020775e0(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020776bc(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02109208;
extern M2C_UNK data_02109210;

s32 func_020bdca0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        return 1;
    }
    func_02028e30(arg0 + 0xF8, 2);
    func_020776bc(arg0 + 0xF8, &data_02109208, 0, 1);
    func_020775e0(arg0 + 0xF8, &data_02109210, 0, 1);
    func_02077434(arg0 + 0xF8);
    M2C_FIELD(arg0, u8 *, 0xC) = 1U;
    return 1;
}
