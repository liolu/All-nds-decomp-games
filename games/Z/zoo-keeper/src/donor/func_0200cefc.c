/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FIELD_ENCOUNT_ST_ResetGimmickState from https://github.com/Project-Holon/aletheia src/game/ov010/field_encount_st.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef float f32;
typedef volatile f32 vf32;
typedef int BOOL;
typedef u32 uptr;
typedef s32 sptr;
struct ScriptVm;
typedef int (*ScriptCmdFn)(struct ScriptVm *vm, void *user);
typedef int (*ScriptWaitFn)(struct ScriptVm *vm, void *user);
typedef int (*ScriptHookFn)(struct ScriptVm *vm, void *user, void *arg, u32 op);
typedef struct ScriptVmParams {
    u16 stackCap;
    u16 ringCap;
    const ScriptCmdFn *cmds;
    u32 cmdCount;
} ScriptVmParams;
typedef struct ScriptVm {
    ScriptVmParams params;
    u8 depth;
    u8 state;
    u8 cmpFlag;
    u8 pad0F;
    ScriptWaitFn wait;
    u8 *pc;
    uptr *stack;
    u32 *ring;
    void *user;
    ScriptHookFn hook;
    void *hookArg;
    void *data;
} ScriptVm;
struct GameSystem;
struct GameData;
struct GameEvent;
struct FieldMap;
struct MyStatus;
struct SaveControl;
struct PokeParty;
struct Pokemon;
struct MapObject;
struct FieldSkillInfo;
typedef int (*EventTaskFn)(struct GameEvent *task, u32 *state, void *work);
struct GameSystem;
struct Mmdl;
struct FieldMap;
typedef struct FieldSkillInfo {
    u16 zoneId;
    u16 usableMask;
    u32 playerState;
    struct GameSystem *gameSys;
    struct Mmdl *playerObj;
    struct FieldMap *fieldMap;
} FieldSkillInfo;
typedef struct SkillTarget {
    u16 id;
    u16 variant;
    u32 targetObj;
} SkillTarget;
typedef struct GameEvent *(*SkillEventFn)(SkillTarget *target, FieldSkillInfo *info);
typedef int (*SkillCheckFn)(struct FieldSkillInfo *info);
struct ArcFile;
typedef struct EncounterSlot {
    u16 species : 11;
    u16 form : 5;
    u16 reserved;
} EncounterSlot;
struct EncountRow {
    u8 reserved00[5];
    u8 hasSetA;
    u8 hasSetB;
    u8 flags;
    u8 reserved08[0xc0 - 8];
    EncounterSlot setA[5];
    EncounterSlot setB[5];
};
typedef struct EncountRow EncountRow;
typedef struct FieldGimmickWork {
    u8 pad00[0x0C];
    u32 state;
} FieldGimmickWork;
struct GameData;
struct GameData;
struct PlayerWork;
struct UnionInfo;
struct WifiList;
struct Location;
struct BagCursor;
struct MyStatus;
struct BgmInfoTable;
struct MapMatrix;
struct FieldSoundSystem;
struct PlayerPosition;
struct RailLocation;
struct SaveControl;
struct CommPlayerSupport;
struct PlayTime;
extern struct GameData *GAME_DATA_Create(u16 heapId);
extern void GAME_DATA_Delete(struct GameData *gameData);
extern struct PlayerWork *GAME_DATA_GetPlayerWork(struct GameData *gameData, int index);
extern struct PlayerWork *GAME_DATA_GetMyPlayerWork(struct GameData *gameData);
extern void *GAME_DATA_GetBattleRecSlot(struct GameData *gameData, u32 index);
extern void *GAME_DATA_GetLastBattleRecSlot(struct GameData *gameData);
extern struct UnionInfo *GAME_DATA_GetSecondUnionInfo(struct GameData *gameData);
extern u8 *GAME_DATA_GetUnionInfo(struct GameData *gameData, u32 index);
extern u16 *GAME_DATA_GetMusicalShotTitle(struct GameData *gameData);
extern u8 *GAME_DATA_GetMusicalShotExtraData(struct GameData *gameData);
extern void GAME_DATA_TakeUnionInfo(struct GameData *gameData, void *dst);
extern void GAME_DATA_ClearUnionInfo(struct GameData *gameData);
extern struct WifiList *GAME_DATA_GetWifiList(const struct GameData *gameData);
extern void *GAME_DATA_GetEventData(const struct GameData *gameData);
extern struct Location *GAME_DATA_GetStartLocation(const struct GameData *gameData);
extern void GAME_DATA_SetStartLocation(struct GameData *gameData, const struct Location *location);
extern struct Location *GAME_DATA_GetEntranceLocation(const struct GameData *gameData);
extern void GAME_DATA_SetEntranceLocation(struct GameData *gameData, const struct Location *location);
extern struct Location *GAME_DATA_GetSpecialLocation(const struct GameData *gameData);
extern void GAME_DATA_SetSpecialLocation(struct GameData *gameData, const struct Location *location);
extern struct Location *GAME_DATA_GetEscapeLocation(const struct GameData *gameData);
extern void GAME_DATA_SetEscapeLocation(struct GameData *gameData, const struct Location *location);
extern struct Location *GAME_DATA_GetWarpLocation(struct GameData *gameData);
extern void GAME_DATA_SetWarpLocation(struct GameData *gameData, const struct Location *location);
extern void GAME_DATA_SetWarpId(const struct GameData *gameData, u16 warpId);
extern u16 GAME_DATA_GetSituationWarpId(const struct GameData *gd);
extern struct BagCursor *GAME_DATA_GetMapMatrix(const struct GameData *gd);
extern void *GAME_DATA_GetMyItem(const struct GameData *gd);
extern void *GAME_DATA_GetMyParty(const struct GameData *gd);
extern void *GAME_DATA_GetBoxManager(const struct GameData *gd);
extern struct MyStatus *GAME_DATA_GetMyStatus(struct GameData *gd);
extern struct MyStatus *GAME_DATA_GetMyStatusPlayer(struct GameData *gd, u32 playerId);
extern struct BgmInfoTable *GAME_DATA_GetBagCursor(const struct GameData *gd);
extern void *GAME_DATA_GetOccupyInfo(const struct GameData *gd);
extern void *GAME_DATA_GetEventWork(const struct GameData *gd);
extern struct MapMatrix *GAME_DATA_GetFieldWork(const struct GameData *gd);
extern u32 GAME_DATA_GetMusicalWork(const struct GameData *gd);
extern u8 GAME_DATA_GetSeason(const struct GameData *gd);
extern void GAME_DATA_SetSeason(struct GameData *gd, u8 value);
extern u8 GAME_DATA_GetWeatherId(const struct GameData *gd);
extern void GAME_DATA_SetWeatherId(struct GameData *gd, u8 value);
extern u8 GAME_DATA_GetSubscreenType(const struct GameData *gd);
extern void GAME_DATA_SetSubscreenType(struct GameData *gd, u32 value);
extern u8 GAME_DATA_GetFieldMenuCursor(const struct GameData *gd);
extern void GAME_DATA_SetFieldMenuCursor(struct GameData *gd, u8 value);
extern void GAME_DATA_SetWalkCountEnabled(struct GameData *gd, u8 enable);
extern void GAME_DATA_ResetWalkCount(struct GameData *gd);
extern u8 GAME_DATA_IncWalkCount(struct GameData *gd);
extern u8 GAME_DATA_IsWalkCountEnabled(const struct GameData *gd);
extern struct FieldSoundSystem *GAME_DATA_GetBgmInfo(const struct GameData *gd);
extern void *func_02003adc(const struct GameData *gd);
extern u32 GAME_DATA_GetLastBattleResult(const struct GameData *gd);
extern void GAME_DATA_SetLastBattleResult(struct GameData *gd, u32 value);
struct BeaconStatus;
extern struct BeaconStatus *GAME_DATA_GetItemUseWork(const struct GameData *gd);
extern void GAME_DATA_InitPlayerWork(struct PlayerWork *player);
extern void GAME_DATA_SetPlayerPosition(struct PlayerWork *player, const struct PlayerPosition *pos);
extern struct PlayerPosition *GAME_DATA_GetPlayerPosition(struct PlayerWork *player);
extern void GAME_DATA_SetPlayerRail(struct PlayerWork *player, const struct RailLocation *rail);
extern struct RailLocation *GAME_DATA_GetPlayerRail(struct PlayerWork *player);
extern void GAME_DATA_SetPlayerMoveForm(struct PlayerWork *player, u8 form);
extern u8 GAME_DATA_GetPlayerMoveForm(const struct PlayerWork *player);
extern struct PlayerWork *GAME_DATA_SetPlayerZoneId(struct PlayerWork *player, u16 zoneId);
extern u16 GAME_DATA_GetPlayerZoneId(const struct PlayerWork *player);
extern void GAME_DATA_SetPlayerDirection(struct PlayerWork *player, int direction);
extern u16 GAME_DATA_GetPlayerDirection(const struct PlayerWork *player);
extern void GAME_DATA_SetPlayerDirectionType(struct PlayerWork *player, int dirId);
extern u32 GAME_DATA_GetPlayerDirectionType(const struct PlayerWork *player);
extern u32 GAME_DATA_GetPlayerObjectCode(const struct PlayerWork *player);
extern void GAME_DATA_SetPlayerObjectCode(struct PlayerWork *player, u32 code);
extern void GAME_DATA_SetPlayerPalaceZoneId(struct PlayerWork *player, u16 zoneId);
extern u16 GAME_DATA_GetPlayerPalaceZoneId(const struct PlayerWork *player);
extern void *GAME_DATA_GetMoveModelSys(const struct GameData *gd);
extern u8 GAME_DATA_GetEnterMode(const struct GameData *gd);
extern void GAME_DATA_SetEnterMode(struct GameData *gd, u8 value);
extern u8 GAME_DATA_GetOwnNetId(const struct GameData *gd);
extern void GAME_DATA_SetOwnNetId(struct GameData *gd, u32 value);
extern int GAME_DATA_GetIntrudeCount(const struct GameData *gd);
extern struct GameData *GAME_DATA_SetIntrudeCount(struct GameData *gd, u8 count);
extern u8 GAME_DATA_GetIntrudeId(const struct GameData *gd);
extern void GAME_DATA_SetIntrudeId(struct GameData *gd, u32 value);
extern u8 GAME_DATA_GetSlotFlag(const struct GameData *gd, u32 slot);
extern void GAME_DATA_SetSlotFlag(struct GameData *gd, int slot, u8 value);
extern u32 GAME_DATA_IsConfigFlagSet(const struct GameData *gd);
extern void GAME_DATA_SetConfigFlag(struct GameData *gd, int on);
extern void GAME_DATA_SetRecentId(struct GameData *gd, u32 id, u32 on);
extern u32 GAME_DATA_ContainsRecentId(struct GameData *gd, u32 id);
extern u8 *GAME_DATA_GetRtcWork(struct GameData *gd);
extern void GAME_DATA_LoadFromSave(struct GameData *gd);
extern void GAME_DATA_WriteToSave(struct GameData *gd);
extern int GAME_DATA_SaveStart(struct GameData *gd);
extern int GAME_DATA_SaveMain(struct GameData *gd);
extern void GAME_DATA_SaveCancel(struct GameData *gd);
extern u8 GAME_DATA_IsSaving(const struct GameData *gd);
extern void GAME_DATA_PartSaveStart(struct GameData *gd, u32 blockId);
extern int GAME_DATA_PartSaveMain(struct GameData *gd, int blockId);
extern struct SaveControl *GAME_DATA_GetSaveControl(struct GameData *gd);
extern struct SaveControl *GAME_DATA_GetSaveControlWork(struct GameData *gd);
extern u8 *GAME_DATA_GetFieldSave(struct GameData *gd);
extern void **GAME_DATA_GetEventState(struct GameData *gd);
extern void *GAME_DATA_GetCurrentEvent(struct GameData *gd);
extern struct GameData *GAME_DATA_SetCurrentEvent(struct GameData *gd, void *event);
extern void *GAME_DATA_GetSaveBlock3A(struct GameData *gd);
extern void *GAME_DATA_GetSaveBlock3B(struct GameData *gd);
extern void *GAME_DATA_GetMiscSave(struct GameData *gd);
extern void *GAME_DATA_GetTradeHistory(struct GameData *gd);
extern struct CommPlayerSupport *GAME_DATA_GetPmsWork(struct GameData *gd);
extern void *GAME_DATA_GetTrainerRecord(struct GameData *gd);
extern u8 *GAME_DATA_GetSaveSyncBlock(struct GameData *gd);
extern void *GAME_DATA_GetSaveBlock2A(struct GameData *gd);
extern u32 *GAME_DATA_GetListCursor(struct GameData *gd);
extern void *GAME_DATA_GetTrainerCardSign(struct GameData *gd);
extern void *GAME_DATA_GetSaveBlock42(struct GameData *gd);
extern void GAME_DATA_SetExternalWork(struct GameData *gd, void *work);
extern void *GAME_DATA_GetExternalWork(struct GameData *gd);
extern void *GAME_DATA_GetGameSync(struct GameData *gd);
extern void *GAME_DATA_GetPerapVoiceSave(struct GameData *gd);
extern void GAME_DATA_SetSymbolMapFlag(struct GameData *gd, u8 flag);
extern int GAME_DATA_GetSymbolMapFlag(struct GameData *gd);
extern void GAME_DATA_AddPlayTime(struct GameData *gd, u32 limit);
extern struct PlayTime *GAME_DATA_GetPlayTime(struct GameData *gd);
extern void *GAME_DATA_GetSaveBlock43(struct GameData *gd);
extern void *GAME_DATA_GetEventWorkFromSave(struct SaveControl *save);
extern void GFL_HEAP_DeleteChecked(u32 heapId);
extern void *GFL_HEAP_Alloc(u32 heapId, u32 size, int clear, const char *site, u16 tag);
extern u32 GFL_HEAP_Free(void *block);
extern void GFL_HEAP_InitAllocatorChecked(void *block, u32 heapId, s32 newSize);
extern void GFL_HEAP_CheckAllocator(void *block, u32 size);
extern u32 GFL_HEAP_GetHeapHead(u32 heapId);
extern u32 GFL_HEAP_GetHeapHeadChecked(u32 heapId);
extern void GFL_HEAP_StampAllocSite(void *payload, const char *site, u16 tag);
extern int GFL_HEAP_ReadAllocSiteName(u8 *nameBuf, const char *blockName);
extern void GFL_HEAP_ReportOutOfMemory(u32 heapId, u32 size, const char *site, int tag);
extern void GFL_HEAP_AuditAlloc(void *payload, u32 size);
extern void GFL_HEAP_AuditFree(void *payload);
extern void GFL_HEAP_NotifyAlloc(u32 heapId, void *payload, u32 size);
extern void GFL_HEAP_NotifyFree(void *payload);
extern void GFL_HEAP_DumpIfLive(u32 heapId);
extern void GFL_HEAP_WalkBlocksCallback(void *block, void *heapArg, int userParam);
extern void GFL_HEAP_DumpReport(u32 heapId);
extern void GFL_HEAP_InitSystemHeapChecked(u32 size);
extern void *GFL_HEAP_AllocSystemChecked(u32 size);
extern int GFL_HEAP_FreeSystemChecked(void *idx);
extern void MIi_CpuClear16(u16 data, void *destp, u32 size);
extern void MIi_CpuCopy16(const void *srcp, void *destp, u32 size);
extern void MIi_CpuClear32(u32 data, void *destp, u32 size);
extern void MIi_CpuCopy32(const void *srcp, void *destp, u32 size);
extern void MIi_CpuSend32(const void *srcp, volatile void *destp, u32 size);
extern void MIi_CpuClearFast(u32 data, void *destp, u32 size);
extern void MIi_CpuCopyFast(const void *srcp, void *destp, u32 size);
extern void MI_Copy32B(const void *pSrc, void *pDest);
extern void MI_Copy36B(const void *pSrc, void *pDest);
extern void MI_Copy48B(const void *pSrc, void *pDest);
extern void MI_Copy64B(void *pSrc, void *pDest);
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuFill(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern int MI_CpuComp8(const void *mem1, const void *mem2, u32 size);
extern void MI_CpuCopy(const void *src, void *dest, u32 size);
extern void MI_CpuMove(const void *srcp, void *dstp, u32 size);
extern void MI_Zero36B(void *dst);
struct ArcHandle;
struct ArcHandle;
struct ArcHandleRaw;
struct FSFile;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef u32 OSIntrMode;
typedef u64 OSTick;
typedef u32 OSIrqMask;
typedef struct CPContext {
    u8 opaque[0x1C];
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;
    u32 sp_svc;
    CPContext cp_context;
} OSContext;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
typedef enum OSThreadState {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
} OSThreadLink;
typedef struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLink;
typedef void (*OSAlarmHandler)(void *arg);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLink link;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    void (*destructor)(void *);
    void *userParameter;
    int systemErrno;
};
typedef void (*OSSwitchThreadCallback)(OSThread *from, OSThread *to);
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    OSSwitchThreadCallback switchCallback;
} OSThreadInfo;
typedef void *OSMessage;
typedef struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
typedef struct OSEvent {
    volatile u32 flag;
    OSThreadQueue queue;
} OSEvent;
typedef enum OSEventMode {
    OS_EVENT_MODE_AND = 0,
    OS_EVENT_MODE_OR  = 1
} OSEventMode;
typedef struct OSBirthday {
    u8 month;
    u8 day;
} OSBirthday;
typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColor;
    OSBirthday birthday;
    u16 nickName[11];
    u16 nickNameLength;
    u16 comment[27];
    u16 commentLength;
} OSOwnerInfo;
typedef struct OSiVAlarm OSVAlarm;
typedef void (*OSVAlarmHandler)(void *arg);
struct OSiVAlarm {
    OSVAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
typedef struct OSDeliverArgHeader {
    u64 titleId;
    u8 reserved1;
    u8 flag;
    u16 makerCode;
    u16 argBufferSize;
    u16 binarySize;
    u16 crc;
    u16 sysParam;
} OSDeliverArgHeader;
typedef struct OSDeliverArgInfo {
    OSDeliverArgHeader header;
    u8 buf[748];
} OSDeliverArgInfo;
typedef struct OSiNvramOwner {
    u8 version;
    u8 rsv1;
    u8 favoriteColor : 4;
    u8 rsv2 : 4;
    u8 month;
    u8 day;
    u8 rsv3;
    u16 nickName[10];
    u8 nickNameLength;
    u8 rsv4;
    u16 comment[26];
    u8 commentLength;
    u8 rsv5;
    u8 rsv6[0x12];
    u16 language : 3;
    u16 rsv7 : 13;
} OSiNvramOwner;
typedef struct OSIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
typedef enum OSArenaId {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
struct FSArchive;
struct FSFile;
struct FSArchiveInterface;
typedef enum FSResult {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_INVALID_PARAMETER,
    FS_RESULT_NO_MORE_RESOURCE,
    FS_RESULT_ALREADY_DONE,
    FS_RESULT_PERMISSION_DENIED,
    FS_RESULT_MEDIA_FATAL,
    FS_RESULT_NO_ENTRY,
    FS_RESULT_MEDIA_NOTHING,
    FS_RESULT_MEDIA_UNKNOWN,
    FS_RESULT_BAD_FORMAT,
    FS_RESULT_MAX,
    FS_RESULT_PROC_ASYNC = 256,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef u32 FSCommandType;
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *file, u32 command);
typedef struct FSROMFATArchiveContext {
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    u8 reserved3[4];
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSROMFATArchiveContext;
typedef struct FSArchive {
    union {
        char ptr[4];
        u32 pack;
        char *name;
    } name;
    struct FSArchive *next;
    struct FSFile *list;
    OSThreadQueue queue;
    u32 flag;
    u32 command;
    FSResult result;
    void *userdata;
    const struct FSArchiveInterface *vtbl;
    FSROMFATArchiveContext context;
} FSArchive;
typedef struct FSFileID {
    FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct FSDirPos {
    FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct FSDirEntry {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[128];
} FSDirEntry;
typedef struct FSArchiveFAT {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchiveFNT {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct FSROMFATFileProperty {
    u32 own_id;
    u32 top;
    u32 bottom;
    u32 pos;
} FSROMFATFileProperty;
typedef struct FSROMFATDirProperty {
    FSDirPos pos;
    u32 parent;
} FSROMFATDirProperty;
typedef union FSROMFATProperty {
    FSROMFATFileProperty file;
    FSROMFATDirProperty dir;
} FSROMFATProperty;
typedef struct FSReadFileInfo {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct FSWriteFileInfo {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSSeekDirInfo {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct FSReadDirInfo {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct FSFindPathInfo {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct FSGetPathInfo {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct FSOpenFileFastInfo {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct FSOpenFileDirectInfo {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct FSCloseFileInfo {
    u32 reserved;
} FSCloseFileInfo;
typedef union FSROMFATCommandInfo {
    FSReadFileInfo readfile;
    FSWriteFileInfo writefile;
    FSSeekDirInfo seekdir;
    FSReadDirInfo readdir;
    FSFindPathInfo findpath;
    FSGetPathInfo getpath;
    FSOpenFileFastInfo openfilefast;
    FSOpenFileDirectInfo openfiledirect;
    FSCloseFileInfo closefile;
    u8 reserved2[24];
} FSROMFATCommandInfo;
typedef struct FSFile {
    struct FSFile *next;
    void *userdata;
    FSArchive *arc;
    u32 stat;
    void *argument;
    FSResult error;
    OSThreadQueue queue[1];
    FSROMFATProperty prop;
    FSROMFATCommandInfo arg;
} FSFile;
typedef struct FSiSyncReadParam {
    FSArchive *arc;
    u32 pos;
} FSiSyncReadParam;
typedef FSResult (*FSROMFATDefaultProc)(FSFile *file);
typedef enum FSSeekFileMode {
    FS_SEEK_SET,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
typedef struct FSDateTime {
    u32 year;
    u32 month;
    u32 day;
    u32 hour;
    u32 minute;
    u32 second;
} FSDateTime;
typedef struct FSDirectoryEntryInfo {
    char shortname[16];
    u32 shortname_length;
    char longname[260];
    u32 longname_length;
    u32 attributes;
    FSDateTime atime;
    FSDateTime mtime;
    FSDateTime ctime;
    u32 filesize;
    u32 id;
} FSDirectoryEntryInfo;
typedef struct FSPathInfo {
    u32 attributes;
    FSDateTime ctime;
    FSDateTime mtime;
    FSDateTime atime;
    u32 filesize;
    u32 id;
} FSPathInfo;
typedef struct FSArchiveResource {
    u64 totalSize;
    u64 availableSize;
    u32 maxFileHandles;
    u32 currentFileHandles;
    u32 maxDirectoryHandles;
    u32 currentDirectoryHandles;
    u32 bytesPerSector;
    u32 sectorsPerCluster;
    u32 totalClusters;
    u32 availableClusters;
} FSArchiveResource;
typedef struct FSArchiveInterface {
    FSResult (*ReadFile)(FSArchive *, FSFile *, void *, u32 *);
    FSResult (*WriteFile)(FSArchive *, FSFile *, const void *, u32 *);
    FSResult (*SeekDirectory)(FSArchive *, FSFile *, u32, u32);
    FSResult (*ReadDirectory)(FSArchive *, FSFile *, FSDirectoryEntryInfo *);
    FSResult (*FindPath)(FSArchive *, u32, const char *, u32 *, BOOL);
    FSResult (*GetPath)(FSArchive *, FSFile *, BOOL, char *, u32 *);
    FSResult (*OpenFileFast)(FSArchive *, FSFile *, u32, u32);
    FSResult (*OpenFileDirect)(FSArchive *, FSFile *, u32, u32, u32 *);
    FSResult (*CloseFile)(FSArchive *, FSFile *);
    void (*Activate)(FSArchive *);
    void (*Idle)(FSArchive *);
    void (*Suspend)(FSArchive *);
    void (*Resume)(FSArchive *);
    FSResult (*OpenFile)(FSArchive *, FSFile *, u32, const char *, u32);
    FSResult (*SeekFile)(FSArchive *, FSFile *, int *, FSSeekFileMode);
    FSResult (*GetFileLength)(FSArchive *, FSFile *, u32 *);
    FSResult (*GetFilePosition)(FSArchive *, FSFile *, u32 *);
    void (*Mount)(FSArchive *);
    void (*Unmount)(FSArchive *);
    FSResult (*GetArchiveCaps)(FSArchive *, u32 *);
    FSResult (*CreateFile)(FSArchive *, u32, const char *, u32);
    FSResult (*DeleteFile)(FSArchive *, u32, const char *);
    FSResult (*RenameFile)(FSArchive *, u32, const char *, u32, const char *);
    FSResult (*GetPathInfo)(FSArchive *, u32, const char *, FSPathInfo *);
    FSResult (*SetPathInfo)(FSArchive *, u32, const char *, FSPathInfo *);
    FSResult (*CreateDirectory)(FSArchive *, u32, const char *, u32);
    FSResult (*DeleteDirectory)(FSArchive *, u32, const char *);
    FSResult (*RenameDirectory)(FSArchive *, u32, const char *, u32, const char *);
    FSResult (*GetArchiveResource)(FSArchive *, FSArchiveResource *);
    void *unused29;
    FSResult (*FlushFile)(FSArchive *, FSFile *);
    FSResult (*SetFileLength)(FSArchive *, FSFile *, u32);
    FSResult (*OpenDirectory)(FSArchive *, FSFile *, u32, const char *, u32);
    FSResult (*CloseDirectory)(FSArchive *, FSFile *);
    FSResult (*SetSeekCache)(FSArchive *, FSFile *, void *, u32);
} FSArchiveInterface;
typedef struct FSArgumentForReadFile {
    void *buffer;
    u32 length;
} FSArgumentForReadFile;
typedef struct FSArgumentForWriteFile {
    const void *buffer;
    u32 length;
} FSArgumentForWriteFile;
typedef struct FSArgumentForSeekDirectory {
    u32 id;
    u32 position;
} FSArgumentForSeekDirectory;
typedef struct FSArgumentForReadDirectory {
    FSDirectoryEntryInfo *info;
} FSArgumentForReadDirectory;
typedef struct FSArgumentForFindPath {
    u32 baseid;
    const char *relpath;
    u32 target_id;
    BOOL target_is_directory;
} FSArgumentForFindPath;
typedef struct FSArgumentForGetPath {
    BOOL is_directory;
    char *buffer;
    u32 length;
} FSArgumentForGetPath;
typedef struct FSArgumentForOpenFileFast {
    u32 id;
    u32 mode;
} FSArgumentForOpenFileFast;
typedef struct FSArgumentForOpenFileDirect {
    u32 id;
    u32 top;
    u32 bottom;
    u32 mode;
} FSArgumentForOpenFileDirect;
typedef struct FSArgumentForOpenFile {
    u32 baseid;
    const char *relpath;
    u32 mode;
} FSArgumentForOpenFile;
typedef struct FSArgumentForSeekFile {
    int offset;
    FSSeekFileMode from;
} FSArgumentForSeekFile;
typedef struct FSArgumentForGetFileLength {
    u32 length;
} FSArgumentForGetFileLength;
typedef struct FSArgumentForGetFilePosition {
    u32 position;
} FSArgumentForGetFilePosition;
typedef struct FSArgumentForGetArchiveCaps {
    u32 caps;
} FSArgumentForGetArchiveCaps;
typedef struct FSArgumentForCreateFile {
    u32 baseid;
    const char *relpath;
    u32 permit;
} FSArgumentForCreateFile;
typedef struct FSArgumentForDeleteFile {
    u32 baseid;
    const char *relpath;
} FSArgumentForDeleteFile;
typedef struct FSArgumentForRenameFile {
    u32 baseid_src;
    const char *relpath_src;
    u32 baseid_dst;
    const char *relpath_dst;
} FSArgumentForRenameFile;
typedef struct FSArgumentForGetPathInfo {
    u32 baseid;
    const char *relpath;
    FSPathInfo *info;
} FSArgumentForGetPathInfo;
typedef struct FSArgumentForSetPathInfo {
    u32 baseid;
    const char *relpath;
    FSPathInfo *info;
} FSArgumentForSetPathInfo;
typedef struct FSArgumentForGetArchiveResource {
    FSArchiveResource *resource;
} FSArgumentForGetArchiveResource;
typedef struct FSArgumentForSetFileLength {
    u32 length;
} FSArgumentForSetFileLength;
typedef struct FSArgumentForSetSeekCache {
    void *buf;
    u32 buf_size;
} FSArgumentForSetSeekCache;
extern void ARC_TOOL_SetTable(void **entries, u32 count);
extern void ARC_TOOL_ReadMemberRangeImpl(void *dst, u32 archiveID, u32 memberIdx, u32 offset, u32 size);
extern void *ARC_TOOL_LoadMemberRangeImpl(u32 archiveID, u32 memberIdx, u16 heapID, u32 offset, u32 size);
extern void ARC_TOOL_OpenArchive(FSFile *arc, u32 archiveID);
extern u32 ARC_TOOL_SeekMember(struct ArcHandle *arc, u32 memberIdx, u32 skip, u32 size);
extern void ARC_TOOL_ReadMember(void *dst, u32 archiveID, u32 memberIdx);
extern void *ARC_TOOL_LoadMember(u32 archiveID, u32 memberIdx, u16 heapID);
extern void ARC_TOOL_ReadMemberRange(void *dst, u32 archiveID, u32 memberIdx, u32 offset, u32 size);
extern void *ARC_TOOL_LoadMemberRange(u32 archiveID, u32 memberIdx, u16 heapID, u32 offset, u32 size);
extern void *ARC_TOOL_LoadMemberFromPath(const char *path, u32 memberIdx, u16 heapID);
extern u32 ARC_TOOL_GetArchiveFileCount(u32 archiveID);
extern u32 ARC_TOOL_GetMemberSize(u32 archiveID, u32 memberIdx);
extern void *ARC_TOOL_CreateHandle(u32 archiveID, unsigned int heapID);
extern void *ARC_TOOL_CreateHandleFromMemory(void *buf, u32 size, u16 heapID);
extern void ARC_TOOL_ReadHandleHeader(struct ArcHandle *arc);
extern void ARC_TOOL_DeleteHandle(void *handle);
extern void *ARC_TOOL_LoadHandleMember(struct ArcHandle *arc, u32 memberIdx, u32 heapID);
extern void ARC_TOOL_ReadHandleMember(struct ArcHandle *arc, u32 memberIdx, void *dst);
extern u32 ARC_TOOL_GetHandleMemberSize(struct ArcHandle *arc, u32 memberIdx);
extern void ARC_TOOL_ReadHandleMemberRange(struct ArcHandle *arc, u32 memberIdx, u32 offset, u32 size, void *dst);
extern void ARC_TOOL_GetHandleMemberOffsetOut(struct ArcHandle *arc, u32 memberIdx, u32 *out);
extern u32 ARC_TOOL_GetHandleMemberOffset(struct ArcHandle *arc, u32 memberIdx);
extern void ARC_TOOL_ReadHandle(struct ArcHandleRaw *arc, u32 size, void *dst);
extern int ARC_TOOL_SeekHandle(struct FSFile *file, u32 offset);
extern u16 ARC_TOOL_GetHandleFileCount(void *arc);
struct ZoneHeader;
struct AreaData;
struct Location;
struct EventWork;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
typedef union MtxFx22 {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
typedef union MtxFx33 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;
typedef union MtxFx43 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef union MtxFx44 {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
extern void ZONEDATA_Init(u16 heap);
extern void ZONEDATA_Exit(void);
extern void ZONEDATA_SetChangeZoneEnable(u32 index, u8 on);
extern u16 ZONEDATA_GetChangedZoneId(u32 key);
extern struct ZoneHeader *ZONEDATA_GetHeader(u32 id);
extern u32 ZONEDATA_IsChangedZoneInTable(u32 id, const u16 *table, int count);
extern u16 ZONEDATA_GetAreaId(u32 id);
extern u32 ZONEDATA_GetMatrixId(u32 id);
extern u32 ZONEDATA_GetMapType(u32 id);
extern u32 ZONEDATA_GetScriptArcId(u32 id);
extern u32 ZONEDATA_GetMsgArcId(u32 id);
extern void ZONEDATA_GetStartPos(u32 id, VecFx32 *out);
extern void ZONEDATA_GetStartRailPos(u32 id, VecFx32 *out);
extern u8 ZONEDATA_GetMapChangeType(u32 id);
extern u8 ZONEDATA_GetCameraId(u32 id);
extern u32 ZONEDATA_GetCameraAreaId(u32 id);
extern u32 ZONEDATA_GetBgmId(u32 id, u32 which);
extern u32 ZONEDATA_GetWeatherId(u32 id);
extern u32 ZONEDATA_IsBikeEnabled(u32 id);
extern u32 ZONEDATA_IsRideBgmEnabled(u32 id);
extern u32 ZONEDATA_IsFlyEnabled(u32 id);
extern u32 ZONEDATA_IsWeatherEnabled(u32 id);
extern u32 ZONEDATA_IsPalaceEnabled(u32 id);
extern int ZONEDATA_IsRailMap(u32 zoneId);
extern int ZONEDATA_HasSpecialKind(int zoneId);
extern int ZONEDATA_GetSpecialKind(u16 key);
extern u32 ZONEDATA_IsUnionRoom(u32 id);
extern u32 ZONEDATA_IsZone96Pair(u32 id);
extern u32 ZONEDATA_IsZone4BPair(u32 id);
extern u32 ZONEDATA_IsZone34(u32 id);
extern u32 ZONEDATA_IsNoGameEventZone(u32 id);
extern u32 ZONEDATA_IsEntralink(u32 id);
extern int ZONEDATA_IsZoneGroup118To13C(u32 key);
extern u32 ZONEDATA_IsZoneGroup118To120(u32 id);
extern u32 ZONEDATA_IsRawZoneGroup121To13C(u32 id);
extern int ZONEDATA_IsZoneInTableDFC0(int zoneId);
extern int ZONEDATA_IsZoneInTableDFEC(u16 zoneId);
extern u32 ZONEDATA_IsZone4E(u32 id);
extern u32 ZONEDATA_IsNormalFieldZone(u32 id);
extern u32 ZONEDATA_GetParentZoneId(u32 id);
extern u32 ZONEDATA_GetPlaceNameId(u32 id);
extern u32 ZONEDATA_GetPlaceNameWindow(u32 id);
extern u32 ZONEDATA_IsFieldMatrix(u32 id);
extern u32 ZONEDATA_IsSameMatrixGroup(u32 a, u32 b);
extern u32 ZONEDATA_GetEncountId(u32 id);
extern u32 ZONEDATA_GetEventDataId(u32 id);
extern u8 ZONEDATA_GetFieldEffectSetId(u32 id);
extern u32 ZONEDATA_GetFogId(u32 id);
extern u32 ZONEDATA_GetLightId(u32 id);
extern u32 ZONEDATA_GetFieldSkillMapEffect(u32 id);
extern int ZONEDATA_GetSecondSpecialKind(u16 key);
extern u8 ZONEDATA_GetExpObjSetId(u32 id);
extern u32 ZONEDATA_IsZoneInTableDFDC(u32 id);
extern u32 ZONEDATA_IsZoneInTableDFB8(u32 id);
extern u32 ZONEDATA_IsRawZoneF6(u32 id);
extern u32 ZONEDATA_IsRawZoneF7(u32 id);
extern u32 ZONEDATA_IsZoneInTableDFD2(u32 id);
extern u32 ZONEDATA_IsRawZoneGroup4CTo69(u32 id);
extern u32 ZONEDATA_IsRawZone176Or17A(u32 id);
extern u8 ZONEDATA_GetMapSubType(u32 id);
extern u32 ZONEDATA_IsParentZoneD6(u16 id);
extern void *ZONEDATA_CreateAreaData(u16 heapId, u16 areaId, u32 season);
extern u32 ZONEDATA_DeleteAreaData(struct AreaData *areaData);
extern u16 ZONEDATA_GetAreaTexSetId(const struct AreaData *areaData);
extern u32 ZONEDATA_GetAreaItaAnimeId(const struct AreaData *areaData);
extern u32 ZONEDATA_GetAreaItpAnimeId(const struct AreaData *areaData);
extern u8 ZONEDATA_GetAreaInnerOuter(const struct AreaData *areaData);
extern u8 ZONEDATA_GetAreaLightType(const struct AreaData *areaData);
extern u8 ZONEDATA_GetAreaEdgeMarkType(const struct AreaData *areaData);
extern u8 ZONEDATA_GetAreaBillboardColor(const struct AreaData *areaData);
extern u32 ZONEDATA_IsSeasonArea(u32 areaId);
extern void ZONEDATA_InitLocation(struct Location *loc);
extern void ZONEDATA_SetExitLocation(struct Location *loc, u16 zoneId, u16 exitId, u16 dir, u16 exitOffset, u32 x, u32 y,
                                     u32 z);
extern void ZONEDATA_SetExitRailLocation(struct Location *loc, u16 zoneId, int exitId, u16 dir, u16 exitOffset, u16 railIndex,
                                         u16 lineGrid, s16 widthGrid);
extern void ZONEDATA_SetExitLocationIdOnly(struct Location *loc, u16 zoneId, u16 exitId, u16 exitOffset);
extern void ZONEDATA_SetDirectLocation(struct Location *loc, s32 zoneId, s16 dir, u32 x, u32 y, u32 z);
extern void ZONEDATA_SetDirectRailLocation(struct Location *loc, int zoneId, int dir, u16 railIndex, u16 lineGrid,
                                           s16 widthGrid);
extern int ZONEDATA_GetLocationPosType(const struct Location *loc);
extern void ZONEDATA_GetLocationVec(const struct Location *loc, VecFx32 *out);
extern void ZONEDATA_SetLocationVec(struct Location *loc, const VecFx32 *vec);
extern void ZONEDATA_SetZoneStartLocation(struct Location *loc, int zoneId);
extern void ZONEDATA_SetGameStartLocation(struct Location *loc);
extern u32 ZONEDATA_ExitDirToDir(u32 exitDir);
extern u32 ZONEDATA_DirToExitDir(u32 dir);
extern u32 ZONEDATA_GetEventWorkSize(void);
extern void ZONEDATA_InitEventWork(struct EventWork *ev);
extern u32 ZONEDATA_CheckEventFlag(struct EventWork *ev, s32 flagId);
extern void ZONEDATA_SetEventFlag(struct EventWork *ev, int flagId);
extern void ZONEDATA_ResetEventFlag(struct EventWork *ev, int flagId);
extern void ZONEDATA_ResetEventFlagRange(struct EventWork *ev, int firstFlagId, int lastFlagId);
extern u8 *ZONEDATA_GetEventFlagAddress(struct EventWork *ev, u32 flagId);
extern u16 *ZONEDATA_GetEventWorkAddress(struct EventWork *ev, u32 workId);
extern void ZONEDATA_ClearEventWorkRange(struct EventWork *ev, u32 firstWorkId, u32 endWorkId);
extern void ZONEDATA_ClearTimeFlags(struct EventWork *ev);
extern u8 ZONEDATA_PopTimeFlagsCleared(struct EventWork *ev);
extern u8 ZONEDATA_DirToRailKey(int dir);
struct GfProc;
struct GameSystem;
struct FieldMsgBg;
struct FieldCamera;
struct FieldNogridMapper;
struct FieldLight;
struct FieldFog;
struct FieldZoneFog;
struct WeatherSys;
struct MmdlSys;
struct BbActSys;
struct FieldG3dMapper;
struct FieldPlayer;
struct FieldSubscreen;
struct FieldEffectSys;
struct FieldG3dObjCtrl;
struct UnionEff;
struct FieldEncount;
struct FieldPlaceName;
struct FieldmapFunc;
struct FldExpObjCnt;
struct TcbSystem;
struct FieldTaskManager;
struct FieldMsgWin;
struct SodateyaWork;
struct AreaData;
struct FldVReq;
struct TcbTask;
struct GameData;
struct PlayerWork;
struct GameComm;
struct Fld3dCi;
struct EncEffWork;
struct FieldSkillMapEff;
struct FldSceneArea;
struct MapMatrix;
struct GameSystem;
struct GameData;
struct AreaData;
struct FieldCamera;
struct FieldLight;
struct FieldFog;
struct FieldZoneFog;
struct WeatherSys;
struct FieldSubscreen;
struct FieldMsgBg;
struct FieldMsgWin;
struct FieldPlaceName;
struct FldExpObjCnt;
struct MmdlSys;
struct FieldNogridMapper;
struct FldSceneArea;
struct FldSceneAreaLoader;
struct FieldG3dMapper;
struct FieldPlayer;
struct FieldEncount;
struct FieldEffectSys;
struct UnionEff;
struct FieldPalaceSys;
struct FieldSkillMapEff;
struct G3dCamera;
struct LightSlot;
struct TcbTask;
struct BbActSys;
struct FieldmapFunc;
struct TcbSystem;
struct FldParticle;
struct Fld3dCi;
struct SodateyaWork;
struct FieldG3dObjCtrl;
struct FieldTaskManager;
struct EncEffWork;
struct FldVReq;
struct FieldMap;
typedef struct FieldMapLocation {
    unsigned int type;
    unsigned short zoneId;
    short exitId;
    unsigned short dir;
    unsigned short exitOffset;
    unsigned int posType;
    VecFx32 pos;
} FieldMapLocation;
typedef struct FieldMapMapperParam {
    unsigned int typeParam[5];
    unsigned short matrixWidth;
    unsigned short matrixHeight;
    unsigned int matrixCount;
    void *matrixGrid;
    unsigned int enabled;
    unsigned int blockLoadMax;
    unsigned int texSetId;
    unsigned int itaAnimeId;
    unsigned int itpAnimeId;
    unsigned int typeParamTail[2];
} FieldMapMapperParam;
struct FieldMapCtrlFuncs;
typedef struct FieldMapTypeEntry {
    FieldMapMapperParam param;
    const struct FieldMapCtrlFuncs *ctrlFuncs;
    unsigned int useMatrix;
    unsigned int extra;
} FieldMapTypeEntry;
typedef struct FieldMapTypeEntryTail {
    const struct FieldMapCtrlFuncs *ctrlFuncs;
    unsigned int useMatrix;
    unsigned int extra;
    FieldMapMapperParam nextParam;
} FieldMapTypeEntryTail;
typedef struct FieldMapCtrlFuncs {
    unsigned int ctrlType;
    void (*create)(struct FieldMap *fieldMap, VecFx32 *pos, int dir);
    void (*main)(struct FieldMap *fieldMap, VecFx32 *pos);
    void (*destroy)(struct FieldMap *fieldMap);
} FieldMapCtrlFuncs;
typedef struct FieldMapCommonWork {
    int id;
    void *buf;
} FieldMapCommonWork;
typedef struct FieldMap {
    unsigned short heapId;
    unsigned short heapIdPad;
    struct GameSystem *gameSystem;
    struct GameData *gameData;
    struct AreaData *areaData;
    struct FieldCamera *camera;
    struct FieldLight *light;
    struct FieldFog *fog;
    struct FieldZoneFog *zoneFog;
    struct WeatherSys *weather;
    struct FieldSubscreen *subscreen;
    struct FieldMsgBg *msgBg;
    struct FieldMsgWin *infoWindow;
    struct FieldPlaceName *placeName;
    struct FldExpObjCnt *expObj;
    struct MmdlSys *mmdlSys;
    struct FieldNogridMapper *nogridMapper;
    struct FldSceneArea *sceneArea;
    struct FldSceneAreaLoader *sceneAreaLoader;
    struct FieldG3dMapper *g3dMapper;
    unsigned int g3dMapperReserved;
    FieldMapMapperParam mapperParam;
    struct FieldPlayer *player;
    struct FieldEncount *encount;
    struct FieldEffectSys *effect;
    struct UnionEff *unionEff;
    struct FieldPalaceSys *palaceSys;
    struct FieldSkillMapEff *mapEff;
    struct G3dCamera *g3dCamera;
    struct LightSlot *g3dLight;
    struct TcbTask *vblankTcb;
    struct BbActSys *mmdlBbdAct;
    struct BbActSys *effectBbdAct;
    struct BbActSys *groundBbdAct;
    struct FieldmapFunc *mapFunc;
    int mainState;
    int seqNo;
    unsigned char subSeq;
    unsigned char halfFrame;
    unsigned char subSeqPad[2];
    unsigned int frameCount;
    unsigned short zoneId;
    unsigned short zoneIdPad;
    FieldMapLocation location;
    const VecFx32 *targetPos;
    VecFx32 nowPos;
    int cameraPitchScale;
    int projDepthOffset;
    const FieldMapCtrlFuncs *ctrlFuncs;
    void *ctrlWork;
    struct TcbSystem *tcblSys;
    void *tcblWork;
    FieldMapCommonWork commonWork;
    struct FldParticle *particle;
    struct Fld3dCi *fld3dCi;
    struct SodateyaWork *sodateya;
    int drawMode;
    struct FieldG3dObjCtrl *g3dObjCtrl;
    struct FieldTaskManager *taskManager;
    int scriptEffectBusy;
    struct EncEffWork *encEff;
    int updateStopped;
    int subscreenBusy;
    void *faceUpWork;
    struct FldVReq *vreq;
    void *zoneEffectWork;
} FieldMap;
typedef struct FieldMapProcWork {
    FieldMap *fieldMap;
} FieldMapProcWork;
struct GameSystem;
struct GameData;
struct FieldMap;
struct GameEvent;
struct GameComm;
struct FieldStatus;
struct PlayerWork;
struct MmdlSys;
struct EventWork;
struct EventDataSystem;
struct SaveControl;
struct MiscSave;
struct AreaData;
struct FieldSoundSystem;
struct PlaceNameSys;
struct ConsoleInfo;
struct ConsoleInfoSession;
typedef struct GameSystem GameSystem;
typedef struct GameData GameData;
typedef struct FieldMap FieldMap;
typedef struct GameEvent GameEvent;
typedef struct GameComm GameComm;
typedef struct FieldStatus FieldStatus;
typedef struct PlayerWork PlayerWork;
typedef struct MmdlSys MmdlSys;
typedef struct RailLocation {
    u16 railIndex;
    u8 type;
    u8 key;
    s16 widthGrid;
    u16 lineGrid;
} RailLocation;
typedef struct Location {
    u32 type;
    u16 zoneId;
    s16 exitId;
    s16 dir;
    u16 exitOffset;
    u32 posType;
    union {
        VecFx32 vec;
        RailLocation rail;
    } pos;
} Location;
typedef struct EntranceParam {
    GameEvent *event;
    GameSystem *gameSystem;
    GameData *gameData;
    FieldMap *fieldMap;
    int exitType;
    int destExitType;
    u16 currentZoneId;
    u8 pad1A[2];
    Location destination;
    int exitEffectId;
    int entranceEffectId;
    int seasonChanged;
    u8 fromSeasonIndex;
    u8 toSeason;
    u8 pad46[2];
    int bgmReplaced;
    int bgmFadeStarted;
} EntranceParam;
typedef struct MapChangeWork {
    GameSystem *gameSystem;
    GameData *gameData;
    FieldMap *fieldMap;
    u16 currentZoneId;
    u8 pad0E[2];
    Location destination;
    int exitType;
    u8 changeKind;
    u8 pad31[3];
    VecFx32 targetPos;
    int seasonFadeAllowed;
    int seasonChanged;
    u16 fromSeason;
    u16 toSeason;
    EntranceParam entrance;
} MapChangeWork;
typedef struct {
    Location location;
    GameSystem *gameSystem;
    GameData *gameData;
    FieldMap *fieldMap;
    int requestSession;
    u8 intrudeId;
} MapChangeIntrudeWork;
typedef struct {
    GameSystem *gameSystem;
    GameData *gameData;
    Location location;
} WarpIdArrivalWork;
extern int FIELDMAP_ProcInit(struct GfProc *proc, int *seq, struct GameSystem *gameSystem);
extern int FIELDMAP_ProcMain(struct GfProc *proc, int *seq, struct GameSystem *gameSystem, FieldMapProcWork *work);
extern int FIELDMAP_ProcExit(struct GfProc *proc, int *seq, struct GameSystem *gameSystem, FieldMapProcWork *work);
extern FieldMap *FIELDMAP_Create(struct GameSystem *gameSystem, int heapId);
extern void FIELDMAP_Delete(FieldMap *fieldMap);
extern int FIELDMAP_SeqInitSystem(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern int FIELDMAP_SeqCreateSubsystems(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern int FIELDMAP_SeqStart(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern int FIELDMAP_SeqUpdate(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern void FIELDMAP_UpdateCameraAndDraw(FieldMap *fieldMap);
extern int FIELDMAP_SeqUpdateTop(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern int FIELDMAP_SeqDeleteSubsystems(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern int FIELDMAP_SeqExitSystem(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern int FIELDMAP_Main(struct GameSystem *gameSystem, FieldMap *fieldMap);
extern void FIELDMAP_RequestClose(FieldMap *fieldMap);
extern int FIELDMAP_IsReady(FieldMap *fieldMap);
extern u32 FIELDMAP_ApplyPlayerFormRequest(FieldMap *fieldMap);
extern struct FieldMsgBg *FIELDMAP_GetMsgBg(FieldMap *fieldMap);
extern struct FieldCamera *FIELDMAP_GetCamera(FieldMap *fieldMap);
extern struct FieldNogridMapper *FIELDMAP_GetNogridMapper(FieldMap *fieldMap);
extern struct FieldLight *FIELDMAP_GetLight(FieldMap *fieldMap);
extern struct FieldFog *FIELDMAP_GetFog(FieldMap *fieldMap);
extern struct FieldZoneFog *FIELDMAP_GetZoneFog(FieldMap *fieldMap);
extern struct WeatherSys *FIELDMAP_GetWeather(FieldMap *fieldMap);
extern int FIELDMAP_GetZoneWeatherId(FieldMap *fieldMap, int switchId);
extern struct MmdlSys *FIELDMAP_GetMmdlSys(FieldMap *fieldMap);
extern struct GameSystem *FIELDMAP_GetGameSystem(FieldMap *fieldMap);
extern u16 FIELDMAP_GetHeapId(FieldMap *fieldMap);
extern struct BbActSys *FIELDMAP_GetEffectBbdAct(FieldMap *fieldMap);
extern struct BbActSys *FIELDMAP_GetGroundBbdAct(FieldMap *fieldMap);
extern struct FieldG3dMapper *FIELDMAP_GetG3dMapper(FieldMap *fieldMap);
extern u16 FIELDMAP_GetZoneId(FieldMap *fieldMap);
extern void *FIELDMAP_GetCtrlWork(FieldMap *fieldMap);
extern void FIELDMAP_SetCtrlWork(FieldMap *fieldMap, void *ctrlWork);
extern struct FieldPlayer *FIELDMAP_GetFieldPlayer(FieldMap *fieldMap);
extern int FIELDMAP_IsFieldPlayerCreated(FieldMap *fieldMap);
extern struct FieldSubscreen *FIELDMAP_GetSubscreen(FieldMap *fieldMap);
extern struct FieldEffectSys *FIELDMAP_GetEffect(FieldMap *fieldMap);
extern struct FieldG3dObjCtrl *FIELDMAP_GetG3dObjCtrl(FieldMap *fieldMap);
extern struct UnionEff *FIELDMAP_GetUnionEff(FieldMap *fieldMap);
extern struct FieldEncount *FIELDMAP_GetEncount(FieldMap *fieldMap);
extern unsigned int FIELDMAP_GetCtrlType(FieldMap *fieldMap);
extern u32 FIELDMAP_GetMoveKind(FieldMap *fieldMap);
extern struct FieldPlaceName *FIELDMAP_GetPlaceName(FieldMap *fieldMap);
extern struct FieldmapFunc *FIELDMAP_GetMapFunc(FieldMap *fieldMap);
extern struct FldExpObjCnt *FIELDMAP_GetExpObj(FieldMap *fieldMap);
extern struct TcbSystem *FIELDMAP_GetTcblSys(FieldMap *fieldMap);
extern struct FieldTaskManager *FIELDMAP_GetTaskManager(FieldMap *fieldMap);
extern void FIELDMAP_SetTargetPos(FieldMap *fieldMap, const VecFx32 *targetPos);
extern struct FieldMsgWin *FIELDMAP_GetInfoWindow(FieldMap *fieldMap);
extern void FIELDMAP_SetInfoWindow(FieldMap *fieldMap, struct FieldMsgWin *infoWindow);
extern struct SodateyaWork *FIELDMAP_GetSodateya(FieldMap *fieldMap);
extern struct AreaData *FIELDMAP_GetAreaData(FieldMap *fieldMap);
extern void FIELDMAP_InitBgSystem(FieldMap *fieldMap);
extern void FIELDMAP_SetBgMode(void);
extern void FIELDMAP_ResetBgAffineShowMsg(FieldMap *fieldMap);
extern void FIELDMAP_ResetBgAffineHideMsg(FieldMap *fieldMap);
extern struct FldVReq *FIELDMAP_GetVReq(FieldMap *fieldMap);
extern void FIELDMAP_ExitBgSystem(FieldMap *fieldMap);
extern void FIELDMAP_SetupG3d(void);
extern void FIELDMAP_CreateG3dResources(FieldMap *fieldMap);
extern void FIELDMAP_UpdateG3d(FieldMap *fieldMap);
extern void FIELDMAP_DrawStart(FieldMap *fieldMap);
extern void FIELDMAP_DrawEnd(FieldMap *fieldMap);
extern void FIELDMAP_DeleteG3dResources(FieldMap *fieldMap);
extern void FIELDMAP_VBlankTask(struct TcbTask *tcb, void *work);
extern u32 FIELDMAP_BbdActTransCallback(int vramTransfer, int destAddr, void *src, int size);
extern void FIELDMAP_SetupEdgeMarking(struct AreaData *areaData, u32 zoneId);
extern void FIELDMAP_SetupBbdColor(FieldMap *fieldMap);
extern void FIELDMAP_SetupMmdlSys(FieldMap *fieldMap);
extern int FIELDMAP_DeleteMmdlSys(FieldMap *fieldMap);
extern u32 FIELDMAP_UpdateZoneChange(FieldMap *fieldMap);
extern int FIELDMAP_CheckPlayerMoved(FieldMap *fieldMap);
extern u32 FIELDMAP_CheckZoneBoundary(FieldMap *fieldMap);
extern void FIELDMAP_ChangeZone(FieldMap *fieldMap);
extern void FIELDMAP_AddZoneNpcs(struct GameData *gameData, struct MmdlSys *mmdlSys, void *eventData, int zoneId);
extern void FIELDMAP_ChangeZoneSound(FieldMap *fieldMap, unsigned int zoneId);
extern void FIELDMAP_ChangeZoneWeather(FieldMap *fieldMap, int zoneId);
extern void FIELDMAP_ChangeZoneFog(FieldMap *fieldMap, int zoneId);
extern struct PlayerWork *FIELDMAP_SetPlayerZoneId(struct GameData *gameData, u32 zoneId);
extern void FIELDMAP_ChangeZoneCamera(FieldMap *fieldMap, u32 zoneId);
extern FieldMap *FIELDMAP_ClearCtrlWork(FieldMap *fieldMap);
extern void FIELDMAP_SetupCameraArea(FieldMap *fieldMap, int zoneId, int heapId);
extern void FIELDMAP_SetupWfbc(struct GameData *gameData, FieldMap *fieldMap, u16 zoneId);
extern void FIELDMAP_SetupSceneArea(FieldMap *fieldMap, unsigned int zoneId);
extern int FIELDMAP_GetCommKind(struct GameComm *gameComm);
extern int FIELDMAP_CheckCommExit(struct GameComm *gameComm);
extern void FIELDMAP_InitCommonWork(FieldMapCommonWork *commonWork);
extern void *FIELDMAP_AllocCommonWork(FieldMap *fieldMap, int id, int heapId, int size);
extern void FIELDMAP_FreeCommonWork(FieldMap *fieldMap, int id);
extern void *FIELDMAP_GetCommonWork(FieldMap *fieldMap, int id);
extern void FIELDMAP_ReflectFog(FieldMap *fieldMap, u32 fogEnable, u32 fogSlope, u32 fogOffset);
extern void FIELDMAP_Draw3dNormal(FieldMap *fieldMap);
extern void FIELDMAP_Draw3dParticle(FieldMap *fieldMap);
extern void FIELDMAP_Draw3dEncEff(FieldMap *fieldMap);
extern int FIELDMAP_GetDrawMode(FieldMap *fieldMap);
extern void FIELDMAP_SetDrawMode(FieldMap *fieldMap, int drawMode);
extern struct Fld3dCi *FIELDMAP_GetFld3dCi(FieldMap *fieldMap);
extern struct EncEffWork *FIELDMAP_GetEncEff(FieldMap *fieldMap);
extern struct FieldSkillMapEff *FIELDMAP_GetMapEff(FieldMap *fieldMap);
extern struct FldSceneArea *FIELDMAP_GetSceneArea(FieldMap *fieldMap);
extern void FIELDMAP_SetScriptEffectBusy(FieldMap *fieldMap, int busy);
extern int FIELDMAP_GetScriptEffectBusy(FieldMap *fieldMap);
extern int FIELDMAP_IsEventActive(FieldMap *fieldMap);
extern int FIELDMAP_GetTimeZone(FieldMap *fieldMap);
extern int FIELDMAP_GetSubscreenBusy(FieldMap *fieldMap);
extern void FIELDMAP_SetSubscreenBusy(FieldMap *fieldMap, int busy);
extern void FIELDMAP_SetUpdateStopped(FieldMap *fieldMap, int stopped);
extern void **FIELDMAP_GetFaceUpWorkPtr(FieldMap *fieldMap);
extern void FIELDMAP_SetZoneEffectWork(FieldMap *fieldMap, void *zoneEffectWork);
extern void *FIELDMAP_GetZoneEffectWork(FieldMap *fieldMap);
extern int FIELDMAP_GetCameraPitchScale(FieldMap *fieldMap);
extern int FIELDMAP_CalcCameraPitchScale(FieldMap *fieldMap);
extern int FIELDMAP_GetProjDepthOffset(u32 zoneId);
extern int FIELDMAP_IsMmdlDrawEnabled(int zoneId);
extern int FIELDMAP_IsLoaderWaitZone(int zoneId);
extern u32 FIELDMAP_GetMapType(u32 zoneId);
extern void FIELDMAP_SetupMapperParam(int zoneId, struct AreaData *areaData, FieldMapMapperParam *param,
                                      struct MapMatrix *mapMatrix);
extern const FieldMapCtrlFuncs *FIELDMAP_GetCtrlFuncs(int zoneId);
struct FieldMap;
struct GameSystem;
struct GameData;
struct EffectEncount;
typedef struct EncountSlot {
    u16 species : 11;
    u16 form : 5;
    u8 minLevel;
    u8 maxLevel;
} EncountSlot;
typedef struct EncountData {
    u8 rate[7];
    u8 effectKind : 7;
    u8 enabled : 1;
    EncountSlot ground[3][12];
    EncountSlot water[2][5];
    EncountSlot fishing[2][5];
} EncountData;
typedef struct FieldEncount {
    struct FieldMap *fieldMap;
    struct GameSystem *gameSystem;
    struct GameData *gameData;
    EncountData *encountData;
    struct EffectEncount *effectEncount;
} FieldEncount;
struct GameEvent;
struct EffectEncountArea;
typedef struct EffectEncountArea EffectEncountArea;
struct BbImage {
    struct G3dResource *handle;
    u16 texWidth;
    u16 texHeight;
    u8 cellWidth;
    u8 cellHeight;
    u8 cellColumns;
    u8 cellRows;
    u32 vramAddr;
    u32 plttAddr;
    u32 texFmt;
    u32 sizeS;
    u32 sizeT;
    u32 texKey;
    u32 plttKey;
};
struct BbElem {
    u16 imageIndex : 14;
    u16 facingMode : 2;
    u16 reserved02;
    VecFx32 pos;
    u16 cell;
    s16 scaleX;
    s16 scaleY;
    u16 rotZ;
    u16 alpha : 5;
    u16 polyId : 4;
    u16 visible : 1;
    u16 flipS : 1;
    u16 flipT : 1;
    u16 light : 4;
    u16 reserved1a;
};
struct BbBoard {
    u16 heapId;
    u16 reserved02;
    struct BbImage *images;
    struct BbElem *elems;
    u16 imageCount;
    u16 elemCount;
    fx32 scale;
    u32 initExtraA;
    u32 initExtraB;
    u16 diffuse;
    u16 ambient;
    u16 specular;
    u16 emission;
    u8 polyIdBase;
    u8 quadShape;
    u16 reserved26;
    u32 lookAtMode;
    u32 useFixedNormal;
    fx16 normalX;
    fx16 normalY;
    fx16 normalZ;
    s16 offsetS;
    s16 offsetT;
};
struct FieldMap;
struct FieldEffectSys;
struct FieldEffectObj;
struct FieldEffectObjMgr;
struct ArcHandle;
struct TcbSystem;
typedef struct FieldEffectResource {
    int id;
    void *handle;
} FieldEffectResource;
typedef struct FieldEffectResourceDef {
    int id;
    void *(*load)(struct FieldEffectSys *sys, u16 heapId);
    void (*unload)(struct FieldEffectSys *sys, void *handle);
} FieldEffectResourceDef;
typedef struct FieldEffectSys {
    int resourceCount;
    u16 heapId;
    u8 pad06[2];
    struct FieldMap *fieldmap;
    struct ArcHandle *arcHandle;
    FieldEffectResource *resources;
    u16 objectCount;
    u8 modelBaseOffset;
    u8 modelBaseOffsetAlt;
    void *taskBuffer;
    struct TcbSystem *taskSys;
    struct FieldEffectObjMgr *objMgr;
    const u8 *paletteTable;
} FieldEffectSys;
typedef void (*FieldEffectObjFunc)(struct FieldEffectObj *obj, void *work);
typedef struct FieldEffectObjFuncs {
    FieldEffectObjFunc unused;
    FieldEffectObjFunc init;
    FieldEffectObjFunc exit;
    FieldEffectObjFunc update;
    FieldEffectObjFunc draw;
} FieldEffectObjFuncs;
typedef struct FieldEffectObj {
    u32 active;
    u32 mode;
    void *param;
    VecFx32 pos;
    u8 work[0xA0];
    FieldEffectObjFuncs funcs;
    struct FieldEffectObjMgr *mgr;
    void *task;
} FieldEffectObj;
typedef struct FieldEffectObjMgr {
    u32 count;
    u16 heapId;
    u8 pad06[2];
    FieldEffectObj *objs;
    struct TcbSystem *taskSys;
} FieldEffectObjMgr;
typedef struct EffectEncountCandidate {
    u8 kind;
    u8 pad01;
    u16 gridX;
    u16 gridHeight;
    u16 gridZ;
    int heightFx;
} EffectEncountCandidate;
typedef struct EffectEncount {
    FieldEffectSys *fieldEffectSys;
    u16 candidateCount;
    u8 pad06[2];
    EffectEncountCandidate candidates[121];
    FieldEffectObj *effectObj;
    u16 stepsNeeded;
    u16 spawnPercent;
    u16 itemId;
    u8 pad5BE[2];
} EffectEncount;
typedef struct EffectEncountSpot {
    u16 zoneId;
    s16 gridX;
    s16 gridHeight;
    s16 gridZ;
    int heightFx;
    u8 kind;
    u8 active : 4;
    u8 needsRestore : 2;
    u8 consumed : 2;
    u8 pad0E[2];
} EffectEncountSpot;
typedef struct EncountGimmickWork {
    u8 stepWork[0x0C];
    u32 effectStepCount;
    EffectEncountSpot spot;
} EncountGimmickWork;
extern EffectEncount *EFFECT_ENCOUNT_Create(int heapId);
extern int EFFECT_ENCOUNT_Delete(EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_Init(FieldEncount *encount, EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_Exit(FieldEncount *encount, EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_LoadSetting(FieldEncount *encount, EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_OnPlayerStep(FieldEncount *encount);
extern void EFFECT_ENCOUNT_Reset(FieldEncount *encount);
extern void EFFECT_ENCOUNT_UpdateOccupiedSpot(FieldEncount *encount);
extern int EFFECT_ENCOUNT_IsSpotAt(FieldEncount *encount, short *pos);
extern struct GameEvent *EFFECT_ENCOUNT_TriggerSpot(FieldEncount *encount);
extern int EFFECT_ENCOUNT_GetSpotDistance(FieldEncount *encount, short *out);
extern void EFFECT_ENCOUNT_ConsumeSpot(FieldEncount *encount);
extern void EFFECT_ENCOUNT_SetEffectPaused(FieldEncount *encount, int paused);
extern void EFFECT_ENCOUNT_SetEffectFlag(FieldEncount *encount, int flag);
extern u16 EFFECT_ENCOUNT_GetItemId(FieldEncount *encount);
extern void EFFECT_ENCOUNT_MarkSpotForRestore(FieldEncount *encount);
extern void EFFECT_ENCOUNT_RestoreSpot(FieldEncount *encount, EffectEncount *effectEncount);
extern int EFFECT_ENCOUNT_CountStep(EncountGimmickWork *gimmick, EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_ResetStepCount(EncountGimmickWork *gimmick);
extern void EFFECT_ENCOUNT_MakeSearchArea(FieldEncount *encount, EffectEncount *effectEncount, EffectEncountArea *area);
extern void EFFECT_ENCOUNT_CollectCandidates(FieldEncount *encount, EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_PickSpot(FieldEncount *encount, EffectEncount *effectEncount);
extern int EFFECT_ENCOUNT_IsTileOccupied(FieldEncount *encount, s16 gridX, s16 gridHeight, s16 gridZ, int ignorePlayer);
extern int EFFECT_ENCOUNT_ClearSpotIfOccupied(FieldEncount *encount);
extern void EFFECT_ENCOUNT_ClearSpot(FieldEncount *encount, EffectEncount *effectEncount);
extern void EFFECT_ENCOUNT_CreateEffectObj(FieldEncount *encount, EffectEncount *effectEncount, EffectEncountSpot *spot);
extern void EFFECT_ENCOUNT_DeleteEffectObj(EffectEncount *effectEncount);
extern unsigned short EFFECT_ENCOUNT_PickItemKind4(void);
extern u16 EFFECT_ENCOUNT_PickItemKind7(void);
extern struct GameEvent *EFFECT_ENCOUNT_StartItemEvent(FieldEncount *encount, u16 itemId);
extern int FIELD_ENCOUNT_ST_LoadEncountData(EncountRow *row, struct ArcFile *arc, u32 zoneId, int seasonIndex);
extern void *FIELD_ENCOUNT_ST_Create(u32 heapId);
extern void FIELD_ENCOUNT_ST_Delete(void *encountState);
extern void FIELD_ENCOUNT_ST_GetEffectEncount(struct FieldMap *fieldMap);
extern FieldGimmickWork *func_0200cefc(struct GameData *gameData);
extern const char d_02172928[];
int FIELD_ENCOUNT_ST_LoadEncountData(EncountRow *row, struct ArcFile *arc, u32 zoneId, int seasonIndex);
void *FIELD_ENCOUNT_ST_Create(u32 heapId);
void FIELD_ENCOUNT_ST_Delete(void *encountState);
void FIELD_ENCOUNT_ST_GetEffectEncount(struct FieldMap *fieldMap);
FieldGimmickWork *func_0200cefc(struct GameData *gameData) {
    FieldGimmickWork *gimmick;

    gimmick        = (struct FieldGimmickWork *) func_02003adc(gameData);
    gimmick->state = 0;
    return gimmick;
}
