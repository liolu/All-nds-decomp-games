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
extern s32 func_0206bc04(void);
extern UnkSndCommand *data_021849c0;

/* func_0207ac8c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
s32 func_0206bc04(void) {
    u32 enabled = _ZN3IRQ7DisableEv();
    s32 count   = 0;
    UnkSndCommand *cmd;

    for (cmd = data_021849c0; cmd != 0; cmd = cmd->next) {
        count++;
    }
    _ZN3IRQ7RestoreEj(enabled);
    return count;
}
