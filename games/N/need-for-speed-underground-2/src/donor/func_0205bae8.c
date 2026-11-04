/* compiler: 1.2/sp2p3  */
/* func_0209e0d8 from projets/pokemon-dash/src/auto/func_0209e0d8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern s32 func_0205b454(s32, s32);
extern void func_01ff8264(s32, s32, s32, s32);
void func_0205bae8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    volatile u32 *p;

    func_0205b454(arg0, -1);
    if (arg3 == 0) {
        return;
    }
    p = (volatile u32 *) (0x40000B0 + (arg0 * 3 + 2) * 4);
    while (*p & 0x80000000) {
    }
    func_01ff8264(arg0, arg1, arg2, 0xAF000001);
}
