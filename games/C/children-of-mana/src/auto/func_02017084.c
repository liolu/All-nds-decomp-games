/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

void *func_0201e150(void *);                        /* extern */

void *func_02017084(s32 arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r5;
    void *temp_r0;
    void *temp_r4;

    var_r5 = 0;
loop_1:
    temp_r4 = M2C_FIELD((arg0 + (var_r5 * 4)), void **, 4);
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x8C) == 5)) {
        temp_r0 = func_0201e150(temp_r4);
        temp_r2 = M2C_FIELD(temp_r0, s32 *, 0);
        if ((temp_r2 > (s32) M2C_FIELD(arg1, s32 *, 0)) && (temp_r2 < (s32) M2C_FIELD(arg1, s32 *, 8))) {
            temp_r1 = M2C_FIELD(temp_r0, s32 *, 4);
            if ((temp_r1 > (s32) M2C_FIELD(arg1, s32 *, 4)) && (temp_r1 < (s32) M2C_FIELD(arg1, s32 *, 0xC))) {
                return temp_r4;
            }
        }
    }
    var_r5 += 1;
    if (var_r5 >= 0x40) {
        return NULL;
    }
    goto loop_1;
}
