/* compiler: 1.2/sp2p3  */
/* func_0205a62c from projets/madagascar/src/auto/func_0205a62c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020550f8(void *);
extern M2C_UNK func_0205bfe0(u8);
extern s32 func_0205c1d0();
void func_020551a0(void *arg0) {
    func_0205bfe0((*(u8 *) ((s8 *) (arg0) + (0x3C))));
    func_020550f8(arg0);
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = func_0205c1d0();
    (*(s8 *) ((s8 *) (arg0) + (0x2C)))  = 1;
}
