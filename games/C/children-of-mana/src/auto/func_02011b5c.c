/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
M2C_UNK func_020117e4();                            /* extern */
M2C_UNK func_02011a54();                            /* extern */
extern M2C_UNK data_020fadc0;
extern M2C_UNK data_020faddc;
extern void **data_021153a4;

void func_02011b5c(void) {
    func_0200e8c8(&data_020fadc0);
    func_020117e4();
    func_02011a54();
    if (data_021153a4 != NULL) {
        if (data_021153a4 != NULL) {
            M2C_FIELD(*data_021153a4, M2C_UNK(**)(), 4)(data_021153a4);
        }
        data_021153a4 = NULL;
    }
    func_0200e8c8(&data_020faddc);
}
