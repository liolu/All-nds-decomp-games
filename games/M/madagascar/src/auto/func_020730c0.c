/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02072f8c(M2C_UNK);                     /* extern */
M2C_UNK func_0207b19c();                            /* extern */
extern M2C_UNK (*data_020dee84)();
extern s32 data_020dee8c;

void func_020730c0(M2C_UNK arg0) {
    if (data_020dee8c == 0) {
        func_0207b19c();
        if (data_020dee84 != NULL) {
            data_020dee84();
            data_020dee84 = NULL;
        }
    }
    func_02072f8c(arg0);
}
