#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} Cal;
typedef struct {
    u8 pad[8];
    Cal cal;
    u8 pad2[0x28];
    u16 flags;
} TpWork;
extern TpWork data_021039b0;
void TP_GetCalibratedPoint(Cal *a, Cal *b);
s32 TP_GetCalibratedResult(Cal *out) {
    if (data_021039b0.flags & 1) {
        return 1;
    }
    *out = data_021039b0.cal;
    TP_GetCalibratedPoint(out, out);
    return 0;
}
