#include "m2c.h"

extern void **data_020efdc0;

void func_020c1ec8(void *arg0) {
    M2C_FIELD(*data_020efdc0, M2C_UNK(**)(void **, u8), 0x64)(data_020efdc0, M2C_FIELD(arg0, u8 *, 0x522));
    M2C_FIELD(*data_020efdc0, M2C_UNK(**)(void **, u8), 0x6C)(data_020efdc0, M2C_FIELD(arg0, u8 *, 0x523));
}
