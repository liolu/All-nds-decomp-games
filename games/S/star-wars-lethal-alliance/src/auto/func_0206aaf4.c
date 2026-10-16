/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020656b8(void *);
s32 func_02069958(void *, s32);
void *func_0206ab98(s32);

void func_0206aaf4(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    u32 temp_r4;
    void *var_r6;

    var_r6  = arg0;
    temp_r5 = M2C_FIELD(var_r6, volatile s32 *, 8);
    if (var_r6 == NULL) {
        return;
    }
loop_3:
    temp_r4                                = func_02067278();
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 0x40);
    if (M2C_FIELD(var_r6, volatile s32 *, 0xC) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_020656b8(var_r6 + 0x18);
        func_0206728c(temp_r4);
        return;
    }
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 8);
    func_0206728c(temp_r4);
    if (func_02069958(var_r6, M2C_FIELD(var_r6, volatile s32 *, 0x10)) == 6) {
        return;
    }
    var_r6 = func_0206ab98(temp_r5);
    if (var_r6 == NULL) {
        return;
    }
    goto loop_3;
}
