/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_CallBuddyFriendCallback from https://github.com/Project-Holon/aletheia src/matched/ov_sdk/ov009_func_02169174.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
struct FriendGlobal {
    int field0;
    int field4;
    int pad2;
    struct Work *ctl;
};
struct Friend {
    int a, b, c;
};
struct Work {
    int state;
    char pad0[0x18 - 4];
    struct Friend *friends;
    char pad1[0x34 - 0x1c];
    void (*cb34)(int index, unsigned char status, char *str, void *arg);
    void *arg38;
    char pad2[0x44 - 0x3c];
    void (*cb44)(int index, void *arg);
    void *arg48;
};
extern struct FriendGlobal data_0210e8cc;
typedef unsigned char u8;
extern u8 func_0204fa84(int a, int b);
void func_02050474(int index) {
    struct {
        char pad[0x108];
        char s[0x10c];
    } status;
    unsigned char st;
    if (data_0210e8cc.ctl->cb44 != 0 && data_0210e8cc.ctl->state != 1) {
        data_0210e8cc.ctl->cb44(index, data_0210e8cc.ctl->arg48);
    }
    if (data_0210e8cc.ctl->cb34 == 0) {
        return;
    }
    st = func_0204fa84((int) (&data_0210e8cc.ctl->friends[index]), (int) status.s);
    data_0210e8cc.ctl->cb34(index, st, status.s, data_0210e8cc.ctl->arg38);
}
