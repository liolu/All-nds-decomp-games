#include "engine.h"
#include "m2c.h"

M2C_UNK func_02029490(void);
void func_02044900(M2C_UNK);
void func_02044af0(M2C_UNK);

void func_02044880(void) {
    void *temp_r0;

    temp_r0 = (void *) func_02029490();
    if ((M2C_FIELD(temp_r0, s32 *, 0x10) == 0) && (M2C_FIELD(temp_r0, s32 *, 0x28) == 0)) {
        func_02044900((s32) temp_r0);
        func_02044af0((s32) temp_r0);
    }
}
