/* compiler: 1.2/sp3 */
/* near start: 29 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct Ent {
    u8 b[6];
    u16 h6;
    u8 rest[0x16];
} Ent;
typedef struct G {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u16 hc;
    u8 pad[0x16];
    Ent ent[6];
    u8 padx[0x1b140 - 0x24 - 6 * 0x1e];
    s32 f1b140;
    s32 f1b144;
} G;
typedef struct A {
    u16 h0;
    u8 pad[8];
    u8 b[6];
} A;
extern G *data_ov123_020e46e8;
extern s32 func_ov123_020c58e0(void);
extern s32 func_ov123_020c57b8(void);
extern void func_ov123_020c58f4(s32);
extern void func_ov123_020c5c38(void);
extern void func_ov123_020c5fdc(s32);
extern void func_ov123_020c60c0(s32);
extern void func_ov123_020c5ef8(s32);
extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern void func_0200fddc(void);
extern void *MB_CommGetChildUser(s32);
extern void MI_CpuCopy8(void *, void *, s32);

void func_ov123_020c5908(s32 n, s32 st, A *a) {
    G *g;
    Ent *e;
    u16 m;
    void *src;
    s32 ie;
    switch (st) {
        case 2:
            if (func_ov123_020c58e0() != 2) {
                return;
            }
            g  = data_ov123_020e46e8;
            ie = func_0200fa98();
            g->h2 |= 1 << n;
            func_0200faac(ie);
            e                                                             = data_ov123_020e46e8->ent + (n - 1);
            e->b[0]                                                       = a->b[0];
            e->b[1]                                                       = a->b[1];
            e->b[2]                                                       = a->b[2];
            e->b[3]                                                       = a->b[3];
            e->b[4]                                                       = a->b[4];
            e->b[5]                                                       = a->b[5];
            *(u16 *) ((u8 *) data_ov123_020e46e8 + (n - 1) * 0x1e + 0x2a) = n;
            break;
        case 3:
            if (func_ov123_020c57b8() == 6) {
                return;
            }
            m  = ~(1 << n);
            ie = func_0200fa98();
            data_ov123_020e46e8->h2 &= m;
            data_ov123_020e46e8->h4 &= m;
            data_ov123_020e46e8->h6 &= m;
            data_ov123_020e46e8->h8 &= m;
            data_ov123_020e46e8->ha &= m;
            data_ov123_020e46e8->hc &= m;
            func_0200faac(ie);
            func_ov123_020c5c38();
            break;
        case 10:
            if (func_ov123_020c58e0() != 2) {
                func_ov123_020c5fdc(n);
                return;
            }
            data_ov123_020e46e8->h4 |= 1 << n;
            func_ov123_020c60c0(n);
            src = MB_CommGetChildUser(n);
            if (src == 0) {
                return;
            }
            MI_CpuCopy8(src, (u8 *) data_ov123_020e46e8 + 0xe + (n - 1) * 0x1e, 0x16);
            break;
        case 14:
            data_ov123_020e46e8->h4 &= ~(1 << n);
            data_ov123_020e46e8->h6 |= 1 << n;
            if (func_ov123_020c58e0() != 3) {
                return;
            }
            func_ov123_020c5ef8(n);
            break;
        case 7:
            data_ov123_020e46e8->h8 &= ~(1 << n);
            data_ov123_020e46e8->ha |= 1 << n;
            break;
        case 9:
            data_ov123_020e46e8->ha &= ~(1 << n);
            data_ov123_020e46e8->hc |= 1 << n;
            func_ov123_020c5c38();
            break;
        case 12:
            if (func_ov123_020c58e0() == 4) {
                func_ov123_020c58f4(5);
            } else {
                func_ov123_020c58f4(0);
            }
            if (data_ov123_020e46e8->f1b144 != 0) {
                data_ov123_020e46e8->f1b144 = 0;
            }
            if (data_ov123_020e46e8->f1b140 != 0) {
                data_ov123_020e46e8->f1b140 = 0;
            }
            break;
        case 13:
            switch (a->h0) {
                case 1:
                case 2:
                case 9:
                    func_ov123_020c58f4(7);
                    break;
                case 8:
                    break;
                default:
                    break;
            }
            break;
        case 1:
        case 4:
        case 5:
        case 6:
        case 8:
        case 11:
            break;
        default:
            func_0200fddc();
            break;
    }
}
