/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001ebc(M2C_UNK *);                   /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02101d18;
extern M2C_UNK data_02101d20;

void func_02089764(M2C_UNK arg0) {
    if (func_020121b4(arg0, 0) != 0) {
        func_02001ebc(&data_02101d18);
        return;
    }
    func_02001ebc(&data_02101d20);
}
