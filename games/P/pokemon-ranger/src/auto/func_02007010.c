#include "m2c.h"

M2C_UNK func_02007558(void *);                      /* extern */

void func_02007010(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x88) = 0x7FFF;
    func_02007558(arg0 + 0x8C);
}
