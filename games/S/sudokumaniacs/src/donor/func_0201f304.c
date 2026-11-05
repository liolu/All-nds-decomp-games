/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063cf0 from projets/children-of-mana/src/auto/func_02063cf0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_0201e3b0(void);
extern u32 func_0201e3c4(u32 state);
extern void func_0201e414(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_0201f304(u32 flags);
extern u32 func_0201f680(void);
extern u32 data_0203e0ec;
extern UnkSndCommand *data_0203e0f8;
extern UnkSndCommand *data_0203e0e8;
extern s32 data_0203e0fc;
extern s32 data_0203e104;
extern UnkSndCommand *data_0203e10c[9];
UnkSndCommand *func_0201f304(u32 flags) {
    u32 enabled = func_0201e3b0();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_0203e0ec == func_0201f680()) {
            func_0201e3c4(enabled);
            func_0201e414(100);
            enabled = func_0201e3b0();
        }
    } else if (data_0203e0ec == func_0201f680()) {
        func_0201e3c4(enabled);
        return 0;
    }

    head = data_0203e10c[data_0203e0fc];
    data_0203e0fc++;
    if (data_0203e0fc > 8) {
        data_0203e0fc = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_0203e0f8 != 0) {
        data_0203e0f8->next = head;
    } else {
        data_0203e0e8 = head;
    }
    data_0203e0f8 = tail;
    data_0203e104--;
    data_0203e0ec++;

    func_0201e3c4(enabled);
    return head;
}
