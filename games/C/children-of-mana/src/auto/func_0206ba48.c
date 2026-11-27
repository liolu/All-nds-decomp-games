/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205538c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020555ac(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02055940(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_021202cc;
extern M2C_UNK data_02120318;
extern M2C_UNK data_02120388;
extern M2C_UNK data_021203fc;
extern M2C_UNK data_0212042c;

void func_0206ba48(void) {
    func_0205538c(&data_02120388, &data_02120318, &data_021203fc);
    func_02055940(&data_021203fc, &data_021203fc, M2C_FIELD(&data_021202cc, s32 *, 0xEC),
                  M2C_FIELD(&data_021202cc, s32 *, 0xF0), M2C_FIELD(&data_021202cc, s32 *, 0xF4));
    func_020555ac(&data_021203fc, &data_0212042c);
}
