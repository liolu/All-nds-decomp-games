/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndArcGetGroupInfo from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nns/snd/snd_archive_info.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
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
typedef struct NNSSndArcHeader {
    u32 signature;
    u16 byte_order;
    u16 version;
    u32 file_size;
    u16 header_size;
    u16 block_count;
    u32 symbol_offset;
    u32 symbol_size;
    u32 info_offset;
    u32 info_size;
    u32 fat_offset;
    u32 fat_size;
    u32 file_offset;
    u32 file_block_size;
} NNSSndArcHeader;
typedef struct NNSSndArcFatEntry {
    u32 offset;
    u32 size;
    void *address;
    u32 reserved;
} NNSSndArcFatEntry;
typedef struct NNSSndArcFat {
    u32 signature;
    u32 size;
    u32 count;
    NNSSndArcFatEntry entries[1];
} NNSSndArcFat;
typedef struct NNSSndArcInfo {
    u32 signature;
    u32 size;
    u32 sequence;
    u32 sequence_archive;
    u32 bank;
    u32 wave_archive;
    u32 player;
    u32 group;
    u32 stream_player;
    u32 stream;
} NNSSndArcInfo;
typedef struct NNSSndArc {
    NNSSndArcHeader header;
    int file_open;
    FsFile file;
    FsFileId file_id;
    NNSSndArcFat *fat;
    void *symbols;
    NNSSndArcInfo *info;
} NNSSndArc;
extern NNSSndArc *data_02123cb4;
extern void *func_0207521c(int index);
typedef struct NNSiSndArcOffsetTable {
    u32 count;
    u32 entries[1];
} NNSiSndArcOffsetTable;
void *func_0207521c(int index) {
    NNSSndArc *archive           = data_02123cb4;
    NNSSndArcInfo *info          = archive->info;
    u32 offset                   = info->group;
    NNSiSndArcOffsetTable *table = !offset ? 0 : (NNSiSndArcOffsetTable *) ((u8 *) info + offset);
    if (!table) {
        return 0;
    }
    if (index < 0) {
        return 0;
    }
    if ((u32) index >= table->count) {
        return 0;
    }
    offset = table->entries[index];
    info   = archive->info;
    return !offset ? 0 : (u8 *) info + offset;
}
