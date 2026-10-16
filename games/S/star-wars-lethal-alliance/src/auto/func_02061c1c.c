/* compiler: 1.2/sp2p3 */
#define REG_SQRTCNT (*(volatile unsigned short *) 0x040002B0)
#define REG_SQRT_PARAM (*(volatile unsigned long long *) 0x040002B8)

/* Starts the hardware square root unit on (lValue << 32), or on 0 when lValue <= 0. */
void func_02061c1c(long lValue) {
    if (lValue > 0) {
        REG_SQRTCNT    = 1;
        REG_SQRT_PARAM = (unsigned long long) lValue << 32;
        return;
    }
    REG_SQRTCNT    = 1;
    REG_SQRT_PARAM = 0;
}
