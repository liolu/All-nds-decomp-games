/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MbParent_SendCommData from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/mb/mb_parent_send_comm_data.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
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
typedef struct DlPlayGameSource {
    const char *romFilePath;
    const u16 *gameName;
    const u16 *gameIntro;
    const char *iconCharPath;
    const char *iconPalettePath;
    u32 ggid;
    u8 maxPlayers;
} DlPlayGameSource;
typedef struct DlPlayPlayerBadge {
    u8 favoriteColor : 4;
    u8 playerNo : 4;
    u8 nameLength;
    u16 name[10];
} DlPlayPlayerBadge;
typedef struct DlPlayFragmentStore {
    u8 data[15][32];
    u32 received[15];
} DlPlayFragmentStore;
typedef struct DlPlaySegmentStarts {
    u32 segmentOffsets[3];
    u16 segmentFirstBlocks[3];
    u16 blockCount;
} DlPlaySegmentStarts;
typedef struct DlPlayHeldBlock {
    u32 address;
    u32 size;
    u8 *buffer;
    u32 state;
} DlPlayHeldBlock;
typedef struct DlPlayHeldProgram {
    u32 readSinceLoad;
    u8 pad_04[0x10 - 4];
    char archiveName[4];
    int archiveNameLength;
    u8 pad_18[0x30 - 0x18];
    DlPlayHeldBlock pages[4];
} DlPlayHeldProgram;
typedef struct DlPlayWorkerJob {
    struct DlPlayWorkerJob *next;
    u32 busy : 1;
    u32 priority : 31;
    void (*task)(struct DlPlayWorkerJob *info);
    void (*callback)(struct DlPlayWorkerJob *info);
    DlPlayHeldBlock *page;
    DlPlayHeldProgram *cache;
    u8 pad_18[8];
} DlPlayWorkerJob;
typedef struct DlPlayOfferedFile {
    u8 dlFileInfo[0xe4];
    DlPlayGameEntry gameInfo;
    DlPlaySegmentStarts blockTable;
    const DlPlayGameSource *registry;
    const void *source;
    u16 currentBlock;
    u16 nextBlock;
    u16 pollBitmap;
    u16 childBitmap;
    u16 changedBitmap;
    u8 active;
    u8 pad_5cb;
    DlPlayHeldProgram *cache;
    u32 *segmentRomAddresses;
} DlPlayOfferedFile;
typedef void (*DlPlayLinkEventFunc)(u32 aid, u32 state, void *arg);
typedef struct DlPlayHostLinkArea {
    u8 sendBuffer[4];
    u8 pad_04[0x400 - 4];
    u16 unk_400[(0x1300 - 0x400) / 2];
    DlPlayPlayerBadge user;
    u16 unk_1316;
    u32 blockSizeMax;
    u32 mpStarting;
    u32 unk_1320;
    u8 pad_1324[0x1340 - 0x1324];
    DlPlayPlayerBadge childUsers[15];
    u16 childVersions[15];
    u32 childGgids[15];
    DlPlayLinkEventFunc callback;
    int commState[15];
    u8 fileCount;
    u8 currentFile;
    s8 childFiles[15];
    u8 childCount;
    u16 childEntryBitmap;
    DlPlayFragmentStore pieceBuffer;
    u16 childRequests[15];
    DlPlayPlayerBadge userInfoCopy;
    DlPlayOfferedFile files[16];
    u32 unk_74c8;
    u8 pad_74cc[0x74e0 - 0x74cc];
    u8 taskThreadStack[0x800];
    DlPlayWorkerJob task;
} DlPlayHostLinkArea;
extern DlPlayHostLinkArea *data_0206ef94;
extern void func_0204a950(u16 value, void *dst, u32 size);
extern int func_02054274(u8 type, u16 bitmap);
extern int func_020540c4(void);
extern int func_02053d70(void);
typedef struct DlPlayChildrenByState {
    u16 connected;
    u16 accepted;
    u16 kicked;
    u16 bootRequest;
    u16 memberFull;
} DlPlayChildrenByState;
int func_02053bdc(void) {
    volatile u16 zero16 = 0;
    DlPlayChildrenByState bitmaps;
    u16 aid;
    int result;

    func_0204a950(zero16, &bitmaps, sizeof(bitmaps));
    for (aid = 1; aid <= 15; aid++) {
        switch (data_0206ef94->commState[aid - 1]) {
            case 2:
                bitmaps.connected |= 1 << aid;
                break;
            case 5:
                bitmaps.accepted |= 1 << aid;
                break;
            case 4:
                bitmaps.kicked |= 1 << aid;
                break;
            case 8:
                bitmaps.bootRequest |= 1 << aid;
                break;
            case 11:
                bitmaps.memberFull |= 1 << aid;
                break;
        }
    }

    if (bitmaps.bootRequest != 0) {
        result = func_02054274(5, bitmaps.bootRequest);
    } else if (bitmaps.connected != 0) {
        result = func_02054274(1, bitmaps.connected);
    } else if (bitmaps.memberFull != 0) {
        result = func_02054274(6, bitmaps.memberFull);
    } else if (bitmaps.kicked != 0) {
        result = func_02054274(2, bitmaps.kicked);
    } else if (bitmaps.accepted != 0) {
        result = func_020540c4();
    } else {
        result = func_02053d70();
    }
    if (result == 21) {
        return func_02054274(0, 0xffff);
    }
    return result;
}
