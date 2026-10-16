/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020449c4(void);
extern u32 func_020449d8(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02045c30(void);
extern UnkSndCommand *data_020b0204;
extern UnkSndCommand *data_020b01f4;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_02045c30(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_020449c4();

    cmd = data_020b01f4;
    if (cmd == 0) {
        func_020449d8(enabled);
        return 0;
    }
    data_020b01f4 = cmd->next;
    if (data_020b01f4 == 0) {
        data_020b0204 = 0;
    }
    func_020449d8(enabled);
    return cmd;
}
