/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0205c948(void);
extern u32 func_0205c95c(u32 state);
extern void func_0205c9b8(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02063cf0(u32 flags);
extern u32 func_0206409c(void);
extern u32 data_0211c81c;
extern UnkSndCommand *data_0211c828;
extern UnkSndCommand *data_0211c818;
extern s32 data_0211c82c;
extern s32 data_0211c834;
extern UnkSndCommand *data_0211c83c[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02063cf0(u32 flags) {
    u32 enabled = func_0205c948();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_0211c81c == func_0206409c()) {
            func_0205c95c(enabled);
            func_0205c9b8(100);
            enabled = func_0205c948();
        }
    } else if (data_0211c81c == func_0206409c()) {
        func_0205c95c(enabled);
        return 0;
    }

    head = data_0211c83c[data_0211c82c];
    data_0211c82c++;
    if (data_0211c82c > 8) {
        data_0211c82c = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_0211c828 != 0) {
        data_0211c828->next = head;
    } else {
        data_0211c818 = head;
    }
    data_0211c828 = tail;
    data_0211c834--;
    data_0211c81c++;

    func_0205c95c(enabled);
    return head;
}
