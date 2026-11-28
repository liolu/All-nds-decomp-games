#include "m2c.h"

M2C_UNK func_02050310(void *);                      /* extern */
M2C_UNK func_02050360(void *);                      /* extern */
M2C_UNK func_02050374(void *);                      /* extern */
M2C_UNK func_02050388(void *);                      /* extern */
M2C_UNK func_0205039c(void *);                      /* extern */
M2C_UNK func_020503b0(void *);                      /* extern */
extern M2C_UNK data_020e03c4;
extern M2C_UNK data_020e0410;
extern M2C_UNK data_020e0444;
extern M2C_UNK data_020e0e7c;
extern M2C_UNK data_020fbafc;

void *func_0204dee4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020e03c4;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020e0444;
    M2C_FIELD(arg0, s32 *, 4)         = 0;
    M2C_FIELD(arg0, s32 *, 8)         = -1;
    M2C_FIELD(arg0, s8 *, 0xC)        = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_020fbafc;
    if (&data_020fbafc != NULL) {
        M2C_FIELD(&data_020fbafc, s32 *, 4) = (s32) (M2C_FIELD(&data_020fbafc, s32 *, 4) + 1);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0410;
    M2C_FIELD(arg0, s8 *, 0x14)    = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0e7c;
    func_02050310(arg0 + 0x18);
    func_02050360(arg0 + 0x24);
    func_02050310(arg0 + 0x30);
    func_02050374(arg0 + 0x3C);
    func_02050388(arg0 + 0x48);
    func_0205039c(arg0 + 0xB4);
    func_020503b0(arg0 + 0xC0);
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    return arg0;
}
