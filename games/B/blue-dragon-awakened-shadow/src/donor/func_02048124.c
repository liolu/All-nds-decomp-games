/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_Acc_CheckFriendKey from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern unsigned long long func_0204807c(int gs_profile_id, unsigned long gamecode, int method);
extern int func_02048124(unsigned long long friendkey, unsigned long gamecode, int method);
extern unsigned long long func_0204807c(int gs_profile_id, unsigned long gamecode, int method);
extern int func_02048124(unsigned long long friendkey, unsigned long gamecode, int method);
unsigned long long func_0204807c(int gs_profile_id, unsigned long gamecode, int method);
int func_02048124(unsigned long long friendkey, unsigned long gamecode, int method) {
    int pid = (int) (friendkey & 0xffffffff);

    if (pid <= 0) {
        return 0;
    }
    if (friendkey == func_0204807c(pid, gamecode, method)) {
        return 1;
    }
    return 0;
}
