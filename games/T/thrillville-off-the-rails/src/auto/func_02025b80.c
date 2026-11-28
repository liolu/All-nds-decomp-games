/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02024624(void);
extern u32 func_02024638(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02025b80(void);
extern UnkSndCommand *data_020ec7bc;
extern UnkSndCommand *data_020ec7ac;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02025b80(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_02024624();

    cmd = data_020ec7ac;
    if (cmd == 0) {
        func_02024638(enabled);
        return 0;
    }
    data_020ec7ac = cmd->next;
    if (data_020ec7ac == 0) {
        data_020ec7bc = 0;
    }
    func_02024638(enabled);
    return cmd;
}
