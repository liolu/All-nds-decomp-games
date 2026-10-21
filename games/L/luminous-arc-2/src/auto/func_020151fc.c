#include "m2c.h"

extern M2C_UNK data_0214ade0;

void func_020151fc(void) {
    u8 *buf;

    if (*(u8 *) ((u8 *) &data_0214ade0 + 0x24) != 2) {
        return;
    }
    buf = *(u8 **) ((u8 *) &data_0214ade0 + 0x1C);
    if (*(u8 *) (buf + 0x4B2) == 0) {
        *(u8 *) ((u8 *) &data_0214ade0 + 0x28)  = 9;
        *(u8 **) ((u8 *) &data_0214ade0 + 0x20) = buf;
    } else {
        *(u8 *) ((u8 *) &data_0214ade0 + 0x28)  = 4;
        *(u8 **) ((u8 *) &data_0214ade0 + 0x20) = buf + 0x220;
    }
    *(u8 *) ((u8 *) &data_0214ade0 + 0x24) = 3;
}
