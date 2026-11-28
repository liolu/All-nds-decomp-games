/* compiler: 1.2/sp3 */
/* near start: 23 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern void func_ov123_020b4c7c(void);
extern void func_ov123_020ae8d8(s32);
extern void func_ov123_020c37f4(s32);
extern void func_ov123_020ae2a4(s32, s32, s32);
extern void *func_ov123_020c92f8(s32, s32);
extern void func_ov123_020ae668(u16, u16, u16, u16);
extern void func_ov123_020b2410(void *);
extern void func_ov123_020b4c20(void);
extern u8 data_ov123_020e4610[];
extern u8 *data_ov123_020e4618;
extern u8 data_ov123_020d7e4c[];
extern u8 data_ov123_020e460c[];
extern u8 data_ov123_020d7e98[];
extern u8 data_ov123_020d7e9c[];
extern u8 data_ov123_020d7e9a[];

void func_ov123_020b4e18(void) {
    u8 *p;
    u8 *q;
    u32 v;
    u32 idx;
    u16 h0;
    u16 h1;
    u16 r;
    u32 lo;
    u32 lo2;

    data_ov123_020e4610[0] = 0;
    func_ov123_020b4c7c();
    func_ov123_020ae8d8(0x10);
    func_ov123_020c37f4(3);
    func_ov123_020ae2a4(0x39, -1, 0);
    p                   = (u8 *) func_ov123_020c92f8(0, 0x5B);
    data_ov123_020e4618 = p;
    *(u32 *) p          = (*(u32 *) p & 0xFE00FF00) | (*(u16 *) (data_ov123_020d7e4c + 2) & 0xFF) |
                 ((u32) (*(u16 *) data_ov123_020d7e4c & 0x1FF) << 16);
    q                = data_ov123_020e4618;
    r                = *(u16 *) (q + 4);
    *(u16 *) (q + 4) = (r & ~0xC00) | 0xC00;
    idx              = (u32) data_ov123_020e460c[0] << 3;
    func_ov123_020ae668(*(u16 *) (data_ov123_020d7e98 + idx), *(u16 *) (data_ov123_020d7e9c + idx),
                        *(u16 *) (data_ov123_020d7e9a + idx), *(u16 *) (data_ov123_020d7e9c + 2 + idx));
    func_ov123_020b2410((void *) func_ov123_020b4c20);
}
