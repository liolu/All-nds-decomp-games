/* compiler: 1.2/sp2p3  */
/* func_0205a62c from projets/madagascar/src/auto/func_0205a62c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02041864(void *);
extern M2C_UNK func_0204b248(u8);
extern s32 func_0204b50c();
void func_02041960(void *arg0) {
    func_0204b248((*(u8 *) ((s8 *) (arg0) + (0x3C))));
    func_02041864(arg0);
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = func_0204b50c();
    (*(s8 *) ((s8 *) (arg0) + (0x2C)))  = 1;
}
