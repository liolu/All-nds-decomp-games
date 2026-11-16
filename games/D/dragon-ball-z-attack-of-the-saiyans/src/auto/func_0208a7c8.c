#include "m2c.h"

M2C_UNK func_0208a854(M2C_UNK *);                   /* extern */
M2C_UNK func_020841c0(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02084484(void *);                      /* extern */
s32 func_02085130();                                /* extern */
M2C_UNK func_02085144(s32);                         /* extern */
extern void *data_020db0c8;
extern M2C_UNK data_020db0cc;
extern M2C_UNK data_020db4f0;
extern M2C_UNK func_0208a868;

void func_0208a7c8(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02085130();
    if (data_020db0c8 == NULL) {
        data_020db0c8 = arg0;
        func_0208a854(arg0 + 0xC4);
        func_0208a854(&data_020db0cc);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020841c0(arg0, &func_0208a868, arg0, &data_020db4f0, 0x400, 0x14);
        func_02084484(arg0);
    }
    func_02085144(temp_r4);
}
