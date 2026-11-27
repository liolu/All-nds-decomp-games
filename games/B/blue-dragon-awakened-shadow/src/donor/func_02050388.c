/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_InitGPProcessCount from https://github.com/Project-Holon/aletheia src/matched/ov_sdk/ov009_func_0216909C.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
struct FriendGlobal {
    int field0;
    int field4;
    int pad2;
    struct Work *ctl;
};
extern struct FriendGlobal data_0210e8cc;
extern unsigned long long OS_GetTick(void);
void func_02050388(void) {
    char *p = *(char **) (((char *) &data_0210e8cc) + 0xc);

    if (p == 0) {
        return;
    }
    *(int *) (p + 8)                                                             = 0;
    *(unsigned long long *) (*(char **) (((char *) &data_0210e8cc) + 0xc) + 0xc) = OS_GetTick();
}
