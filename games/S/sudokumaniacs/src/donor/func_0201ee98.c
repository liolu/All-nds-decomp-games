/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063760 from projets/children-of-mana/src/auto/func_02063760.c (same code in another game of this workspace), reused
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
extern UnkSndCommand *func_0201ee98(void);
extern UnkSndCommand *data_0203e0f8;
extern UnkSndCommand *data_0203e0e8;
UnkSndCommand *func_0201ee98(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_0201e3b0();

    cmd = data_0203e0e8;
    if (cmd == 0) {
        func_0201e3c4(enabled);
        return 0;
    }
    data_0203e0e8 = cmd->next;
    if (data_0203e0e8 == 0) {
        data_0203e0f8 = 0;
    }
    func_0201e3c4(enabled);
    return cmd;
}
