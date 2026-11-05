/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020638a8 from projets/children-of-mana/src/auto/func_020638a8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_0201e3b0(void);
extern u32 func_0201e3c4(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern s32 func_0201efe0(void);
extern UnkSndCommand *data_0203e0f0;
s32 func_0201efe0(void) {
    u32 enabled = func_0201e3b0();
    s32 count   = 0;
    UnkSndCommand *cmd;

    for (cmd = data_0203e0f0; cmd != 0; cmd = cmd->next) {
        count++;
    }
    func_0201e3c4(enabled);
    return count;
}
