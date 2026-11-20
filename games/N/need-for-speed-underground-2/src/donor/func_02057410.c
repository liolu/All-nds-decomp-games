/* compiler: 1.2/sp2p3  */
/* func_020983bc from projets/pokemon-dash/src/auto/func_020983bc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern u8 data_0217a7b8[];
extern void func_0205728c(void *, s32);
void func_02057410(s32 arg0) {
    s32 i;
    u8 *p;

    p = data_0217a7b8;
    i = 0;
    do {
        func_0205728c(p, arg0);
        i += 1;
        p += 0x144;
    } while (i < 4);
}
