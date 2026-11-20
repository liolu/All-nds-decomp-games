/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065684(void *);                      /* extern */
M2C_UNK func_020658cc(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
s32 func_02067278();                                /* extern */
M2C_UNK func_0206728c(s32);                         /* extern */
M2C_UNK func_020750a0(M2C_UNK *);                   /* extern */
extern void *data_020ea248;
extern M2C_UNK data_020ea24c;
extern M2C_UNK data_020ea670;
extern M2C_UNK func_02074fb4;

void func_020750b4(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02067278();
    if (data_020ea248 == NULL) {
        data_020ea248 = arg0;
        func_020750a0(arg0 + 0xC4);
        func_020750a0(&data_020ea24c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020658cc(arg0, &func_02074fb4, arg0, &data_020ea670, 0x400, 0x14);
        func_02065684(arg0);
    }
    func_0206728c(temp_r4);
}
