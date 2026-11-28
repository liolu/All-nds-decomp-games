/* compiler: 1.2/sp3 */
/* near start: 8 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern u8 data_ov123_020d7e00[];
extern u8 data_ov123_020e4600[];
extern u8 data_ov123_020d7e10[];
extern u8 data_ov123_020d7e14[];
extern u8 data_ov123_020d7e12[];
extern s32 func_ov123_020ca7c0(u8 *);
extern void func_ov123_020ae100(s32);
extern void func_ov123_020ae668(s32, s32, s32, s32);
extern s32 func_ov123_020ca8e0(s32);
extern s32 func_ov123_020ca8bc(s32);
extern void func_ov123_020b34bc(s32);

void func_ov123_020b36e8(void) {
    u32 i;
    u8 *p;
    s32 v;
    s32 idx;

    p = data_ov123_020d7e00;
    i = 0;
    do {
        if (func_ov123_020ca7c0(p) != 0) {
            func_ov123_020ae100(1);
            data_ov123_020e4600[0] = (u8) i;
            idx                    = data_ov123_020e4600[0] << 3;
            func_ov123_020ae668(*(u16 *) (data_ov123_020d7e10 + idx), *(u16 *) (data_ov123_020d7e14 + idx),
                                *(u16 *) (data_ov123_020d7e12 + idx), *(u16 *) (data_ov123_020d7e14 + 2 + idx));
            return;
        }
        i = i + 1;
        p = p + 8;
    } while (i < 2);
    if (func_ov123_020ca8e0(1) != 0) {
        func_ov123_020ae100(1);
        return;
    }
    if (func_ov123_020ca8e0(2) != 0) {
        func_ov123_020ae100(0);
        return;
    }
    if (func_ov123_020ca8bc(0x40) != 0) {
        func_ov123_020b34bc(1);
        return;
    }
    if (func_ov123_020ca8bc(0x80) != 0) {
        func_ov123_020b34bc(3);
        return;
    }
    if (func_ov123_020ca8bc(0x20) != 0) {
        func_ov123_020b34bc(0);
        return;
    }
    if (func_ov123_020ca8bc(0x10) == 0) {
        return;
    }
    func_ov123_020b34bc(2);
}
