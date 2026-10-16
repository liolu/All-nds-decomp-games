#include "m2c.h"

M2C_UNK func_0207111c(M2C_UNK);                     /* extern */
M2C_UNK func_0207f904();                            /* extern */
extern M2C_UNK (*data_022686f4)();
extern s32 data_022686fc;

void func_0207124c(M2C_UNK arg0) {
    if (data_022686fc == 0) {
        func_0207f904();
        if (data_022686f4 != NULL) {
            data_022686f4();
            data_022686f4 = NULL;
        }
    }
    func_0207111c(arg0);
}
