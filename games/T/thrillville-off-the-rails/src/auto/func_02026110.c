/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02024624(void);
extern u32 func_02024638(u32 state);
extern void func_02024694(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02026110(u32 flags);
extern u32 func_020264bc(void);
extern u32 data_020ec7b0;
extern UnkSndCommand *data_020ec7bc;
extern UnkSndCommand *data_020ec7ac;
extern s32 data_020ec7c0;
extern s32 data_020ec7c8;
extern UnkSndCommand *data_020ec7d0[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02026110(u32 flags) {
    u32 enabled = func_02024624();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_020ec7b0 == func_020264bc()) {
            func_02024638(enabled);
            func_02024694(100);
            enabled = func_02024624();
        }
    } else if (data_020ec7b0 == func_020264bc()) {
        func_02024638(enabled);
        return 0;
    }

    head = data_020ec7d0[data_020ec7c0];
    data_020ec7c0++;
    if (data_020ec7c0 > 8) {
        data_020ec7c0 = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_020ec7bc != 0) {
        data_020ec7bc->next = head;
    } else {
        data_020ec7ac = head;
    }
    data_020ec7bc = tail;
    data_020ec7c8--;
    data_020ec7b0++;

    func_02024638(enabled);
    return head;
}
