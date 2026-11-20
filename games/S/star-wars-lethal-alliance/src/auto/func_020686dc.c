/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206627c(M2C_UNK *);                   /* extern */
M2C_UNK func_02068e34();                            /* extern */
M2C_UNK func_02068ffc();                            /* extern */
extern s32 data_020e6684;
extern M2C_UNK data_020e6688;

void func_020686dc(void) {
    if (data_020e6684 != 0) {
        return;
    }
    data_020e6684 = 1;
    func_0206627c(&data_020e6688);
    func_02068e34();
    func_02068ffc();
}
