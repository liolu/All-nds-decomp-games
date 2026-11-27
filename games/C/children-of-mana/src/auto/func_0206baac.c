/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020555ac(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021202cc;
extern M2C_UNK data_02120318;
extern M2C_UNK data_021203cc;

M2C_UNK *func_0206baac(void) {
    if (!(M2C_FIELD(&data_021202cc, s32 *, 0xFC) & 8)) {
        func_020555ac(&data_02120318, &data_021203cc);
        M2C_FIELD(&data_021202cc, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021202cc, s32 *, 0xFC) | 8);
    }
    return &data_021203cc;
}
