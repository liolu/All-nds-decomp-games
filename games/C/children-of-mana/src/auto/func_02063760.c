/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0205c948(void);
extern u32 func_0205c95c(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02063760(void);
extern UnkSndCommand *data_0211c828;
extern UnkSndCommand *data_0211c818;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02063760(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_0205c948();

    cmd = data_0211c818;
    if (cmd == 0) {
        func_0205c95c(enabled);
        return 0;
    }
    data_0211c818 = cmd->next;
    if (data_0211c818 == 0) {
        data_0211c828 = 0;
    }
    func_0205c95c(enabled);
    return cmd;
}
