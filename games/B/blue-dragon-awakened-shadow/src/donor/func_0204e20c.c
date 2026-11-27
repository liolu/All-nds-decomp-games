/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02046b3c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02046b3c.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern char *data_0210e738;
extern int DWCi_IsError(void);
extern void *func_0204e430(int key);
extern int gt2CloseConnectionHard();
int func_0204e20c(int key) {
    void *entry;
    if (data_0210e738 == 0 || DWCi_IsError() != 0 ||
        (*(int *) (data_0210e738 + 0x24) != 5 && *(int *) (data_0210e738 + 0x24) != 6)) {
        return -1;
    }
    entry = func_0204e430(key);
    if (entry == 0) {
        return -2;
    }
    gt2CloseConnectionHard((int) entry);
    return 0;
}
