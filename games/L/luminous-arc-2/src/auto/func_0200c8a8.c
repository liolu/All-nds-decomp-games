#include "m2c.h"

typedef struct S8 {
    u16 f[4];
} S8;

M2C_UNK func_0200cdb0(s32);
extern M2C_UNK data_021498f0;

s32 func_0200c8a8(S8 *arg0) {
    func_0200cdb0(1);
    if (M2C_FIELD(&data_021498f0, u16 *, 0x38) & 1) {
        return 1;
    }
    *arg0 = *(S8 *) ((u8 *) &data_021498f0 + 8);
    return 0;
}
