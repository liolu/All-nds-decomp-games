/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02067278(void);
extern u32 func_0206728c(u32 state);
extern void func_020672dc(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02068d00(u32 flags);
extern u32 func_020690ac(void);
extern u32 data_020e66a4;
extern UnkSndCommand *data_020e66b0;
extern UnkSndCommand *data_020e66a0;
extern s32 data_020e66b4;
extern s32 data_020e66bc;
extern UnkSndCommand *data_020e66c4[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02068d00(u32 flags) {
    u32 enabled = func_02067278();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_020e66a4 == func_020690ac()) {
            func_0206728c(enabled);
            func_020672dc(100);
            enabled = func_02067278();
        }
    } else if (data_020e66a4 == func_020690ac()) {
        func_0206728c(enabled);
        return 0;
    }

    head = data_020e66c4[data_020e66b4];
    data_020e66b4++;
    if (data_020e66b4 > 8) {
        data_020e66b4 = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_020e66b0 != 0) {
        data_020e66b0->next = head;
    } else {
        data_020e66a0 = head;
    }
    data_020e66b0 = tail;
    data_020e66bc--;
    data_020e66a4++;

    func_0206728c(enabled);
    return head;
}
