/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MbGame_LoadIconFile from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/mb/mb_game_load_icon_file.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
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
extern void func_0204dbd4(FSFile *file);
extern BOOL func_0204d878(FSFile *file, const char *path);
extern s32 func_0204d71c(FSFile *file, void *dest, s32 size);
extern BOOL func_0204d82c(FSFile *file);
typedef struct DlPlayGameEntry {
    u8 iconPalette[0x20];
    u8 iconChars[0x200];
    u8 userParam[22];
    u8 maxPlayers;
    u8 pad_237;
    u16 gameName[48];
    u16 gameIntro[96];
    u8 playerCount;
    u8 pad_359;
    u16 playerFlags;
    u16 unk_35c;
    u8 users[15][22];
    u8 unk_4a8[8];
    u16 sentPlayerFlags;
    u8 noIcon;
    u8 seqNo;
    u8 changeCount;
    u8 fileNo;
    u8 pad_4b6[2];
    u32 ggid;
    struct DlPlayGameEntry *next;
} DlPlayGameEntry;
BOOL func_020565d8(const char *path, DlPlayGameEntry *game, BOOL isChars) {
    FSFile file;
    u8 *dst  = game->iconPalette;
    u32 size = isChars ? 0x200 : 0x20;

    if (isChars) {
        dst = game->iconChars;
    }
    if (path == ((void *) 0)) {
        return 0;
    }
    func_0204dbd4(&file);
    if (!func_0204d878(&file, path)) {
        return 0;
    }
    if (size != file.bottom - file.top) {
        func_0204d82c(&file);
        return 0;
    }
    func_0204d71c(&file, dst, size);
    func_0204d82c(&file);
    return 1;
}
