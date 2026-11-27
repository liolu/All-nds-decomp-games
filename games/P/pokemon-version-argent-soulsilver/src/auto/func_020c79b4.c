/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndReadDriverInfo from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_system.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
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
struct SNDCommand;
struct SNDDriverInfo;
struct SNDTrackInfo;
struct SleepCb {
    void (*fn)(void *);
    void *arg;
    void *p08;
    void *p0c;
};
struct Sys {
    signed char idx;
    u8 p01[3];
    u32 pending;
    u32 tag;
    u32 initialized;
    struct SleepCb cb10;
    struct SleepCb cb20;
};
extern void SND_Init(void);
extern void SNDi_LockMutex(void);
extern void SNDi_UnlockMutex(void);
typedef struct PMiGenCallbackInfo {
    void (*callback)(void *);
    void *arg;
    int priority;
    struct PMiGenCallbackInfo *next;
} PMGenCallbackInfo;
struct PMiGenCallbackInfo;
extern void PMi_WaitBusy(void);
extern void PMi_DummyCallback(u32 result, void *arg);
extern void PMi_CallCallbackAndUnlock(u32 result);
extern void PMi_WaitVBlank(void);
extern void PM_Init(void);
extern void PMi_CommonCallback(int tag, u32 data, BOOL err);
extern void PMi_TryToSendPxiDataTillSuccess(u32 *sendData, int num);
extern u32 PMi_SendSleepStart(u16 trigger, u16 keyIntrData);
extern u32 PM_SendUtilityCommand(u32 number, u16 parameter, u16 *retValue);
extern u32 PMi_SetLED(int status);
extern u32 PM_SetBackLight(int target, int sw);
extern u32 PMi_ForceToPowerOff(void);
extern u32 PM_ForceToPowerOff(void);
extern unsigned int PM_SetAmp(unsigned int status);
extern unsigned int PMi_SetAmp(unsigned int status);
extern unsigned int PM_SetAmpGain(unsigned int gain);
extern unsigned int PM_SetAmpGainLevel(u8 level);
extern u32 PM_GetBattery(int *batteryBuf);
extern u32 PM_GetBatteryLevel(u16 *levelBuf);
extern u32 PM_GetBackLight(int *top, int *bottom);
extern u32 PM_GetAmp(int *swBuf);
extern void PMi_SendPxiData(u32 data);
extern void PMi_PreSleepForDma(void);
extern void PM_GoSleepMode(u32 trigger, u32 logic, u16 keyPattern);
extern BOOL PMi_SetLCDPower(int sw, int led, BOOL skip, BOOL isSync);
extern BOOL PM_SetLCDPower(int sw);
extern int PM_GetLCDPower(void);
extern unsigned int PMi_SendLEDPatternCommand(unsigned int pattern);
extern u32 PM_GetLEDPattern(int *patternBuf);
extern void PMi_InsertList(PMGenCallbackInfo **listp, PMGenCallbackInfo *info, int priority, int method);
extern void PMi_DeleteList(PMGenCallbackInfo **listp, PMGenCallbackInfo *info);
extern void PMi_ExecuteList(PMGenCallbackInfo *listp);
extern void PM_PrependPreSleepCallback(void *info);
extern void PM_AppendPostSleepCallback(void *info);
extern void PMi_InsertPreSleepCallbackEx(struct PMiGenCallbackInfo *info, int priority);
extern void PM_DeletePreSleepCallback(PMGenCallbackInfo *info);
extern void PM_DeletePostSleepCallback(PMGenCallbackInfo *info);
extern void PMi_LCDOnAvoidReset(void);
extern void PMi_SetDispOffCount(void);
typedef struct NNSSndWaveOutHandle NNSSndWaveOutHandle;
struct NNSSndWaveOutHandle;
typedef struct NNSSndWaveOutHandle NNSSndWaveOutHandle;
extern int NNSi_SndWaveOutLockChannels(int mask);
extern void SND_CHANNEL_UnlockChannels(u32 channelMask);
extern void SND_CHANNEL_ClearClaimedMask(u32 channelMask);
extern int NNSi_SndWaveOutAllocSlot(void);
extern void NNS_SndWaveOutFreeChannel(u32 slotNo);
extern void NNS_SndWaveOutInit(void);
extern NNSSndWaveOutHandle *NNS_SndWaveOutAllocChannel(u32 slotNo);
extern void NNSi_SndWaveOutUnlockChannel(u32 *channelNoPtr);
extern int NNS_SndWaveOutStart(NNSSndWaveOutHandle *handle, int format, void *waveData, int loopFlag, int loopStart,
                               int loopEnd, int sampleRate, int volume, int playFreq, int pan);
