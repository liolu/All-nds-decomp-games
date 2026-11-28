/* compiler: 1.2/sp2p3 */
/* near start: 35 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

extern void MI_CpuFill8(void *, s32, s32);
extern void MI_CpuCopy8(void *, void *, s32);
extern s32 func_ov123_02079808(u16 *, s32);
extern void func_ov123_02079220(u16 *, u16 *, s32);
extern void func_ov123_02079028(s32, u16 *, s32, u16 *, s32, u16 *);
extern void func_ov123_020793f0(u16 *, u16 *, u16 *, s32);
extern void *(*data_ov123_020df1e4)(s32);
extern void (*data_ov123_020df210)(void *);

void func_ov123_02078e64(u16 *out, u16 *base, u16 *exp, s32 n, s32 arg) {
    u16 *tmp;
    u16 *tmp2;
    s32 i;
    s32 end;
    s32 m;
    s32 sz;

    tmp = data_ov123_020df1e4(n * 8);
    if (tmp == 0) {
        return;
    }
    tmp2 = tmp + n;
    MI_CpuFill8(out + 1, 0, (n - 1) << 1);
    out[0] = 1;
    i      = (n - func_ov123_02079808(exp, n)) << 4;
    end    = n << 4;
    for (; (u32) i < (u32) end; i++) {
        if (*(u16 *) ((u8 *) exp + ((n - (i >> 4) - 1) << 1)) & (0x8000U >> (i & 0xF))) {
            MI_CpuCopy8(base, out, n << 1);
            i++;
            break;
        }
    }
    if ((u32) i < (u32) end) {
        sz = n << 1;
        do {
            func_ov123_02079220(tmp, out, n);
            MI_CpuCopy8(tmp, out, sz);
            if (arg != 0) {
                func_ov123_02079028(0, out, arg, out, n, tmp2);
            }
            if (*(u16 *) ((u8 *) exp + ((n - (i >> 4) - 1) << 1)) & (0x8000U >> (i & 0xF))) {
                func_ov123_020793f0(tmp, out, base, n);
                MI_CpuCopy8(tmp, out, sz);
                if (arg != 0) {
                    func_ov123_02079028(0, out, arg, out, n, tmp2);
                }
            }
            i++;
        } while ((u32) i < (u32) end);
    }
    data_ov123_020df210(tmp);
}
