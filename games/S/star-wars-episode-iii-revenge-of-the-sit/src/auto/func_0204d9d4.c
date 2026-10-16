/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204d294(void);
M2C_UNK func_0204d2b0(void);
void func_020451ec(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02043cc0(M2C_UNK, M2C_UNK);

s32 func_0204d9d4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0204d2b0();
    temp_r0 = func_0204d294();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02043cc0(M2C_FIELD(temp_r4, s32 *, 4), 0x9B8);
    func_020451ec(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x9B8);
    return 0;
}
