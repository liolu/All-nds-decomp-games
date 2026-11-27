/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02074284 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nns/snd/snd_player.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct NNSFndLink {
    void *previous;
    void *next;
} NNSFndLink;
typedef struct NNSFndList {
    void *head;
    void *tail;
    u16 count;
    u16 offset;
} NNSFndList;
typedef struct NNSFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList children;
    u8 *start;
    u8 *end;
    u32 attributes;
} NNSFndHeapHead;
extern void *func_020645d8(NNSFndList *list, void *object);
typedef struct NNSiSndFader {
    int origin;
    int target;
    int position;
    int duration;
} NNSiSndFader;
typedef struct NNSiSndSeqPlayer NNSiSndSeqPlayer;
typedef struct NNSiSndPlayer NNSiSndPlayer;
typedef struct NNSiSndSeqHeap NNSiSndSeqHeap;
typedef struct NNSSndHeap NNSSndHeap;
struct NNSSndHeap {
    NNSFndHeapHead *frame;
    NNSFndList sections;
};
typedef struct NNSSndHandle {
    NNSiSndSeqPlayer *player;
} NNSSndHandle;
struct NNSiSndPlayer {
    NNSFndList sequences;
    NNSFndList heaps;
    u32 max_sequences;
    u32 channel_mask;
    u8 volume;
    u8 padding21[3];
};
struct NNSiSndSeqHeap {
    NNSFndLink link;
    NNSSndHeap *heap;
    NNSiSndSeqPlayer *player;
    int player_index;
};
struct NNSiSndSeqPlayer {
    NNSSndHandle *handle;
    NNSiSndPlayer *owner;
    NNSiSndSeqHeap *heap;
    NNSFndLink player_link;
    NNSFndLink global_link;
    NNSiSndFader fader;
    u8 state;
    u8 started;
    u8 paused;
    u8 start_pending;
    u32 command;
    u16 sequence_kind;
    u16 unknown36;
    u16 archive_or_sequence;
    u16 archive_sequence;
    u8 index;
    u8 priority;
    s16 volume_db;
    u8 initial_volume;
    u8 external_volume;
    u8 padding42[2];
};
extern int func_02076e30(NNSiSndFader *fader);
extern void func_02076e18(NNSiSndFader *fader);
extern int func_02076e00(NNSiSndFader *fader);
extern void func_02073e0c(NNSiSndSeqPlayer *sequence);
extern void func_02073f18(NNSiSndSeqPlayer *sequence);
extern void func_02074284(void);
extern NNSFndList data_021232ac;
extern const s16 data_020f9800[128];
extern void func_020635bc(u32 sequence, int volume);
extern int func_02063928(u32 command);
extern u32 func_020640d0(void);
extern void func_02063618(u32 sequence);
void func_02074284(void) {
    u32 active_mask            = func_020640d0();
    NNSiSndSeqPlayer *sequence = func_020645d8(&data_021232ac, 0);
    while (sequence) {
        NNSiSndSeqPlayer *next = func_020645d8(&data_021232ac, sequence);
        if (!sequence->started && func_02063928(sequence->command)) {
            sequence->started = 1;
        }
        if (sequence->started && !(active_mask & (1 << sequence->index))) {
            func_02073e0c(sequence);
        } else {
            int external_volume;
            int initial_volume;
            int player_volume;
            int volume;
            int fade;
            func_02076e18(&sequence->fader);
            external_volume = data_020f9800[sequence->external_volume];
            initial_volume  = data_020f9800[sequence->initial_volume];
            player_volume   = data_020f9800[sequence->owner->volume];
            fade            = data_020f9800[func_02076e30(&sequence->fader) >> 8];
            volume          = (player_volume + (initial_volume + external_volume)) + fade;
            if (volume < -723) {
                volume = -723;
            } else if (volume > 0) {
                volume = 0;
            }
            if (volume != sequence->volume_db) {
                func_020635bc(sequence->index, volume);
                sequence->volume_db = volume;
            }
            if (sequence->state == 2 && func_02076e00(&sequence->fader)) {
                func_02073f18(sequence);
            }
            if (sequence->start_pending) {
                func_02063618(sequence->index);
                sequence->start_pending = 0;
            }
        }
        sequence = next;
    }
}
void func_02073f18(NNSiSndSeqPlayer *sequence);
void func_02073e0c(NNSiSndSeqPlayer *sequence);
