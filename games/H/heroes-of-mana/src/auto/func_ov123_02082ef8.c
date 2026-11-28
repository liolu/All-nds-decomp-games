/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u32 data_ov123_020daccc;
extern s32 func_ov123_0207a204(void *);
extern u8 *func_ov123_0207a194(void *, s32);
extern s32 func_ov123_0207da38(void *, u32, void *, u32 *, s32, void *);
extern void func_ov123_02079f1c(void *, s32);

s32 func_ov123_02082ef8(void *arg0, u8 *arg1) {
    u32 local;
    s32 i;
    u8 *ent;
    s32 rv;

    if (*(u32 *) (arg1 + 0x30) != 0) {
        return 0;
    }
    if (func_ov123_0207a204(*(void **) (arg1 + 0x38)) != 0) {
        i = 0;
        do {
            ent = func_ov123_0207a194(*(void **) (arg1 + 0x38), i);
            rv  = func_ov123_0207da38(arg0, *(u32 *) (arg1 + 0x8), ent, &local, i, &data_ov123_020daccc);
            if (local != 0 || rv != 0) {
                *(u32 *) arg1 = 0x6A;
                return 0;
            }
            if (*(u32 *) (ent + 0xC) != *(u32 *) (ent + 0x8)) {
                break;
            }
            func_ov123_02079f1c(*(void **) (arg1 + 0x38), i);
        } while (func_ov123_0207a204(*(void **) (arg1 + 0x38)) != 0);
    }
    return 0;
}
