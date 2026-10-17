/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024eec(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020d0794;
extern M2C_UNK data_020d07c8;

void func_020117a8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x135) = arg1;
    if (arg1 != 0) {
        func_02024eec(arg0, &data_020d07c8);
        return;
    }
    func_02024eec(arg0, &data_020d0794);
}
