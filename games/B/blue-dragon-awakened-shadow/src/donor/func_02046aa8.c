/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ConnectTestRetry from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_test.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern unsigned char func_02046aa8(void);
extern int SOC_Cleanup(void);
extern int SOCL_CalmDown(void);
unsigned char func_02046aa8(void) {
    int result;

    result = SOCL_CalmDown();
    if (result != 0) {
        return 0xB;
    }
    result = SOC_Cleanup();
    if (result == 0 || result == -39) {
        return 9;
    }
    return 0xB;
}
