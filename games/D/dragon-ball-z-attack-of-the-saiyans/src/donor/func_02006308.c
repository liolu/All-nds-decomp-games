/* compiler: 1.2/sp2p3  */
/* func_0203a61c from projets/battle-of-giants-dinosaurs/src/auto/func_0203a61c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned long u32;
u8 func_02006308(void *arg0) {
    u32 var_r0;
    u8 *temp_r0;

    temp_r0 = (*(u8 **) ((s8 *) (arg0) + (8)));
    if (temp_r0 != ((void *) 0)) {
        var_r0 = *temp_r0 & 0x1F;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
