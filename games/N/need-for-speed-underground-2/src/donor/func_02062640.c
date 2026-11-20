/* compiler: 1.2/sp2p3  */
/* func_0206bd50 from projets/madagascar/src/auto/func_0206bd50.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
s32 func_02062640(void *arg0) {
    u16 temp_r1;
    u16 temp_r1_2;

    if ((u32) (*(u16 *) ((s8 *) (arg0) + (4))) > 0x70U) {
        return 0;
    }
    temp_r1 = (*(u16 *) ((s8 *) (arg0) + (0x18)));
    if (((u32) temp_r1 < 0xAU) || ((u32) temp_r1 > 0x3E8U)) {
        return 0;
    }
    temp_r1_2 = (*(u16 *) ((s8 *) (arg0) + (0x32)));
    if (((u32) temp_r1_2 < 1U) || ((u32) temp_r1_2 > 0xEU)) {
        return 0;
    }
    if ((s32) (((*(u16 *) ((s8 *) (arg0) + (0x10))) * ((((*(u16 *) ((s8 *) (arg0) + (0x36))) + 0x20) * 4) + 0x70)) +
               ((((*(u16 *) ((s8 *) (arg0) + (0x34))) + 0x26) * 4) + 0x14A)) <= 0x15E0) {
        return 1;
    }
    return 0;
}
