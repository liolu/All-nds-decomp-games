/* compiler: 2.0/sp1p5  */
/* func_0202cd1c from projets/battle-of-giants-dinosaurs/src/auto/func_0202cd1c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
u8 *func_02001c70(s32 arg0, s32 arg1, s32 arg2) {
    u8 c;
    u8 *p;

    c = arg1;
    p = (u8 *) arg0 + arg2;
    while (arg2 != 0) {
        p -= 1;
        if (*p == c) {
            return p;
        }
        arg2 -= 1;
    }
    return ((void *) 0);
}
