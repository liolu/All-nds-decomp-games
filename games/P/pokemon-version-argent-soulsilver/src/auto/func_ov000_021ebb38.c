/* near start: 10 diffs with profile "1.2/sp3" */
#include "m2c.h"

s32 func_020d1e68(void *);                          /* extern */
M2C_UNK func_ov000_021e9774(void *);                /* extern */
s32 func_ov000_021ebc0c();                          /* extern */
M2C_UNK func_ov000_021ec26c(M2C_UNK, s32);          /* extern */
extern void *data_ov000_0221a768;

s32 func_ov000_021ebb38(void) {
    s32 temp_r0;

    if (data_ov000_0221a768 == NULL) {
        return 0;
    }
    if (M2C_FIELD(data_ov000_0221a768, s32 *, 0x1BAC) == 0) {
        return 1;
    }
    if (func_020d1e68(data_ov000_0221a768 + 0x1B40) == 1) {
        temp_r0 = M2C_FIELD(data_ov000_0221a768, s32 *, 0x1028);
        switch (temp_r0) {
            case 8:
                if (func_ov000_021ebc0c() == 0) {
                    func_ov000_021e9774(data_ov000_0221a768 + 8);
                    return 4;
                }
                func_ov000_021e9774(data_ov000_0221a768 + 8);
                return 3;
            case 7:
                func_ov000_021e9774(data_ov000_0221a768 + 8);
                return 5;
            default:
                func_ov000_021e9774(data_ov000_0221a768 + 8);
                func_ov000_021ec26c(0x11, 0xFFFFA1DB);
                return 4;
        }
    }
    return 2;
}