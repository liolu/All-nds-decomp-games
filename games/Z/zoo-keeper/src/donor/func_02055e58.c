/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* DownloadPlay_ProgramBufferSize from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/sdk/mb/download_play_program_buffer_size.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct RomRegion {
    u32 offset;
    u32 length;
} RomRegion;
typedef struct RomHeader {
    u8 pad_00[0x20];
    u32 arm9RomOffset;
    u32 arm9EntryAddress;
    u32 arm9RamAddress;
    u32 arm9Size;
    u32 arm7RomOffset;
    u32 arm7EntryAddress;
    u32 arm7RamAddress;
    u32 arm7Size;
    RomRegion fnt;
    RomRegion fat;
    RomRegion arm9Overlays;
    RomRegion arm7Overlays;
    u32 cardControl;
    u8 pad_64[0x1c];
    u32 romSize;
    u8 pad_84[0xdc];
} RomHeader;
typedef struct FSArchive FSArchive;
typedef struct FSFile FSFile;
typedef struct FSFileID {
    FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct FSDirPos {
    FSArchive *arc;
    u16 ownId;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct DirListingEntry {
    union {
        FSFileID fileId;
        FSDirPos dirId;
    };
    u32 isDirectory;
    u32 nameLength;
    char name[127 + 1];
} DirListingEntry;
typedef struct FSGetPathInfo {
    u8 *buffer;
    u32 bufferSize;
    u16 totalLength;
    u16 dirId;
} FSGetPathInfo;
struct FSFile {
    FSFile *prev;
    FSFile *next;
    FSArchive *arc;
    u32 flags;
    u32 command;
    u32 error;
    OSThreadQueue queue;
    union {
        struct {
            u32 id;
            u32 top;
            u32 bottom;
            u32 pos;
        };
        struct {
            FSDirPos dirPos;
            u32 parent;
        };
    };
    union {
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } openFileDirect;
        struct {
            u32 unused;
            u32 id;
        } openFileFast;
        struct {
            void *dest;
            u32 requested;
            u32 length;
        } readFile;
        struct {
            FSDirPos pos;
        } seekDir;
        struct {
            DirListingEntry *entry;
            BOOL skipName;
        } readDir;
        struct {
            FSDirPos pos;
            const char *path;
            BOOL findDirectory;
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;
        } findPath;
        FSGetPathInfo getPath;
    } arg;
};
typedef int (*ArchiveByteReader)(FSArchive *arc, void *dest, u32 src, u32 len);
typedef int (*ArchiveByteWriter)(FSArchive *arc, const void *src, u32 dest, u32 len);
struct FSArchive {
    u32 name;
    FSArchive *next;
    FSArchive *prev;
    OSThreadQueue queue;
    u32 flags;
    u32 unk_14;
    FSFile *command;
    u32 base;
    u32 fat;
    u32 fatSize;
    u32 fnt;
    u32 fntSize;
    u32 fatOriginal;
    u32 fntOriginal;
    u32 unk_38;
    ArchiveByteReader read;
    ArchiveByteWriter write;
    ArchiveByteReader readTable;
    void *tableBuffer;
    u32 tableBufferSize;
};
extern s32 func_0204d71c(FSFile *file, void *dest, s32 size);
extern BOOL func_0204d6b0(FSFile *file, s32 offset, int origin);
u32 func_02055e58(FSFile *file) {
    const RomHeader *header = ((void *) 0);
    u32 length              = 0;
    u8 headerStart[0x60];

    if (file != ((void *) 0)) {
        u32 position = file->pos - file->top;

        if (func_0204d71c(file, headerStart, sizeof(headerStart)) >= sizeof(headerStart)) {
            header = (const RomHeader *) headerStart;
        }
        func_0204d6b0(file, position, 0);
    } else {
        header = ((RomHeader *) 0x027ffe00);
    }
    if (header != ((void *) 0)) {
        length = 0x268 + header->arm9Size + header->arm7Size;
        if (length < 0x10000) {
            length = 0x10000;
        }
    }
    return length;
}
