/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020767f4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcstrm.c (license: none),
 * reused by tools/donor_match.py */
typedef signed long intptr_t;
typedef unsigned long uintptr_t;
typedef intptr_t ptrdiff_t;
typedef unsigned long size_t;
typedef unsigned short wchar_t;
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long long s64;
typedef int s32;
typedef short s16;
typedef char s8;
typedef float f32;
typedef double f64;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef volatile u8 vu8;
typedef volatile s64 vs64;
typedef volatile s32 vs32;
typedef volatile s16 vs16;
typedef volatile s8 vs8;
typedef volatile f32 vf32;
typedef volatile f64 vf64;
typedef s32 BOOL;
extern u32 OS_EnableIRQ(void);
extern u32 OS_DisableIRQ(void);
extern u32 OS_RestoreIRQ(u32 irq_flag);
extern u32 OS_EnableFIQ(void);
extern u32 OS_DisableFIQ(void);
extern u32 OS_RestoreFIQ(u32 fiq_flag);
extern u32 OS_GetIRQFlag(void);
extern u32 OS_GetCPUMode(void);
extern void OS_Delay(u32 count);
extern void OS_Wait(void);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadSwitchCallback)(OSThread *oldThread, OSThread *newThread);
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThreadInfo {
    u16 isSchedulerWaiting;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    OSThreadSwitchCallback callback;
} OSThreadInfo;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
extern OSThreadInfo ThreadInfo;
extern void OS_PauseThread(OSThreadQueue *queue);
extern void OS_UnpauseThread(OSThreadQueue *queue);
extern OSMutex *OS_RemoveMutexFromQueue(OSMutexQueue *queue);
extern OSThread *OS_SelectThread(void);
extern void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 priority);
extern void OS_ExitThread(void);
extern void OS_WakeupThreadDirect(void *param1);
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->tail = 0;
    queue->head = 0;
}
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &ThreadInfo;
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}
static inline u32 OS_GetThreadId(OSThread *thread) {
    return thread->id;
}
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void OS_InitMutex(OSMutex *mutex);
extern void func_02084830(OSMutex *mutex);
extern void func_020848b4(OSMutex *mutex);
extern void OS_UnlockAllQueuedThreadMutex(OSThread *thread);
extern BOOL OS_TryLockMutex(OSMutex *mutex);
struct FS_File;
struct FS_Record;
typedef enum {
    FS_RESULT_SUCCESS  = 0,
    FS_RESULT_FAILURE  = 1,
    FS_RESULT_BUSY     = 2,
    FS_RESULT_CANCELED = 3,
    FS_RESULT_BADCMD   = 4,
    FS_RESULT_ASYNC    = 6,
    FS_RESULT_UNKNOWN  = 8,
} FS_CommandResult;
typedef FS_CommandResult (*FS_RecordReadCB)(struct FS_Record *record, void *dest, u32 pos, u32 size);
typedef FS_CommandResult (*FS_RecordWriteCB)(struct FS_Record *record, const void *src, u32 pos, u32 size);
typedef FS_CommandResult (*FS_RecordMethodCB)(struct FS_File *file, u32 type);
typedef struct FS_LinkedFile {
    struct FS_File *prev;
    struct FS_File *next;
} FS_LinkedFile;
typedef struct FS_Record {
    u32 name;
    struct FS_Record *next;
    struct FS_Record *prev;
    OSThreadQueue unk_0C;

    OSThreadQueue unk_14;

    u32 flags;
    FS_LinkedFile fileList;
    u32 baseOffset;
    u32 fatOffset;
    u32 fatSize;
    u32 fntOffset;
    u32 fntSize;
    u32 fatBase;
    u32 fntBase;
    void *loaded;
    FS_RecordReadCB readCB;
    FS_RecordWriteCB writeCB;
    FS_RecordReadCB tableCB;
    FS_RecordMethodCB methodCB;
    u32 methodFlags;
} FS_Record;
typedef enum {
    FS_RECORD_FLAG_LOADED       = 0x002,
    FS_RECORD_FLAG_TABLE_LOADED = 0x004,
    FS_RECORD_FLAG_HALTED       = 0x008,
    FS_RECORD_FLAG_ACTIVE       = 0x010,
    FS_RECORD_FLAG_CANCELING    = 0x020,
    FS_RECORD_FLAG_WAITING      = 0x040,
    FS_RECORD_FLAG_UNLOADING    = 0x080,
    FS_RECORD_FLAG_ASYNC        = 0x100,
    FS_RECORD_FLAG_SYNC         = 0x200,
} FS_RecordFlags;
extern BOOL FS_RecordWait(FS_Record *record);
extern BOOL FS_RecordResume(FS_Record *record);
static inline BOOL FS_IsRecordLoaded(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_LOADED) != 0;
}
static inline BOOL FS_IsRecordTableLoaded(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_TABLE_LOADED) != 0;
}
static inline BOOL FS_IsRecordHalted(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_HALTED) != 0;
}
static inline BOOL FS_IsRecordActive(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_ACTIVE) != 0;
}
static inline BOOL FS_IsRecordCanceling(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_CANCELING) != 0;
}
static inline BOOL FS_IsRecordWaiting(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_WAITING) != 0;
}
static inline BOOL FS_IsRecordAsync(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_ASYNC) != 0;
}
typedef struct FS_FileIdentifier {
    struct FS_Record *record;
    u32 fileID;
} FS_FileIdentifier;
typedef struct FS_FilePosition {
    struct FS_Record *record;
    u16 id;
    u16 index;
    u32 position;
} FS_FilePosition;
typedef struct FS_FileArgs_NormalizePath {
    FS_FilePosition position;
    const char *path;
    BOOL isDirectory;
    union {
        FS_FileIdentifier *file;
        FS_FilePosition *directory;
    } response;
} FS_FileArgs_PathNormalize;
typedef struct FS_FileArgs_ProcessRead {
    void *dest;
    u32 sizeExpected;
    u32 sizeActual;
} FS_FileArgs_ProcessRead;
typedef struct FS_FileArgs_Seek {
    FS_FilePosition position;
} FS_FileArgs_Seek;
typedef struct FS_FileArgs_OpenImmediate {
    u32 start;
    u32 end;
    u32 idx;
} FS_FileArgs_OpenImmediate;
typedef struct FS_FileArgs_OpenFromID {
    FS_FileIdentifier iden;
} FS_FileArgs_OpenFromID;
typedef struct FS_File {
    struct FS_LinkedFile link;
    struct FS_Record *record;
    u32 status;
    u32 unk_10;
    FS_CommandResult result;
    OSThreadQueue unk_18;
    u32 unk_20;
    u32 startPosition;
    u32 endPosition;
    u32 currentPosition;

    union {
        FS_FileArgs_PathNormalize normalize;
        FS_FileArgs_ProcessRead read;
        FS_FileArgs_OpenImmediate openImmediate;
        FS_FileArgs_OpenFromID openFromId;
    } methodArgs;
} FS_File;
extern void FS_FileInit(FS_File *file);
extern BOOL FS_FilePathNormalize(FS_File *file, const char *path, FS_FileIdentifier *iden, FS_FilePosition *dirPosition);
extern BOOL FS_FilePathAsIden(FS_FileIdentifier *iden, const char *path);
extern BOOL FS_FileOpenImmediate(FS_File *file, FS_Record *record, u32 startPos, u32 endPos, u32 fileIdx);
extern BOOL FS_FileOpenFromIden(FS_File *file, FS_FileIdentifier iden);
extern BOOL FS_FileOpen(FS_File *file, const char *path);
extern BOOL FS_FileClose(FS_File *file);
extern BOOL FS_FileWait(FS_File *file);
extern void FS_FileStop(FS_File *file);
extern s32 FS_FileReadAsync(FS_File *file, void *dest, s32 size);
extern s32 FS_FileRead(FS_File *file, void *dest, s32 size);
extern BOOL FS_FileSeek(FS_File *file, s32 offset, s32 mode);
typedef enum {
    FS_FILE_STATUS_BUSY      = 0x01,
    FS_FILE_STATUS_CANCELING = 0x02,
    FS_FILE_STATUS_SYNC      = 0x04,
    FS_FILE_STATUS_ASYNC     = 0x08,
    FS_FILE_STATUS_IS_FILE   = 0x10,
    FS_FILE_STATUS_IS_DIR    = 0x20,
    FS_FILE_STATUS_ACTIVE    = 0x40,
} FS_FileStatusFlags;
static inline BOOL FS_IsFileBusy(volatile FS_File *file) {
    return (file->status & FS_FILE_STATUS_BUSY) != 0;
}
static inline BOOL FS_IsFileCanceling(volatile FS_File *file) {
    return (file->status & FS_FILE_STATUS_CANCELING) != 0;
}
static inline BOOL FS_IsFileSynchronous(volatile const FS_File *file) {
    return (file->status & FS_FILE_STATUS_SYNC) != 0;
}
static inline BOOL FS_IsFileActive(volatile const FS_File *file) {
    return (file->status & FS_FILE_STATUS_ACTIVE) != 0;
}
static inline BOOL FS_IsFileSuccessful(volatile const FS_File *file) {
    return (file->result == FS_RESULT_SUCCESS) != 0;
}
static inline void FS_FileListCut(FS_LinkedFile *list) {
    FS_File *prev = list->prev;
    FS_File *next = list->next;

    if (prev != 0) {
        prev->link.next = next;
    }
    if (next != 0) {
        next->link.prev = prev;
    }
}
static inline void FS_FileListAppend(FS_File *file, FS_File *list) {
    FS_LinkedFile *const link = &file->link;

    FS_FileListCut(link);

    while (list->link.next != 0) {
        list = list->link.next;
    }

    list->link.next = file;
    link->prev      = list;
    link->next      = 0;
}
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_02067dec(UnkList *list, u16 offset);
extern void func_02067e30(UnkList *list, void *obj);
extern void func_02067ed4(UnkList *list, void *target, void *obj);
extern void func_02067f38(UnkList *list, void *obj);
extern void *func_02067f98(UnkList *list, void *obj);
extern void *func_02067fb0(UnkList *list, void *obj);
extern void *func_0206886c(void *start, u32 size, u16 opt);
extern void func_020688a4(void *heap);
extern void *func_020688b0(void *heap, u32 size, int align);
extern void func_020688e4(void *heap, int mode);
extern BOOL func_02060fec(FS_FileIdentifier *id, const char *path);
extern void func_02060e04(FS_File *file);
extern BOOL func_02061074(FS_File *file, FS_FileIdentifier id);
extern BOOL func_0206112c(FS_File *file);
extern BOOL func_02061228(FS_File *file);
extern s32 func_02061270(FS_File *file, void *dst, s32 len);
extern BOOL func_02061280(FS_File *file, s32 offset, int origin);
extern void func_020833ec(const void *src, void *dest, u32 count);
extern void func_02083330(void *dest, u8 value, u32 count);
extern void func_0206785c(u32 data, void *dest, u32 size);
extern void func_02084a74(void *ptr, u32 size);
extern void DC_CleanRange(void *ptr, u32 size);
extern void DC_InvalidateRange(void *ptr, u32 size);
extern void func_020787c4(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_02078d60(void *queue, void *msgs, s32 count);
extern BOOL func_02078e1c(void *queue, void *msg, s32 flags);
extern u32 func_02005dd8(u32 a, u32 b);
extern s32 _s32_div_f(s32 a, s32 b);
extern u64 func_02005fe4(u32 lo, u32 hi, u32 dlo, u32 dhi);
extern void SND_SetupChannelPcm(int ch, int format, const void *data, int loop, int loopStart, int loopLen, int volume,
                                int shift, int timer, int pan);
extern void SND_SetupAlarm(int alarm, u32 tick, u32 period, void (*callback)(void *), void *arg);
extern void SND_SetChannelVolume(u32 chBitMask, int volume, int shift);
extern void SND_SetChannelPan(u32 chBitMask, int pan);
extern void func_0207a390(int playerNo);
extern void func_0207a3b0(int playerNo, const void *seq, u32 offset, const void *bank);
extern void func_0207a3f8(int playerNo, int volume);
extern void func_0207a428(int playerNo, u32 trackBitMask, u32 chBitMask);
extern void func_0207a450(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_0207a478(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_0207a5f0(const void *start, const void *end);
extern void func_0207a610(const void *start, const void *end);
extern void func_0207a630(const void *start, const void *end);
extern void func_0207a650(int a, int b, int c, int d);
extern void func_0207a9e8(int flag);
extern void func_0207aba4(u32 tag);
extern u32 func_0207ac10(void);
extern s32 func_0207b024(int volume);
extern void func_0207b094(void *bank, int index, void *waveArc);
extern void func_0207b160(void *bank);
extern void func_0207b1f8(void *waveArc);
extern u32 func_0207b410(void *waveArc);
extern void *func_0207b44c(void *waveArc, u32 index);
extern void func_0207b418(void *waveArc, u32 index, void *wave);
extern void func_020732d0(u32 capBitMask);
extern BOOL func_020732a0(u32 chBitMask);
extern BOOL func_02073258(u32 chBitMask);
extern int func_020732ec(void);
extern void func_02073334(int alarm);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndStrm {
    u8 unk_00[0x5C];
} UnkSndStrm;
typedef struct UnkSndAdpcmState {
    s16 pred;
    u8 index;
    u8 unk_03;
} UnkSndAdpcmState;
struct UnkSndArcStrm;
struct UnkSndArcStrmHandle;
typedef BOOL (*UnkSndArcStrmOpenFunc)(struct UnkSndArcStrm *strm, u32 fileId);
typedef void (*UnkSndArcStrmCloseFunc)(struct UnkSndArcStrm *strm);
typedef s32 (*UnkSndArcStrmReadFunc)(struct UnkSndArcStrm *strm, void *dst, s32 size, u32 offset);
typedef struct UnkSndArcStrmPos {
    int no;
    u32 offset;
} UnkSndArcStrmPos;
typedef void (*UnkSndArcStrmDataCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef BOOL (*UnkSndArcStrmNextCallback)(int status, UnkSndArcStrmPos *cur, UnkSndArcStrmPos *next, void *arg);
typedef struct UnkSndArcStrm {
    UnkSndStrm strm;
    FS_File file;
    u32 fileOffset;
    u8 header[0x18];
    u8 format;
    u8 loop;
    u8 channels;
    u8 unk_c3;
    u16 sampleRate;
    u16 timer;
    u32 loopStart;
    u32 sampleCount;
    u32 dataOffset;
    u32 blockCount;
    u32 blockSize;
    u32 blockSamples;
    u32 lastBlockSize;
    u32 lastBlockSamples;
    UnkSndFader fader;
    UnkSndAdpcmState adpcmState[6];
    BOOL active : 1;
    BOOL started : 1;
    BOOL startRequest : 1;
    BOOL fadeStop : 1;
    BOOL seekDecode : 1;
    BOOL dataEnd : 1;
    BOOL mono : 1;
    volatile int stopWait;
    BOOL prepared;
    int requestCount;
    int channelLockCount;
    u8 chNum;
    u8 unk_125;
    u8 chNo[6];
    void *buffer;
    u32 bufSize;
    UnkSndArcStrmDataCallback dataCallback;
    void *dataCallbackArg;
    UnkSndArcStrmNextCallback nextCallback;
    void *nextCallbackArg;
    int strmNo;
    int playerNo;
    struct UnkSndArcStrmHandle *handle;
    int prio;
    int playerVolume;
    int volume;
    int curVolume;
    u32 curPos;
    UnkSndArcStrmOpenFunc openFunc;
    UnkSndArcStrmCloseFunc closeFunc;
    UnkSndArcStrmReadFunc readFunc;
    UnkSndArcStrmCloseFunc stopFunc;
} UnkSndArcStrm;
typedef struct UnkSndArcStrmHandle {
    UnkSndArcStrm *volatile strm;
} UnkSndArcStrmHandle;
typedef enum UnkSndStrmFormat {
    UNK_SND_STRM_FORMAT_PCM8,
    UNK_SND_STRM_FORMAT_PCM16
} UnkSndStrmFormat;
typedef struct UnkSndArcStrmRequest {
    UnkLink link;
    UnkSndArcStrm *strm;
    int status;
    int chNum;
    void *buffer[6];
    u32 len;
} UnkSndArcStrmRequest;
typedef struct UnkSndArcStrmThread {
    OSThread thread;
    u8 stack[0x400];
    OSThreadQueue queue;
    OSMutex mutex;
    UnkList requestList;
} UnkSndArcStrmThread;
typedef struct UnkSndArcStrmPlayerInfo {
    u8 chNum;
    u8 chNo[16];
} UnkSndArcStrmPlayerInfo;
typedef struct UnkSndArcStrmInfo {
    u32 fileId;
    u8 volume;
    u8 prio;
    u8 playerNo;
    u8 flags;
} UnkSndArcStrmInfo;
typedef struct UnkSndArcStrmWork {
    BOOL initialized;
    UnkSndArcStrmThread *thread;
    u8 *adpcmBuffer;
} UnkSndArcStrmWork;
extern UnkSndArcStrmWork data_020deb70;
extern UnkList data_021132dc;
extern OSMutex data_020deb88;
extern UnkSndArcStrmThread data_02113480;
extern UnkSndArcStrmRequest data_02113300[8];
extern UnkSndArcStrm data_0211396c[4];
extern u8 data_02113f40[0x200] __attribute__((aligned(32)));
extern const s16 data_020ba8ac[];
extern const s8 data_0209ab10[16];
extern const s16 data_0209ab20[89];
extern void OS_WakeupThreadDirect(void *thread);
extern void *func_020747bc(void);
extern void *func_02074a24(int index);
extern void *func_0207495c(int index);
extern u32 func_02074a88(u32 fileId);
extern s32 func_02074ad8(u32 fileId, void *dst, u32 size, u32 offset);
extern void func_02074b50(FS_FileIdentifier *fileId);
extern void *func_02074b70(u32 fileId);
extern void *func_02074d1c(void *heap, u32 size, void (*callback)(void *, u32, void *, u32), void *data1, u32 data2);
extern void func_02073c04(UnkSndStrm *strm);
extern BOOL func_02073c7c(UnkSndStrm *strm, int chNum, const u8 *chNoList);
extern void func_02073cdc(UnkSndStrm *strm);
extern BOOL func_02073d04(UnkSndStrm *strm, int format, void *buffer, u32 bufSize, int timer, int interval,
                          UnkSndArcStrmDataCallback callback, void *arg);
extern void func_02073ea4(UnkSndStrm *strm);
extern void func_02073ef8(UnkSndStrm *strm);
extern void func_02073f14(UnkSndStrm *strm, int volume);
extern void func_02073f80(UnkSndStrm *strm, int index, int pan);
extern void func_02077244(UnkSndFader *fader);
extern void func_0207725c(UnkSndFader *fader, s32 target, s32 frames);
extern s32 func_02077284(UnkSndFader *fader);
extern void func_020772b8(UnkSndFader *fader);
extern BOOL func_020772d0(UnkSndFader *fader);
extern BOOL func_02075ba8(void *heap);
extern BOOL func_02075c70(UnkSndArcStrmHandle *handle, int strmNo, u32 offset);
extern void func_02075ccc(UnkSndArcStrmHandle *handle);
extern void func_02075d50(UnkSndArcStrmHandle *handle);
extern UnkSndArcStrm *func_02075e78(UnkSndArcStrmHandle *handle, int playerNo, int prio);
extern void func_02075f04(UnkSndArcStrm *strm);
extern BOOL func_02075f30(UnkSndArcStrmHandle *handle, UnkSndArcStrmInfo *info, int playerNo, int prio, int strmNo, u32 offset,
                          UnkSndArcStrmDataCallback dataCallback, void *dataCallbackArg,
                          UnkSndArcStrmNextCallback nextCallback, void *nextCallbackArg);
extern void func_020761a0(UnkSndArcStrm *strm, int fadeFrame);
extern void func_020761f8(UnkSndArcStrm *strm);
extern void func_02076290(UnkSndArcStrm *strm);
extern BOOL func_020762f4(UnkSndArcStrm *strm, int chNum, const u8 *chNo);
extern void func_0207632c(UnkSndArcStrm *strm);
extern void func_02076350(UnkSndArcStrmThread *thread, u32 prio);
extern void func_020763b0(UnkList *list, UnkSndArcStrm *strm);
extern UnkSndArcStrmRequest *func_02076420(UnkList *list);
extern UnkSndArcStrmRequest *func_02076470(void);
extern void func_020764b0(UnkSndArcStrmRequest *request);
extern void func_020764dc(void *mem, u32 size, void *data1, u32 data2);
extern void func_02076578(int status, int chNum, void **buffer, u32 len, int format, void *arg);
extern void func_0208e490(UnkSndArcStrm *strm);
extern void func_0208e5d4(UnkSndArcStrmRequest *request);
extern void func_0207701c(UnkSndArcStrm *strm, u32 fileId);
extern BOOL func_0207709c(UnkSndArcStrm *strm, u32 fileId);
extern void func_02077110(UnkSndArcStrm *strm);
extern s32 func_02077120(UnkSndArcStrm *strm, void *dst, s32 size, u32 offset);
extern void func_02077158(UnkSndArcStrm *strm);
extern BOOL func_02077168(UnkSndArcStrm *strm, u32 fileId);
extern void func_02077190(UnkSndArcStrm *strm);
extern s32 func_02077194(UnkSndArcStrm *strm, void *dst, s32 size, u32 offset);
extern void func_020771b0(UnkSndArcStrm *strm);
extern void func_020771b4(void *arg);
void func_02075aa4(u32 threadPrio, void *heap);
BOOL func_02075ba8(void *heap);
BOOL func_02075c70(UnkSndArcStrmHandle *handle, int strmNo, u32 offset);
void func_02075ccc(UnkSndArcStrmHandle *handle);
BOOL func_02075cec(UnkSndArcStrmHandle *handle, int strmNo, u32 offset);
void func_02075d14(UnkSndArcStrmHandle *handle, int fadeFrame);
void func_02075d30(UnkSndArcStrmHandle *handle, int volume);
void func_02075d44(UnkSndArcStrmHandle *handle);
void func_02075d50(UnkSndArcStrmHandle *handle);
void func_02075d68(void);
UnkSndArcStrm *func_02075e78(UnkSndArcStrmHandle *handle, int playerNo, int prio);
void func_02075f04(UnkSndArcStrm *strm);
BOOL func_02075f30(UnkSndArcStrmHandle *handle, UnkSndArcStrmInfo *info, int playerNo, int prio, int strmNo, u32 offset,
                   UnkSndArcStrmDataCallback dataCallback, void *dataCallbackArg, UnkSndArcStrmNextCallback nextCallback,
                   void *nextCallbackArg);
void func_020761a0(UnkSndArcStrm *strm, int fadeFrame);
void func_020761f8(UnkSndArcStrm *strm);
void func_02076290(UnkSndArcStrm *strm);
BOOL func_020762f4(UnkSndArcStrm *strm, int chNum, const u8 *chNo);
void func_0207632c(UnkSndArcStrm *strm);
void func_02076350(UnkSndArcStrmThread *thread, u32 prio);
void func_020763b0(UnkList *list, UnkSndArcStrm *strm);
UnkSndArcStrmRequest *func_02076420(UnkList *list);
UnkSndArcStrmRequest *func_02076470(void);
void func_020764b0(UnkSndArcStrmRequest *request);
void func_020764dc(void *mem, u32 size, void *data1, u32 data2);
void func_02076578(int status, int chNum, void **buffer, u32 len, int format, void *arg);
void func_0208e490(UnkSndArcStrm *strm);
static inline s16 UnkSndArcStrm_DecodeAdpcm(UnkSndAdpcmState *state, int data) {
    int step;
    int pred;
    int index;
    int diff;

    index = state->index;
    pred  = state->pred;
    step  = data_0209ab20[index];

    data &= 0xF;
    diff = step >> 3;
    if (data & 4) {
        diff += step;
    }
    if (data & 2) {
        diff += step >> 1;
    }
    if (data & 1) {
        diff += step >> 2;
    }

    if (data & 8) {
        pred -= diff;
        if (pred < -0x8000) {
            pred = -0x8000;
        }
    } else {
        pred += diff;
        if (pred > 0x7FFF) {
            pred = 0x7FFF;
        }
    }

    index += data_0209ab10[data];
    if (index < 0) {
        index = 0;
    } else if (index > 88) {
        index = 88;
    }

    state->pred  = pred;
    state->index = index;
    return pred;
}
void func_0208e5d4(UnkSndArcStrmRequest *request) {
    UnkSndArcStrm *strm = request->strm;
    BOOL loopEnd;
    unsigned long bufOffset;
    u32 remain;
    u32 blockSize;
    u32 posInBlock;
    u32 fileOffset;
    u32 copySamples;
    u32 copyBytes;
    u32 readSize;
    u32 blockSamples;
    u32 curPos;
    u32 block;
    u32 samplesInBlock;
    u32 readOffset;
    int i;

    if (strm->dataEnd && strm->stopWait > 0) {
        strm->stopWait--;
    }

    remain    = request->len;
    bufOffset = 0;

    while (remain != 0) {

        if (strm->dataEnd) {
            for (i = 0; i < request->chNum; i++) {
                func_02083330((u8 *) request->buffer[i] + bufOffset, 0, remain);
            }
            break;
        }

        blockSamples = strm->blockSamples;
        curPos       = strm->curPos;
        block        = curPos / blockSamples;
        if (block < strm->blockCount - 1) {
            samplesInBlock = blockSamples;
            blockSize      = strm->blockSize;
        } else {
            blockSize      = strm->lastBlockSize;
            samplesInBlock = strm->lastBlockSamples;
        }

        posInBlock  = curPos - block * blockSamples;
        copySamples = remain;
        if (strm->format != 0) {
            copySamples = remain >> 1;
        }

        if (strm->seekDecode) {
            if (posInBlock == 0) {
                strm->seekDecode = 0;
            } else {
                copySamples = posInBlock;
                posInBlock  = 0;
            }
        }

        loopEnd = 0;
        if (posInBlock + copySamples >= samplesInBlock) {
            copySamples = samplesInBlock - posInBlock;
            if (block >= strm->blockCount - 1) {
                if (strm->loop) {
                    loopEnd = 1;
                } else {
                    strm->dataEnd = 1;
                }
            }
        }

        readOffset = posInBlock;
        copyBytes  = copySamples;
        switch (strm->format) {
            case 0:
                readSize = copySamples;
                break;
            case 1:
                copyBytes  = copySamples * 2;
                readSize   = copyBytes;
                readOffset = posInBlock * 2;
                break;
            case 2:
                readSize   = ((posInBlock + copySamples + 1) >> 1) - (posInBlock >> 1);
                readOffset = posInBlock >> 1;
                if (posInBlock == 0) {
                    readSize += 4;
                } else {
                    readOffset += 4;
                }
                copyBytes *= 2;
                break;
        }

        fileOffset = strm->channels * (block * strm->blockSize) + readOffset;
        fileOffset += strm->dataOffset;

        for (i = 0; i < request->chNum; i++) {
            UnkSndAdpcmState *state = &strm->adpcmState[i];
            void *buf               = (u8 *) request->buffer[i] + bufOffset;
            s16 *dst                = buf;

            if (i < strm->channels) {
                s32 readResult;

                if (strm->format == 2) {
                    func_02084830(&data_020deb88);
                    buf = data_020deb70.adpcmBuffer;
                }

                readResult = strm->readFunc(strm, buf, readSize, fileOffset + i * blockSize);
                if (readResult != readSize) {
                    strm->dataEnd = 1;
                    copyBytes     = 0;
                    copySamples   = 0;
                    loopEnd       = 0;
                    if (strm->format == 2) {
                        func_020848b4(&data_020deb88);
                    }
                    break;
                }

                if (strm->format == 2) {
                    const u8 *src = data_020deb70.adpcmBuffer;
                    u32 pos;
                    u32 end;

                    if (posInBlock == 0) {
                        const UnkSndAdpcmState *header = (const UnkSndAdpcmState *) src;
                        src                            = (const u8 *) (header + 1);
                        *state                         = *header;
                    }

                    end = posInBlock + copySamples;
                    pos = posInBlock;
                    if (pos & 1) {
                        *dst++ = UnkSndArcStrm_DecodeAdpcm(state, *src >> 4);
                        pos++;
                        src++;
                    }

                    while (pos < (end & ~1)) {
                        *dst++ = UnkSndArcStrm_DecodeAdpcm(state, *src);
                        *dst++ = UnkSndArcStrm_DecodeAdpcm(state, *src >> 4);
                        pos += 2;
                        src++;
                    }

                    if (pos < end) {
                        *dst = UnkSndArcStrm_DecodeAdpcm(state, *src);
                    }

                    func_020848b4(&data_020deb88);
                }
            } else if (strm->mono) {
                func_02083330(buf, 0, copyBytes);
            } else {
                func_020833ec((u8 *) request->buffer[0] + bufOffset, buf, copyBytes);
            }
        }

        if (strm->seekDecode) {
            strm->seekDecode = 0;
        } else {
            if (loopEnd) {
                strm->curPos = strm->loopStart;
            } else {
                strm->curPos += copySamples;
            }
            bufOffset += copyBytes;
            remain -= copyBytes;
            if (strm->dataEnd && strm->nextCallback != 0) {
                func_0208e490(strm);
            }
        }
    }

    if (strm->dataCallback != 0) {
        strm->dataCallback(request->status, request->chNum, request->buffer, request->len,
                           strm->format == 0 ? UNK_SND_STRM_FORMAT_PCM8 : UNK_SND_STRM_FORMAT_PCM16, strm->dataCallbackArg);
    }

    for (i = 0; i < request->chNum; i++) {
        func_02084a74(request->buffer[i], request->len);
    }

    if (request->status == 0) {
        strm->prepared = 1;
    }
}
void func_0207701c(UnkSndArcStrm *strm, u32 fileId);
BOOL func_0207709c(UnkSndArcStrm *strm, u32 fileId);
void func_02077110(UnkSndArcStrm *strm);
s32 func_02077120(UnkSndArcStrm *strm, void *dst, s32 size, u32 offset);
void func_02077158(UnkSndArcStrm *strm);
BOOL func_02077168(UnkSndArcStrm *strm, u32 fileId);
void func_02077190(UnkSndArcStrm *strm);
s32 func_02077194(UnkSndArcStrm *strm, void *dst, s32 size, u32 offset);
void func_020771b0(UnkSndArcStrm *strm);
void func_020771b4(void *arg);
