/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndArcStrmSetupPlayer from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nns/snd/snd_arc_stream_player.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
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
typedef struct NNSiSndFader {
    int origin;
    int target;
    int position;
    int duration;
} NNSiSndFader;
typedef struct NNSSndHeap NNSSndHeap;
typedef void (*NNSSndHeapDisposeCallback)(void *memory, u32 size, u32 user0, u32 user1);
struct NNSSndHeap {
    NNSFndHeapHead *frame;
    NNSFndList sections;
};
extern void *func_02065044(NNSSndHeap *heap, u32 size, NNSSndHeapDisposeCallback dispose, u32 user0, u32 user1);
typedef u16 OsThreadQueue;
typedef struct PmSleepCallback {
    void (*callback)(void *);
    void *argument;
    struct PmSleepCallback *next;
} PmSleepCallback;
typedef void (*NNSSndStrmCallback)(int reason, int channels, void **buffers, u32 size, int format, void *argument);
typedef struct NNSSndStrm {
    NNSFndLink link;
    PmSleepCallback pre_sleep;
    PmSleepCallback post_sleep;
    int format;
    signed int active : 1;
    signed int started : 1;
    signed int reserved_flags : 30;
    u32 buffer_size;
    int block_count;
    NNSSndStrmCallback callback;
    void *argument;
    int block;
    int volume_db;
    int alarm;
    u32 channel_mask;
    int channel_count;
    u8 channels[16];
} NNSSndStrm;
typedef struct FsFile FsFile;
typedef struct FsArchive FsArchive;
typedef struct FsLink {
    struct FsLink *previous;
    struct FsLink *next;
} FsLink;
typedef struct FsFileId {
    FsArchive *archive;
    u32 id;
} FsFileId;
typedef struct FsDirectoryPosition {
    FsArchive *archive;
    u16 directory;
    u16 index;
    u32 position;
} FsDirectoryPosition;
typedef struct FsGetPathArgs {
    char *buffer;
    u32 capacity;
    u16 length;
    u16 directory;
} FsGetPathArgs;
typedef struct FsDirectoryEntry {
    union {
        FsDirectoryPosition directory;
        FsFileId file;
    } entry;
    int is_directory;
    u32 name_length;
    char name[128];
} FsDirectoryEntry;
typedef int (*FsArchiveIo)(FsArchive *archive, void *buffer, u32 offset, u32 size);
typedef int (*FsArchiveProc)(FsFile *file, int command);
struct FsArchive {
    u32 name;
    FsArchive *next;
    FsArchive *previous;
    OsThreadQueue sync_queue;
    OsThreadQueue suspend_queue;
    volatile u32 flags;
    FsLink commands;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 original_fat;
    u32 original_fnt;
    void *table_buffer;
    FsArchiveIo read;
    FsArchiveIo write;
    FsArchiveIo table_read;
    FsArchiveProc procedure;
    u32 procedure_mask;
};
struct FsFile {
    FsLink link;
    FsArchive *archive;
    volatile u32 flags;
    int command;
    volatile int result;
    OsThreadQueue queue;
    u16 padding1a;
    union {
        struct {
            u32 id;
            s32 top;
            s32 bottom;
            s32 position;
        } file;
        struct {
            FsDirectoryPosition position;
            u32 parent;
        } directory;
    } property;
    union {
        u32 words[6];
        FsFileId file_id;
        FsDirectoryPosition directory;
        struct {
            void *buffer;
            u32 size;
            u32 length;
        } io;
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } direct;
        struct {
            FsDirectoryEntry *entry;
            int skip_name;
        } read_directory;
        FsGetPathArgs get_path;
        struct {
            FsDirectoryPosition directory;
            const char *path;
            int find_directory;
            void *output;
        } path;
    } argument;
};
extern void *func_02064a10(int index);
typedef struct NNSiSndArcStrmPlayer NNSiSndArcStrmPlayer;
typedef struct NNSSndStrmHandle {
    NNSiSndArcStrmPlayer *player;
} NNSSndStrmHandle;
typedef struct NNSSndArcStrmPlayerInfo {
    u8 count;
    u8 channels[6];
} NNSSndArcStrmPlayerInfo;
typedef struct NNSiSndStrmFileHeader {
    u8 header[24];
    u8 format, loop, channels, reserved;
    u16 sample_rate, timer;
    u32 loop_start, samples, data_offset, blocks;
    u32 block_size, block_samples, last_block_size, last_block_samples;
} NNSiSndStrmFileHeader;
typedef struct NNSiSndArcStrmRequest {
    int player;
    int stream;
} NNSiSndArcStrmRequest;
typedef struct NNSiSndArcStrmResponse {
    int stream;
    u32 offset_ms;
} NNSiSndArcStrmResponse;
typedef int (*NNSSndArcStrmCallback)(int event, NNSiSndArcStrmRequest *request, NNSiSndArcStrmResponse *response,
                                     void *argument);
typedef struct NNSiSndAdpcmState {
    s16 sample;
    u8 index;
    u8 reserved;
} NNSiSndAdpcmState;
struct NNSiSndArcStrmPlayer {
    NNSSndStrm stream;
    FsFile file;
    u32 file_offset;
    NNSiSndStrmFileHeader header;
    NNSiSndFader fader;
    NNSiSndAdpcmState decoder[6];
    signed int active : 1;
    signed int playing : 1;
    signed int start_pending : 1;
    signed int fading : 1;
    signed int seek_adpcm : 1;
    signed int finished : 1;
    signed int mono : 1;
    signed int reserved_flags : 25;
    int blocks;
    int prepared;
    int pending;
    int channel_refs;
    u8 channel_count;
    u8 reserved289;
    u8 channels[6];
    void *buffer;
    u32 buffer_size;
    NNSSndStrmCallback callback;
    void *argument;
    NNSSndArcStrmCallback archive_callback;
    void *archive_argument;
    int stream_index;
    int player_index;
    NNSSndStrmHandle *handle;
    int priority;
    int volume;
    int volume_db;
    u32 sample_offset;
};
extern NNSiSndArcStrmPlayer data_02184080[4];
extern void func_02066348(NNSiSndArcStrmPlayer *player);
extern int func_0206656c(NNSSndHeap *heap);
extern void func_0206611c(void *memory, u32 size, u32 player, u32 argument);
int func_0206656c(NNSSndHeap *heap) {
    int i;
    u32 size;
    NNSiSndArcStrmPlayer *player = data_02184080;
    for (i = 0; i < 4; ++i, ++player) {
        NNSSndArcStrmPlayerInfo *info = func_02064a10(i);
        if (info) {
            int channel;
            player->channel_count = info->count;
            for (channel = 0; channel < info->count; ++channel) {
                player->channels[channel] = info->channels[channel];
            }
            if (heap) {
                void *buffer;
                size   = player->channel_count << 11;
                buffer = func_02065044(heap, size, func_0206611c, (u32) player, 0);
                if (!buffer) {
                    return 0;
                }
                func_02066348(player);
                player->buffer      = buffer;
                player->buffer_size = size;
            }
        }
    }
    return 1;
}
