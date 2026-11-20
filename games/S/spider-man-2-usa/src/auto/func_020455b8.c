/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020368c0(void *, M2C_UNK, M2C_UNK *);  /* extern */
extern M2C_UNK data_0208549c;
extern M2C_UNK data_021248ac;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void *func_020455b8(void *arg0, M2C_UNK arg1, void *arg2, M2C_UNK arg3) {
    void **temp_r0;
    void *temp_r3;

    func_020368c0(arg0, arg1, &data_0208549c);
    temp_r3                         = arg0 + 0x28;
    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_021248ac;
    *(M2C_S12 *) ((s8 *) arg0 + 40) = *(M2C_S12 *) ((s8 *) arg2 + 0);

    temp_r0 = M2C_FIELD(arg0, void ***, 0x20);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x18)(temp_r0, arg3);
    return arg0;
}
