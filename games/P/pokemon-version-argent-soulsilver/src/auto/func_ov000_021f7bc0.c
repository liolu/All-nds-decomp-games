/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 pad[0x2fc];
    s32 a;
    u8 pad2[4];
    u8 ids[0x40];
    s32 n;
} G;
extern G *func_ov000_021f957c(void);
extern s32 func_ov000_021f03dc(s32);
s32 func_ov000_021f7bc0(s32 want) {
    s32 i;
    s32 v;
    if (func_ov000_021f957c()->a == 0) {
        return 0;
    }
    for (i = 0; i < func_ov000_021f957c()->n; i++) {
        v = func_ov000_021f03dc(((u8 *) ((char *) func_ov000_021f957c() + i))[0x304]);
        if (v > 0 && v == want) {
            return 1;
        }
    }
    return 0;
}
