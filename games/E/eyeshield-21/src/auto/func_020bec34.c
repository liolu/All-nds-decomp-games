/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_InitException from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/os_init_exception.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_0212daa4;
extern u32 data_0212daac;
extern void func_020beab0(void);
extern u32 func_020bdf3c(void);
void func_020bec34(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x27e3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_0212daac = userHandler;
    } else {
        data_0212daac = 0;
    }
    if (data_0212daac == 0 || (func_020bdf3c() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_020beab0;
        dtcm[0xfdc / 4]        = (u32) func_020beab0;
    }
    data_0212daa4 = 0;
}
