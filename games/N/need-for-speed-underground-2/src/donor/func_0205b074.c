/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020808cc from projets/nintendogs-dachshund/src/donor/func_020808cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_0217afdc;
extern u32 data_0217afe4;
extern void func_0205aef0(void);
extern u32 func_0205a210(void);
void func_0205b074(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x027c3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_0217afe4 = userHandler;
    } else {
        data_0217afe4 = 0;
    }
    if (data_0217afe4 == 0 || (func_0205a210() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_0205aef0;
        dtcm[0xfdc / 4]        = (u32) func_0205aef0;
    }
    data_0217afdc = 0;
}
