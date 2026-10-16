#include "engine.h"
#include "m2c.h"

M2C_UNK func_02004d34(M2C_UNK);

s32 func_02004d70(s32 arg0) {
    void *temp_r0;
    void *temp_r1;

    temp_r0                        = (void *) func_02004d34(arg0);
    M2C_FIELD(temp_r0, s32 *, 4)   = 0;
    M2C_FIELD(temp_r0, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
    temp_r1                        = M2C_FIELD(arg0, void **, 0);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 4) = temp_r0;
    } else {
        M2C_FIELD(arg0, void **, 4) = temp_r0;
    }
    M2C_FIELD(arg0, void **, 0) = temp_r0;
    return (s32) (temp_r0 + 8);
}
