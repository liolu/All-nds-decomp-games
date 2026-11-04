/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b074 from projets/need-for-speed-underground-2/src/donor/func_0205b074.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_0206bc4c;
extern u32 data_0206bc54;
extern void func_02049ff0(void);
extern u32 func_02048f3c(void);
void func_0204a174(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x027c3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_0206bc54 = userHandler;
    } else {
        data_0206bc54 = 0;
    }
    if (data_0206bc54 == 0 || (func_02048f3c() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_02049ff0;
        dtcm[0xfdc / 4]        = (u32) func_02049ff0;
    }
    data_0206bc4c = 0;
}
