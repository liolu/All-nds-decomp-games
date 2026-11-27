/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02001b40(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02001c20(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020a410c;

void func_02001af4(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0) = func_02001b40(arg0, 8);
    M2C_FIELD(arg1, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
    func_02001c20(M2C_FIELD(arg1, void **, 4) + 4, &data_020a410c);
    M2C_FIELD(arg1, void **, 8) = (void *) (M2C_FIELD(arg1, void **, 0) + M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 8));
}