extern void NNS_SndWaveOutStop(NNSSndWaveOutHandle *handle);
extern void NNS_SndWaveOutSetVolume(NNSSndWaveOutHandle *handle, u32 volume);
extern void NNS_SndWaveOutSetSpeed(NNSSndWaveOutHandle *handle, int speed);
extern int NNS_SndWaveOutIsPlaying(NNSSndWaveOutHandle *handle);
extern void NNS_SndWaveOutWaitIdle(NNSSndWaveOutHandle *handle);
typedef struct SNDBinaryFileHeader {
    char signature[4];
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} SNDBinaryFileHeader;
typedef struct SNDBinaryBlockHeader {
    u32 kind;
    u32 size;
} SNDBinaryBlockHeader;
typedef struct SNDWaveArc SNDWaveArc;
typedef struct SNDWaveArcLink {
    SNDWaveArc *waveArc;
    struct SNDWaveArcLink *next;
} SNDWaveArcLink;
struct SNDWaveArc {
    SNDBinaryFileHeader fileHeader;
    SNDBinaryBlockHeader blockHeader;
    SNDWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[];
};
typedef struct SNDBankData {
    u8 fileHeader[0x10];
    u8 blockHeader[0x8];
    SNDWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[];
} SNDBankData;
typedef struct SNDWaveData SNDWaveData;
typedef struct SNDInstParam {
    u16 wave[2];
    u8 originalKey;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 pan;
} SNDInstParam;
typedef struct SNDInstData {
    u8 type;
    SNDInstParam param;
} SNDInstData;
typedef struct SNDInstPos {
    u32 prgNo;
    u32 index;
} SNDInstPos;
extern void SND_AssignWaveArc(SNDBankData *bank, int index, SNDWaveArc *waveArc);
extern void SND_DestroyBank(SNDBankData *bank);
extern void SND_DestroyWaveArc(SNDWaveArc *waveArc);
extern SNDInstPos SND_GetFirstInstDataPos(const void *bank);
extern u32 SNDi_GetBankWaveArcTable(char *bank);
extern void SND_SetWaveDataAddress(SNDWaveArc *waveArc, int index, const SNDWaveData *address);
extern const SNDWaveData *SND_GetWaveDataAddress(const SNDWaveArc *waveArc, int index);
struct SNDWaveData;
extern BOOL SND_GetNextInstData(const SNDBankData *bank, SNDInstData *inst, SNDInstPos *pos);
typedef struct NNSFndLink {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct NNSFndList {
    void *headObject;
    void *tailObject;
    unsigned short numObjects;
    unsigned short offset;
} NNSFndList;
typedef struct NNSiFndHeapHead {
    unsigned int signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    unsigned int attribute;
} NNSiFndHeapHead;
typedef NNSiFndHeapHead *NNSFndHeapHandle;
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
typedef void (*NNSSndHeapDisposeCallback)(void *buffer, u32 size, uptr data1, u32 data2);
typedef struct NNSiSndHeapBlock {
    NNSFndLink link;
    u32 size;
    NNSSndHeapDisposeCallback callback;
    uptr data1;
    u32 data2;
    u8 pad18[8];
} NNSiSndHeapBlock;
typedef struct NNSiSndHeapLevel {
    NNSFndList blockList;
    NNSFndLink link;
} NNSiSndHeapLevel;
typedef struct NNSSndHeap {
    NNSFndHeapHandle handle;
    NNSFndList levelList;
} NNSSndHeap;
typedef struct NNSSndArcInfoHeader {
    u8 pad00[8];
    u32 seqTableOffset;
    u32 seqArcTableOffset;
    u32 bankTableOffset;
    u32 waveArcTableOffset;
    u32 playerTableOffset;
    u32 groupTableOffset;
} NNSSndArcInfoHeader;
typedef struct NNSSndArcInfoTable {
    u32 count;
    u32 entries[1];
} NNSSndArcInfoTable;
typedef struct NNSSndArcFatEntry {
    u32 offset;
    u32 size;
    u32 loadedData;
    u32 pad0c;
} NNSSndArcFatEntry;
typedef struct NNSSndArcFatTable {
    u32 signature;
    u32 blockSize;
    u32 count;
    NNSSndArcFatEntry entries[1];
} NNSSndArcFatTable;
typedef struct NNSSndArc {
    u8 header[0x10];
    u32 symbolOffset;
    u32 symbolSize;
    u32 infoOffset;
    u32 infoSize;
    u32 fatOffset;
    u32 fatSize;
    u8 pad28[8];
    u32 fileOpen;
    FSFile file;
    FSFileID fileId;
    u8 pad84[4];
    NNSSndArcFatTable *fatBlock;
    void *symbolBlock;
    NNSSndArcInfoHeader *infoBlock;
    int readChunkSize;
} NNSSndArc;
typedef struct NNSSndArcSeqInfo {
    u32 fileId;
    u16 bankNo;
} NNSSndArcSeqInfo;
typedef struct NNSSndArcSeqArcInfo {
    u32 fileId;
} NNSSndArcSeqArcInfo;
typedef struct NNSSndArcBankInfo {
    u32 fileId;
    u16 waveArcNo[4];
} NNSSndArcBankInfo;
typedef union NNSSndArcWaveArcInfo {
    unsigned word;
    struct {
        unsigned fileId : 24;
        unsigned isIndividual : 1;
        unsigned reserved : 7;
    } bits;
} NNSSndArcWaveArcInfo;
typedef struct NNSSndArcPlayerInfo {
    u8 playableSeqCount;
    u8 pad01;
    u16 allocatableChannel;
    u32 heapSize;
} NNSSndArcPlayerInfo;
typedef struct NNSSndArcGroupItem {
    u8 type;
    u8 loadFlag;
    u16 pad02;
    u32 itemNo;
} NNSSndArcGroupItem;
typedef struct NNSSndArcGroupInfo {
    u32 count;
    NNSSndArcGroupItem items[1];
} NNSSndArcGroupInfo;
typedef struct SNDBankWaveIter {
    u32 position;
    u32 end;
} SNDBankWaveIter;
typedef struct NNSSndSystem {
    u32 initialized;
    u32 mode;
    u8 pad08[4];
    void *effectBufferL;
    void *effectBufferR;
    u32 effectBufferSize;
    u8 pad18[4];
    u32 captureActive;
    u32 lockedChannelMask;
    u32 timerChannelMask;
    u32 timerCaptureMask;
    s32 timerAlarmNo;
    u8 pad30[0x0c];
    u8 fader[0x10];
    u32 fadeFinishCheck;
    s32 lastVolume;
} NNSSndSystem;
typedef struct NNSSndStrm {
    u8 pad00[0x2c];
    int isSetup : 1;
    int isStarted : 1;
    int flagsRest : 30;
    u8 pad30[0x10];
    u32 pendingFrames;
    u32 pad44;
    u32 alarmNo;
    u32 channelMask;
    u32 channelCount;
} NNSSndStrm;
typedef struct NNSSndArcFatBlock {
    u32 signature;
    u32 blockSize;
    u32 count;
} NNSSndArcFatBlock;
typedef struct NNSSndArcFatRecord {
    u32 offset;
    u32 size;
    u32 data;
    u32 reserved;
} NNSSndArcFatRecord;
extern void NNSi_SndStrmStart(void *arg);
extern void NNSi_SndMainReset(void);
extern void NNS_SndMain(void);
extern void NNSi_SndShutdown(void);
extern void NNS_SndStartTimer(void);
extern void NNSi_SndCaptureReset(void);
extern u32 NNS_SndArcInit(NNSSndArc *arc, const char *path, u32 *heap, u32 loadSymbols);
extern u32 NNSi_SndArcLoadTables(NNSSndArc *arc, u32 *heap, u32 loadSymbols);
extern void NNS_SndArcInitOnMemory(NNSSndArc *arc, u8 *base);
struct SNDTrackInfo;
typedef struct SndFader {
    s32 start;
    s32 target;
    s32 step;
    s32 duration;
} SndFader;
typedef struct SndPlayer {
    NNSFndList seqList;
    NNSFndList heapList;
    u32 playableSeqCount;
    u32 allocatableChannelMask;
    u8 volume;
    u8 pad21[3];
} SndPlayer;
struct SndSeqPlayer;
typedef struct SndPlayerHeap {
    NNSFndLink link;
    NNSSndHeap *heap;
    struct SndSeqPlayer *pOwner;
    u32 playerNo;
    u8 buffer[1];
} SndPlayerHeap;
struct SndHandle;
typedef struct SndSeqPlayer {
    struct SndHandle *pHandle;
    SndPlayer *pPlayer;
    SndPlayerHeap *pPlayerHeap;
    NNSFndLink playerLink;
    NNSFndLink activeLink;
    SndFader volumeFader;
    u8 state;
    u8 isPrepared;
    u8 isPaused;
    u8 startPending;
    u32 commandTag;
    u16 seqType;
    u16 pad36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 priority;
    s16 appliedVolume;
    u8 initialVolume;
    u8 volume;
    u8 pad42[2];
} SndSeqPlayer;
typedef struct SndHandle {
    SndSeqPlayer *volatile player;
} SndHandle;
typedef void (*NNSSndStrmCallback)(u32 isTimerCall, s32 numChannels, u32 *bufferTable, u32 length, u32 format, u32 userData);
typedef struct SndStrmAlarm {
    void (*handler)(void *arg);
    void *arg;
    u8 reserved08[8];
} SndStrmAlarm;
typedef struct SndStrm {
    NNSFndLink link;
    SndStrmAlarm alarm[2];
    u32 format;
    union {
        u32 flags;
        struct {
            s32 isSetup : 1;
            s32 isStarted : 1;
            u32 reserved : 30;
        };
    };
    u32 bufferSize;
    s32 frames;
    NNSSndStrmCallback callback;
    u32 userData;
    s32 frameIdx;
    s32 volume;
    s32 timerNo;
    u32 channelMask;
    s32 numChannels;
    u8 channel[4];
} SndStrm;
extern void NNS_SndPlayerSetPlayerVolume(u32 playerNo, u32 volume);
extern void NNS_SndPlayerSetPlayableSeqCount(int playerNo, int playableSeqCount);
extern void NNS_SndPlayerSetAllocatableChannel(u32 playerNo, u32 channelMask);
extern u32 NNS_SndPlayerCreateHeap(int playerNo, NNSSndHeap *heap, u32 size);
extern void NNS_SndHandleStopSeq(SndHandle *handle, int fadeFrame);
extern void NNS_SndHandlePauseSeq(SndHandle *handle, unsigned char flag);
extern void NNS_SndHandleInit(SndHandle *handle);
extern void NNS_SndHandleReleaseSeq(SndHandle *handle);
extern u16 NNS_SndPlayerGetActiveSeqCount(u32 playerNo);
extern s32 NNS_SndPlayerCountPlayingSeqBySeqNo(u32 seqNo);
extern void NNS_SndHandleSetVolume(SndHandle *handle, int volume);
extern void NNS_SndHandleSetInitialVolume(SndHandle *handle, u8 volume);
extern void NNS_SndHandleMoveVolume(SndHandle *handle, u32 volume, u32 frames);
extern void NNS_SndHandlePause(SndHandle *handle, u32 value);
extern void NNS_SndHandleSetTrackPause(SndHandle *handle, u32 trackMask, u32 value);
extern void NNS_SndHandleSetTrackMute(SndHandle *handle, u32 trackMask, u32 value);
extern void NNS_SndHandleSetTrackVolume(SndHandle *handle, u32 trackMask, int volumeIndex);
extern void NNS_SndHandleSetTrackPitch(SndHandle *handle, u32 trackMask, u32 value);
extern void NNS_SndHandleSetTrackPan(SndHandle *handle, u32 trackMask, u32 value);
extern void NNS_SndHandleSetTrackModDepth(SndHandle *handle, u32 trackMask, u32 value);
extern void NNS_SndHandleSetTrackModSpeed(SndHandle *handle, u32 trackMask, u32 value);
extern void NNS_SndHandleStop(SndHandle *handle, u32 value);
extern void NNSi_SndHandleSetSeqNo(SndHandle *handle, u32 seqNo);
extern void NNSi_SndHandleSetSeqArc(SndHandle *handle, u32 seqArcNo, u32 seqArcIndex);
extern int NNS_SndHandleReadTrackInfo(SndHandle *handle, int trackNo, struct SNDTrackInfo *trackInfo);
extern void NNS_SndPlayerInit(void);
extern void NNS_SndPlayerMain(void);
extern SndSeqPlayer *NNSi_SndPlayerAllocSeqPlayer(SndHandle *handle, s32 playerNo, s32 priority);
extern void NNSi_SndPlayerFreeSeqPlayer(SndSeqPlayer *seqPlayer);
extern void NNSi_SndPlayerStartSeqPlayer(SndSeqPlayer *seqPlayer, const void *seqBase, u32 seqOffset, const void *bankData);
extern void NNSi_SndSeqPlayerStop(SndSeqPlayer *seqPlayer, int fadeFrame);
extern void NNSi_SndSeqPlayerPause(SndSeqPlayer *seqPlayer, u8 flag);
extern NNSSndHeap *NNSi_SndPlayerAllocHeap(s32 playerNo, SndSeqPlayer *seqPlayer);
extern void NNSi_SndSeqPlayerResetState(SndSeqPlayer *seqPlayer);
extern void NNSi_SndPlayerInsertSeqPlayer(SndPlayer *player, SndSeqPlayer *seqPlayer);
extern void NNSi_SndInsertActiveSeqPlayer(SndSeqPlayer *seqPlayer);
extern void NNSi_SndSeqPlayerStopNow(SndSeqPlayer *seqPlayer);
extern SndSeqPlayer *NNSi_SndAllocFreeSeqPlayer(s32 priority);
extern void NNSi_SndSeqPlayerRelease(SndSeqPlayer *seqPlayer);
extern void NNSi_SndPlayerHeapDisposeCallback(void *pHeapBlock, u32 size, uptr data1, u32 data2);
extern void NNSi_SndSeqPlayerSetPriority(SndSeqPlayer *seqPlayer, u32 priority);
typedef struct SNDCommand {
    struct SNDCommand *next;
    int id;
    u32 arg[4];
} SNDCommand;
extern void SND_CommandInit(void);
extern const SNDCommand *func_020d5604(u32 flags);
extern SNDCommand *SND_AllocCommand(u32 flags);
extern void SND_PushCommand(SNDCommand *command);
extern BOOL func_020d57d4(u32 flags);
extern void SND_WaitForCommandProc(u32 tag);
extern u32 func_020d59fc(void);
extern BOOL func_020d5a28(u32 tag);
extern int SND_CountFreeCommand(void);
extern int SND_CountReservedCommand(void);
extern int SND_CountWaitingCommand(void);
extern void PxiFifoCallback(int tag, u32 data, BOOL err);
extern void InitPXI(void);
extern void RequestCommandProc(void);
extern SNDCommand *AllocCommand(void);
extern BOOL IsCommandAvailable(void);
struct SndArcPlayerEntry;
struct SndBlock;
struct SndTrack;
struct SndArcTable;
extern u32 NNS_SndArcPlayerStartSeq(struct SndHandle *handle, u32 seqNo);
extern u32 NNS_SndArcPlayerStartSeqEx(struct SndHandle *handle, int playerNo, int bankNo, int priority, u32 seqNo);
extern u32 NNS_SndArcPlayerStartSeqArc(struct SndHandle *handle, u32 arcIndex, u32 index);
extern u32 NNSi_SndArcPlayerStartSeq(struct SndHandle *handle, u32 playerNo, u32 bankNo, u32 priority,
                                     struct SndArcPlayerEntry *entry, u32 seqNo);
extern u32 NNSi_SndArcPlayerStartSeqArc(struct SndHandle *handle, u32 playerNo, u32 bankNo, u32 priority,
                                        struct SndArcPlayerEntry *entry, struct SndBlock *block, u32 arcIndex, u32 index);
extern void NNSi_SndArcPlayerUpdate(void);
extern void NNSi_SndTrackDetachObject(struct SndTrack *track);
extern void NNSi_SndTrackStop(struct SndTrack *track);
extern void NNSi_SndTrackClose(struct SndTrack *track);
extern void NNSi_SndTrackReleaseRef(struct SndTrack *track);
extern void NNSi_SndTrackListUnlinkByValue(void *list, void *value);
extern void NNSi_SndTrackListUnlinkElem(void *elem);
extern struct SndArcPlayerEntry *NNSi_SndArcGetSeqEntry(struct SndArcTable *table, int index);
extern void NNSi_SndFaderReset(SndFader *fader);
struct SNDBankData;
struct SNDDriverInfo;
extern void SND_StopSeq(int playerNo);
extern void SND_PrepareSeq(int playerNo, const void *base, u32 offset, struct SNDBankData *bank);
extern void SND_StartPreparedSeq(u32 playerNo);
extern void SND_PauseSeq(int playerNo, int flag);
extern void SND_SetPlayerTempoRatio(int playerNo, int ratio);
extern void SND_SetPlayerVolume(int playerNo, int volume);
extern void SND_SetPlayerChannelPriority(int playerNo, int prio);
extern void SND_SetTrackVolume(int playerNo, u32 trackBitMask, int volume);
extern void SND_SetTrackPitch(int playerNo, u32 trackBitMask, int pitch);
extern void SND_SetTrackPan(int playerNo, u32 trackBitMask, int pan);
extern void SND_SetTrackModDepth(int playerNo, u32 trackBitMask, u32 depth);
extern void SND_SetTrackModSpeed(int playerNo, u32 trackBitMask, u32 speed);
extern void SND_SetTrackAllocatableChannel(int playerNo, u32 trackBitMask, u32 chBitMask);
extern void SND_StartTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void SND_StopTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void SND_SetTrackMute(int playerNo, u32 trackBitMask, int flag);
extern void SND_SetTrackMuteEx(int playerNo, u32 trackBitMask, int mute);
extern void SND_LockChannel(u32 chBitMask, u32 flags);
extern void SND_UnlockChannel(u32 chBitMask, u32 flags);
extern void SND_SetChannelTimer(u32 chBitMask, int timer);
extern void SND_SetChannelVolume(u32 chBitMask, int volume, int shift);
extern void SND_SetupChannelPcm(int chNo, int format, const void *dataaddr, int loop, int loopStart, int loopLen, int volume,
                                int shift, int timer, int pan);
extern void SND_InvalidateSeqData(const void *start, const void *end);
extern void SND_InvalidateBankData(const void *start, const void *end);
extern void SND_InvalidateWaveData(const void *start, const void *end);
extern void SND_SetMasterVolume(int volume);
extern void SND_SetOutputSelector(int left, int right, int channel1, int channel3);
extern void SND_SetMasterPan(int pan);
extern void SND_ResetMasterPan(void);
extern void func_020d541c(struct SNDDriverInfo *info);
extern void SNDi_SetPlayerParam(int playerNo, u32 offset, u32 data, int size);
extern void SNDi_SetTrackParam(int playerNo, u32 trackBitMask, u32 offset, u32 data, int size);
extern void PushCommand_impl(int id, u32 value0, u32 value1, u32 value2, u32 value3);
extern void DC_FlushAll(void);
extern void _Z24InvalidateDataCacheRangePKvj(void *startAddr, u32 nBytes);
extern void DC_StoreRange(void *startAddr, u32 nBytes);
extern void DC_FlushRange(void *startAddr, unsigned long nBytes);
extern void DC_WaitWriteBufferEmpty(void);
extern void IC_InvalidateAll(void);
extern void IC_InvalidateRange(void *startAddr, u32 nBytes);
typedef struct SNDDriverInfo SNDDriverInfo;
typedef struct SNDTrackInfo SNDTrackInfo;
struct SNDDriverInfo;
struct SNDTrackInfo;
typedef struct SNDDriverInfo SNDDriverInfo;
typedef struct SNDTrackInfo SNDTrackInfo;
typedef struct SNDSharedWork {
    unsigned int finishedTag;
    unsigned int playerStatus;
    unsigned short channelStatus;
    unsigned short captureStatus;
    unsigned int padding[5];
    struct {
        short variable[16];
        unsigned int tickCounter;
    } player[16];
    short globalVariable[16];
} SNDSharedWork;
extern u32 SND_GetPlayerStatus(void);
extern unsigned long SND_GetChannelStatus(void);
extern BOOL SND_ReadTrackInfo(SNDDriverInfo *driverInfo, int playerNo, int trackNo, SNDTrackInfo *trackInfo);
extern unsigned long SNDi_GetFinishedCommandTag(void);
extern void SNDi_InitSharedWork(SNDSharedWork *work);
extern void NNS_SndInit(void);
extern void NNS_SndBoot(void);
extern void NNS_SndSetMasterVolume(int volume);
extern void NNS_SndSetMasterPan(u32 flag);
extern u32 func_020c79b4(void);
extern int NNS_SndReadTrackInfo(int playerNo, int trackNo, struct SNDTrackInfo *trackInfo);
extern void NNS_SndPrependPostSleepCallback(void *unused0);
extern void NNS_SndAppendPostSleepCallback(void *p);
extern struct Sys data_021dd440;
extern u8 data_021dd480[];
void NNS_SndInit(void);
void NNS_SndBoot(void);
void NNS_SndSetMasterVolume(int volume);
void NNS_SndSetMasterPan(u32 flag);
u32 func_020c79b4(void) {
    if (data_021dd440.pending == 0) {
        while (func_020d5604(0) != 0)
            ;

        if (func_020d5a28(data_021dd440.tag) == 0) {
            return 0;
        }

        if (data_021dd440.idx < 0) {
            data_021dd440.idx = 1;
        }

        func_020d541c((struct SNDDriverInfo *) (&data_021dd480[data_021dd440.idx * 0x11E0]));
        data_021dd440.tag = func_020d59fc();
        if (data_021dd440.idx == 0) {
            data_021dd440.idx = 1;
        } else {
            data_021dd440.idx = 0;
        }
        _Z24InvalidateDataCacheRangePKvj(&data_021dd480[data_021dd440.idx * 0x11E0], 0x11E0);
        func_020d57d4(0);
        return 1;
    }

    func_020d541c((struct SNDDriverInfo *) (&data_021dd480[0]));
    data_021dd440.tag     = func_020d59fc();
    data_021dd440.pending = 0;
    return 0;
}
int NNS_SndReadTrackInfo(int playerNo, int trackNo, struct SNDTrackInfo *trackInfo);
void NNS_SndPrependPostSleepCallback(void *unused0);
void NNS_SndAppendPostSleepCallback(void *p);
