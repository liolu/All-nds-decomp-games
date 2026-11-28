/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022dc0(M2C_UNK *);                   /* extern */
M2C_UNK func_02026244();                            /* extern */
M2C_UNK func_0202640c();                            /* extern */
extern s32 data_020ec790;
extern M2C_UNK data_020ec794;

void func_02025aec(void) {
    if (data_020ec790 != 0) {
        return;
    }
    data_020ec790 = 1;
    func_02022dc0(&data_020ec794);
    func_02026244();
    func_0202640c();
}
