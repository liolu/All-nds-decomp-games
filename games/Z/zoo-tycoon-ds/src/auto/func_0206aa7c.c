/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_InitException from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/os_init_exception.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_02184900;
extern u32 data_02184908;
extern void func_0206a8f8(void);
extern u32 func_0206a064(void);
void func_0206aa7c(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x27c3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_02184908 = userHandler;
    } else {
        data_02184908 = 0;
    }
    if (data_02184908 == 0 || (func_0206a064() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_0206a8f8;
        dtcm[0xfdc / 4]        = (u32) func_0206a8f8;
    }
    data_02184900 = 0;
}
