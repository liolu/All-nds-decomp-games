/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CloseSocket from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_close.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern int SOCL_CalmDown(void);
extern int SOC_Cleanup(void);
extern int func_0204589c(void);
extern void *SOCLiConfigPtr;
int func_0204589c(void) {
    int result;

    if (SOCLiConfigPtr == 0) {
        return 1;
    }
    if (SOCL_CalmDown() != 0) {
        return 0;
    }
    result = SOC_Cleanup();
    if (result == 0 || result == -39) {
        return 1;
    }
    return 0;
}
