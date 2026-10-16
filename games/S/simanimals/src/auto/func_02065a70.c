#include "m2c.h"

M2C_UNK func_020637b0(M2C_UNK *);                   /* extern */
M2C_UNK func_02065ad0();                            /* extern */
M2C_UNK func_020661e0();                            /* extern */
extern s32 data_0208e96c;
extern M2C_UNK data_0208e970;

void func_02065a70(void) {
    if (data_0208e96c != 0) {
        return;
    }
    data_0208e96c = 1;
    func_020637b0(&data_0208e970);
    func_02065ad0();
    func_020661e0();
}
