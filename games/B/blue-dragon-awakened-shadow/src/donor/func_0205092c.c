/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_RefreshFriendListForth from https://github.com/Project-Holon/aletheia src/matched/ov_sdk/ov009_func_021695F0.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
struct FriendGlobal {
    int field0;
    int field4;
    int pad2;
    struct Work *ctl;
};
typedef struct FriendData {
    unsigned char data[12];
} FriendData;
typedef struct FriendCtl {
    unsigned char pad0[0x1d];
    unsigned char needRefresh;
} FriendCtl;
typedef struct FriendGlobal FriendGlobal;
extern struct FriendGlobal data_0210e8cc;
extern int DWC_GetFriendDataType(FriendData *friendData);
extern int func_020502dc(int index);
extern int DWC_IsBuddyFriendData(FriendData *friendData);
extern void func_020508d4(void *friendData, int deleteIndex, int otherIndex);
int func_0205092c(FriendData *friendList, int index, int profileID) {
    int i;
    int pid_i;

    if (DWC_GetFriendDataType(&friendList[index]) == 1) {
        return 0;
    }
    for (i = 0; i < index; i++) {
        pid_i = func_020502dc(i);
        if (pid_i != 0 && pid_i == profileID) {
            if (DWC_IsBuddyFriendData(&friendList[index]) && !DWC_IsBuddyFriendData(&friendList[i])) {
                func_020508d4(friendList, i, index);
            } else {
                func_020508d4(friendList, index, i);
            }
            ((FriendCtl *) data_0210e8cc.ctl)->needRefresh = 1;
            return 1;
        }
    }
    return 0;
}
