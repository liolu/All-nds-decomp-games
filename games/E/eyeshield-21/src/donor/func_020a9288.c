/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dMapScrToCharText from https://github.com/7ucina/acww-decomp src/autoload_2/unk_0210217c.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
extern void func_020a921c(u16 *dst, s32 w, s32 h, s32 stride, s32 idx, s32 pal);
void func_020a9288(u16 *scrn, s32 w, s32 h, s32 x, s32 y, s32 scrW, s32 idx, s32 pal) {
    if (scrW <= 32) {
        func_020a921c(scrn + (scrW * y + x), w, h, scrW, idx, pal);
    } else {
        u16 pl;
        s32 xe, ye, xx;
        ye = y + h;
        xe = x + w;
        pl = (u16) (pal << 12);
        for (; y < ye; y++) {
            u16 *row;
            row = scrn + ((y < 32) ? y : y + 32) * 32;
            for (xx = x; xx < xe; xx++) {
                row[(xx < 32) ? xx : xx + 992] = pl | idx;
                idx++;
            }
        }
    }
}
void func_020a921c(u16 *dst, s32 w, s32 h, s32 stride, s32 idx, s32 pal);
