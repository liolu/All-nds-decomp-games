/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fad70;
extern M2C_UNK data_020fad84;
extern void **data_021153a8;

void func_02011a54(void) {
    func_0200e8c8(&data_020fad70);
    if (data_021153a8 != NULL) {
        if (data_021153a8 != NULL) {
            M2C_FIELD(*data_021153a8, M2C_UNK(**)(), 4)(data_021153a8);
        }
        data_021153a8 = NULL;
    }
    func_0200e8c8(&data_020fad84);
}
