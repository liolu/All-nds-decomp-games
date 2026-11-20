/* compiler: 1.2/sp2p3  */
/* func_020144f8 from projets/code-lyoko/src/auto/func_020144f8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201d1a8(M2C_UNK *, u16 *, M2C_UNK);
extern s32 func_0201d25c(M2C_UNK *, u16 **, M2C_UNK);
extern M2C_UNK func_0201d600(u16 *, M2C_UNK);
extern M2C_UNK data_020406b0;
u16 *func_02024750(void) {
    u16 *sp0;

    if (func_0201d25c(&data_020406b0, &sp0, 0) == 0) {
        return ((void *) 0);
    }
    func_0201d600(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_0201d1a8(&data_020406b0, sp0, 1);
    return ((void *) 0);
}
