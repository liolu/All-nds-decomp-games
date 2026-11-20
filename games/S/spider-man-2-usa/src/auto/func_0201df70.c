/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d99c();                            /* extern */
extern M2C_UNK data_02113b68;
extern M2C_UNK data_0212cbec;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void *func_0201df70(void *arg0, s32 arg1, void *arg2) {
    void *temp_r3;

    func_0201d99c();
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02113b68;
    temp_r3                           = arg0 + 0x618;
    *(M2C_S12 *) ((s8 *) arg0 + 1560) = *(M2C_S12 *) ((s8 *) arg2 + 0);

    M2C_FIELD(arg0, M2C_UNK **, 0x614) = &data_0212cbec;
    return arg0;
}
