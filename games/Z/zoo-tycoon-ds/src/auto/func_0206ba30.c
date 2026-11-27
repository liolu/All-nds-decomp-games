/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206a3f0(M2C_UNK *);                   /* extern */
M2C_UNK func_0206c11c();                            /* extern */
M2C_UNK func_0206c2b4();                            /* extern */
extern s32 data_021849a8;
extern M2C_UNK data_021849ac;

void func_0206ba30(void) {
    if (data_021849a8 != 0) {
        return;
    }
    data_021849a8 = 1;
    func_0206a3f0(&data_021849ac);
    func_0206c11c();
    func_0206c2b4();
}
