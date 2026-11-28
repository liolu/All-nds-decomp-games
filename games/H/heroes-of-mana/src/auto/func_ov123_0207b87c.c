/* compiler: 1.2/sp3 */
/* near start: 8 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern M2C_UNK data_ov123_020d9ce4;
extern M2C_UNK data_ov123_020d9cf4;
extern M2C_UNK data_ov123_020d9d04;
extern M2C_UNK data_ov123_020d9d10;

s32 func_ov123_0207b87c(s32 *a0, s32 a1, u8 *a2) {
    s32 *obj;
    s32 *e;
    s32 *d;
    s32 *q;
    s32 r;

    if (a0 == NULL || (obj = (s32 *) a0[0]) == NULL) {
        return 2;
    }
    if (obj[0x108 / 4] != 0) {
        memset(a2, 0, 0x210);
        return 0;
    }
    if (a2 == NULL) {
        func_ov123_02086078(a0, &data_ov123_020d9ce4);
        return 2;
    }
    r = obj[0x430 / 4];
    if (a1 < 0 || a1 >= r) {
        func_ov123_02086078(a0, &data_ov123_020d9cf4);
        return 2;
    }
    e = (s32 *) func_ov123_020835bc((s32) a0, a1);
    if (e == NULL) {
        func_ov123_02086078(a0, &data_ov123_020d9cf4);
        return 2;
    }
    d = (s32 *) e[2];
    if (d == NULL) {
        func_02020d04(&data_ov123_020d9d04, &data_ov123_020d9d10, 0, 0x5cf);
    }
    *(s32 *) a2       = e[0];
    *(s32 *) (a2 + 4) = d[1];
    q                 = (s32 *) d[2];
    if (q == NULL) {
        *(u8 *) q = 0;
    } else {
        func_ov123_02086568(a2 + 8, q, 0x100);
    }
    q = (s32 *) d[3];
    if (q == NULL) {
        *(u8 *) q = 0;
    } else {
        func_ov123_02086568(a2 + 0x108, q, 0x100);
    }
    *(s32 *) (a2 + 0x208) = d[4];
    *(s32 *) (a2 + 0x20c) = d[5];
    return 0;
}
