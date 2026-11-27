/* compiler: 2.0/sp1p5  */
/* GetNextIndex_ from projets/blue-dragon-awakened-shadow/src/auto/GetNextIndex_.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
u16 func_020b5efc(void *arg0, s32 arg1) {
    return (u16) ((u32) (arg1 + 1) % (u32) (*(u32 *) ((s8 *) (arg0) + (4))));
}
