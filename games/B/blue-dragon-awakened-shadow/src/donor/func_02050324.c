/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_GetFriendListIndex from https://github.com/Project-Holon/aletheia src/matched/ov_sdk/ov009_func_02169038.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
struct FriendGlobal {
    int field0;
    int field4;
    int pad2;
    struct Work *ctl;
};
extern struct FriendGlobal data_0210e8cc;
extern int func_020502dc(int index);
int func_02050324(int pid) {
    int i;

    if (*(char **) (((char *) &data_0210e8cc) + 0xc) == 0 || pid == 0) {
        return -1;
    }
    for (i = 0; i < *(int *) (*(char **) (((char *) &data_0210e8cc) + 0xc) + 0x14); i++) {
        if (pid == func_020502dc(i)) {
            return i;
        }
    }
    return -1;
}
