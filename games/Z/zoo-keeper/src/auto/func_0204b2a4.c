/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204942c(M2C_UNK *);                   /* extern */
M2C_UNK func_0204b990();                            /* extern */
M2C_UNK func_0204bb28();                            /* extern */
extern s32 data_0206bcf4;
extern M2C_UNK data_0206bcf8;

void func_0204b2a4(void) {
    if (data_0206bcf4 != 0) {
        return;
    }
    data_0206bcf4 = 1;
    func_0204942c(&data_0206bcf8);
    func_0204b990();
    func_0204bb28();
}
