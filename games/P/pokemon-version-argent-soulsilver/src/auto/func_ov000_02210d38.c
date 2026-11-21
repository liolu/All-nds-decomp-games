#include "m2c.h"

extern u8 *data_ov000_02219d90;
extern u8 data_ov000_02219d94[];
s32 func_ov000_02211e1c(u8 *, s32);                 /* extern */
s32 func_ov000_021ff838(s32, s32);                  /* extern */
s32 func_ov000_021ff3f0(s32);                       /* extern */
s32 func_ov000_021ec3f8(u8 *);                      /* extern */

void func_ov000_02210d38(u8 *arg0) {
    u8 *r4;

    r4 = arg0;
    if (arg0 == NULL) {
        r4 = data_ov000_02219d90;
    }
    if (*(s32 *) (r4 + 0xBC) != 0) {
        func_ov000_02211e1c(r4, 2);
    }
    if (*(s32 *) r4 != -1) {
        if (*(s32 *) (r4 + 0xC4) != 0) {
            func_ov000_021ff838(*(s32 *) r4, *(s32 *) (r4 + 0xC4));
        }
    }
    *(s32 *) r4          = -1;
    *(s32 *) (r4 + 0xAC) = 0;
    if (*(s32 *) (r4 + 0xC4) != 0) {
        func_ov000_021ff3f0(*(s32 *) (r4 + 0xC4));
    }
    if ((u8 *) r4 == data_ov000_02219d94) {
        return;
    }
    func_ov000_021ec3f8(r4);
}
