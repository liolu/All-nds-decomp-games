#include "m2c.h"

M2C_UNK func_02004028(void *);                      /* extern */
M2C_UNK func_02005464(void *);                      /* extern */
M2C_UNK func_02015a5c(M2C_UNK *);                   /* extern */
M2C_UNK func_02015aac(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02032498;
extern M2C_UNK data_02033b80;

void func_020053cc(void *arg0) {
    func_02015a5c(&data_02033b80);
    if (M2C_FIELD(&data_02032498, s32 *, 4) != 0) {
        func_02015a5c(M2C_FIELD(&data_02032498, s32 *, 4) + 0x10C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1E) >> 0x1F) != 0) {
        func_02004028(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x178)(arg0);
    }
    func_02005464(arg0);
    func_02015aac(&data_02033b80);
    if (M2C_FIELD(&data_02032498, s32 *, 4) == 0) {
        return;
    }
    func_02015aac(M2C_FIELD(&data_02032498, s32 *, 4) + 0x10C8);
}
