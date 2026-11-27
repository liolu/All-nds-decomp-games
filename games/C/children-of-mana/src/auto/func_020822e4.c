/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021005f8;
extern M2C_UNK data_02100ddc;
extern void **data_021266c4;

void func_020822e4(void) {
    func_0200e8c8(&data_02100ddc, &data_021005f8);
    if (data_021266c4 == NULL) {
        return;
    }
    if (data_021266c4 != NULL) {
        M2C_FIELD(*data_021266c4, M2C_UNK(**)(), 4)(data_021266c4);
    }
    data_021266c4 = NULL;
}
