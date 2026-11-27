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
extern UnkSndCommand *func_0206ba7c(void);
extern UnkSndCommand *data_021849d0;
extern UnkSndCommand *data_021849c0;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_0206ba7c(void) {
    UnkSndCommand *cmd;
    u32 enabled = _ZN3IRQ7DisableEv();

    cmd = data_021849c0;
    if (cmd == 0) {
        _ZN3IRQ7RestoreEj(enabled);
        return 0;
    }
    data_021849c0 = cmd->next;
    if (data_021849c0 == 0) {
        data_021849d0 = 0;
    }
    _ZN3IRQ7RestoreEj(enabled);
    return cmd;
}
