/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020facc0;
extern M2C_UNK data_020facdc;
extern void **data_021153ac;

void func_020117e4(void) {
    func_0200e8c8(&data_020facc0);
    if (data_021153ac != NULL) {
        if (data_021153ac != NULL) {
            M2C_FIELD(*data_021153ac, M2C_UNK(**)(), 4)(data_021153ac);
        }
        data_021153ac = NULL;
    }
    func_0200e8c8(&data_020facdc);
}
