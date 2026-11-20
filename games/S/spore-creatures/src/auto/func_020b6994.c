/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b6994 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b6994.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020b6bd0(void);
extern void func_020b6be4(int state);
extern void func_020b6660(void *alarm);
extern char data_020f1cb8;
void func_020b6994(char *alarm) {
    int enabled = func_020b6bd0();
    char *next;
    char *prev;
    if (*(int *) alarm == 0) {
        func_020b6be4(enabled);
        return;
    }
    next = *(char **) (alarm + 0x18);
    if (next == 0) {
        *(char **) ((char *) &data_020f1cb8 + 8) = *(char **) (alarm + 0x14);
    } else {
        *(char **) (next + 0x14) = *(char **) (alarm + 0x14);
    }
    prev = *(char **) (alarm + 0x14);
    if (prev != 0) {
        *(char **) (prev + 0x18) = next;
    } else {
        *(char **) ((char *) &data_020f1cb8 + 4) = next;
        if (next != 0) {
            func_020b6660(next);
        }
    }
    *(int *) alarm          = 0;
    *(int *) (alarm + 0x1c) = 0;
    *(int *) (alarm + 0x20) = 0;
    func_020b6be4(enabled);
}
