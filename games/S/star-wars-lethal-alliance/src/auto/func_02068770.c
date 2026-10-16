/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02067278(void);
extern u32 func_0206728c(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02068770(void);
extern UnkSndCommand *data_020e66b0;
extern UnkSndCommand *data_020e66a0;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02068770(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_02067278();

    cmd = data_020e66a0;
    if (cmd == 0) {
        func_0206728c(enabled);
        return 0;
    }
    data_020e66a0 = cmd->next;
    if (data_020e66a0 == 0) {
        data_020e66b0 = 0;
    }
    func_0206728c(enabled);
    return cmd;
}
