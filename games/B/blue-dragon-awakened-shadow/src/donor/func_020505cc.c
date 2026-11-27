/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_UpdateFriendReq from https://github.com/Project-Holon/aletheia src/matched/ov_sdk/ov009_func_021692C4.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef union DWCstAccFriendData {
    char data[0xc];
} DWCstAccFriendData;
typedef struct GPBuddyStatus {
    int profile;
    int status;
    char statusString[256];
    char locationString[256];
    unsigned int ip;
    int port;
    int quietModeFlags;
} GPBuddyStatus;
typedef struct FriendList {
    int field0;
    void **connection;
    int field8;
    int pad1;
    int pad2;
    int count;
    DWCstAccFriendData *list;
    u8 field1c;
    u8 field1d;
    u8 reason;
    u8 field1f;
    u8 pad4[0x5c - 0x20];
    int *field5c;
} FriendList;
typedef struct FriendState {
    int field0;
    int field4;
    int pad2;
    FriendList *fl;
} FriendState;
extern int gpGetNumBuddies(void **connection, int *numBuddies);
extern int func_02050c2c(int result);
extern int func_0205e654(void **connection, int index, GPBuddyStatus *status);
extern int func_020502dc(int index);
extern int DWC_IsBuddyFriendData(DWCstAccFriendData *frienddata);
extern void DWC_SetGsProfileId(DWCstAccFriendData *frienddata, int gs_profile_id);
extern void DWCi_SetBuddyFriendData(DWCstAccFriendData *frienddata);
extern int func_02047eb8(DWCstAccFriendData *frienddata);
extern void func_0204801c(DWCstAccFriendData *frienddata, int setflag);
extern int gpDeleteBuddy(void **connection, int profile);
extern int func_02047f3c(DWCstAccFriendData *frienddata);
extern int func_0205092c(DWCstAccFriendData *friendList, int index, int profileID);
extern int gpGetBuddyIndex(void **connection, int profile, int *index);
extern int func_02050b3c(int profileID);
extern void func_0204804c(DWCstAccFriendData *frienddata, int setflag);
extern void *func_0204f190(void);
extern int func_02048738(void *userdata, DWCstAccFriendData *frienddata);
extern void DWC_LoginIdToUserName(void *userdata, DWCstAccFriendData *frienddata, char *username);
extern int func_0205e1ac(void **connection, char *nick, char *uniquenick, char *email, char *firstname, char *lastname,
                         int icquin, int blocking, void (*callback)(void **, void *, void *), void *param);
extern void func_02050ca0(void **connection, void *arg, void *param);
extern FriendState data_0210e8cc;
void func_020505cc(DWCstAccFriendData *friendList, int friendListLen) {
    GPBuddyStatus status;
    char userName[21];
    int numBuddy;
    int i;
    int j;
    int profileID;

    if ((data_0210e8cc.fl)->reason == 0) {
        func_02050c2c(gpGetNumBuddies((data_0210e8cc.fl)->connection, &numBuddy));
        i = 0;
        for (; i < numBuddy;) {
            func_02050c2c(func_0205e654((data_0210e8cc.fl)->connection, i, &status));
            for (j = 0; j < friendListLen; j++) {
                if (func_020502dc(j) == status.profile) {
                    if (DWC_IsBuddyFriendData(&friendList[j]) != 0) {
                        goto after;
                    }
                    DWC_SetGsProfileId(&friendList[j], status.profile);
                    DWCi_SetBuddyFriendData(&friendList[j]);
                    if (func_02047eb8(&(data_0210e8cc.fl)->list[j]) != 0) {
                        func_0204801c(&(data_0210e8cc.fl)->list[j], 1);
                    }
                    (data_0210e8cc.fl)->field1d = 1;
                    goto after;
                }
            }
        after:
            if (j == friendListLen) {
                func_02050c2c(gpDeleteBuddy((data_0210e8cc.fl)->connection, status.profile));
                numBuddy--;
                i--;
            }
            i++;
        }
        (data_0210e8cc.fl)->reason = 1;
    }

    while ((data_0210e8cc.fl)->field1c < friendListLen) {
        if (func_02047f3c(&friendList[(data_0210e8cc.fl)->field1c]) != 0) {
            goto next;
        }
        profileID = func_020502dc((data_0210e8cc.fl)->field1c);
        if (profileID == 0) {
            goto blockB;
        }
        if (func_0205092c(friendList, (data_0210e8cc.fl)->field1c, profileID) != 0) {
            goto next;
        }
        func_02050c2c(gpGetBuddyIndex((data_0210e8cc.fl)->connection, profileID, &i));
        if (i != -1) {
            goto next;
        }
        func_02050b3c(profileID);
        func_0204804c(&friendList[(data_0210e8cc.fl)->field1c], 1);
        goto next;
    blockB:
        if (func_02048738(func_0204f190(), &friendList[(data_0210e8cc.fl)->field1c]) != -1) {
            goto next;
        }
        DWC_LoginIdToUserName(func_0204f190(), &friendList[(data_0210e8cc.fl)->field1c], userName);
        func_0205e1ac((data_0210e8cc.fl)->connection, 0, 0, 0, 0, userName, 0, 0, func_02050ca0,
                      (void *) (data_0210e8cc.fl)->field1c);
        (data_0210e8cc.fl)->reason = 2;
        return;
    next:
        (data_0210e8cc.fl)->field1c++;
    }
}
