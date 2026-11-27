/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fcc60 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nns/snd/snd_player.c (license: none),
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
extern void *func_020f27b0(NNSFndList *list, void *object);
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
extern int func_020fdbbc(NNSiSndFader *fader);
extern void func_020fdba4(NNSiSndFader *fader);
extern int func_020fdb8c(NNSiSndFader *fader);
extern void func_020fcb94(NNSiSndSeqPlayer *sequence);
extern void func_020fcc24(NNSiSndSeqPlayer *sequence);
extern void func_020fcc60(void);
extern NNSFndList data_02157354;
extern const s16 data_0212bd68[128];
extern void func_0210694c(u32 sequence, int volume);
extern int func_02106cb8(u32 command);
extern u32 func_02107620(void);
extern void func_021069a8(u32 sequence);
void func_020fcc60(void) {
    u32 active_mask            = func_02107620();
    NNSiSndSeqPlayer *sequence = func_020f27b0(&data_02157354, 0);
    while (sequence) {
        NNSiSndSeqPlayer *next = func_020f27b0(&data_02157354, sequence);
        if (!sequence->started && func_02106cb8(sequence->command)) {
            sequence->started = 1;
        }
        if (sequence->started && !(active_mask & (1 << sequence->index))) {
            func_020fcb94(sequence);
        } else {
            int external_volume;
            int initial_volume;
            int player_volume;
            int volume;
            int fade;
            func_020fdba4(&sequence->fader);
            external_volume = data_0212bd68[sequence->external_volume];
            initial_volume  = data_0212bd68[sequence->initial_volume];
            player_volume   = data_0212bd68[sequence->owner->volume];
            fade            = data_0212bd68[func_020fdbbc(&sequence->fader) >> 8];
            volume          = (player_volume + (initial_volume + external_volume)) + fade;
            if (volume < -723) {
                volume = -723;
            } else if (volume > 0) {
                volume = 0;
            }
            if (volume != sequence->volume_db) {
                func_0210694c(sequence->index, volume);
                sequence->volume_db = volume;
            }
            if (sequence->state == 2 && func_020fdb8c(&sequence->fader)) {
                func_020fcc24(sequence);
            }
            if (sequence->start_pending) {
                func_021069a8(sequence->index);
                sequence->start_pending = 0;
            }
        }
        sequence = next;
    }
}
void func_020fcc24(NNSiSndSeqPlayer *sequence);
void func_020fcb94(NNSiSndSeqPlayer *sequence);
