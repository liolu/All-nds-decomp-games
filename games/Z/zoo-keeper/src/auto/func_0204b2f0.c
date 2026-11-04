/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 _ZN3IRQ7DisableEv(void);
extern u32 _ZN3IRQ7RestoreEj(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_0204b2f0(void);
extern UnkSndCommand *data_0206bd1c;
extern UnkSndCommand *data_0206bd0c;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_0204b2f0(void) {
    UnkSndCommand *cmd;
    u32 enabled = _ZN3IRQ7DisableEv();

    cmd = data_0206bd0c;
    if (cmd == 0) {
        _ZN3IRQ7RestoreEj(enabled);
        return 0;
    }
    data_0206bd0c = cmd->next;
    if (data_0206bd0c == 0) {
        data_0206bd1c = 0;
    }
    _ZN3IRQ7RestoreEj(enabled);
    return cmd;
}
