/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G3dFuncSbc_PRJMAP from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g3d_sbc.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef volatile f32 vf32;
typedef u8 REGType8;
typedef u16 REGType16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu8 REGType8v;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef int BOOL;
extern u32 SDK_AUTOLOAD_DTCM_START[];
extern void SDK_SECTION_ARENA_EX_START(void);
typedef enum {
    OS_PROCMODE_USER  = 16,
    OS_PROCMODE_FIQ   = 17,
    OS_PROCMODE_IRQ   = 18,
    OS_PROCMODE_SVC   = 19,
    OS_PROCMODE_ABORT = 23,
    OS_PROCMODE_UNDEF = 27,
    OS_PROCMODE_SYS   = 31
} OSProcMode;
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
typedef enum {
    OS_INTRMODE_IRQ_DISABLE = 0x80,
    OS_INTRMODE_IRQ_ENABLE  = 0
} OSIntrMode_Irq;
extern void OS_Halt(void);
extern OSIntrMode OS_EnableInterrupts(void);
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern OSIntrMode OS_DisableInterrupts_IrqAndFiq(void);
extern OSIntrMode OS_RestoreInterrupts_IrqAndFiq(OSIntrMode state);
extern OSIntrMode_Irq OS_GetCpsrIrq(void);
extern OSProcMode OS_GetProcMode(void);
extern void OS_SpinWait(u32 cycles);
extern void OS_WaitVBlankIntr(void);
typedef void (*MIDmaCallback)(void *);
typedef union {
    u32 b32;
    u16 b16;
} MIiDmaClearSrc;
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, MIDmaCallback callback, void *arg);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MI_WaitDma(u32 dmaNo);
extern void MI_StopDma(u32 dmaNo);
extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_wait(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_wait_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
static inline void MIi_DmaSetParams_wait_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = OS_DisableInterrupts();

    MIiDmaClearSrc *scrp = (MIiDmaClearSrc *) ((u32) 0x40000e0 + dmaNo * 4);
    scrp->b32            = data;
    MIi_DmaSetParams_wait_noInt(dmaNo, (u32) scrp, dest, ctrl);

    (void) OS_RestoreInterrupts(lastIntrMode);
}
static inline void MIi_DmaSetParams_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = OS_DisableInterrupts();

    MIiDmaClearSrc *srcp = (MIiDmaClearSrc *) ((u32) 0x40000e0 + dmaNo * 4);
    srcp->b32            = data;
    MIi_DmaSetParams_noInt(dmaNo, (u32) srcp, dest, ctrl);

    (void) OS_RestoreInterrupts(lastIntrMode);
}
static inline void MIi_CallCallback(MIDmaCallback callback, void *arg) {
    if (callback) {
        (callback)(arg);
    }
}
extern void MI_SendGXCommand(u32 dmaNo, const void *src, u32 commandLength);
extern void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void MI_SendGXCommandFast(u32 dmaNo, const void *src, u32 commandLength);
extern void MI_SendGXCommandAsyncFast(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void MIi_CardDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
extern void CP_SaveContext(register CPContext *context);
extern void CPi_RestoreContext(register CPContext *context);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
extern void OS_InitContext(register OSContext *context, register u32 newpc, register u32 newsp);
extern BOOL OS_SaveContext(register OSContext *context);
extern void OS_LoadContext(register OSContext *context);
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSSwitchThreadCallback)(OSThread *from, OSThread *to);
typedef void (*OSThreadDestructor)(void *);
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
    OSThreadDestructor destructor;
    void *userParameter;

    u32 systemErrno;
};
extern OSThreadInfo OSi_ThreadInfo;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &OSi_ThreadInfo;
}
static inline BOOL OS_IsThreadRunnable(const OSThread *thread) {
    return thread->state == OS_THREAD_STATE_READY;
}
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->head = queue->tail = ((void *) 0);
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}
typedef volatile struct OSLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;
typedef struct {
    u8 bootCheckInfo[0x20];
    u32 resetParameter;
    u8 padding5[0x8];
    u32 romBaseOffset;
    u8 cartridgeModuleInfo[12];
    u32 vblankCount;
    u8 wmBootBuf[0x40];
    u8 nvramUserInfo[0x100];
    u8 isd_reserved1[0x20];
    u8 arenaInfo[0x48];
    u8 real_time_clock[8];
    u32 dmaClearBuf[4];
    u8 rom_header[0x160];
    u8 isd_reserved2[32];
    u32 pxiSignalParam[2];
    u32 pxiHandleChecker[2];
    u32 mic_last_address;
    u16 mic_sampling_data;
    u16 wm_callback_control;
    u16 wm_rssi_pool;
    u8 padding3[2];
    u32 component_param;
    OSThreadInfo *threadinfo_mainp;
    OSThreadInfo *threadinfo_subp;
    u16 button_XY;
    u8 touch_panel[4];
    u16 autoloadSync;
    u32 lockIDFlag_mainp[2];
    u32 lockIDFlag_subp[2];
    struct OSLockWord lock_VRAM_C;
    struct OSLockWord lock_VRAM_D;
    struct OSLockWord lock_WRAM_BLOCK0;
    struct OSLockWord lock_WRAM_BLOCK1;
    struct OSLockWord lock_CARD;
    struct OSLockWord lock_CARTRIDGE;
    struct OSLockWord lock_INIT;
    u16 mmem_checker_mainp;
    u16 mmem_checker_subp;
    u8 padding4[2];
    u16 command_area;
} OSSystemWork;
typedef enum {
    MI_PROCESSOR_ARM9 = 0,
    MI_PROCESSOR_ARM7 = 1
} MIProcessor;
typedef enum {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8  = 1,
    MI_CTRDG_ROMCYCLE1_6  = 2,
    MI_CTRDG_ROMCYCLE1_18 = 3
} MICartridgeRomCycle1st;
typedef enum {
    MI_CTRDG_ROMCYCLE2_6 = 0,
    MI_CTRDG_ROMCYCLE2_4 = 1
} MICartridgeRomCycle2nd;
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
static inline void MIi_SetCardProcessor(MIProcessor proc) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x800) | (proc << 11));
}
static inline void MIi_SetCartridgeProcessor(MIProcessor proc) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x80) | (proc << 7));
}
static inline MICartridgeRomCycle1st MI_GetCartridgeRomCycle1st(void) {
    return (MICartridgeRomCycle1st) (((*(REGType16v *) (0x04000000 + 0x204)) & 0xC) >> 2);
}
static inline MICartridgeRomCycle2nd MI_GetCartridgeRomCycle2nd(void) {
    return (MICartridgeRomCycle2nd) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x10) >> 4);
}
static inline void MI_SetCartridgeRomCycle1st(MICartridgeRomCycle1st c1) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0xC) | (c1 << 2));
}
static inline void MI_SetCartridgeRomCycle2nd(MICartridgeRomCycle2nd c2) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x10) | (c2 << 4));
}
static inline void MI_SetCartridgeRamCycle(MICartridgeRamCycle c) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x3) | (c << 0));
}
static inline MICartridgeRamCycle MI_GetCartridgeRamCycle(void) {
    return (MICartridgeRamCycle) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x3) >> 0);
}
extern void MIi_CpuClear16(register u16 value, register u16 *dst, register u32 size);
extern void MIi_CpuCopy16(const register u16 *src, register u16 *dst, register u32 size);
extern void MIi_CpuClear32(register u32 value, register u32 *dst, register u32 size);
extern void MIi_CpuCopy32(const register u32 *src, register u32 *dst, register u32 size);
extern void MIi_CpuClearFast(register u32 value, register u32 *dst, register u32 size);
extern void MIi_CpuCopyFast(const register u32 *src, register u32 *dst, register u32 size);
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
static inline void MI_CpuCopy16(const void *src, void *dst, u32 size) {
    MIi_CpuCopy16(src, dst, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MIi_CpuClear16(0, dest, size);
}
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    MIi_CpuClear16(data, dest, size);
}
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    MIi_CpuClear32(data, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
static inline void MI_CpuCopy32(const void *src, void *dst, u32 size) {
    MIi_CpuCopy32((u32 *) src, (u32 *) dst, size);
}
static inline void MI_CpuClearFast(void *dst, u32 size) {
    MIi_CpuClearFast(0, dst, size);
}
static inline void MI_CpuCopyFast(const void *src, void *dst, u32 size) {
    MIi_CpuCopyFast(src, dst, size);
}
static inline void MI_CpuFillFast(void *dst, int data, u32 size) {
    MIi_CpuClearFast(data, dst, size);
}
static inline void MI_CpuClear8(void *dst, u32 size) {
    MI_CpuFill8(dst, 0, size);
}
extern void MI_Copy36B(const void *pSrc, void *pDst);
extern void MI_Copy64B(const void *pSrc, void *pDst);
extern u32 MI_SwapWord(u32 setData, vu32 *destp);
extern u8 MI_SwapByte(u32 setData, vu8 *destp);
extern void MI_UncompressLZ8(const void *srcp, void *destp);
inline u32 MI_GetUncompressedSize(const void *srcp) {
    return (*(u32 *) srcp >> 8);
}
extern void MI_Init(void);
typedef s32 fx32;
typedef s64 fx64;
typedef s64 fx64c;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef struct {
    fx16 x;
    fx16 y;
    fx16 z;
} VecFx16;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
static inline s32 FX_Whole(fx32 v) {
    return v >> 12;
}
static inline fx32 FX_Floor(fx32 v) {
    return v & (0x7ffff000 | 0x80000000);
}
static inline fx32 FX32_CAST(s64 res) {
    return (fx32) res;
}
static inline fx32 FX_MulInline(fx32 v1, fx32 v2) {
    return ((s64) v1 * v2 + 0x800LL) >> 12;
}
extern fx32 FX_Mul32x64cFunc(fx32 v32, fx64c v64c);
static inline fx32 FX_Mul32x64cInline(fx32 v32, fx64c v64c) {
    fx64c tmp = v64c * v32 + 0x80000000LL;
    return FX32_CAST(tmp >> 32);
}
extern void FX_Init(void);
extern const fx16 FX_SinCosTable_[];
static inline fx16 FX_SinIdx(int idx) {
    return FX_SinCosTable_[((idx >> 4) << 1)];
}
static inline fx16 FX_CosIdx(int idx) {
    return FX_SinCosTable_[((idx >> 4) << 1) + 1];
}
extern void MTX_Rot22_(MtxFx22 *mtx, fx16 x, fx16 y);
extern void MTX_ScaleApply22(MtxFx22 *a, MtxFx22 *b, fx32 x, fx32 y);
static inline void MTX_Copy33(const MtxFx33 *pSrc, MtxFx33 *pDst) {
    MI_Copy36B(pSrc, pDst);
}
extern void MTX_Identity33_(register MtxFx33 *pDst);
extern void MTX_RotX33_(register MtxFx33 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_RotY33_(register MtxFx33 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_RotZ33_(register MtxFx33 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_Concat33(const MtxFx33 *a, const MtxFx33 *b, MtxFx33 *ab);
extern void MTX_MultVec33(const VecFx32 *vec, const MtxFx33 *m, VecFx32 *dst);
static inline void MTX_Identity33(MtxFx33 *pDst) {
    MTX_Identity33_(pDst);
}
static inline void MTX_RotY33(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotY33_(pDst, sinVal, cosVal);
}
static inline void MTX_RotX33(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotX33_(pDst, sinVal, cosVal);
}
static inline void MTX_RotZ33(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotZ33_(pDst, sinVal, cosVal);
}
extern void MTX_Identity43_(register MtxFx43 *pDst);
extern void MTX_TransApply43(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_Concat43(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab);
extern void MTX_RotX43_(register MtxFx43 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_RotY43_(register MtxFx43 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_Scale43_(register MtxFx43 *pDst, register fx32 x, register fx32 y, register fx32 z);
static inline void MTX_Identity43(MtxFx43 *pDst) {
    MTX_Identity43_(pDst);
}
static inline void MTX_RotX43(MtxFx43 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotX43_(pDst, sinVal, cosVal);
}
static inline void MTX_RotY43(MtxFx43 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotY43_(pDst, sinVal, cosVal);
}
static inline void MTX_Scale43(MtxFx43 *pDst, fx32 x, fx32 y, fx32 z) {
    MTX_Scale43_(pDst, x, y, z);
}
extern inline void MTX_Identity44(MtxFx44 *pDst);
extern inline void MTX_Copy44To33(const MtxFx44 *pSrc, MtxFx33 *pDst);
extern inline void MTX_Copy44To43(const MtxFx44 *pSrc, MtxFx43 *pDst);
extern inline void MTX_Transpose44(const MtxFx44 *pSrc, MtxFx44 *pDst);
extern void MTX_TransApply44(const MtxFx44 *pSrc, MtxFx44 *pDst, fx32 x, fx32 y, fx32 z);
extern inline void MTX_Scale44(MtxFx44 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_ScaleApply44(const MtxFx44 *pSrc, MtxFx44 *pDst, fx32 x, fx32 y, fx32 z);
extern inline void MTX_RotX44(MtxFx44 *pDst, fx32 sinVal, fx32 cosVal);
extern inline void MTX_RotY44(MtxFx44 *pDst, fx32 sinVal, fx32 cosVal);
extern inline void MTX_RotZ44(MtxFx44 *pDst, fx32 sinVal, fx32 cosVal);
extern void MTX_RotAxis44(MtxFx44 *pDst, const VecFx32 *vec, fx32 sinVal, fx32 cosVal);
extern void MTX_Concat44(const MtxFx44 *a, const MtxFx44 *b, MtxFx44 *ab);
extern void MTX_FrustumW(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx);
extern void MTX_PerspectiveW(fx32 fovySin, fx32 fovyCos, fx32 aspect, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx);
extern void MTX_OrthoW(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx);
extern void MTX_Identity44_(register MtxFx44 *pDst);
extern void MTX_Copy44To33_(register const MtxFx44 *pSrc, register MtxFx33 *pDst);
extern void MTX_Copy44To43_(register const MtxFx44 *pSrc, register MtxFx43 *pDst);
extern void MTX_Transpose44_(register const MtxFx44 *pSrc, register MtxFx44 *pDst);
extern void MTX_Scale44_(register MtxFx44 *pDst, register fx32 x, register fx32 y, register fx32 z);
extern void MTX_RotX44_(register MtxFx44 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_RotY44_(register MtxFx44 *pDst, register fx32 sinVal, register fx32 cosVal);
extern void MTX_RotZ44_(register MtxFx44 *pDst, register fx32 sinVal, register fx32 cosVal);
static inline void MTX_Identity44(MtxFx44 *pDst) {
    MTX_Identity44_(pDst);
}
static inline void MTX_Copy44(const MtxFx44 *pSrc, MtxFx44 *pDst) {
    MI_Copy64B(pSrc, pDst);
}
static inline void MTX_Copy44To33(const MtxFx44 *pSrc, MtxFx33 *pDst) {
    MTX_Copy44To33_(pSrc, pDst);
}
static inline void MTX_Copy44To43(const MtxFx44 *pSrc, MtxFx43 *pDst) {
    MTX_Copy44To43_(pSrc, pDst);
}
static inline void MTX_Transpose44(const MtxFx44 *pSrc, MtxFx44 *pDst) {
    MTX_Transpose44_(pSrc, pDst);
}
static inline void MTX_Scale44(MtxFx44 *pDst, fx32 x, fx32 y, fx32 z) {
    MTX_Scale44_(pDst, x, y, z);
}
static inline void MTX_RotX44(MtxFx44 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotX44_(pDst, sinVal, cosVal);
}
static inline void MTX_RotY44(MtxFx44 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotY44_(pDst, sinVal, cosVal);
}
static inline void MTX_RotZ44(MtxFx44 *pDst, fx32 sinVal, fx32 cosVal) {
    MTX_RotZ44_(pDst, sinVal, cosVal);
}
static inline void MTX_Frustum(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, MtxFx44 *mtx) {
    MTX_FrustumW(t, b, l, r, n, f, ((fx32) 0x0000000000001000L), mtx);
}
static inline void MTX_Perspective(fx32 fovySin, fx32 fovyCos, fx32 aspect, fx32 n, fx32 f, MtxFx44 *mtx) {
    MTX_PerspectiveW(fovySin, fovyCos, aspect, n, f, ((fx32) 0x0000000000001000L), mtx);
}
static inline void MTX_Ortho(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, MtxFx44 *mtx) {
    MTX_OrthoW(t, b, l, r, n, f, ((fx32) 0x0000000000001000L), mtx);
}
extern void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 VEC_Mag(VecFx32 *a);
extern void VEC_Normalize(const VecFx32 *pSrc, VecFx32 *pDst);
extern void VEC_Fx16Add(const VecFx16 *a, const VecFx16 *b, VecFx16 *ab);
extern void VEC_Fx16Normalize(const VecFx16 *pSrc, VecFx16 *pDst);
extern fx32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern void VEC_MultAdd(fx32 a, const VecFx32 *b, const VecFx32 *c, VecFx32 *aplusbc);
extern fx32 FX_Div(fx32 numerator, fx32 denominator);
extern fx32 FX_ModS32(fx32 n, fx32 p);
extern fx32 FX_Inv(fx32 denom);
typedef u8 MATHCRC8Context;
typedef u16 MATHCRC16Context;
typedef u32 MATHCRC32Context;
typedef struct MATHCRC8Table {
    u8 table[256];
} MATHCRC8Table;
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
typedef struct MATHCRC32Table {
    u32 table[256];
} MATHCRC32Table;
extern void MATHi_CRC8InitTable(MATHCRC8Table *table, u8 poly);
extern void MATHi_CRC8InitTableRev(MATHCRC8Table *table, u8 poly);
static inline void MATHi_CRC8Init(MATHCRC8Context *context, u8 init) {
    *context = init;
}
extern void MATHi_CRC8Update(const MATHCRC8Table *table, MATHCRC8Context *context, const void *input, u32 length);
static inline void MATHi_CRC8UpdateRev(const MATHCRC8Table *table, MATHCRC8Context *context, const void *input, u32 length) {
    MATHi_CRC8Update(table, context, input, length);
}
static inline u8 MATHi_CRC8GetHash(MATHCRC8Context *context) {
    return *context;
}
static inline void MATH_CRC8InitTable(MATHCRC8Table *table) {
    MATHi_CRC8InitTable(table, 0x07);
}
static inline void MATH_CRC8Init(MATHCRC8Context *context) {
    MATHi_CRC8Init(context, 0);
}
static inline void MATH_CRC8Update(const MATHCRC8Table *table, MATHCRC8Context *context, const void *input, u32 length) {
    MATHi_CRC8Update(table, context, input, length);
}
static inline u8 MATH_CRC8GetHash(MATHCRC8Context *context) {
    return MATHi_CRC8GetHash(context);
}
extern void MATHi_CRC16InitTable(MATHCRC16Table *table, u16 poly);
extern void MATHi_CRC16InitTableRev(MATHCRC16Table *table, u16 poly);
static inline void MATHi_CRC16Init(MATHCRC16Context *context, u16 init) {
    *context = init;
}
extern void MATHi_CRC16Update(const MATHCRC16Table *table, MATHCRC16Context *context, const void *input, u32 length);
extern void MATHi_CRC16UpdateRev(const MATHCRC16Table *table, MATHCRC16Context *context, const void *input, u32 length);
static inline u16 MATHi_CRC16GetHash(MATHCRC16Context *context) {
    return *context;
}
static inline void MATH_CRC16InitTable(MATHCRC16Table *table) {
    MATHi_CRC16InitTable(table, 0x1021);
}
static inline void MATH_CRC16Init(MATHCRC16Context *context) {
    MATHi_CRC16Init(context, 0xffff);
}
static inline void MATH_CRC16Update(const MATHCRC16Table *table, MATHCRC16Context *context, const void *input, u32 length) {
    MATHi_CRC16Update(table, context, input, length);
}
static inline u16 MATH_CRC16GetHash(MATHCRC16Context *context) {
    return MATHi_CRC16GetHash(context);
}
extern u16 MATH_CalcCRC16CCITT(const MATHCRC16Table *table, const void *input, u32 length);
extern void MATH_CalcMD5(void *digest, const void *data, u32 dataLength);
extern void MATH_CalcSHA1(void *digest, const void *data, u32 dataLength);
extern s32 OSi_GetUnusedThreadId(void);
extern OSThread *OSi_RemoveLinkFromQueue(OSThreadQueue *queue);
extern OSThread *OSi_RemoveSpecifiedLinkFromQueue(OSThreadQueue *queue, OSThread *thread);
extern OSMutex *OSi_RemoveMutexLinkFromQueue(OSMutexQueue *queue);
extern void OSi_InsertThreadToList(OSThread *thread);
extern void OSi_RemoveThreadFromList(OSThread *thread);
extern void OSi_RescheduleThread(void);
extern void OS_InitThread(void);
extern BOOL OS_IsThreadAvailable(void);
extern void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void OS_ExitThread(void);
extern void OS_DestroyThread(OSThread *thread);
extern void OS_KillThread(OSThread *thread, void *arg);
extern void OS_KillThreadWithPriority(OSThread *thread, void *arg, u32 prio);
extern void OSi_CancelThreadAlarmForSleep(OSThread *thread);
extern void OS_JoinThread(OSThread *thread);
extern BOOL OS_IsThreadTerminated(const OSThread *thread);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void OS_WakeupThread(OSThreadQueue *queue);
extern void OS_WakeupThreadDirect(OSThread *thread);
extern OSThread *OS_SelectThread(void);
extern void OS_RescheduleThread(void);
extern void OS_YieldThread(void);
extern BOOL OS_SetThreadPriority(OSThread *thread, u32 prio);
extern u32 OS_GetThreadPriority(const OSThread *thread);
extern void OS_Sleep(u32 msec);
extern OSSwitchThreadCallback OS_SetSwitchThreadCallback(OSSwitchThreadCallback callback);
extern u32 OS_DisableScheduler(void);
extern u32 OS_EnableScheduler(void);
extern void OS_SetThreadDestructor(OSThread *thread, OSThreadDestructor dtor);
extern void OSi_InsertLinkToQueue(OSThreadQueue *queue, OSThread *thread);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
extern void OSi_DequeueItem(OSThread *thread, OSMutex *mutex);
extern void OSi_EnqueueTail(OSThread *thread, OSMutex *mutex);
extern void OS_InitMutex(OSMutex *mutex);
extern void OS_LockMutex(OSMutex *mutex);
extern void OS_UnlockMutex(OSMutex *mutex);
extern void OSi_UnlockAllMutex(OSThread *thread);
extern BOOL OS_TryLockMutex(OSMutex *mtx);
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void);
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
static inline OSIrqMask OS_GetRequestIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x214));
}
extern OSIrqFunction OS_IRQTable[];
extern OSIrqCallbackInfo OSi_IrqCallbackInfo[(7 + 1)];
static inline void OS_ClearIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) &= (u32) ~intr;
}
static inline u32 OS_GetIrqCheckFlag(void) {
    return *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38);
}
static inline void OS_SetIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) |= (u32) intr;
}
static inline BOOL OS_EnableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (1UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_DisableIrq(void) {
    BOOL ime                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (0UL << 0);
    return ime;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    BOOL ime                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = enable;
    return ime;
}
static inline OSIrqMask OS_GetIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x210));
}
extern void OS_InitIrqTable(void);
extern void OS_SetIrqFunction(OSIrqMask intrBit, OSIrqFunction function);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
extern OSIrqMask OS_SetIrqMask(OSIrqMask mask);
extern OSIrqMask OS_EnableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_ResetRequestIrqMask(OSIrqMask mask);
extern void OS_SetIrqStackChecker(void);
extern void OS_WaitIrq(BOOL clear, OSIrqMask irqFlags);
extern OSIrqFunction OS_GetIrqFunction(OSIrqMask intrBit);
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *arg), void *arg);
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
extern void SVC_Halt(void);
extern void SVC_WaitByLoop(s32 count);
extern void OS_InitLock(void);
extern void FUN_037F8CB4(s32 ct);
extern s32 OSi_DoLockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFiq);
extern s32 OSi_DoUnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFIQ);
extern s32 OSi_DoTryLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFiq);
extern s32 OS_LockCartridge(u16 lockID);
extern s32 OS_UnlockCartridge(u16 lockID);
extern s32 OS_TryLockCartridge(u16 lockID);
extern void OSi_AllocateCartridgeBus(void);
extern void OSi_FreeCartridgeBus(void);
extern s32 OS_LockCard(u16 lockID);
extern s32 OS_UnlockCard(u16 lockID);
extern s32 OS_UnLockCard(u16 lockID);
extern BOOL OS_TryLockCard(u16 lockID);
extern u16 OS_ReadOwnerOfLockWord(OSLockWord *lock);
extern s32 OS_UnLockCartridge(u16 lockID);
extern s32 OS_GetLockID(void);
extern void OS_ReleaseLockID(register u16 lockID);
extern s32 OS_LockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OS_UnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
typedef char *va_list;
extern int STD_TVSNPrintf(char *dest, u32 len, const char *format, va_list va);
extern int OS_SPrintf(char *dest, const char *format, ...);
extern int OS_SNPrintf(char *dest, u32 len, const char *format, ...);
extern int OS_VSPrintf(char *dest, const char *format, va_list va);
extern int OS_VSNPrintf(char *dest, u32 len, const char *format, va_list va);
extern void OS_Terminate();
typedef enum {
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
typedef struct {
    void *lo[OS_ARENA_MAX];
    void *hi[OS_ARENA_MAX];
    u16 initialized;
    u8 padding[2];
} OSArenaInfo;
extern void OS_InitArena(void);
extern void OS_InitArenaHiAndLo(OSArenaId id);
extern void *OS_GetArenaHi(OSArenaId id);
extern void *OS_GetArenaLo(OSArenaId id);
extern void *OS_GetInitArenaHi(OSArenaId id);
extern void *OS_GetInitArenaLo(OSArenaId id);
extern void OS_SetArenaHi(OSArenaId id, void *newHi);
extern void OS_SetArenaLo(OSArenaId id, void *newLo);
extern void *OS_AllocFromArenaHi(OSArenaId arena, u32 size, u32 align);
extern void *OS_AllocFromArenaLo(OSArenaId id, u32 size, u32 align);
typedef s32 OSHeapHandle;
typedef struct Cell Cell;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
typedef struct {
    long size;
    Cell *free;
    Cell *allocated;
} HeapDesc;
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern Cell *DLExtract(Cell *list, Cell *cell);
extern Cell *DLInsert(Cell *list, Cell *cell);
extern void *OS_AllocFromHeap(OSArenaId id, OSHeapHandle heap, u32 size);
extern void OS_FreeToHeap(OSArenaId id, OSHeapHandle heap, void *ptr);
extern OSHeapHandle OS_SetCurrentHeap(OSArenaId id, OSHeapHandle heap);
extern void *OS_InitAlloc(OSArenaId id, void *arenaStart, void *arenaEnd, s32 maxHeaps);
extern void OS_ClearAlloc(OSArenaId id);
extern OSHeapHandle OS_CreateHeap(OSArenaId id, void *start, void *end);
extern s32 OS_CheckHeap(OSArenaId id, OSHeapHandle heap);
typedef enum {
    PXI_PROC_ARM9 = 0,
    PXI_PROC_ARM7 = 1
} PXIProc;
typedef enum {
    PXI_FIFO_TAG_EX = 0,
    PXI_FIFO_TAG_USER_0,
    PXI_FIFO_TAG_USER_1,
    PXI_FIFO_TAG_SYSTEM,
    PXI_FIFO_TAG_NVRAM,
    PXI_FIFO_TAG_RTC,
    PXI_FIFO_TAG_TOUCHPANEL,
    PXI_FIFO_TAG_SOUND,
    PXI_FIFO_TAG_PM,
    PXI_FIFO_TAG_MIC,
    PXI_FIFO_TAG_WM,
    PXI_FIFO_TAG_FS,
    PXI_FIFO_TAG_OS,
    PXI_FIFO_TAG_CTRDG,
    PXI_FIFO_TAG_CARD,
    PXI_FIFO_TAG_WVR,
    PXI_FIFO_TAG_CTRDG_Ex,
    PXI_MAX_FIFO_TAG = 32
} PXIFifoTag;
typedef enum {
    PXI_FIFO_SUCCESS           = 0,
    PXI_FIFO_FAIL_SEND_ERR     = -1,
    PXI_FIFO_FAIL_SEND_FULL    = -2,
    PXI_FIFO_FAIL_RECV_ERR     = -3,
    PXI_FIFO_FAIL_RECV_EMPTY   = -4,
    PXI_FIFO_NO_CALLBACK_ENTRY = -5
} PXIFifoStatus;
typedef void (*PXIFifoCallback)(PXIFifoTag tag, u32 data, BOOL err);
typedef union {
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } e;
    u32 raw;
} PXIFifoMessage;
extern void PXI_InitFifo(void);
extern void PXI_SetFifoRecvCallback(s32 fifotag, PXIFifoCallback callback);
extern BOOL PXI_IsCallbackReady(s32 fifotag, PXIProc proc);
extern s32 PXI_SendWordByFifo(s32 fifotag, u32 data, BOOL err);
extern void PXIi_HandlerRecvFifoNotEmpty(void);
extern void OS_InitReset(void);
extern BOOL OS_IsResetOccurred(void);
extern void OSi_CommonCallback(PXIFifoTag tag, u32 data, BOOL err);
extern void OSi_SendToPxi(u16 data);
extern void OS_ResetSystem(u32 parameter);
static inline u32 OS_GetResetParameter(void) {
    return *(u32 *) (0x02000000 + 0x007ffc20);
}
extern void OS_Terminate(void);
extern void OS_IrqDummy(void);
extern void OSi_IrqCallback(s32 index);
extern void OSi_IrqDma0(void);
extern void OSi_IrqDma1(void);
extern void OSi_IrqDma2(void);
extern void OSi_IrqDma3(void);
extern void OSi_IrqTimer0(void);
extern void OSi_IrqTimer1(void);
extern void OSi_IrqTimer2(void);
extern void OSi_IrqTimer3(void);
extern void OSi_IrqVBlank(void);
typedef enum {
    OS_TIMER_PRESCALER_1    = (0UL << 0),
    OS_TIMER_PRESCALER_64   = (1UL << 0),
    OS_TIMER_PRESCALER_256  = (2UL << 0),
    OS_TIMER_PRESCALER_1024 = (3UL << 0)
} OSTimerPrescaler;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
static inline void OS_SetTimerCount(OSTimer id, u16 count) {
    *((REGType16 *) ((u32) & (*(REGType16v *) (0x04000000 + 0x100)) + id * 4)) = count;
}
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    *((REGType16 *) ((u32) & (*(REGType16v *) (0x04000000 + 0x102)) + id * 4)) = control;
}
extern void OSi_SetTimerReserved(s32 timerNum);
typedef u64 OSTick;
extern void OS_InitTick(void);
extern BOOL OS_IsTickAvailable(void);
extern void OSi_CountUpTick(void);
extern OSTick OS_GetTick(void);
extern u16 OS_GetTickLo(void);
extern void OS_SetTick(OSTick tick);
extern vu64 OSi_TickCounter;
typedef void *OSMessage;
typedef struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
extern void OS_InitMessageQueue(OSMessageQueue *mq, OSMessage *msgArray, s32 msgCount);
extern BOOL OS_SendMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
extern BOOL OS_ReceiveMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
extern BOOL OS_JamMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
extern BOOL OS_ReadMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
extern void OSi_WaitVCount0(void);
extern void OS_Init(void);
extern void OS_InitArenaEx(void);
typedef void (*OSExceptionHandler)(u32, void *);
extern void OS_InitException(void);
typedef void (*OSVAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
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
extern void OS_InitVAlarm(void);
extern BOOL OS_IsVAlarmAvailable(void);
extern void OSi_InsertVAlarm(OSVAlarm *alarm);
extern void OSi_DetachVAlarm(OSVAlarm *alarm);
extern void OS_CreateVAlarm(OSVAlarm *alarm);
extern void OS_SetVAlarm(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
extern void OS_SetPeriodicVAlarm(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
extern void OS_SetVAlarmTag(OSVAlarm *alarm, u32 tag);
extern void OS_CancelVAlarm(OSVAlarm *alarm);
extern void OS_CancelVAlarms(u32 tag);
extern BOOL OS_IsRunOnEmulator(void);
extern u32 OS_GetConsoleType(void);
typedef void (*OSAlarmHandler)(void *);
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
extern void OS_CreateAlarm(OSAlarm *alarm);
extern void OS_CancelAlarm(OSAlarm *alarm);
extern BOOL OS_IsAlarmAvailable(void);
extern void OS_SetAlarm(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void OS_SetPeriodicAlarm(OSAlarm *alarm, OSTick start, OSTick period, OSAlarmHandler handler, void *arg);
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern struct OSiAlarmQueue *OSi_GetAlarmQueue(void);
extern void OSi_SetTimer(OSAlarm *alarm);
extern void OS_InitAlarm(void);
extern void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire);
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
extern void OS_GetMacAddress(u8 *macAddr);
extern void OS_GetOwnerInfo(OSOwnerInfo *info);
extern s64 OS_GetOwnerRtcOffset(void);
extern void OS_GetLowEntropyData(u32 buffer[32 / sizeof(u32)]);
extern void OS_IrqHandler(register OSIrqMask irq);
extern void OS_IrqHandler_ThreadSwitch(void);
extern void DC_FlushAll(void);
extern void DC_InvalidateRange(register void *startAddr, register u32 nBytes);
extern void DC_StoreRange(register void *startAddr, register u32 nBytes);
extern void DC_InvalidateAll(void);
extern void DC_StoreAll(void);
extern void IC_InvalidateAll(void);
extern void IC_InvalidateRange(register void *startAddr, register u32 nBytes);
extern void DC_WaitWriteBufferEmpty(void);
extern void DC_FlushRange(const void *data, u32 size);
typedef enum {
    OSi_PR_BASE_MASK_4KB   = 0xfffff000,
    OSi_PR_BASE_MASK_8KB   = 0xffffe000,
    OSi_PR_BASE_MASK_16KB  = 0xffffc000,
    OSi_PR_BASE_MASK_32KB  = 0xffff8000,
    OSi_PR_BASE_MASK_64KB  = 0xffff0000,
    OSi_PR_BASE_MASK_128KB = 0xfffe0000,
    OSi_PR_BASE_MASK_256KB = 0xfffc0000,
    OSi_PR_BASE_MASK_512KB = 0xfff80000,
    OSi_PR_BASE_MASK_1MB   = 0xfff00000,
    OSi_PR_BASE_MASK_2MB   = 0xffe00000,
    OSi_PR_BASE_MASK_4MB   = 0xffc00000,
    OSi_PR_BASE_MASK_8MB   = 0xff800000,
    OSi_PR_BASE_MASK_16MB  = 0xff000000,
    OSi_PR_BASE_MASK_32MB  = 0xfe000000,
    OSi_PR_BASE_MASK_64MB  = 0xfc000000,
    OSi_PR_BASE_MASK_128MB = 0xf8000000,
    OSi_PR_BASE_MASK_256MB = 0xf0000000,
    OSi_PR_BASE_MASK_512MB = 0xe0000000,
    OSi_PR_BASE_MASK_1GB   = 0xc0000000,
    OSi_PR_BASE_MASK_2GB   = 0x80000000,
    OSi_PR_BASE_MASK_4GB   = 0x00000000
} OSiProtectionRegionBaseMask;
static inline u32 OSi_CalcPRParam(u32 address, u32 size, OSiProtectionRegionBaseMask mask) {
    return ((address & mask) | size);
}
extern void OS_SetDPermissionsForProtectionRegion(register u32 setMask, register u32 flags);
extern void OS_SetProtectionRegion0(u32 param);
extern void OS_SetProtectionRegion1(u32 param);
extern void OS_SetProtectionRegion2(u32 param);
extern void OS_SetProtectionRegion3(u32 param);
extern void OS_SetProtectionRegion4(u32 param);
extern void OS_SetProtectionRegion5(u32 param);
extern void OS_SetProtectionRegion6(u32 param);
extern void OS_SetProtectionRegion7(u32 param);
extern void OS_DisableProtectionUnit(void);
extern void OS_EnableProtectionUnit(void);
extern u32 OS_GetDTCMAddress(void);
extern u32 OsCountZeroBits(u32 bitmap);
extern void OSi_InitVramExclusive(void);
extern BOOL OSi_TryLockVram(u16 bank, u16 lockId);
extern void OSi_UnlockVram(u16 bank, u16 lockId);
struct FSFile;
struct FSArchive;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,

    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,

    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,

    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef struct {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchive {
    union {
        char ptr[4];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
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
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
static inline BOOL FS_IsArchiveLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000002) ? 1 : 0;
}
static inline u32 FS_GetArchiveOffset(const FSArchive *p_arc, u32 pos) {
    return p_arc->base + pos;
}
static inline BOOL FSi_IsArchiveCanceling(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000020) != 0;
}
static inline BOOL FS_IsArchiveSuspended(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000008) ? 1 : 0;
}
static inline BOOL FSi_IsArchiveSuspending(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000040) != 0;
}
static inline BOOL FSi_IsArchiveRunning(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000010) != 0;
}
static inline BOOL FSi_IsArchiveUnloading(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000080) != 0;
}
static inline BOOL FSi_IsArchiveAsync(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000100) != 0;
}
static inline BOOL FSi_IsArchiveSync(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000200) != 0;
}
static inline BOOL FS_IsArchiveTableLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000004) ? 1 : 0;
}
extern u32 FSi_GetPackedName(const char *name, int name_len);
extern FSResult FSi_ReadMemCallback(struct FSArchive *p_arc, void *dest, u32 pos, u32 size);
extern FSResult FSi_WriteMemCallback(struct FSArchive *p_arc, const void *src, u32 pos, u32 size);
extern FSResult FSi_ReadMemoryCore(struct FSArchive *p_arc, void *dest, u32 pos, u32 size);
extern struct FSFile *FSi_NextCommand(struct FSArchive *p_arc);
extern void FSi_ExecuteAsyncCommand(struct FSFile *p_file);
extern BOOL FSi_ExecuteSyncCommand(struct FSFile *file);
extern BOOL FSi_SendCommand(struct FSFile *file, FSCommandType command);
extern void FS_InitArchive(struct FSArchive *p_arc);
extern struct FSArchive *const FS_FindArchive(const char *path, int offset);
extern BOOL FS_RegisterArchiveName(struct FSArchive *p_arc, const char *name, int name_len);
extern void FS_ReleaseArchiveName(struct FSArchive *p_arc);
extern BOOL FS_LoadArchive(struct FSArchive *p_arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                           FS_ARCHIVE_READ_FUNC read_func, FS_ARCHIVE_WRITE_FUNC write_func);
extern BOOL FS_UnloadArchive(struct FSArchive *p_arc);
extern u32 FS_LoadArchiveTables(struct FSArchive *p_arc, void *p_mem, u32 max_size);
extern void *FS_UnloadArchiveTables(struct FSArchive *p_arc);
extern BOOL FS_SuspendArchive(struct FSArchive *p_arc);
extern BOOL FS_ResumeArchive(struct FSArchive *p_arc);
extern void FS_SetArchiveProc(struct FSArchive *p_arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
extern void FS_NotifyArchiveAsyncEnd(struct FSArchive *p_arc, FSResult ret);
typedef enum FSSeekFileMode {
    FS_SEEK_SET = 0,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
struct FSFile;
typedef struct FSDirPos {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct FSFileID {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[128];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;

    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;

        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
extern void FS_Init(u32 default_dma_no);
extern BOOL FS_IsAvailable(void);
extern void FS_InitFile(FSFile *p_file);
extern int FSi_ReadFileCore(FSFile *p_file, void *dst, s32 len, BOOL async);
extern BOOL FS_ConvertPathToFileID(FSFileID *p_file_id, const char *path);
extern BOOL FS_OpenFileDirect(FSFile *p_file, FSArchive *p_arc, u32 image_top, u32 image_bottom, u32 file_index);
extern BOOL FS_OpenFileFast(FSFile *p_file, FSFileID file_id);
extern BOOL FS_OpenFile(FSFile *p_file, const char *path);
extern BOOL FS_CloseFile(FSFile *p_file);
extern BOOL FS_WaitAsync(FSFile *p_file);
extern int FS_ReadFileAsync(FSFile *p_file, void *dst, s32 len);
extern int FS_ReadFile(FSFile *p_file, void *dst, s32 len);
extern BOOL FS_SeekFile(FSFile *p_file, s32 offset, FSSeekFileMode origin);
extern BOOL FS_ChangeDir(const char *path);
extern u32 FS_SetDefaultDMA(u32 dma_no);
static inline u32 const FS_GetFileImageTop(volatile const FSFile *p_file) {
    return p_file->prop.file.top;
}
static inline u32 const FS_GetLength(volatile const FSFile *p_file) {
    return p_file->prop.file.bottom - p_file->prop.file.top;
}
static inline BOOL FS_IsCanceling(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsFileSyncMode(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsBusy(volatile const FSFile *p_file) {
    return p_file->stat & 0x00000001 ? 1 : 0;
}
static inline BOOL FS_IsSucceeded(volatile const FSFile *p_file) {
    return (p_file->error == FS_RESULT_SUCCESS) ? 1 : 0;
}
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
extern u32 FS_TryLoadTable(void *p_mem, u32 maxsize);
typedef enum {
    CARD_BACKUP_TYPE_EEPROM_4KBITS   = (((1) << 0) | ((9) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_64KBITS  = (((1) << 0) | ((13) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = (((1) << 0) | ((16) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_2MBITS    = (((2) << 0) | ((18) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_4MBITS    = (((2) << 0) | ((19) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_8MBITS    = (((2) << 0) | ((20) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FRAM_256KBITS   = (((3) << 0) | ((15) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_NOT_USE         = 0
} CARDBackupType;
typedef enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
} CARDResult;
typedef enum {
    CARD_TARGET_NONE,
    CARD_TARGET_ROM,
    CARD_TARGET_BACKUP
} CARDTargetMode;
typedef enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_MAX
} CARDRequest;
typedef enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;
enum {
    CARD_STAT_INIT     = (1 << 0),
    CARD_STAT_INIT_CMD = (1 << 1),
    CARD_STAT_BUSY     = (1 << 2),
    CARD_STAT_TASK     = (1 << 3),
    CARD_STAT_RECV     = (1 << 4),
    CARD_STAT_REQ      = (1 << 5),
    CARD_STAT_CANCEL   = (1 << 6)
};
typedef s32 CARDiOwner;
typedef struct CARDiCommandArg {
    CARDResult result;
    CARDBackupType type;
    u32 id;
    u32 src;
    u32 dest;
    u32 len;

    struct {
        u32 total_size;
        u32 sect_size;
        u32 page_size;
        u32 addr_width;
        u32 program_page;
        u32 write_page;
        u32 write_page_total;
        u32 erase_chip;
        u32 erase_chip_total;
        u32 erase_sector;
        u32 erase_sector_total;
        u32 erase_page;
        u8 initial_status;
        u8 padding1[3];
        u32 caps;
        u8 padding2[16];
    } spec;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    s32 command;

    volatile CARDiOwner lock_owner;
    volatile s32 lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;

    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    CARDRequest req_type;
    s32 req_retry;
    CARDRequestMode req_mode;
    MIDmaCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *);

    OSThread thread[1];
    OSThread *cur_th;

    u32 priority;
    OSThreadQueue busy_q[1];

    volatile u32 flag;

    u8 dummy[8];

    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
} CARDiCommon;
static inline void CARDi_EndTask(CARDiCommon *p, BOOL is_own_task) {
    const MIDmaCallback func = p->callback;
    void *const arg          = p->callback_arg;

    {
        OSIntrMode bak_psr = OS_DisableInterrupts();

        p->flag &= ~(CARD_STAT_BUSY | CARD_STAT_TASK | CARD_STAT_CANCEL);
        OS_WakeupThread(p->busy_q);
        if ((p->flag & CARD_STAT_RECV) != 0) {
            OS_WakeupThreadDirect(p->thread);
        }
        (void) OS_RestoreInterrupts(bak_psr);
    }

    if (is_own_task && func) {
        (*func)(arg);
    }
}
static inline void CARDi_WaitTask(CARDiCommon *p, MIDmaCallback callback, void *callback_arg) {
    OSIntrMode bak_psr = OS_DisableInterrupts();
    while ((p->flag & CARD_STAT_BUSY) != 0) {
        OS_SleepThread(p->busy_q);
    }
    p->flag |= CARD_STAT_BUSY;
    p->callback     = callback;
    p->callback_arg = callback_arg;
    (void) OS_RestoreInterrupts(bak_psr);
}
extern void CARDi_SetTask(void (*task)(CARDiCommon *));
extern void CARDi_InitCommon(void);
extern BOOL CARD_IsEnabled(void);
extern void CARD_CheckEnabled(void);
extern void CARD_Enable(BOOL enable);
extern BOOL CARDi_WaitAsync(void);
extern BOOL CARDi_TryWaitAsync(void);
extern CARDResult CARD_GetResultCode(void);
extern void CARD_LockRom(u16 lock_id);
extern void CARD_UnlockRom(u16 lock_id);
extern void CARD_UnlockBackup(u16 lock_id);
static inline void CARDi_SendPxi(u32 data) {
    while (PXI_SendWordByFifo(PXI_FIFO_TAG_FS, data, 1) < 0)
        ;
}
extern void CARD_SetCacheFlushThreshold(u32 icache, u32 dcache);
extern BOOL CARD_IdentifyBackup(CARDBackupType type);
extern void CARD_LockBackup(u16 lock_id);
extern void CARD_UnlockBackup(u16 lock_id);
extern CARDiCommon cardi_common;
typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;
typedef struct CARDRomStat {
    void (*read_func)(struct CARDRomStat *);
    u32 ctrl;
    u8 *cache_page;
    u32 dummy[5];
    u8 cache_buf[512];
} CARDRomStat;
static inline const CARDRomRegion *CARD_GetRomRegionOVT(MIProcessor target) {
    return (target == MI_PROCESSOR_ARM9) ? (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x50)
                                         : (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x58);
}
extern BOOL CARDi_TryReadCardDma(CARDRomStat *p);
extern void CARDi_ReadCard(CARDRomStat *p);
extern u32 CARDi_ReadRomIDCore(void);
extern void CARDi_CheckPulledOutCore(u32 id);
extern void CARDi_ReadRom(u32 dma, const void *src, void *dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async);
extern void CARD_Init(void);
extern void CARD_WaitRomAsync(void);
extern void (*CARDi_GetRomAccessor(void))(CARDRomStat *);
static inline void CARD_ReadRomAsync(u32 dma, const void *src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARDi_ReadRom(dma, src, dst, len, callback, arg, 1);
}
static inline const CARDRomRegion *CARD_GetRomRegionFNT() {
    return (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x40);
}
static inline const CARDRomRegion *CARD_GetRomRegionFAT() {
    return (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x48);
}
static inline void CARDi_ReadEnd(void) {
    CARDiCommon *const p = &cardi_common;
    CARDi_CheckPulledOutCore(CARDi_ReadRomIDCore());
    p->cmd->result = CARD_RESULT_SUCCESS;
    CARDi_EndTask(p, 1);
}
static inline BOOL CARDi_IsInTcm(u32 buf, u32 len) {
    const u32 i = (u32) 0x01FF8000;
    const u32 d = OS_GetDTCMAddress();
    return ((i < buf + len) && (i + 0x00008000 > buf)) || ((d < buf + len) && (d + 0x00004000 > buf));
}
extern u32 cardi_rom_header_addr;
static inline u32 CARDi_GetRomFlag(u32 flag) {
    const u32 rom_ctrl = *(vu32 *) (cardi_rom_header_addr + 0x60);
    return (u32) ((rom_ctrl & ~0x07000000) | flag | 0x00000000 | 0x80000000 | 0x20000000);
}
typedef u32 FSOverlayID;
typedef void (*FSOverlayInitFunc)(void);
typedef struct FSOverlayInfoHeader {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    FSOverlayInitFunc *sinit_init;
    FSOverlayInitFunc *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} FSOverlayInfoHeader;
typedef struct FSOverlayInfo {
    FSOverlayInfoHeader header;
    MIProcessor target;
    CARDRomRegion file_pos;
} FSOverlayInfo;
static inline u8 *const FS_GetOverlayAddress(FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_address;
}
static inline u32 const FS_GetOverlayImageSize(FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_size;
}
static inline u32 const FS_GetOverlayTotalSize(FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_size + p_ovi->header.bss_size;
}
extern u32 FSi_GetOverlayBinarySize(FSOverlayInfo *p_ovi);
extern void FS_ClearOverlayImage(FSOverlayInfo *p_ovi);
extern FSFileID FS_GetOverlayFileID(FSOverlayInfo *p_ovi);
extern BOOL FSi_LoadOverlayInfoCore(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id, FSArchive *arc, u32 offset_arm9,
                                    u32 len_arm9, u32 offset_arm7, u32 len_arm7);
extern BOOL FS_LoadOverlayInfo(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id);
extern BOOL FS_LoadOverlayImageAsync(FSOverlayInfo *p_ovi, FSFile *p_file);
extern BOOL FS_LoadOverlayImage(FSOverlayInfo *p_ovi);
extern BOOL FSi_CompareDigest(const u8 *spec_digest, void *src, u32 len);
extern void FS_StartOverlay(FSOverlayInfo *p_ovi);
extern void FS_EndOverlay(FSOverlayInfo *p_ovi);
extern BOOL FS_UnloadOverlayImage(FSOverlayInfo *p_ovi);
extern BOOL FS_LoadOverlay(MIProcessor target, FSOverlayID id);
extern BOOL FS_UnloadOverlay(MIProcessor target, FSOverlayID id);
extern void PXI_Init(void);
extern BOOL CARD_IsPulledOut(void);
extern BOOL CARD_TryWaitBackupAsync(void);
extern void CARD_CancelBackupAsync(void);
extern int CARD_SpiWaitGetStatus(void);
extern BOOL CARDi_RequestStreamCommand(u32 src, u32 dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async,
                                       CARDRequest req_type, int req_retry, CARDRequestMode req_mode);
static inline BOOL CARDi_ReadBackup(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_READ_BACKUP, 1,
                                      CARD_REQUEST_MODE_RECV);
}
static inline void CARD_ReadBackupAsync(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARDi_ReadBackup(src, dst, len, callback, arg, 1);
}
extern BOOL CARD_WaitBackupAsync(void);
static inline BOOL CARD_ReadBackup(u32 src, void *dst, u32 len) {
    return CARDi_ReadBackup(src, dst, len, ((void *) 0), ((void *) 0), 0);
}
static inline BOOL CARDi_WriteBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_WRITE_BACKUP, 10,
                                      CARD_REQUEST_MODE_SEND);
}
static inline void CARD_WriteBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARDi_WriteBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_WriteBackup(u32 dst, const void *src, u32 len) {
    return CARDi_WriteBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
static inline BOOL CARDi_WriteAndVerifyBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg,
                                              BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_WRITE_BACKUP, 10,
                                      CARD_REQUEST_MODE_SEND_VERIFY);
}
static inline void CARD_WriteAndVerifyBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARDi_WriteAndVerifyBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_WriteAndVerifyBackup(u32 dst, const void *src, u32 len) {
    return CARDi_WriteAndVerifyBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
extern void CARD_Init(void);
typedef u16 GXRgb;
typedef enum {
    GX_DISPMODE_GRAPHICS = 0x01,
    GX_DISPMODE_VRAM_A   = 0x02,
    GX_DISPMODE_VRAM_B   = 0x06,
    GX_DISPMODE_VRAM_C   = 0x0a,
    GX_DISPMODE_VRAM_D   = 0x0e,
    GX_DISPMODE_MMEM     = 0x03
} GXDispMode;
typedef enum {
    GX_BGMODE_0 = 0,
    GX_BGMODE_1 = 1,
    GX_BGMODE_2 = 2,
    GX_BGMODE_3 = 3,
    GX_BGMODE_4 = 4,
    GX_BGMODE_5 = 5,
    GX_BGMODE_6 = 6
} GXBGMode;
typedef enum {
    GX_BG0_AS_2D = 0,
    GX_BG0_AS_3D = 1
} GXBG0As;
typedef enum {
    GX_BGSCROFFSET_0x00000 = 0x00,
    GX_BGSCROFFSET_0x10000 = 0x01,
    GX_BGSCROFFSET_0x20000 = 0x02,
    GX_BGSCROFFSET_0x30000 = 0x03,
    GX_BGSCROFFSET_0x40000 = 0x04,
    GX_BGSCROFFSET_0x50000 = 0x05,
    GX_BGSCROFFSET_0x60000 = 0x06,
    GX_BGSCROFFSET_0x70000 = 0x07
} GXBGScrOffset;
typedef enum {
    GX_BGCHAROFFSET_0x00000 = 0x00,
    GX_BGCHAROFFSET_0x10000 = 0x01,
    GX_BGCHAROFFSET_0x20000 = 0x02,
    GX_BGCHAROFFSET_0x30000 = 0x03,
    GX_BGCHAROFFSET_0x40000 = 0x04,
    GX_BGCHAROFFSET_0x50000 = 0x05,
    GX_BGCHAROFFSET_0x60000 = 0x06,
    GX_BGCHAROFFSET_0x70000 = 0x07
} GXBGCharOffset;
typedef enum {
    GX_OBJVRAMMODE_CHAR_2D      = (0 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_32K  = (1 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_64K  = (1 << 4) | (1 << 20),
    GX_OBJVRAMMODE_CHAR_1D_128K = (1 << 4) | (2 << 20),
    GX_OBJVRAMMODE_CHAR_1D_256K = (1 << 4) | (3 << 20)
} GXOBJVRamModeChar;
typedef enum {
    GX_POWER_OFF = 0,

    GX_POWER_2D_MAIN = 1 << 1,
    GX_POWER_2D_SUB  = 1 << 9,

    GX_POWER_RE = 1 << 2,
    GX_POWER_GE = 1 << 3,

    GX_POWER_2D = GX_POWER_2D_MAIN | GX_POWER_2D_SUB,
    GX_POWER_3D = GX_POWER_RE | GX_POWER_GE,

    GX_POWER_ALL = GX_POWER_2D | GX_POWER_3D
} GXPower;
typedef enum {
    GX_DISP_SELECT_SUB_MAIN = 0,
    GX_DISP_SELECT_MAIN_SUB = 1
} GXDispSelect;
typedef enum {
    GX_PLANEMASK_NONE = 0,

    GX_PLANEMASK_BG0 = (1 << 0),
    GX_PLANEMASK_BG1 = (1 << 1),
    GX_PLANEMASK_BG2 = (1 << 2),
    GX_PLANEMASK_BG3 = (1 << 3),
    GX_PLANEMASK_OBJ = (1 << 4),

    GX_PLANEMASK_ALL = GX_PLANEMASK_BG0 | GX_PLANEMASK_BG1 | GX_PLANEMASK_BG2 | GX_PLANEMASK_BG3 | GX_PLANEMASK_OBJ,
} GXPlaneMask;
typedef enum {
    GX_WNDMASK_NONE = 0x00,
    GX_WNDMASK_W0   = 0x01,
    GX_WNDMASK_W1   = 0x02,
    GX_WNDMASK_OW   = 0x04
} GXWndMask;
extern void GX_SetGraphicsMode(GXDispMode dispMode, GXBGMode bgMode, GXBG0As bg0_2d3d);
extern void GXS_SetGraphicsMode(GXBGMode bgMode);
extern int GXx_GetMasterBrightness_(vu16 *reg);
static inline s32 GX_GetVCount() {
    return (*(REGType16v *) (0x04000000 + 0x6));
}
static inline s32 GX_GetVCountEqVal(void) {
    u16 val = (*(REGType16v *) (0x04000000 + 0x4));
    return ((val >> 8) & 0x00ff) | ((val << 1) & 0x0100);
}
static inline void GX_VCountEqIntr(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x4)) |= 0x20;
    } else {
        (*(REGType16v *) (0x04000000 + 0x4)) &= ~0x20;
    }
}
static inline void GX_SetVCountEqVal(s32 val) {
    (*(REGType16v *) (0x04000000 + 0x4)) =
        (u16) ((*(REGType16v *) (0x04000000 + 0x4)) & (0x1 | 0x2 | 0x4 | 0x8 | 0x10 | 0x20) | ((val & 0xFF) << 8) |
               ((val & 0x100) >> 1));
}
static inline void GX_SetBGScrOffset(GXBGScrOffset offset) {
    (*(REGType32v *) (0x04000000 + 0x0)) = (u32) (((*(REGType32v *) (0x04000000 + 0x0)) & ~0x38000000) | (offset << 27));
}
static inline void GX_SetBGCharOffset(GXBGCharOffset offset) {
    (*(REGType32v *) (0x04000000 + 0x0)) = (u32) (((*(REGType32v *) (0x04000000 + 0x0)) & ~0x7000000) | (offset << 24));
}
extern s32 GX_VBlankIntr(BOOL enable);
extern s32 GX_HBlankIntr(BOOL enable);
extern void GX_Init(void);
extern void GX_DispOff(void);
extern void GX_DispOn(void);
static inline void GX_SetPower(GXPower gxbit_power) {
    (*(REGType16v *) (0x04000000 + 0x304)) = ((*(REGType16v *) (0x04000000 + 0x304)) & ~GX_POWER_ALL) | gxbit_power;
}
static inline void GXS_DispOff(void) {
    (*(REGType32v *) (0x04000000 + 0x1000)) &= ~0x10000;
}
static inline void GXS_DispOn(void) {
    (*(REGType32v *) (0x04000000 + 0x1000)) |= 0x10000;
}
static inline void GX_SetDispSelect(GXDispSelect sel) {
    (*(REGType16v *) (0x04000000 + 0x304)) = ((*(REGType16v *) (0x04000000 + 0x304)) & ~0x8000) | (sel << 15);
}
static inline void GX_SetVisiblePlane(int plane) {
    (*(REGType32v *) (0x04000000 + 0x0)) = (u32) (((*(REGType32v *) (0x04000000 + 0x0)) & ~0x1F00) | (plane << 8));
}
static inline void GXS_SetVisiblePlane(int plane) {
    (*(REGType32v *) (0x04000000 + 0x1000)) = (u32) (((*(REGType32v *) (0x04000000 + 0x1000)) & ~0x1F00) | (plane << 8));
}
static inline void GX_SetVisibleWnd(int window) {
    (*(REGType32v *) (0x04000000 + 0x0)) =
        (u32) (((*(REGType32v *) (0x04000000 + 0x0)) & ~(0x2000 | 0x4000 | 0x8000)) | (window << 13));
}
static inline void GXS_SetVisibleWnd(int window) {
    (*(REGType32v *) (0x04000000 + 0x1000)) =
        (u32) (((*(REGType32v *) (0x04000000 + 0x1000)) & ~(0x2000 | 0x4000 | 0x8000)) | (window << 13));
}
static inline void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    (*(REGType32v *) (0x04000000 + 0x0)) = (u32) ((*(REGType32v *) (0x04000000 + 0x0)) & ~(0x300000 | 0x10) | mode);
}
static inline void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    (*(REGType32v *) (0x04000000 + 0x1000)) = (u32) ((*(REGType32v *) (0x04000000 + 0x1000)) & ~(0x300000 | 0x10) | mode);
}
static inline GXOBJVRamModeChar GX_GetOBJVRamModeChar(void) {
    return (GXOBJVRamModeChar) ((*(REGType32v *) (0x04000000 + 0x0)) & (0x300000 | 0x10));
}
static inline GXOBJVRamModeChar GXS_GetOBJVRamModeChar(void) {
    return (GXOBJVRamModeChar) ((*(REGType32v *) (0x04000000 + 0x1000)) & (0x300000 | 0x10));
}
static inline int GX_GetMasterBrightness(void) {
    return GXx_GetMasterBrightness_(&(*(REGType16v *) (0x04000000 + 0x6C)));
}
static inline int GXS_GetMasterBrightness(void) {
    return GXx_GetMasterBrightness_(&(*(REGType16v *) (0x04000000 + 0x106C)));
}
extern void *G2_GetBG0ScrPtr();
extern void *G2S_GetBG0ScrPtr();
extern void *G2_GetBG1ScrPtr();
extern void *G2S_GetBG1ScrPtr();
extern void *G2_GetBG2ScrPtr();
extern void *G2S_GetBG2ScrPtr();
extern void *G2_GetBG3ScrPtr();
extern void *G2S_GetBG3ScrPtr();
extern void *G2_GetBG0CharPtr();
extern void *G2S_GetBG0CharPtr();
extern void *G2_GetBG1CharPtr();
extern void *G2S_GetBG1CharPtr();
extern void *G2_GetBG2CharPtr();
extern void *G2S_GetBG2CharPtr();
extern void *G2_GetBG3CharPtr();
extern void *G2S_GetBG3CharPtr();
typedef union {
    u16 raw;
    struct {
        u16 priority : 2;
        u16 charBase : 4;
        u16 mosaic : 1;
        u16 colorMode : 1;
        u16 screenBase : 5;
        u16 bgExtPltt : 1;
        u16 screenSize : 2;
    };
} GXBg01Control;
typedef union {
    u16 raw;
    struct {
        u16 priority : 2;
        u16 charBase : 4;
        u16 mosaic : 1;
        u16 colorMode : 1;
        u16 screenBase : 5;
        u16 _reserve : 1;
        u16 screenSize : 2;
    };
} GXBg23ControlText;
typedef union {
    u16 raw;
    struct {
        u16 priority : 2;
        u16 charBase : 4;
        u16 mosaic : 1;
        u16 _reserve : 1;
        u16 screenBase : 5;
        u16 areaOver : 1;
        u16 screenSize : 2;
    };
} GXBg23ControlAffine;
typedef union {
    u16 raw;
    struct {
        u16 priority : 2;
        u16 _reserve1 : 1;
        u16 charBase : 3;
        u16 mosaic : 1;
        u16 _reserve2 : 1;
        u16 screenBase : 5;
        u16 areaOver : 1;
        u16 screenSize : 2;
    };
} GXBg23Control256x16Pltt;
typedef union {
    u16 raw;
    struct {
        u16 priority : 2;
        u16 _reserve1 : 4;
        u16 mosaic : 1;
        u16 _reserve2 : 1;
        u16 screenBase : 5;
        u16 areaOver : 1;
        u16 screenSize : 2;
    };
} GXBg23Control256Bmp, GXBg23ControlDCBmp;
typedef union {
    u16 raw;
    struct {
        u16 priority : 2;
        u16 _reserve1 : 4;
        u16 mosaic : 1;
        u16 _reserve2 : 6;
        u16 areaOver : 1;
        u16 screenSize : 2;
    };
} GXBg2ControlLargeBmp;
typedef enum {
    GX_BG_SCRSIZE_TEXT_256x256 = 0,
    GX_BG_SCRSIZE_TEXT_512x256 = 1,
    GX_BG_SCRSIZE_TEXT_256x512 = 2,
    GX_BG_SCRSIZE_TEXT_512x512 = 3
} GXBGScrSizeText;
typedef enum {
    GX_BG_SCRSIZE_AFFINE_128x128   = 0,
    GX_BG_SCRSIZE_AFFINE_256x256   = 1,
    GX_BG_SCRSIZE_AFFINE_512x512   = 2,
    GX_BG_SCRSIZE_AFFINE_1024x1024 = 3
} GXBGScrSizeAffine;
typedef enum {
    GX_BG_SCRSIZE_256x16PLTT_128x128   = 0,
    GX_BG_SCRSIZE_256x16PLTT_256x256   = 1,
    GX_BG_SCRSIZE_256x16PLTT_512x512   = 2,
    GX_BG_SCRSIZE_256x16PLTT_1024x1024 = 3
} GXBGScrSize256x16Pltt;
typedef enum {
    GX_BG_SCRSIZE_256BMP_128x128 = 0,
    GX_BG_SCRSIZE_256BMP_256x256 = 1,
    GX_BG_SCRSIZE_256BMP_512x256 = 2,
    GX_BG_SCRSIZE_256BMP_512x512 = 3
} GXBGScrSize256Bmp;
typedef enum {
    GX_BG_SCRSIZE_DCBMP_128x128 = 0,
    GX_BG_SCRSIZE_DCBMP_256x256 = 1,
    GX_BG_SCRSIZE_DCBMP_512x256 = 2,
    GX_BG_SCRSIZE_DCBMP_512x512 = 3
} GXBGScrSizeDcBmp;
typedef enum {
    GX_BG_SCRSIZE_LARGEBMP_512x1024 = 0,
    GX_BG_SCRSIZE_LARGEBMP_1024x512 = 1
} GXBGScrSizeLargeBmp;
typedef enum {
    GX_BG_COLORMODE_16  = 0,
    GX_BG_COLORMODE_256 = 1
} GXBGColorMode;
typedef enum {
    GX_BG_AREAOVER_XLU    = 0,
    GX_BG_AREAOVER_REPEAT = 1
} GXBGAreaOver;
typedef enum {
    GX_BG_CHARBASE_0x00000 = 0,
    GX_BG_CHARBASE_0x04000 = 1,
    GX_BG_CHARBASE_0x08000 = 2,
    GX_BG_CHARBASE_0x0c000 = 3,
    GX_BG_CHARBASE_0x10000 = 4,
    GX_BG_CHARBASE_0x14000 = 5,
    GX_BG_CHARBASE_0x18000 = 6,
    GX_BG_CHARBASE_0x1c000 = 7,
    GX_BG_CHARBASE_0x20000 = 8,
    GX_BG_CHARBASE_0x24000 = 9,
    GX_BG_CHARBASE_0x28000 = 10,
    GX_BG_CHARBASE_0x2c000 = 11,
    GX_BG_CHARBASE_0x30000 = 12,
    GX_BG_CHARBASE_0x34000 = 13,
    GX_BG_CHARBASE_0x38000 = 14,
    GX_BG_CHARBASE_0x3c000 = 15
} GXBGCharBase;
typedef enum {
    GX_BG_SCRBASE_0x0000 = 0,
    GX_BG_SCRBASE_0x0800 = 1,
    GX_BG_SCRBASE_0x1000 = 2,
    GX_BG_SCRBASE_0x1800 = 3,
    GX_BG_SCRBASE_0x2000 = 4,
    GX_BG_SCRBASE_0x2800 = 5,
    GX_BG_SCRBASE_0x3000 = 6,
    GX_BG_SCRBASE_0x3800 = 7,
    GX_BG_SCRBASE_0x4000 = 8,
    GX_BG_SCRBASE_0x4800 = 9,
    GX_BG_SCRBASE_0x5000 = 10,
    GX_BG_SCRBASE_0x5800 = 11,
    GX_BG_SCRBASE_0x6000 = 12,
    GX_BG_SCRBASE_0x6800 = 13,
    GX_BG_SCRBASE_0x7000 = 14,
    GX_BG_SCRBASE_0x7800 = 15,
    GX_BG_SCRBASE_0x8000 = 16,
    GX_BG_SCRBASE_0x8800 = 17,
    GX_BG_SCRBASE_0x9000 = 18,
    GX_BG_SCRBASE_0x9800 = 19,
    GX_BG_SCRBASE_0xa000 = 20,
    GX_BG_SCRBASE_0xa800 = 21,
    GX_BG_SCRBASE_0xb000 = 22,
    GX_BG_SCRBASE_0xb800 = 23,
    GX_BG_SCRBASE_0xc000 = 24,
    GX_BG_SCRBASE_0xc800 = 25,
    GX_BG_SCRBASE_0xd000 = 26,
    GX_BG_SCRBASE_0xd800 = 27,
    GX_BG_SCRBASE_0xe000 = 28,
    GX_BG_SCRBASE_0xe800 = 29,
    GX_BG_SCRBASE_0xf000 = 30,
    GX_BG_SCRBASE_0xf800 = 31
} GXBGScrBase;
typedef enum {
    GX_BG_BMPSCRBASE_0x00000 = 0,
    GX_BG_BMPSCRBASE_0x04000 = 1,
    GX_BG_BMPSCRBASE_0x08000 = 2,
    GX_BG_BMPSCRBASE_0x0c000 = 3,
    GX_BG_BMPSCRBASE_0x10000 = 4,
    GX_BG_BMPSCRBASE_0x14000 = 5,
    GX_BG_BMPSCRBASE_0x18000 = 6,
    GX_BG_BMPSCRBASE_0x1c000 = 7,
    GX_BG_BMPSCRBASE_0x20000 = 8,
    GX_BG_BMPSCRBASE_0x24000 = 9,
    GX_BG_BMPSCRBASE_0x28000 = 10,
    GX_BG_BMPSCRBASE_0x2c000 = 11,
    GX_BG_BMPSCRBASE_0x30000 = 12,
    GX_BG_BMPSCRBASE_0x34000 = 13,
    GX_BG_BMPSCRBASE_0x38000 = 14,
    GX_BG_BMPSCRBASE_0x3c000 = 15,
    GX_BG_BMPSCRBASE_0x40000 = 16,
    GX_BG_BMPSCRBASE_0x44000 = 17,
    GX_BG_BMPSCRBASE_0x48000 = 18,
    GX_BG_BMPSCRBASE_0x4c000 = 19,
    GX_BG_BMPSCRBASE_0x50000 = 20,
    GX_BG_BMPSCRBASE_0x54000 = 21,
    GX_BG_BMPSCRBASE_0x58000 = 22,
    GX_BG_BMPSCRBASE_0x5c000 = 23,
    GX_BG_BMPSCRBASE_0x60000 = 24,
    GX_BG_BMPSCRBASE_0x64000 = 25,
    GX_BG_BMPSCRBASE_0x68000 = 26,
    GX_BG_BMPSCRBASE_0x6c000 = 27,
    GX_BG_BMPSCRBASE_0x70000 = 28,
    GX_BG_BMPSCRBASE_0x74000 = 29,
    GX_BG_BMPSCRBASE_0x78000 = 30,
    GX_BG_BMPSCRBASE_0x7c000 = 31
} GXBGBmpScrBase;
typedef enum {
    GX_BG_EXTPLTT_01 = 0,
    GX_BG_EXTPLTT_23 = 1
} GXBGExtPltt;
typedef enum {
    GX_BG_EXTMODE_256x16PLTT = (0 << 2) | (0 << 7),
    GX_BG_EXTMODE_256BITMAP  = (0 << 2) | (1 << 7),
    GX_BG_EXTMODE_DCBITMAP   = (1 << 2) | (1 << 7)
} GXBGExtMode;
typedef enum {
    GX_CAPTURE_DEST_VRAM_A_0x00000 = 0,
    GX_CAPTURE_DEST_VRAM_B_0x00000 = 1,
    GX_CAPTURE_DEST_VRAM_C_0x00000 = 2,
    GX_CAPTURE_DEST_VRAM_D_0x00000 = 3,

    GX_CAPTURE_DEST_VRAM_A_0x08000 = 4,
    GX_CAPTURE_DEST_VRAM_B_0x08000 = 5,
    GX_CAPTURE_DEST_VRAM_C_0x08000 = 6,
    GX_CAPTURE_DEST_VRAM_D_0x08000 = 7,

    GX_CAPTURE_DEST_VRAM_A_0x10000 = 8,
    GX_CAPTURE_DEST_VRAM_B_0x10000 = 9,
    GX_CAPTURE_DEST_VRAM_C_0x10000 = 10,
    GX_CAPTURE_DEST_VRAM_D_0x10000 = 11,

    GX_CAPTURE_DEST_VRAM_A_0x18000 = 12,
    GX_CAPTURE_DEST_VRAM_B_0x18000 = 13,
    GX_CAPTURE_DEST_VRAM_C_0x18000 = 14,
    GX_CAPTURE_DEST_VRAM_D_0x18000 = 15
} GXCaptureDest;
typedef enum {
    GX_CAPTURE_SIZE_128x128 = 0,
    GX_CAPTURE_SIZE_256x64  = 1,
    GX_CAPTURE_SIZE_256x128 = 2,
    GX_CAPTURE_SIZE_256x192 = 3
} GXCaptureSize;
typedef enum {
    GX_CAPTURE_SRCA_2D3D = 0,
    GX_CAPTURE_SRCA_3D   = 1
} GXCaptureSrcA;
typedef enum {
    GX_CAPTURE_SRCB_VRAM_0x00000 = 0,
    GX_CAPTURE_SRCB_MRAM         = 1,
    GX_CAPTURE_SRCB_VRAM_0x08000 = 2,
    GX_CAPTURE_SRCB_VRAM_0x10000 = 4,
    GX_CAPTURE_SRCB_VRAM_0x18000 = 6
} GXCaptureSrcB;
typedef enum {
    GX_CAPTURE_MODE_A  = 0,
    GX_CAPTURE_MODE_B  = 1,
    GX_CAPTURE_MODE_AB = 2
} GXCaptureMode;
static inline void G2_SetBG0Control(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                    GXBGCharBase charBase, GXBGExtPltt bgExtPltt) {
    (*(REGType16v *) (0x04000000 + 0x8)) = (u16) (((*(REGType16v *) (0x04000000 + 0x8)) & (0x3 | 0x40)) | (screenSize << 14) |
                                                  (colorMode << 7) | (screenBase << 8) | (charBase << 2) | (bgExtPltt << 13));
}
static inline void G2S_SetBG0Control(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                     GXBGCharBase charBase, GXBGExtPltt bgExtPltt) {
    (*(REGType16v *) (0x04000000 + 0x1008)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x1008)) & (0x3 | 0x40)) | (screenSize << 14) | (colorMode << 7) |
               (screenBase << 8) | (charBase << 2) | (bgExtPltt << 13));
}
static inline void G2_SetBG1Control(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                    GXBGCharBase charBase, GXBGExtPltt bgExtPltt) {
    (*(REGType16v *) (0x04000000 + 0xA)) = (u16) (((*(REGType16v *) (0x04000000 + 0xA)) & (0x3 | 0x40)) | (screenSize << 14) |
                                                  (colorMode << 7) | (screenBase << 8) | (charBase << 2) | (bgExtPltt << 13));
}
static inline void G2S_SetBG1Control(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                     GXBGCharBase charBase, GXBGExtPltt bgExtPltt) {
    (*(REGType16v *) (0x04000000 + 0x100A)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100A)) & (0x3 | 0x40)) | (screenSize << 14) | (colorMode << 7) |
               (screenBase << 8) | (charBase << 2) | (bgExtPltt << 13));
}
static inline void G2_SetBG2ControlText(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                        GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0xC)) = (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & ((0x3 | 0x40))) |
                                                  (screenSize << 14) | (colorMode << 7) | (screenBase << 8) | (charBase << 2));
}
static inline void G2S_SetBG2ControlText(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                         GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0x100C)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & ((0x3 | 0x40))) | (screenSize << 14) | (colorMode << 7) |
               (screenBase << 8) | (charBase << 2));
}
static inline void G2_SetBG2ControlAffine(GXBGScrSizeAffine screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                          GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0xC)) = (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & ((0x3 | 0x40))) |
                                                  (screenSize << 14) | (screenBase << 8) | (charBase << 2) | (areaOver << 13));
}
static inline void G2S_SetBG2ControlAffine(GXBGScrSizeAffine screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                           GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0x100C)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & ((0x3 | 0x40))) | (screenSize << 14) | (screenBase << 8) |
               (charBase << 2) | (areaOver << 13));
}
static inline void G2_SetBG2Control256x16Pltt(GXBGScrSize256x16Pltt screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                              GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0xC)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & (0x3 | 0x40)) | (screenSize << 14) | (charBase << 2) |
               GX_BG_EXTMODE_256x16PLTT | (screenBase << 8) | (areaOver << 13));
}
static inline void G2S_SetBG2Control256x16Pltt(GXBGScrSize256x16Pltt screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                               GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0x100C)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & (0x3 | 0x40)) | (screenSize << 14) | (charBase << 2) |
               GX_BG_EXTMODE_256x16PLTT | (screenBase << 8) | (areaOver << 13));
}
static inline void G2_SetBG2Control256Bmp(GXBGScrSize256Bmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0xC)) = (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & (0x3 | 0x40)) | (screenSize << 14) |
                                                  GX_BG_EXTMODE_256BITMAP | (screenBase << 8) | (areaOver << 13));
}
static inline void G2S_SetBG2Control256Bmp(GXBGScrSize256Bmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0x100C)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & (0x3 | 0x40)) | (screenSize << 14) | GX_BG_EXTMODE_256BITMAP |
               (screenBase << 8) | (areaOver << 13));
}
static inline void G2_SetBG2ControlDCBmp(GXBGScrSizeDcBmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0xC)) = (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & (0x3 | 0x40)) | (screenSize << 14) |
                                                  GX_BG_EXTMODE_DCBITMAP | (screenBase << 8) | (areaOver << 13));
}
static inline void G2S_SetBG2ControlDCBmp(GXBGScrSizeDcBmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0x100C)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & (0x3 | 0x40)) | (screenSize << 14) | GX_BG_EXTMODE_DCBITMAP |
               (screenBase << 8) | (areaOver << 13));
}
static inline void G2_SetBG2ControlLargeBmp(GXBGScrSizeLargeBmp screenSize, GXBGAreaOver areaOver) {
    (*(REGType16v *) (0x04000000 + 0xC)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & (0x3 | 0x40)) | (screenSize << 14) | (areaOver << 13));
}
static inline void G2S_SetBG2ControlLargeBmp(GXBGScrSizeLargeBmp screenSize, GXBGAreaOver areaOver) {
    (*(REGType16v *) (0x04000000 + 0x100C)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & (0x3 | 0x40)) | (screenSize << 14) | (areaOver << 13));
}
static inline void G2_SetBG3ControlText(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                        GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0xE)) = (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & ((0x3 | 0x40))) |
                                                  (screenSize << 14) | (colorMode << 7) | (screenBase << 8) | (charBase << 2));
}
static inline void G2S_SetBG3ControlText(GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase,
                                         GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0x100E)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & ((0x3 | 0x40))) | (screenSize << 14) | (colorMode << 7) |
               (screenBase << 8) | (charBase << 2));
}
static inline void G2_SetBG3ControlAffine(GXBGScrSizeAffine screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                          GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0xE)) = (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & ((0x3 | 0x40))) |
                                                  (screenSize << 14) | (screenBase << 8) | (charBase << 2) | (areaOver << 13));
}
static inline void G2S_SetBG3ControlAffine(GXBGScrSizeAffine screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                           GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0x100E)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & ((0x3 | 0x40))) | (screenSize << 14) | (screenBase << 8) |
               (charBase << 2) | (areaOver << 13));
}
static inline void G2_SetBG3Control256x16Pltt(GXBGScrSize256x16Pltt screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                              GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0xE)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & (0x3 | 0x40)) | (screenSize << 14) | (charBase << 2) |
               GX_BG_EXTMODE_256x16PLTT | (screenBase << 8) | (areaOver << 13));
}
static inline void G2S_SetBG3Control256x16Pltt(GXBGScrSize256x16Pltt screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase,
                                               GXBGCharBase charBase) {
    (*(REGType16v *) (0x04000000 + 0x100E)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & (0x3 | 0x40)) | (screenSize << 14) | (charBase << 2) |
               GX_BG_EXTMODE_256x16PLTT | (screenBase << 8) | (areaOver << 13));
}
static inline void G2_SetBG3Control256Bmp(GXBGScrSize256Bmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0xE)) = (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & (0x3 | 0x40)) | (screenSize << 14) |
                                                  GX_BG_EXTMODE_256BITMAP | (screenBase << 8) | (areaOver << 13));
}
static inline void G2S_SetBG3Control256Bmp(GXBGScrSize256Bmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0x100E)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & (0x3 | 0x40)) | (screenSize << 14) | GX_BG_EXTMODE_256BITMAP |
               (screenBase << 8) | (areaOver << 13));
}
static inline void G2_SetBG3ControlDCBmp(GXBGScrSizeDcBmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0xE)) = (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & (0x3 | 0x40)) | (screenSize << 14) |
                                                  GX_BG_EXTMODE_DCBITMAP | (screenBase << 8) | (areaOver << 13));
}
static inline void G2S_SetBG3ControlDCBmp(GXBGScrSizeDcBmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase) {
    (*(REGType16v *) (0x04000000 + 0x100E)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & (0x3 | 0x40)) | (screenSize << 14) | GX_BG_EXTMODE_DCBITMAP |
               (screenBase << 8) | (areaOver << 13));
}
static inline void G2_SetBG3ControlLargeBmp(GXBGScrSizeLargeBmp screenSize, GXBGAreaOver areaOver) {
    (*(REGType16v *) (0x04000000 + 0xE)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & (0x3 | 0x40)) | (screenSize << 14) | (areaOver << 13));
}
static inline void G2S_SetBG3ControlLargeBmp(GXBGScrSizeLargeBmp screenSize, GXBGAreaOver areaOver) {
    (*(REGType16v *) (0x04000000 + 0x100E)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & (0x3 | 0x40)) | (screenSize << 14) | (areaOver << 13));
}
static inline void G2_BG0Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x8)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0x8)) &= ~0x40;
    }
}
static inline void G2S_BG0Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x1008)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0x1008)) &= ~0x40;
    }
}
static inline void G2_BG1Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0xA)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0xA)) &= ~0x40;
    }
}
static inline void G2S_BG1Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x100A)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0x100A)) &= ~0x40;
    }
}
static inline void G2_BG2Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0xC)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0xC)) &= ~0x40;
    }
}
static inline void G2S_BG2Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x100C)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0x100C)) &= ~0x40;
    }
}
static inline void G2_BG3Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0xE)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0xE)) &= ~0x40;
    }
}
static inline void G2S_BG3Mosaic(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x100E)) |= 0x40;
    } else {
        (*(REGType16v *) (0x04000000 + 0x100E)) &= ~0x40;
    }
}
static inline void G2_SetBG0Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0x8)) = (u16) (((*(REGType16v *) (0x04000000 + 0x8)) & ~0x3) | (priority << 0));
}
static inline void G2S_SetBG0Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0x1008)) = (u16) (((*(REGType16v *) (0x04000000 + 0x1008)) & ~0x3) | (priority << 0));
}
static inline void G2_SetBG1Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0xA)) = (u16) (((*(REGType16v *) (0x04000000 + 0xA)) & ~0x3) | (priority << 0));
}
static inline void G2S_SetBG1Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0x100A)) = (u16) (((*(REGType16v *) (0x04000000 + 0x100A)) & ~0x3) | (priority << 0));
}
static inline void G2_SetBG2Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0xC)) = (u16) (((*(REGType16v *) (0x04000000 + 0xC)) & ~0x3) | (priority << 0));
}
static inline void G2S_SetBG2Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0x100C)) = (u16) (((*(REGType16v *) (0x04000000 + 0x100C)) & ~0x3) | (priority << 0));
}
static inline void G2_SetBG3Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0xE)) = (u16) (((*(REGType16v *) (0x04000000 + 0xE)) & ~0x3) | (priority << 0));
}
static inline void G2S_SetBG3Priority(int priority) {
    (*(REGType16v *) (0x04000000 + 0x100E)) = (u16) (((*(REGType16v *) (0x04000000 + 0x100E)) & ~0x3) | (priority << 0));
}
static inline GXBg01Control G2_GetBG0Control(void) {
    return *(volatile GXBg01Control *) &(*(REGType16v *) (0x04000000 + 0x8));
}
static inline GXBg01Control G2S_GetBG0Control(void) {
    return *(volatile GXBg01Control *) &(*(REGType16v *) (0x04000000 + 0x1008));
}
static inline GXBg01Control G2_GetBG1Control(void) {
    return *(volatile GXBg01Control *) &(*(REGType16v *) (0x04000000 + 0xA));
}
static inline GXBg01Control G2S_GetBG1Control(void) {
    return *(volatile GXBg01Control *) &(*(REGType16v *) (0x04000000 + 0x100A));
}
static inline GXBg23ControlText G2_GetBG2ControlText(void) {
    return *(volatile GXBg23ControlText *) &(*(REGType16v *) (0x04000000 + 0xC));
}
static inline GXBg23ControlText G2S_GetBG2ControlText(void) {
    return *(volatile GXBg23ControlText *) &(*(REGType16v *) (0x04000000 + 0x100C));
}
static inline GXBg23ControlAffine G2_GetBG2ControlAffine(void) {
    return *(volatile GXBg23ControlAffine *) &(*(REGType16v *) (0x04000000 + 0xC));
}
static inline GXBg23ControlAffine G2S_GetBG2ControlAffine(void) {
    return *(volatile GXBg23ControlAffine *) &(*(REGType16v *) (0x04000000 + 0x100C));
}
static inline GXBg23Control256x16Pltt G2_GetBG2Control256x16Pltt(void) {
    return *(volatile GXBg23Control256x16Pltt *) &(*(REGType16v *) (0x04000000 + 0xC));
}
static inline GXBg23Control256x16Pltt G2S_GetBG2Control256x16Pltt(void) {
    return *(volatile GXBg23Control256x16Pltt *) &(*(REGType16v *) (0x04000000 + 0x100C));
}
static inline GXBg23Control256Bmp G2_GetBG2Control256Bmp(void) {
    return *(volatile GXBg23Control256Bmp *) &(*(REGType16v *) (0x04000000 + 0xC));
}
static inline GXBg23Control256Bmp G2S_GetBG2Control256Bmp(void) {
    return *(volatile GXBg23Control256Bmp *) &(*(REGType16v *) (0x04000000 + 0x100C));
}
static inline GXBg23ControlDCBmp G2_GetBG2ControlDCBmp(void) {
    return *(volatile GXBg23ControlDCBmp *) &(*(REGType16v *) (0x04000000 + 0xC));
}
static inline GXBg23ControlDCBmp G2S_GetBG2ControlDCBmp(void) {
    return *(volatile GXBg23ControlDCBmp *) &(*(REGType16v *) (0x04000000 + 0x100C));
}
static inline GXBg2ControlLargeBmp G2_GetBG2ControlLargeBmp(void) {
    return *(volatile GXBg2ControlLargeBmp *) &(*(REGType16v *) (0x04000000 + 0xC));
}
static inline GXBg2ControlLargeBmp G2S_GetBG2ControlLargeBmp(void) {
    return *(volatile GXBg2ControlLargeBmp *) &(*(REGType16v *) (0x04000000 + 0x100C));
}
static inline GXBg23ControlText G2_GetBG3ControlText(void) {
    return *(volatile GXBg23ControlText *) &(*(REGType16v *) (0x04000000 + 0xE));
}
static inline GXBg23ControlText G2S_GetBG3ControlText(void) {
    return *(volatile GXBg23ControlText *) &(*(REGType16v *) (0x04000000 + 0x100E));
}
static inline GXBg23ControlAffine G2_GetBG3ControlAffine(void) {
    return *(volatile GXBg23ControlAffine *) &(*(REGType16v *) (0x04000000 + 0xE));
}
static inline GXBg23ControlAffine G2S_GetBG3ControlAffine(void) {
    return *(volatile GXBg23ControlAffine *) &(*(REGType16v *) (0x04000000 + 0x100E));
}
static inline GXBg23Control256x16Pltt G2_GetBG3Control256x16Pltt(void) {
    return *(volatile GXBg23Control256x16Pltt *) &(*(REGType16v *) (0x04000000 + 0xE));
}
static inline GXBg23Control256x16Pltt G2S_GetBG3Control256x16Pltt(void) {
    return *(volatile GXBg23Control256x16Pltt *) &(*(REGType16v *) (0x04000000 + 0x100E));
}
static inline GXBg23Control256Bmp G2_GetBG3Control256Bmp(void) {
    return *(volatile GXBg23Control256Bmp *) &(*(REGType16v *) (0x04000000 + 0xE));
}
static inline GXBg23Control256Bmp G2S_GetBG3Control256Bmp(void) {
    return *(volatile GXBg23Control256Bmp *) &(*(REGType16v *) (0x04000000 + 0x100E));
}
static inline GXBg23ControlDCBmp G2_GetBG3ControlDCBmp(void) {
    return *(volatile GXBg23ControlDCBmp *) &(*(REGType16v *) (0x04000000 + 0xE));
}
static inline GXBg23ControlDCBmp G2S_GetBG3ControlDCBmp(void) {
    return *(volatile GXBg23ControlDCBmp *) &(*(REGType16v *) (0x04000000 + 0x100E));
}
static inline void *G2S_GetOBJCharPtr(void) {
    return (void *) 0x06600000;
}
extern void G2x_SetBGyAffine_(u32 addr, const MtxFx22 *mtx, fx32 a, fx32 b, fx32 c, fx32 d);
extern void G2x_SetBlendAlpha_(u32 addr, int plane1, int plane2, int ev1, int ev2);
extern void G2x_SetBlendBrightness_(volatile u16 *ptr, fx32 a, fx32 brightness);
extern void G2x_SetBlendBrightnessExt_(u16 *ptr, fx32 a, fx32 b, fx32 c, fx32 d, fx32 brightness);
extern void G2x_ChangeBlendBrightness_(u16 *ptr, fx32 brightness);
typedef struct {
    u8 planeMask : 5;
    u8 effect : 1;
    u8 _reserve : 2;
} GXWndPlane;
typedef enum GXBlendPlaneMask {
    GX_BLEND_PLANEMASK_NONE = 0x0000,
    GX_BLEND_PLANEMASK_BG0  = 0x0001,
    GX_BLEND_PLANEMASK_BG1  = 0x0002,
    GX_BLEND_PLANEMASK_BG2  = 0x0004,
    GX_BLEND_PLANEMASK_BG3  = 0x0008,
    GX_BLEND_PLANEMASK_OBJ  = 0x0010,
    GX_BLEND_PLANEMASK_BD   = 0x0020
} GXBlendPlaneMask;
typedef enum {
    GX_WND_PLANEMASK_NONE = 0x0000,
    GX_WND_PLANEMASK_BG0  = 0x0001,
    GX_WND_PLANEMASK_BG1  = 0x0002,
    GX_WND_PLANEMASK_BG2  = 0x0004,
    GX_WND_PLANEMASK_BG3  = 0x0008,
    GX_WND_PLANEMASK_OBJ  = 0x0010
} GXWndPlaneMask;
static inline void G2_SetWndOutsidePlane(int wnd, BOOL effect) {
    u32 tmp;

    tmp = (((*(REGType16v *) (0x04000000 + 0x4A)) & ~0x3F) | ((u32) wnd << 0));

    if (effect) {
        tmp |= (0x20 << 0);
    }

    (*(REGType16v *) (0x04000000 + 0x4A)) = (u16) tmp;
}
static inline void G2_SetBG0Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x10)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2_SetBG1Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x14)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2_SetBG2Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x18)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2_SetBG3Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x1C)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2S_SetBG0Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x1010)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2S_SetBG1Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x1014)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2S_SetBG2Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x1018)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2S_SetBG3Offset(int hOffset, int vOffset) {
    (*(REGType32v *) (0x04000000 + 0x101C)) = (u32) (((hOffset << 0) & 0x1FF) | ((vOffset << 16) & 0x1FF0000));
}
static inline void G2_SetBG2Affine(const MtxFx22 *mtx, int centerX, int centerY, int x1, int y1) {
    G2x_SetBGyAffine_((u32) & (*(REGType16v *) (0x04000000 + 0x20)), mtx, centerX, centerY, x1, y1);
}
static inline void G2_SetBG3Affine(const MtxFx22 *mtx, int centerX, int centerY, int x1, int y1) {
    G2x_SetBGyAffine_((u32) & (*(REGType16v *) (0x04000000 + 0x30)), mtx, centerX, centerY, x1, y1);
}
static inline void G2S_SetBG2Affine(const MtxFx22 *mtx, int centerX, int centerY, int x1, int y1) {
    G2x_SetBGyAffine_((u32) & (*(REGType16v *) (0x04000000 + 0x1020)), mtx, centerX, centerY, x1, y1);
}
static inline void G2S_SetBG3Affine(const MtxFx22 *mtx, int centerX, int centerY, int x1, int y1) {
    G2x_SetBGyAffine_((u32) & (*(REGType16v *) (0x04000000 + 0x1030)), mtx, centerX, centerY, x1, y1);
}
static inline void G2_BlendNone(void) {
    (*(REGType16v *) (0x04000000 + 0x50)) = 0;
}
static inline void G2S_BlendNone(void) {
    (*(REGType16v *) (0x04000000 + 0x1050)) = 0;
}
static inline void G2_SetBlendAlpha(int plane1, int plane2, int ev1, int ev2) {
    G2x_SetBlendAlpha_((u32) & (*(REGType16v *) (0x04000000 + 0x50)), plane1, plane2, ev1, ev2);
}
static inline void G2S_SetBlendAlpha(int plane1, int plane2, int ev1, int ev2) {
    G2x_SetBlendAlpha_((u32) & (*(REGType16v *) (0x04000000 + 0x1050)), plane1, plane2, ev1, ev2);
}
static inline void G2_SetBlendBrightness(int plane, int brightness) {
    G2x_SetBlendBrightness_(&(*(REGType16v *) (0x04000000 + 0x50)), plane, brightness);
}
static inline void G2S_SetBlendBrightness(int plane, int brightness) {
    G2x_SetBlendBrightness_(&(*(REGType16v *) (0x04000000 + 0x1050)), plane, brightness);
}
static inline void G2_SetWnd0InsidePlane(int wnd, BOOL effect) {
    u32 tmp;

    tmp = (((*(REGType16v *) (0x04000000 + 0x48)) & ~0x3F) | ((u32) wnd << 0));

    if (effect) {
        tmp |= (0x20 << 0);
    }

    (*(REGType16v *) (0x04000000 + 0x48)) = (u16) tmp;
}
static inline void G2_SetWnd1InsidePlane(int wnd, BOOL effect) {
    u32 tmp;

    tmp = (((*(REGType16v *) (0x04000000 + 0x48)) & ~0x3F00) | ((u32) wnd << 8));

    if (effect) {
        tmp |= (0x20 << 8);
    }

    (*(REGType16v *) (0x04000000 + 0x48)) = (u16) tmp;
}
static inline void G2S_SetWnd0InsidePlane(int wnd, BOOL effect) {
    u32 tmp;

    tmp = (((*(REGType16v *) (0x04000000 + 0x1048)) & ~0x3F) | ((u32) wnd << 0));

    if (effect) {
        tmp |= (0x20 << 0);
    }

    (*(REGType16v *) (0x04000000 + 0x1048)) = (u16) tmp;
}
static inline void G2S_SetWnd1InsidePlane(int wnd, BOOL effect) {
    u32 tmp;

    tmp = (((*(REGType16v *) (0x04000000 + 0x1048)) & ~0x3F00) | ((u32) wnd << 8));

    if (effect) {
        tmp |= (0x20 << 8);
    }

    (*(REGType16v *) (0x04000000 + 0x1048)) = (u16) tmp;
}
static inline void G2S_SetWndOutsidePlane(int wnd, BOOL effect) {
    u32 tmp;

    tmp = (((*(REGType16v *) (0x04000000 + 0x104A)) & ~0x3F) | ((u32) wnd << 0));

    if (effect) {
        tmp |= (0x20 << 0);
    }

    (*(REGType16v *) (0x04000000 + 0x104A)) = (u16) tmp;
}
static inline void G2_SetWnd0Position(int x1, int y1, int x2, int y2) {

    (*(REGType16v *) (0x04000000 + 0x40)) = (u16) (((x1 << 8) & 0xFF00) | ((x2 << 0) & 0xFF));

    (*(REGType16v *) (0x04000000 + 0x44)) = (u16) (((y1 << 8) & 0xFF00) | ((y2 << 0) & 0xFF));
}
static inline void G2_SetWnd1Position(int x1, int y1, int x2, int y2) {

    (*(REGType16v *) (0x04000000 + 0x42)) = (u16) (((x1 << 8) & 0xFF00) | ((x2 << 0) & 0xFF));

    (*(REGType16v *) (0x04000000 + 0x46)) = (u16) (((y1 << 8) & 0xFF00) | ((y2 << 0) & 0xFF));
}
static inline void G2S_SetWnd0Position(int x1, int y1, int x2, int y2) {

    (*(REGType16v *) (0x04000000 + 0x1040)) = (u16) (((x1 << 8) & 0xFF00) | ((x2 << 0) & 0xFF));

    (*(REGType16v *) (0x04000000 + 0x1044)) = (u16) (((y1 << 8) & 0xFF00) | ((y2 << 0) & 0xFF));
}
static inline void G2S_SetWnd1Position(int x1, int y1, int x2, int y2) {

    (*(REGType16v *) (0x04000000 + 0x1042)) = (u16) (((x1 << 8) & 0xFF00) | ((x2 << 0) & 0xFF));

    (*(REGType16v *) (0x04000000 + 0x1046)) = (u16) (((y1 << 8) & 0xFF00) | ((y2 << 0) & 0xFF));
}
typedef enum {
    GX_TEXSIZE_S8    = 0,
    GX_TEXSIZE_S16   = 1,
    GX_TEXSIZE_S32   = 2,
    GX_TEXSIZE_S64   = 3,
    GX_TEXSIZE_S128  = 4,
    GX_TEXSIZE_S256  = 5,
    GX_TEXSIZE_S512  = 6,
    GX_TEXSIZE_S1024 = 7
} GXTexSizeS;
typedef enum {
    GX_TEXSIZE_T8    = 0,
    GX_TEXSIZE_T16   = 1,
    GX_TEXSIZE_T32   = 2,
    GX_TEXSIZE_T64   = 3,
    GX_TEXSIZE_T128  = 4,
    GX_TEXSIZE_T256  = 5,
    GX_TEXSIZE_T512  = 6,
    GX_TEXSIZE_T1024 = 7
} GXTexSizeT;
typedef enum {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef enum {
    GX_LIGHTID_0 = 0,
    GX_LIGHTID_1 = 1,
    GX_LIGHTID_2 = 2,
    GX_LIGHTID_3 = 3
} GXLightId;
typedef enum {
    GX_MTXMODE_PROJECTION      = 0,
    GX_MTXMODE_POSITION        = 1,
    GX_MTXMODE_POSITION_VECTOR = 2,
    GX_MTXMODE_TEXTURE         = 3
} GXMtxMode;
typedef enum {
    GX_TEXGEN_NONE     = 0,
    GX_TEXGEN_TEXCOORD = 1,
    GX_TEXGEN_NORMAL   = 2,
    GX_TEXGEN_VERTEX   = 3
} GXTexGen;
typedef enum {
    GX_TEXREPEAT_NONE = 0,
    GX_TEXREPEAT_S    = 1,
    GX_TEXREPEAT_T    = 2,
    GX_TEXREPEAT_ST   = 3
} GXTexRepeat;
typedef enum {
    GX_TEXFLIP_NONE = 0,
    GX_TEXFLIP_S    = 1,
    GX_TEXFLIP_T    = 2,
    GX_TEXFLIP_ST   = 3
} GXTexFlip;
typedef enum {
    GX_BEGIN_TRIANGLES      = 0,
    GX_BEGIN_QUADS          = 1,
    GX_BEGIN_TRIANGLE_STRIP = 2,
    GX_BEGIN_QUAD_STRIP     = 3
} GXBegin;
typedef enum {
    GX_LIGHTMASK_NONE = 0,
    GX_LIGHTMASK_0    = 1,
    GX_LIGHTMASK_1    = 2,
    GX_LIGHTMASK_01   = 3,
    GX_LIGHTMASK_2    = 4,
    GX_LIGHTMASK_02   = 5,
    GX_LIGHTMASK_12   = 6,
    GX_LIGHTMASK_012  = 7,
    GX_LIGHTMASK_3    = 8,
    GX_LIGHTMASK_03   = 9,
    GX_LIGHTMASK_13   = 10,
    GX_LIGHTMASK_013  = 11,
    GX_LIGHTMASK_23   = 12,
    GX_LIGHTMASK_023  = 13,
    GX_LIGHTMASK_123  = 14,
    GX_LIGHTMASK_0123 = 15
} GXLightMask;
typedef enum {
    GX_POLYGONMODE_MODULATE = 0,
    GX_POLYGONMODE_DECAL    = 1,
    GX_POLYGONMODE_TOON     = 2,
    GX_POLYGONMODE_SHADOW   = 3
} GXPolygonMode;
typedef enum {
    GX_CULL_ALL   = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK  = 2,
    GX_CULL_NONE  = 3
} GXCull;
typedef union {
    u32 val[3];
    struct {
        fx16 x;
        fx16 y;
        fx16 z;
        fx16 width;
        fx16 height;
        fx16 depth;
    };
} GXBoxTestParam;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void G3_BeginMakeDL(GXDLInfo *info, void *ptr, u32 length);
extern u32 G3_EndMakeDL(GXDLInfo *info);
typedef enum {
    GX_SORTMODE_AUTO   = 0,
    GX_SORTMODE_MANUAL = 1
} GXSortMode;
typedef enum {
    GX_BUFFERMODE_Z = 0,
    GX_BUFFERMODE_W = 1
} GXBufferMode;
static inline void G3_SwapBuffers(GXSortMode am, GXBufferMode zw) {
    (*(REGType32v *) (0x04000000 + 0x540)) = ((u32) (((am) << 0) | ((zw) << 1)));
}
static inline void G3_ViewPort(int x1, int y1, int x2, int y2) {
    (*(REGType32v *) (0x04000000 + 0x580)) = ((u32) ((x1) | ((y1) << 8) | ((x2) << 16) | ((y2) << 24)));
}
static inline void G3_MtxMode(GXMtxMode mode) {
    (*(REGType32v *) (0x04000000 + 0x440)) = ((u32) ((mode) << 0));
}
static inline void G3_PushMtx() {
    (*(REGType32v *) (0x04000000 + 0x444)) = 0;
}
static inline void G3_PopMtx(int num) {
    (*(REGType32v *) (0x04000000 + 0x448)) = ((u32) (num));
}
static inline void G3_TexImageParam(GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS s, GXTexSizeT t, GXTexRepeat repeat,
                                    GXTexFlip flip, GXTexPlttColor0 pltt0, u32 addr) {
    (*(REGType32v *) (0x04000000 + 0x4A8)) = ((u32) (((addr) >> 3) | ((texFmt) << 26) | ((texGen) << 30) | ((s) << 20) |
                                                     ((t) << 23) | ((repeat) << 16) | ((flip) << 18) | ((pltt0) << 29)));
}
static inline void G3_Identity() {
    (*(REGType32v *) (0x04000000 + 0x454)) = 0;
}
static inline void G3_TexPlttBase(u32 addr, GXTexFmt texfmt) {
    u32 param                              = ((u32) ((addr) >> (4 - ((texfmt) == GX_TEXFMT_PLTT4))));
    (*(REGType32v *) (0x04000000 + 0x4AC)) = param;
}
static inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    (*(REGType32v *) (0x04000000 + 0x470)) = (u32) x;
    (*(REGType32v *) (0x04000000 + 0x470)) = (u32) y;
    (*(REGType32v *) (0x04000000 + 0x470)) = (u32) z;
}
static inline void G3_MaterialColorDiffAmb(GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor) {
    (*(REGType32v *) (0x04000000 + 0x4C0)) = ((u32) ((diffuse) | ((ambient) << 16) | (((IsSetVtxColor) != 0) << 15)));
}
static inline void G3_MaterialColorSpecEmi(GXRgb specular, GXRgb emission, BOOL IsShininess) {
    (*(REGType32v *) (0x04000000 + 0x4C4)) = ((u32) ((specular) | ((emission) << 16) | (((IsShininess) != 0) << 15)));
}
static inline void G3_PolygonAttr(int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha, int misc) {
    (*(REGType32v *) (0x04000000 + 0x4A4)) =
        ((u32) (((light) << 0) | ((polyMode) << 4) | ((cullMode) << 6) | (misc) | ((polygonID) << 24) | ((alpha) << 16)));
}
extern void G3B_Nop(GXDLInfo *info);
extern void G3B_MtxMode(GXDLInfo *info, GXMtxMode mode);
extern void G3B_PushMtx(GXDLInfo *info);
extern void G3B_PopMtx(GXDLInfo *info, int num);
extern void G3B_StoreMtx(GXDLInfo *info, int num);
extern void G3B_RestoreMtx(GXDLInfo *info, int num);
extern void G3B_Identity(GXDLInfo *info);
extern void G3B_LoadMtx44(GXDLInfo *info, const MtxFx44 *m);
extern void G3B_LoadMtx43(GXDLInfo *info, const MtxFx43 *m);
extern void G3B_MultMtx44(GXDLInfo *info, const MtxFx44 *m);
extern void G3B_MultMtx43(GXDLInfo *info, const MtxFx43 *m);
extern void G3B_MultMtx33(GXDLInfo *info, const MtxFx33 *m);
extern void G3B_Scale(GXDLInfo *info, fx32 x, fx32 y, fx32 z);
extern void G3B_Translate(GXDLInfo *info, fx32 x, fx32 y, fx32 z);
extern void G3B_MultTransMtx33(GXDLInfo *info, const MtxFx33 *mtx, const VecFx32 *trans);
extern void G3B_Color(GXDLInfo *info, GXRgb rgb);
extern void G3B_Normal(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void G3B_TexCoord(GXDLInfo *info, fx32 s, fx32 t);
extern void G3B_Vtx(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void G3B_Vtx10(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void G3B_VtxXY(GXDLInfo *info, fx16 x, fx16 y);
extern void G3B_VtxXZ(GXDLInfo *info, fx16 x, fx16 z);
extern void G3B_VtxYZ(GXDLInfo *info, fx16 y, fx16 z);
extern void G3B_VtxDiff(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void G3B_PolygonAttr(GXDLInfo *info, int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha,
                            int misc);
extern void G3B_TexImageParam(GXDLInfo *info, GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS s, GXTexSizeT t, GXTexRepeat repeat,
                              GXTexFlip flip, GXTexPlttColor0 pltt0, u32 addr);
extern void G3B_TexPlttBase(GXDLInfo *info, u32 addr, GXTexFmt texfmt);
extern void G3B_MaterialColorDiffAmb(GXDLInfo *info, GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor);
extern void G3B_MaterialColorSpecEmi(GXDLInfo *info, GXRgb specular, GXRgb emission, BOOL IsShininess);
extern void G3B_LightVector(GXDLInfo *info, GXLightId lightID, fx16 x, fx16 y, fx16 z);
extern void G3B_LightColor(GXDLInfo *info, GXLightId lightID, GXRgb rgb);
extern void G3B_Shininess(GXDLInfo *info, const u32 *table);
extern void G3B_Begin(GXDLInfo *info, GXBegin primitive);
extern void G3B_End(GXDLInfo *info);
extern void G3B_SwapBuffers(GXDLInfo *info, GXSortMode am, GXBufferMode zw);
extern void G3B_ViewPort(GXDLInfo *info, int x1, int y1, int x2, int y2);
extern void G3B_BoxTest(GXDLInfo *info, const GXBoxTestParam *box);
extern void G3B_PositionTest(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void G3B_VectorTest(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
typedef enum {
    GX_SHADING_TOON      = 0,
    GX_SHADING_HIGHLIGHT = 1
} GXShading;
typedef enum {
    GX_FOGBLEND_COLOR_ALPHA = 0,
    GX_FOGBLEND_ALPHA       = 1
} GXFogBlend;
typedef enum {
    GX_FOGSLOPE_0x8000 = 0,
    GX_FOGSLOPE_0x4000 = 1,
    GX_FOGSLOPE_0x2000 = 2,
    GX_FOGSLOPE_0x1000 = 3,
    GX_FOGSLOPE_0x0800 = 4,
    GX_FOGSLOPE_0x0400 = 5,
    GX_FOGSLOPE_0x0200 = 6,
    GX_FOGSLOPE_0x0100 = 7,
    GX_FOGSLOPE_0x0080 = 8,
    GX_FOGSLOPE_0x0040 = 9,
    GX_FOGSLOPE_0x0020 = 10
} GXFogSlope;
extern void G3X_Init(void);
extern void G3X_InitMtxStack(void);
extern void G3X_ResetMtxStack(void);
extern void G3X_InitTable(void);
extern void G3X_Reset(void);
extern void G3X_SetFog(BOOL enable, GXFogBlend fogMode, GXFogSlope fogSlope, int fogOffset);
extern void G3X_SetClearColor(GXRgb rgb, int alpha, int depth, int polygonID, BOOL fog);
static inline void G3X_SetShading(GXShading shading) {
    (*(REGType16v *) (0x04000000 + 0x60)) =
        (u16) (((*(REGType16v *) (0x04000000 + 0x60)) & ~(0x2 | 0x1000 | 0x2000)) | (shading << 1));
}
static inline void G3X_AlphaTest(BOOL enable, int ref) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x60))  = (u16) ((*(REGType16v *) (0x04000000 + 0x60)) & ~(0x1000 | 0x2000) | 0x4);
        (*(REGType16v *) (0x04000000 + 0x340)) = (u16) ref;
    } else {
        (*(REGType16v *) (0x04000000 + 0x60)) &= (u16) ~(0x4 | 0x1000 | 0x2000);
    }
}
static inline void G3X_AlphaBlend(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x60)) = (u16) ((*(REGType16v *) (0x04000000 + 0x60)) & ~(0x1000 | 0x2000) | 0x8);
    } else {
        (*(REGType16v *) (0x04000000 + 0x60)) &= (u16) ~(0x8 | 0x1000 | 0x2000);
    }
}
static inline void G3X_AntiAlias(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x60)) = (u16) ((*(REGType16v *) (0x04000000 + 0x60)) & ~(0x1000 | 0x2000) | 0x10);
    } else {
        (*(REGType16v *) (0x04000000 + 0x60)) &= (u16) ~(0x10 | 0x1000 | 0x2000);
    }
}
static inline void G3X_EdgeMarking(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x60)) = (u16) ((*(REGType16v *) (0x04000000 + 0x60)) & ~(0x1000 | 0x2000) | 0x20);
    } else {
        (*(REGType16v *) (0x04000000 + 0x60)) &= (u16) ~(0x20 | 0x1000 | 0x2000);
    }
}
extern void G3X_SetEdgeColorTable(const GXRgb *rgb_8);
static inline s32 G3X_IsGeometryBusy(void) {
    return (s32) ((*(REGType32v *) (0x04000000 + 0x600)) & 0x8000000);
}
extern void G3_RotX(fx32 s, fx32 c);
extern void G3_RotY(fx32 s, fx32 c);
extern void G3_RotZ(fx32 s, fx32 c);
extern void GX_LoadBG0Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG1Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG2Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG3Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG0Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG1Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG2Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG3Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG0Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG1Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG2Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG3Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG0Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG1Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG2Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG3Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_BeginLoadBGExtPltt(void);
extern void GX_EndLoadBGExtPltt(void);
extern void GXS_BeginLoadBGExtPltt(void);
extern void GXS_EndLoadBGExtPltt(void);
extern void GX_BeginLoadOBJExtPltt(void);
extern void GX_EndLoadOBJExtPltt(void);
extern void GXS_BeginLoadOBJExtPltt(void);
extern void GXS_EndLoadOBJExtPltt(void);
extern void GX_LoadBGPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadOBJPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBGExtPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadOBJExtPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBGPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadOBJPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBGExtPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadOBJExtPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadOBJ(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadOBJ(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadOAM(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadOAM(const void *pSrc, u32 offset, u32 szByte);
typedef struct {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
        struct {
            u32 y : 8;
            u32 rsMode : 2;
            u32 objMode : 2;
            u32 mosaic : 1;
            u32 colorMode : 1;
            u32 shape : 2;

            u32 x : 9;
            u32 rsParam : 5;
            u32 size : 2;
        };
        struct {
            u32 _0 : 28;
            u32 flipH : 1;
            u32 flipV : 1;
            u32 _1 : 2;
        };
    };
    union {
        struct {
            u16 attr2;
            u16 _3;
        };
        u32 attr23;
        struct {
            u32 charNo : 10;
            u32 priority : 2;
            u32 cParam : 4;
            u32 _2 : 16;
        };
    };
} GXOamAttr;
typedef enum {
    GX_OAM_MODE_NORMAL    = 0,
    GX_OAM_MODE_XLU       = 1,
    GX_OAM_MODE_OBJWND    = 2,
    GX_OAM_MODE_BITMAPOBJ = 3
} GXOamMode;
typedef enum {
    GX_VRAM_A   = 0x0001,
    GX_VRAM_B   = 0x0002,
    GX_VRAM_C   = 0x0004,
    GX_VRAM_D   = 0x0008,
    GX_VRAM_E   = 0x0010,
    GX_VRAM_F   = 0x0020,
    GX_VRAM_G   = 0x0040,
    GX_VRAM_H   = 0x0080,
    GX_VRAM_I   = 0x0100,
    GX_VRAM_ALL = 0x01ff
} GXVRam;
typedef enum {
    GX_VRAM_LCDC_NONE = 0x0000,
    GX_VRAM_LCDC_A    = GX_VRAM_A,
    GX_VRAM_LCDC_B    = GX_VRAM_B,
    GX_VRAM_LCDC_C    = GX_VRAM_C,
    GX_VRAM_LCDC_D    = GX_VRAM_D,
    GX_VRAM_LCDC_E    = GX_VRAM_E,
    GX_VRAM_LCDC_F    = GX_VRAM_F,
    GX_VRAM_LCDC_G    = GX_VRAM_G,
    GX_VRAM_LCDC_H    = GX_VRAM_H,
    GX_VRAM_LCDC_I    = GX_VRAM_I,
    GX_VRAM_LCDC_ALL  = GX_VRAM_ALL
} GXVRamLCDC;
typedef enum {
    GX_VRAM_BG_NONE     = 0x0000,
    GX_VRAM_BG_16_F     = GX_VRAM_F,
    GX_VRAM_BG_16_G     = GX_VRAM_G,
    GX_VRAM_BG_32_FG    = GX_VRAM_F | GX_VRAM_G,
    GX_VRAM_BG_64_E     = GX_VRAM_E,
    GX_VRAM_BG_80_EF    = GX_VRAM_E | GX_VRAM_F,
    GX_VRAM_BG_96_EFG   = GX_VRAM_E | GX_VRAM_F | GX_VRAM_G,
    GX_VRAM_BG_128_A    = GX_VRAM_A,
    GX_VRAM_BG_128_B    = GX_VRAM_B,
    GX_VRAM_BG_128_C    = GX_VRAM_C,
    GX_VRAM_BG_128_D    = GX_VRAM_D,
    GX_VRAM_BG_256_AB   = GX_VRAM_A | GX_VRAM_B,
    GX_VRAM_BG_256_BC   = GX_VRAM_B | GX_VRAM_C,
    GX_VRAM_BG_256_CD   = GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_BG_384_ABC  = GX_VRAM_A | GX_VRAM_B | GX_VRAM_C,
    GX_VRAM_BG_384_BCD  = GX_VRAM_B | GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_BG_512_ABCD = GX_VRAM_A | GX_VRAM_B | GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_BG_80_EG    = GX_VRAM_E | GX_VRAM_G,
    GX_VRAM_BG_256_AC   = GX_VRAM_A | GX_VRAM_C,
    GX_VRAM_BG_256_AD   = GX_VRAM_A | GX_VRAM_D,
    GX_VRAM_BG_256_BD   = GX_VRAM_B | GX_VRAM_D,
    GX_VRAM_BG_384_ABD  = GX_VRAM_A | GX_VRAM_B | GX_VRAM_D,
    GX_VRAM_BG_384_ACD  = GX_VRAM_A | GX_VRAM_C | GX_VRAM_D
} GXVRamBG;
typedef enum {
    GX_VRAM_OBJ_NONE   = 0x0000,
    GX_VRAM_OBJ_16_F   = GX_VRAM_F,
    GX_VRAM_OBJ_16_G   = GX_VRAM_G,
    GX_VRAM_OBJ_32_FG  = GX_VRAM_F | GX_VRAM_G,
    GX_VRAM_OBJ_64_E   = GX_VRAM_E,
    GX_VRAM_OBJ_80_EF  = GX_VRAM_E | GX_VRAM_F,
    GX_VRAM_OBJ_80_EG  = GX_VRAM_E | GX_VRAM_G,
    GX_VRAM_OBJ_96_EFG = GX_VRAM_E | GX_VRAM_F | GX_VRAM_G,
    GX_VRAM_OBJ_128_A  = GX_VRAM_A,
    GX_VRAM_OBJ_128_B  = GX_VRAM_B,
    GX_VRAM_OBJ_256_AB = GX_VRAM_A | GX_VRAM_B
} GXVRamOBJ;
typedef enum {
    GX_VRAM_TEX_NONE      = 0x0000,
    GX_VRAM_TEX_0_A       = GX_VRAM_A,
    GX_VRAM_TEX_0_B       = GX_VRAM_B,
    GX_VRAM_TEX_0_C       = GX_VRAM_C,
    GX_VRAM_TEX_0_D       = GX_VRAM_D,
    GX_VRAM_TEX_01_AB     = GX_VRAM_A | GX_VRAM_B,
    GX_VRAM_TEX_01_BC     = GX_VRAM_B | GX_VRAM_C,
    GX_VRAM_TEX_01_CD     = GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_TEX_012_ABC   = GX_VRAM_A | GX_VRAM_B | GX_VRAM_C,
    GX_VRAM_TEX_012_BCD   = GX_VRAM_B | GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_TEX_0123_ABCD = GX_VRAM_A | GX_VRAM_B | GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_TEX_01_AC     = GX_VRAM_A | GX_VRAM_C,
    GX_VRAM_TEX_01_AD     = GX_VRAM_A | GX_VRAM_D,
    GX_VRAM_TEX_01_BD     = GX_VRAM_B | GX_VRAM_D,
    GX_VRAM_TEX_012_ABD   = GX_VRAM_A | GX_VRAM_B | GX_VRAM_D,
    GX_VRAM_TEX_012_ACD   = GX_VRAM_A | GX_VRAM_C | GX_VRAM_D
} GXVRamTex;
typedef enum {
    GX_VRAM_CLEARIMAGE_NONE   = 0x0000,
    GX_VRAM_CLEARIMAGE_256_AB = GX_VRAM_A | GX_VRAM_B,
    GX_VRAM_CLEARIMAGE_256_CD = GX_VRAM_C | GX_VRAM_D,
    GX_VRAM_CLEARDEPTH_128_A  = GX_VRAM_A,
    GX_VRAM_CLEARDEPTH_128_B  = GX_VRAM_B,
    GX_VRAM_CLEARDEPTH_128_C  = GX_VRAM_C,
    GX_VRAM_CLEARDEPTH_128_D  = GX_VRAM_D
} GXVRamClearImage;
typedef enum {
    GX_VRAM_TEXPLTT_NONE       = 0x0000,
    GX_VRAM_TEXPLTT_0_F        = GX_VRAM_F,
    GX_VRAM_TEXPLTT_0_G        = GX_VRAM_G,
    GX_VRAM_TEXPLTT_01_FG      = GX_VRAM_F | GX_VRAM_G,
    GX_VRAM_TEXPLTT_0123_E     = GX_VRAM_E,
    GX_VRAM_TEXPLTT_01234_EF   = GX_VRAM_E | GX_VRAM_F,
    GX_VRAM_TEXPLTT_012345_EFG = GX_VRAM_E | GX_VRAM_F | GX_VRAM_G
} GXVRamTexPltt;
typedef enum {
    GX_VRAM_BGEXTPLTT_NONE    = 0x0000,
    GX_VRAM_BGEXTPLTT_01_F    = GX_VRAM_F,
    GX_VRAM_BGEXTPLTT_23_G    = GX_VRAM_G,
    GX_VRAM_BGEXTPLTT_0123_E  = GX_VRAM_E,
    GX_VRAM_BGEXTPLTT_0123_FG = GX_VRAM_F | GX_VRAM_G
} GXVRamBGExtPltt;
typedef enum {
    GX_VRAM_OBJEXTPLTT_NONE = 0,
    GX_VRAM_OBJEXTPLTT_0_F  = GX_VRAM_F,
    GX_VRAM_OBJEXTPLTT_0_G  = GX_VRAM_G
} GXVRamOBJExtPltt;
typedef enum {
    GX_VRAM_SUB_BG_NONE  = 0x0000,
    GX_VRAM_SUB_BG_128_C = GX_VRAM_C,
    GX_VRAM_SUB_BG_32_H  = GX_VRAM_H,
    GX_VRAM_SUB_BG_48_HI = GX_VRAM_H | GX_VRAM_I
} GXVRamSubBG;
typedef enum {
    GX_VRAM_SUB_OBJ_NONE  = 0x0000,
    GX_VRAM_SUB_OBJ_128_D = GX_VRAM_D,
    GX_VRAM_SUB_OBJ_16_I  = GX_VRAM_I
} GXVRamSubOBJ;
typedef enum {
    GX_VRAM_SUB_BGEXTPLTT_NONE   = 0x0000,
    GX_VRAM_SUB_BGEXTPLTT_0123_H = GX_VRAM_H
} GXVRamSubBGExtPltt;
typedef enum {
    GX_VRAM_SUB_OBJEXTPLTT_NONE = 0x0000,
    GX_VRAM_SUB_OBJEXTPLTT_0_I  = GX_VRAM_I
} GXVRamSubOBJExtPltt;
extern void GX_SetBankForLCDC(GXVRamLCDC lcdc);
extern GXVRamLCDC GX_DisableBankForLCDC(void);
extern void GX_SetBankForBG(GXVRamBG bank);
extern BOOL GX_TrySetBankForBG(GXVRamBG bank);
extern void GX_SetBankForOBJ(GXVRamOBJ bank);
extern BOOL GX_TrySetBankForOBJ(GXVRamOBJ bank);
extern void GX_SetBankForBGExtPltt(GXVRamBGExtPltt bank);
extern BOOL GX_TrySetBankForBGExtPltt(GXVRamBGExtPltt bank);
extern void GX_SetBankForOBJExtPltt(GXVRamOBJExtPltt bank);
extern BOOL GX_TrySetBankForOBJExtPltt(GXVRamOBJExtPltt bank);
extern void GX_SetBankForTex(GXVRamTex bank);
extern BOOL GX_TrySetBankForTex(GXVRamTex bank);
extern void GX_SetBankForTexPltt(GXVRamTexPltt bank);
extern BOOL GX_TrySetBankForTexPltt(GXVRamTexPltt bank);
extern void GX_SetBankForClearImage(GXVRamClearImage bank);
extern BOOL GX_TrySetBankForClearImage(GXVRamClearImage bank);
extern GXVRamBG GX_GetBankForBG(void);
extern GXVRamOBJ GX_GetBankForOBJ(void);
extern GXVRamBGExtPltt GX_GetBankForBGExtPltt(void);
extern GXVRamOBJExtPltt GX_GetBankForOBJExtPltt(void);
extern GXVRamTex GX_GetBankForTex(void);
extern GXVRamTexPltt GX_GetBankForTexPltt(void);
extern GXVRamClearImage GX_GetBankForClearImage(void);
extern GXVRamBG GX_ResetBankForBG(void);
extern GXVRamOBJ GX_ResetBankForOBJ(void);
extern GXVRamBGExtPltt GX_ResetBankForBGExtPltt(void);
extern GXVRamOBJExtPltt GX_ResetBankForOBJExtPltt(void);
extern GXVRamTex GX_ResetBankForTex(void);
extern GXVRamTexPltt GX_ResetBankForTexPltt(void);
extern GXVRamClearImage GX_ResetBankForClearImage(void);
extern GXVRamBG GX_DisableBankForBG(void);
extern GXVRamOBJ GX_DisableBankForOBJ(void);
extern GXVRamBGExtPltt GX_DisableBankForBGExtPltt(void);
extern GXVRamOBJExtPltt GX_DisableBankForOBJExtPltt(void);
extern GXVRamTex GX_DisableBankForTex(void);
extern GXVRamTexPltt GX_DisableBankForTexPltt(void);
extern GXVRamClearImage GX_DisableBankForClearImage(void);
extern void GX_SetBankForSubBG(GXVRamSubBG bank);
extern BOOL GX_TrySetBankForSubBG(GXVRamSubBG bank);
extern void GX_SetBankForSubOBJ(GXVRamSubOBJ bank);
extern BOOL GX_TrySetBankForSubOBJ(GXVRamSubOBJ bank);
extern void GX_SetBankForSubBGExtPltt(GXVRamSubBGExtPltt bank);
extern BOOL GX_TrySetBankForSubBGExtPltt(GXVRamSubBGExtPltt bank);
extern void GX_SetBankForSubOBJExtPltt(GXVRamSubOBJExtPltt bank);
extern BOOL GX_TrySetBankForSubOBJExtPltt(GXVRamSubOBJExtPltt bank);
extern GXVRamSubBG GX_GetBankForSubBG(void);
extern GXVRamSubOBJ GX_GetBankForSubOBJ(void);
extern GXVRamSubBGExtPltt GX_GetBankForSubBGExtPltt(void);
extern GXVRamSubOBJExtPltt GX_GetBankForSubOBJExtPltt(void);
extern GXVRamSubBG GX_ResetBankForSubBG(void);
extern GXVRamSubOBJ GX_ResetBankForSubOBJ(void);
extern GXVRamSubBGExtPltt GX_ResetBankForSubBGExtPltt(void);
extern GXVRamSubOBJExtPltt GX_ResetBankForSubOBJExtPltt(void);
extern GXVRamSubBG GX_DisableBankForSubBG(void);
extern GXVRamSubOBJ GX_DisableBankForSubOBJ(void);
extern GXVRamSubBGExtPltt GX_DisableBankForSubBGExtPltt(void);
extern GXVRamSubOBJExtPltt GX_DisableBankForSubOBJExtPltt(void);
static inline void *G2_GetOBJCharPtr() {
    return (void *) 0x06400000;
}
extern BOOL CTRDG_IsPulledOut(void);
extern void CTRDG_Init(void);
typedef struct {
    u16 length;
    u16 rssi;
    u16 bssid[3];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
} MBParentBssDesc;
typedef struct {
    u16 boot_type;
    MBParentBssDesc parent_bss_desc;
} MBParam;
static inline const MBParam *MB_GetMultiBootParam(void) {
    return (const MBParam *) (0x02000000 + 0x007ffc40);
}
static inline BOOL MB_IsMultiBootChild(void) {
    return MB_GetMultiBootParam()->boot_type == 2;
}
typedef struct NVRAMConfigDate {
    u8 month;
    u8 day;
} NVRAMConfigDate;
typedef struct NVRAMConfigNickname {
    u16 str[10];
    u8 length;
    u8 rsv;
} NVRAMConfigNickname;
typedef struct NVRAMConfigComment {
    u16 str[26];
    u8 length;
    u8 rsv;
} NVRAMConfigComment;
typedef struct NVRAMConfigOwnerInfo {
    u8 favouriteColour : 4;
    u8 rsv : 4;
    NVRAMConfigDate birthday;
    u8 pad;
    NVRAMConfigNickname nickname;
    NVRAMConfigComment comment;
} NVRAMConfigOwnerInfo;
typedef struct NVRAMConfigAlarm {
    u8 hour;
    u8 minute;
    u8 second;
    u8 pad;
    u16 enableWeek : 7;
    u16 alarmOn : 1;
    u16 rsv : 8;
} NVRAMConfigAlarm;
typedef struct NVRAMConfigTpCalibData {
    u16 raw_x1;
    u16 raw_y1;
    u8 dx1;
    u8 dy1;
    u16 raw_x2;
    u16 raw_y2;
    u8 dx2;
    u8 dy2;
} NVRAMConfigTpCalibData;
typedef struct NVRAMConfigOption {
    u16 language : 3;
    u16 agbLcd : 1;
    u16 detectPullOutCardFlag : 1;
    u16 detectPullOutCtrdgFlag : 1;
    u16 autoBootFlag : 1;
    u16 rsv : 4;
    u16 input_favouriteColour : 1;
    u16 input_tp : 1;
    u16 input_language : 1;
    u16 input_rtc : 1;
    u16 input_nickname : 1;
    u8 timeZone;
    u8 rtcClockAdjust;
    s64 rtcOffset;
} NVRAMConfigOption;
typedef struct NVRAMConfigData {
    u8 version;
    u8 pad;
    NVRAMConfigOwnerInfo owner;
    NVRAMConfigAlarm alarm;
    NVRAMConfigTpCalibData tp;
    NVRAMConfigOption option;
} NVRAMConfigData;
typedef struct NVRAMConfig {
    NVRAMConfigData ncd;
    u16 saveCount;
    u16 crc16;
} NVRAMConfig;
typedef u32 PMWakeUpTrigger;
typedef u32 PMLogic;
typedef enum MICResult {
    MIC_RESULT_SUCCESS = 0,
    MIC_RESULT_BUSY,
    MIC_RESULT_ILLEGAL_PARAMETER,
    MIC_RESULT_SEND_ERROR,
    MIC_RESULT_INVALID_COMMAND,
    MIC_RESULT_ILLEGAL_STATUS,
    MIC_RESULT_FATAL_ERROR,
    MIC_RESULT_MAX
} MICResult;
typedef enum MICSamplingType {
    MIC_SAMPLING_TYPE_8BIT = 0,
    MIC_SAMPLING_TYPE_12BIT,
    MIC_SAMPLING_TYPE_SIGNED_8BIT,
    MIC_SAMPLING_TYPE_SIGNED_12BIT,
    MIC_SAMPLING_TYPE_12BIT_FILTER_OFF,
    MIC_SAMPLING_TYPE_SIGNED_12BIT_FILTER_OFF,
    MIC_SAMPLING_TYPE_MAX
} MICSamplingType;
typedef enum MICSamplingRate {
    MIC_SAMPLING_RATE_8K    = (33513982 / 8000),
    MIC_SAMPLING_RATE_11K   = (33513982 / 11025),
    MIC_SAMPLING_RATE_16K   = (33513982 / 16000),
    MIC_SAMPLING_RATE_22K   = (33513982 / 22050),
    MIC_SAMPLING_RATE_32K   = (33513982 / 32000),
    MIC_SAMPLING_RATE_LIMIT = 1024
} MICSamplingRate;
typedef void (*MICCallback)(MICResult result, void *arg);
typedef struct MICAutoParam {
    MICSamplingType type;
    void *buffer;
    u32 size;
    u32 rate;
    BOOL loop_enable;
    MICCallback full_callback;
    void *full_arg;
} MICAutoParam;
extern void MIC_Init(void);
typedef enum {
    PM_BACKLIGHT_OFF = 0,
    PM_BACKLIGHT_ON  = 1
} PMBackLightSwitch;
typedef enum {
    PM_AMP_OFF = 0,
    PM_AMP_ON  = 1
} PMAmpSwitch;
typedef enum {
    PM_AMPGAIN_20      = 0,
    PM_AMPGAIN_40      = 1,
    PM_AMPGAIN_80      = 2,
    PM_AMPGAIN_160     = 3,
    PM_AMPGAIN_DEFAULT = PM_AMPGAIN_40
} PMAmpGain;
typedef enum {
    PM_LCD_TOP    = 0,
    PM_LCD_BOTTOM = 1,
    PM_LCD_ALL    = 2
} PMLCDTarget;
extern void PM_Init(void);
extern u32 PM_SetAmp(PMAmpSwitch sw);
extern u32 PM_SetAmpGain(PMAmpGain gain);
extern void PM_GetBackLight(PMBackLightSwitch *top, PMBackLightSwitch *bottom);
extern void PM_GoSleepMode(PMWakeUpTrigger trigger, PMLogic logic, u16 keyPattern);
extern u32 PM_ForceToPowerOff(void);
extern u32 PM_SetBackLight(PMLCDTarget target, PMBackLightSwitch status);
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef struct NvTpData {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;
extern void TP_Init(void);
extern void TP_SetCalibrateParam(const TPCalibrateParam *param);
extern BOOL TP_GetUserInfo(TPCalibrateParam *param);
extern void TP_RequestSamplingAsync(void);
extern u32 TP_WaitRawResult(TPData *result);
extern void TP_GetLatestRawPointInAuto(TPData *result);
extern void TP_GetCalibratedPoint(TPData *calib, const TPData *raw);
static inline u32 TP_RequestRawSampling(TPData *result) {
    TP_RequestSamplingAsync();
    return TP_WaitRawResult(result);
}
extern void SND_Shutdown(void);
typedef enum SNDEnvStatus {
    SND_ENV_ATTACK,
    SND_ENV_DECAY,
    SND_ENV_SUSTAIN,
    SND_ENV_RELEASE
} SNDEnvStatus;
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
typedef struct SNDChannelInfo {
    BOOL activeFlag : 1;
    BOOL lockFlag : 1;
    u16 volume;
    u8 pan;
    u8 pad_;
    SNDEnvStatus envStatus;
} SNDChannelInfo;
typedef struct SNDTrackInfo {
    u16 prgNo;
    u8 volume;
    u8 volume2;
    s8 pitchBend;
    u8 bendRange;
    u8 pan;
    s8 transpose;
    u8 pad_;
    u8 chCount;
    u8 channel[16];
} SNDTrackInfo;
static inline u16 PAD_Read(void) {
    return (u16) ((((*(const REGType16v *) (0x04000000 + 0x130)) | *(vu16 *) (0x02000000 + 0x007FFFA8)) ^ (0x00f0 | 0x2f0f)) &
                  (0x00f0 | 0x2f0f));
}
static inline BOOL PAD_DetectFold(void) {
    return (BOOL) ((*(vu16 *) (0x02000000 + 0x007FFFA8) & 0x8000) >> 15);
}
typedef enum RTCWeek {
    RTC_WEEK_SUNDAY = 0,
    RTC_WEEK_MONDAY,
    RTC_WEEK_TUESDAY,
    RTC_WEEK_WEDNESDAY,
    RTC_WEEK_THURSDAY,
    RTC_WEEK_FRIDAY,
    RTC_WEEK_SATURDAY,
    RTC_WEEK_MAX
} RTCWeek;
typedef enum RTCResult {
    RTC_RESULT_SUCCESS = 0,
    RTC_RESULT_BUSY,
    RTC_RESULT_ILLEGAL_PARAMETER,
    RTC_RESULT_SEND_ERROR,
    RTC_RESULT_INVALID_COMMAND,
    RTC_RESULT_ILLEGAL_STATUS,
    RTC_RESULT_FATAL_ERROR,
    RTC_RESULT_MAX
} RTCResult;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
typedef void (*RTCCallback)(RTCResult result, void *arg);
extern void RTC_Init(void);
extern RTCResult RTC_GetDateTimeAsync(RTCDate *date, RTCTime *time, RTCCallback callback, void *arg);
extern s64 RTC_ConvertDateTimeToSecond(const RTCDate *date, const RTCTime *time);
extern s32 RTC_ConvertDateToDay(const RTCDate *date);
extern void RTC_ConvertSecondToDateTime(RTCDate *date, RTCTime *time, s64 sec);
extern void NNS_G3dGeBufferOP_N(u32 op, const u32 *args, u32 num);
extern void NNS_G3dGeFlushBuffer(void);
typedef u32 NNSGfdTexKey;
typedef NNSGfdTexKey (*NNSGfdFuncAllocTexVram)(u32 szByte, BOOL is4x4comp, u32 opt);
typedef int (*NNSGfdFuncFreeTexVram)(NNSGfdTexKey key);
extern NNSGfdFuncAllocTexVram NNS_GfdDefaultFuncAllocTexVram;
extern NNSGfdFuncFreeTexVram NNS_GfdDefaultFuncFreeTexVram;
static inline u32 NNS_GfdGetTexKeyAddr(NNSGfdTexKey memKey) {
    return (u32) ((0x0000FFFF & memKey) << 3);
}
static inline NNSGfdTexKey NNS_GfdAllocTexVram(u32 szByte, BOOL is4x4comp, u32 opt) {
    return (*NNS_GfdDefaultFuncAllocTexVram)(szByte, is4x4comp, opt);
}
static inline int NNS_GfdFreeTexVram(NNSGfdTexKey memKey) {
    return (*NNS_GfdDefaultFuncFreeTexVram)(memKey);
}
typedef struct NNSG3dResDataBlockHeader_ {
    union {
        u32 kind;
        char chr[4];
    };
    u32 size;
} NNSG3dResDataBlockHeader;
typedef enum {
    NNS_G3D_MATFLAG_TEXMTX_USE       = 0x0001,
    NNS_G3D_MATFLAG_TEXMTX_SCALEONE  = 0x0002,
    NNS_G3D_MATFLAG_TEXMTX_ROTZERO   = 0x0004,
    NNS_G3D_MATFLAG_TEXMTX_TRANSZERO = 0x0008,
    NNS_G3D_MATFLAG_ORIGWH_SAME      = 0x0010,
    NNS_G3D_MATFLAG_WIREFRAME        = 0x0020,
    NNS_G3D_MATFLAG_DIFFUSE          = 0x0040,
    NNS_G3D_MATFLAG_AMBIENT          = 0x0080,
    NNS_G3D_MATFLAG_VTXCOLOR         = 0x0100,
    NNS_G3D_MATFLAG_SPECULAR         = 0x0200,
    NNS_G3D_MATFLAG_EMISSION         = 0x0400,
    NNS_G3D_MATFLAG_SHININESS        = 0x0800,
    NNS_G3D_MATFLAG_TEXPLTTBASE      = 0x1000,
    NNS_G3D_MATFLAG_EFFECTMTX        = 0x2000
} NNSG3dMatFlag;
typedef enum {
    NNS_G3D_RESTEX_LOADED = 1
} NNSG3dResTexFlag;
typedef struct NNSG3dResTexInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} NNSG3dResTexInfo;
typedef struct NNSG3dResTex4x4Info_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} NNSG3dResTex4x4Info;
typedef enum {
    NNS_G3D_RESPLTT_LOADED   = 0x0001,
    NNS_G3D_RESPLTT_USEPLTT4 = 0x8000
} NNSG3dResPlttFlag;
typedef struct NNSG3dResPlttInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} NNSG3dResPlttInfo;
typedef struct NNSG3dResMdlInfo_ {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackID;
    u8 dummy_;
    fx32 posScale;
    fx32 invPosScale;
    u16 numVertex;
    u16 numPolygon;
    u16 numTriangle;
    u16 numQuad;
    fx16 boxX, boxY, boxZ;
    fx16 boxW, boxH, boxD;
    fx32 boxPosScale;
    fx32 boxInvPosScale;
} NNSG3dResMdlInfo;
typedef struct NNSG3dResDictTreeNode_ {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
} NNSG3dResDictTreeNode;
typedef struct NNSG3dResDict_ {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;
typedef union NNSG3dResName_ {
    char name[(16)];
    u32 val[((16) / sizeof(u32))];
} NNSG3dResName;
typedef struct NNSG3dResNodeInfo_ {
    NNSG3dResDict dict;
} NNSG3dResNodeInfo;
typedef struct NNSG3dResTex_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dict;
} NNSG3dResTex;
typedef struct NNSG3dResMdl_ {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResNodeInfo nodeInfo;
} NNSG3dResMdl;
typedef struct NNSG3dResFileHeader_ {
    union {
        char signature[4];
        u32 sigVal;
    };
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSG3dResFileHeader;
typedef struct NNSG3dResMdlSet_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResDict dict;
} NNSG3dResMdlSet;
typedef struct NNSG3dResAnmHeader_ {
    u8 category0;
    u8 revision;
    u16 category1;
} NNSG3dResAnmHeader;
typedef struct {
    NNSG3dResAnmHeader anmHeader;
    u16 numFrame;
    u16 dummy_;
} NNSG3dResAnmCommon;
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
typedef struct NNSG3dResDictMdlSetData_ {
    u32 offset;
} NNSG3dResDictMdlSetData;
static inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;

    if (dict != ((void *) 0) && idx < dict->numEntry) {
        hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
        return (void *) (&hdr->data[0] + hdr->sizeUnit * idx);
    } else {
        return ((void *) 0);
    }
}
static inline NNSG3dResMdl *NNS_G3dGetMdlByIdx(const NNSG3dResMdlSet *mdlSet, u32 idx) {
    NNSG3dResDictMdlSetData *data;

    if (mdlSet) {
        data = (NNSG3dResDictMdlSetData *) NNS_G3dGetResDataByIdx(&mdlSet->dict, idx);
        if (data) {
            return (NNSG3dResMdl *) ((u8 *) mdlSet + data->offset);
        }
    }
    return ((void *) 0);
}
static inline const void *NNS_G3dGetTexData(const NNSG3dResTex *tex) {
    return (u8 *) tex + tex->texInfo.ofsTex;
}
static inline const void *NNS_G3dGetPlttData(const NNSG3dResTex *tex) {
    return (u8 *) tex + tex->plttInfo.ofsPlttData;
}
typedef u32 NNSG3dTexKey;
typedef u32 NNSG3dPlttKey;
typedef struct NNSG3dAnmObj_ {
    fx32 frame;
    fx32 ratio;
    void *resAnm;
    void *funcAnm;
    struct NNSG3dAnmObj_ *next;
    const NNSG3dResTex *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
} NNSG3dAnmObj;
struct NNSG3dMatAnmResult_;
struct NNSG3dJntAnmResult_;
struct NNSG3dVisAnmResult_;
typedef BOOL (*NNSG3dFuncAnmBlendMat)(struct NNSG3dMatAnmResult_ *, const NNSG3dAnmObj *, u32);
typedef BOOL (*NNSG3dFuncAnmBlendJnt)(struct NNSG3dJntAnmResult_ *, const NNSG3dAnmObj *, u32);
typedef BOOL (*NNSG3dFuncAnmBlendVis)(struct NNSG3dVisAnmResult_ *, const NNSG3dAnmObj *, u32);
struct NNSG3dRS_;
typedef void (*NNSG3dSbcCallBackFunc)(struct NNSG3dRS_ *);
typedef struct NNSG3dRenderObj_ {
    u32 flag;
    NNSG3dResMdl *resMdl;
    NNSG3dAnmObj *anmMat;
    NNSG3dFuncAnmBlendMat funcBlendMat;
    NNSG3dAnmObj *anmJnt;
    NNSG3dFuncAnmBlendJnt funcBlendJnt;
    NNSG3dAnmObj *anmVis;
    NNSG3dFuncAnmBlendVis funcBlendVis;
    NNSG3dSbcCallBackFunc cbFunc;
    u8 cbCmd;
    u8 cbTiming;
    u16 dummy_;
    NNSG3dSbcCallBackFunc cbInitFunc;
    void *ptrUser;
    u8 *ptrUserSbc;
    struct NNSG3dJntAnmResult_ *recJntAnm;
    struct NNSG3dMatAnmResult_ *recMatAnm;
    u32 hintMatAnmExist[64 / 32];
    u32 hintJntAnmExist[64 / 32];
    u32 hintVisAnmExist[64 / 32];
} NNSG3dRenderObj;
extern void NNS_G3dRenderObjAddAnmObj(NNSG3dRenderObj *pRenderObj, NNSG3dAnmObj *pAnmObj);
extern void NNS_G3dRenderObjRemoveAnmObj(NNSG3dRenderObj *pRenderObj, NNSG3dAnmObj *pAnmObj);
extern void NNS_G3dRenderObjInit(NNSG3dRenderObj *pRenderObj, NNSG3dResMdl *pResMdl);
extern void NNS_G3dAnmObjInit(NNSG3dAnmObj *pAnmObj, void *pResAnm, const NNSG3dResMdl *pResMdl, const NNSG3dResTex *pResTex);
extern BOOL NNS_G3dBindMdlSet(NNSG3dResMdlSet *pMdlSet, const NNSG3dResTex *pTex);
extern u32 NNS_G3dTexGetRequiredSize(const NNSG3dResTex *pTex);
extern u32 NNS_G3dTex4x4GetRequiredSize(const NNSG3dResTex *pTex);
extern void NNS_G3dTexSetTexKey(NNSG3dResTex *pTex, NNSG3dTexKey texKey, NNSG3dTexKey tex4x4Key);
extern void NNS_G3dTexLoad(NNSG3dResTex *pTex, BOOL exec_begin_end);
extern void NNS_G3dTexReleaseTexKey(NNSG3dResTex *pTex, NNSG3dTexKey *texKey, NNSG3dTexKey *tex4x4Key);
extern u32 NNS_G3dPlttGetRequiredSize(const NNSG3dResTex *pTex);
extern void NNS_G3dPlttSetPlttKey(NNSG3dResTex *pTex, NNSG3dPlttKey plttKey);
extern void NNS_G3dPlttLoad(NNSG3dResTex *pTex, BOOL exec_begin_end);
extern NNSG3dPlttKey NNS_G3dPlttReleasePlttKey(NNSG3dResTex *pTex);
typedef enum {
    NNS_G3D_GLB_FLAG_FLUSH_WVP              = 0x00000001,
    NNS_G3D_GLB_FLAG_FLUSH_VP               = 0x00000002,
    NNS_G3D_GLB_FLAG_INVBASE_UPTODATE       = 0x00000004,
    NNS_G3D_GLB_FLAG_INVCAMERA_UPTODATE     = 0x00000008,
    NNS_G3D_GLB_FLAG_INVPROJ_UPTODATE       = 0x00000010,
    NNS_G3D_GLB_FLAG_INVBASECAMERA_UPTODATE = 0x00000020,
    NNS_G3D_GLB_FLAG_INVCAMERAPROJ_UPTODATE = 0x00000040,

    NNS_G3D_GLB_FLAG_BASECAMERA_UPTODATE = 0x00000080,

    NNS_G3D_GLB_FLAG_SRTCAMERA_UPTODATE = NNS_G3D_GLB_FLAG_BASECAMERA_UPTODATE,
    NNS_G3D_GLB_FLAG_FLUSH_ALT          = NNS_G3D_GLB_FLAG_FLUSH_WVP
} NNSG3dGlbFlag;
typedef struct {
    u32 cmd0;
    u32 mtxmode_proj;
    MtxFx44 projMtx;
    u32 mtxmode_posvec;
    MtxFx43 cameraMtx;
    u32 cmd1;
    u32 lightVec[4];
    u32 cmd2;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmViewPort;
    u32 cmd3;
    u32 lightColor[4];
    u32 cmd4;
    MtxFx33 prmBaseRot;
    VecFx32 prmBaseTrans;
    VecFx32 prmBaseScale;
    u32 prmTexImageParam;
    u32 flag;
    MtxFx43 invCameraMtx;
    MtxFx43 srtCameraMtx;
    MtxFx43 invSrtCameraMtx;
    MtxFx43 invBaseMtx;
    MtxFx44 invProjMtx;
    MtxFx44 invCameraProjMtx;
    VecFx32 camPos;
    VecFx32 camUp;
    VecFx32 camTarget;
} NNSG3dGlb;
extern NNSG3dGlb NNS_G3dGlb;
extern void NNS_G3dGlbSetBaseTrans(const VecFx32 *pTrans);
extern void NNS_G3dGlbSetBaseScale(const VecFx32 *pScale);
extern void NNS_G3dGlbFlushP(void);
extern void NNS_G3dDraw(NNSG3dRenderObj *pRenderObj);
extern void NNS_G3dGlbLightVector(GXLightId lightID, fx16 x, fx16 y, fx16 z);
extern void NNS_G3dGlbLightColor(GXLightId lightID, GXRgb rgb);
extern void NNS_G3dGlbMaterialColorDiffAmb(GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor);
extern void NNS_G3dGlbMaterialColorSpecEmi(GXRgb specular, GXRgb emission, BOOL IsShininess);
extern void NNS_G3dGlbPolygonAttr(int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha, int misc);
typedef void (*G3dAnmObjInitFunc)(NNSG3dAnmObj *pAnmObj, void *pResAnm, const NNSG3dResMdl *pResMdl);
typedef struct G3dAnmObjInitEntry {
    u8 category0;
    u8 unk_01;
    u16 category1;
    G3dAnmObjInitFunc func;
} G3dAnmObjInitEntry;
extern u32 gAnmObjInitFuncCount;
extern G3dAnmObjInitEntry gAnmObjInitFuncs[];
extern G3dAnmObjInitFunc gAnmObjInitFuncsFirstFunc[];
extern NNSG3dFuncAnmBlendVis gAnmBlendVisDefault;
extern NNSG3dFuncAnmBlendJnt gAnmBlendJntDefault;
extern NNSG3dFuncAnmBlendMat gAnmBlendMatDefault;
extern u32 NNS_G3dAnmObjCalcSizeRequired(const void *pResAnm, const NNSG3dResMdl *pResMdl);
extern void NNS_G3dAnmObjEnableID(NNSG3dAnmObj *pAnmObj, int id);
extern void NNS_G3dAnmObjDisableID(NNSG3dAnmObj *pAnmObj, int id);
extern void addLink_(NNSG3dAnmObj **ppHead, NNSG3dAnmObj *pAnmObj);
extern void updateHintVec_(u32 *pHintVec, const NNSG3dAnmObj *pAnmObj);
extern BOOL removeLink_(NNSG3dAnmObj **ppHead, NNSG3dAnmObj *pAnmObj);
typedef struct G3dResMat {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} G3dResMat;
typedef struct G3dResMatData {
    u16 itemTag;
    u16 size;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 polygonAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth;
    u16 origHeight;
    fx32 scaleS;
    fx32 scaleT;
    u8 texMtxData[];
} G3dResMatData;
typedef struct G3dResBindEntry {
    u16 ofsMatIdxList;
    u8 numMat;
    u8 flag;
} G3dResBindEntry;
typedef struct G3dResTexData {
    u32 texImageParam;
    u32 extraParam;
} G3dResTexData;
typedef struct G3dResPlttData {
    u16 offset;
    u16 flag;
} G3dResPlttData;
extern void *NNS_G3dGetResDataByName(const NNSG3dResDict *pDict, const NNSG3dResName *pName);
extern void bindMdlTex_Internal_(G3dResMat *pMat, G3dResBindEntry *pBind, const NNSG3dResTex *pTex,
                                 const G3dResTexData *pTexData);
extern void releaseMdlTex_Internal_(G3dResMat *pMat, G3dResBindEntry *pBind);
extern void bindMdlPltt_Internal_(G3dResMat *pMat, G3dResBindEntry *pBind, const NNSG3dResTex *pTex,
                                  const G3dResPlttData *pPlttData);
extern BOOL NNS_G3dBindMdlTex(NNSG3dResMdl *pResMdl, const NNSG3dResTex *pTex);
extern BOOL NNS_G3dForceBindMdlTex(NNSG3dResMdl *pResMdl, const NNSG3dResTex *pTex, u32 texToMatListIdx, u32 texIdx);
extern void NNS_G3dReleaseMdlTex(NNSG3dResMdl *pResMdl);
extern BOOL NNS_G3dBindMdlPltt(NNSG3dResMdl *pResMdl, const NNSG3dResTex *pTex);
extern BOOL NNS_G3dForceBindMdlPltt(NNSG3dResMdl *pResMdl, const NNSG3dResTex *pTex, u32 plttToMatListIdx, u32 plttIdx);
extern void NNS_G3dReleaseMdlPltt(NNSG3dResMdl *pResMdl);
extern void NNS_G3dReleaseMdlSet(NNSG3dResMdlSet *pMdlSet);
extern void NNS_G3dGlbInit(void);
extern fx64c FX_InvFx64c(fx32 x);
extern fx32 MTX_Inverse43(const MtxFx43 *pSrc, MtxFx43 *pDst);
extern void MTX_ScaleApply43(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_Copy43To44_(const MtxFx43 *pSrc, MtxFx44 *pDst);
extern void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *pDst);
extern u32 G3X_GetClipMtx(void *dst);
extern u32 G3X_GetVectorMtx(void *dst);
extern void G3_LoadMtx43(const MtxFx43 *mtx);
extern void G3_MultMtx43(const MtxFx43 *mtx);
extern void G3_MultMtx33(const MtxFx33 *mtx);
extern void MIi_CpuSend32(const void *pSrc, volatile void *pDst, u32 size);
extern void MI_Zero36B(void *pDst);
extern void NNS_G3dGeSendDL(const void *pDL, u32 size);
extern void NNS_G3dGetCurrentMtx(MtxFx43 *pPos, MtxFx33 *pDir);
extern MtxFx43 *NNS_G3dGlbGetInvV(void);
extern int mtx_inverse44(const MtxFx44 *pSrc, MtxFx44 *pDst);
extern MtxFx44 *NNS_G3dGlbGetInvP(void);
extern void calcSrtCameraMtx_(void);
extern MtxFx43 *NNS_G3dGlbGetWV(void);
extern MtxFx43 *NNS_G3dGlbGetInvWV(void);
extern MtxFx44 *NNS_G3dGlbGetInvVP(void);
extern void NNS_G3dGlbGetViewPort(u32 *x1, u32 *y1, u32 *x2, u32 *y2);
typedef struct NNSG3dJntAnmResult_ {
    u32 flag;
    VecFx32 scale;
    VecFx32 scaleEx0;
    VecFx32 scaleEx1;

    union {
        MtxFx33 rot;
        VecFx32 rotRows[3];
    };

    VecFx32 trans;
} G3dJntAnmResult;
typedef struct NNSG3dMatAnmResult_ {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 sinR;
    fx16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} G3dMatAnmResult;
typedef void (*G3dFuncAnmMat)(struct NNSG3dMatAnmResult_ *pResult, const NNSG3dAnmObj *pAnmObj, u32 dataIdx);
typedef void (*G3dFuncAnmJnt)(G3dJntAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 dataIdx);
typedef void (*G3dFuncAnmVis)(u32 *pResult, const NNSG3dAnmObj *pAnmObj, u32 dataIdx);
extern BOOL NNSi_G3dAnmBlendMat(struct NNSG3dMatAnmResult_ *pResult, const NNSG3dAnmObj *pAnmObj, u32 matID);
extern void blendScaleVec_(VecFx32 *pDst, const VecFx32 *pSrc, fx32 ratio, BOOL isOne);
extern BOOL NNSi_G3dAnmBlendJnt(G3dJntAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 nodeID);
extern BOOL NNSi_G3dAnmBlendVis(u32 *pResult, const NNSG3dAnmObj *pAnmObj, u32 nodeID);
typedef void (*G3dFuncGetJointScale)(G3dJntAnmResult *pResult, const fx32 *pData, const u8 *pCmd, u32 srtFlag);
typedef void (*G3dFuncSendJointSRT)(const G3dJntAnmResult *pResult);
typedef void (*G3dFuncSendTexSRT)(const G3dMatAnmResult *pResult);
typedef struct NNSG3dRS_ {
    const u8 *c;
    NNSG3dRenderObj *pRenderObj;
    u32 flag;
    NNSG3dSbcCallBackFunc cbFunc[32];
    u8 cbTiming[32];
    u8 currentNode;
    u8 currentMat;
    u8 currentNodeDesc;
    u8 unk_AF;
    G3dMatAnmResult *pMatAnmResult;
    G3dJntAnmResult *pJntAnmResult;
    u32 *pVisAnmResult;
    u32 matCached[2];
    u32 scaleCached[2];
    u32 evpCached[2];
    NNSG3dResNodeInfo *pResNodeInfo;
    G3dResMat *pResMat;
    void *pResShp;
    fx32 posScale;
    fx32 invPosScale;
    G3dFuncGetJointScale funcJntScale;
    G3dFuncSendJointSRT funcJntMtx;
    G3dFuncSendTexSRT funcTexMtx;
    G3dMatAnmResult tmpMatAnmResult;
    G3dJntAnmResult tmpJntAnmResult;
    u32 tmpVisAnmResult;
} G3dRS;
typedef struct G3dResShpData {
    u16 itemTag;
    u16 size;
    u32 flag;
    u32 ofsDL;
    u32 sizeDL;
} G3dResShpData;
typedef struct G3dResNodeData {
    u16 flag;
    s16 rot00;
    u8 data[];
} G3dResNodeData;
typedef struct G3dResEvpMtx {
    MtxFx43 invM;
    MtxFx33 invN;
} G3dResEvpMtx;
typedef struct G3dEvpMtxCache {
    MtxFx44 posMtx;
    MtxFx33 dirMtx;
} G3dEvpMtxCache;
static inline G3dResMat *G3dGetResMat(const NNSG3dResMdl *pResMdl) {
    if (pResMdl) {
        u32 ofsMat = pResMdl->ofsMat;
        if (ofsMat) {
            return (G3dResMat *) ((u8 *) pResMdl + ofsMat);
        }
    }
    return ((void *) 0);
}
static inline void *G3dGetResShp(const NNSG3dResMdl *pResMdl) {
    if (pResMdl) {
        u32 ofsShp = pResMdl->ofsShp;
        if (ofsShp) {
            return (u8 *) pResMdl + ofsShp;
        }
    }
    return ((void *) 0);
}
static inline G3dResMatData *G3dGetResMatDataByIdx(void *pResMat, u32 idx) {
    G3dResMat *pMat = pResMat;
    if (pMat) {
        const NNSG3dResDictMdlSetData *pData = NNS_G3dGetResDataByIdx(&pMat->dict, idx);
        if (pData) {
            return (G3dResMatData *) ((u8 *) pMat + pData->offset);
        }
    }
    return ((void *) 0);
}
static inline G3dResShpData *G3dGetResShpDataByIdx(void *pResShp, u32 idx) {
    NNSG3dResDict *pDict = pResShp;
    if (pDict) {
        const NNSG3dResDictMdlSetData *pData = NNS_G3dGetResDataByIdx(pDict, idx);
        if (pData) {
            return (G3dResShpData *) ((u8 *) pDict + pData->offset);
        }
    }
    return ((void *) 0);
}
extern G3dRS *gCurrentRenderState;
extern G3dMatAnmResult gMatAnmResultBuffer[64];
extern const u32 gMatColorMasks[8];
extern G3dFuncSendJointSRT gSendJointSRTFuncs[3];
extern G3dFuncGetJointScale gGetJointScaleFuncs[3];
extern G3dFuncSendTexSRT gSendTexSRTFuncs[4];
extern const u8 gPivotMtxIndices[9][4];
extern G3dEvpMtxCache gEvpMtxCache[64];
extern MtxFx33 gEvpMtxCacheFirstDirMtx;
extern u32 gBillboardCmd[18];
extern u32 gBillboardCmdParams[2];
extern MtxFx43 gBillboardMtx;
extern VecFx32 gBillboardTrans;
extern VecFx32 gBillboardScale;
extern u32 gBillboardYCmd[18];
extern u32 gBillboardYCmdParams[2];
extern MtxFx43 gBillboardYMtx;
extern VecFx32 gBillboardYTrans;
extern VecFx32 gBillboardYScale;
extern u32 data_020f8cec[];
extern u32 data_020f8cf0;
extern u32 gEnvMapTexImageParam;
extern MtxFx44 data_020f8d1c;
extern void (*gSbcFuncs[])(G3dRS *pRS, u32 opt);
extern void (*gSbcMatFuncs[])(G3dRS *pRS, u32 opt, const G3dResMatData *pMatData, u32 matID);
extern void (*gSbcShpFuncs[])(G3dRS *pRS, u32 opt, const G3dResShpData *pShpData, u32 shpID);
extern void G3dDrawInternal_Loop_(G3dRS *pRS);
extern void G3dDrawInternal_(G3dRS *pRS, NNSG3dRenderObj *pRenderObj);
extern void updateHintVec___g3d(u32 *pHintVec, const NNSG3dAnmObj *pAnmObj);
extern void NNSi_G3dFuncSbc_NOP(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_RET(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_NODE(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_MTX(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_MAT_InternalDefault(G3dRS *pRS, u32 opt, const G3dResMatData *pMatData, u32 matID);
extern void NNSi_G3dFuncSbc_MAT(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_SHP_InternalDefault(G3dRS *pRS, u32 opt, const G3dResShpData *pShpData);
extern void NNSi_G3dFuncSbc_SHP(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_NODEDESC(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_BB(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_BBY(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_NODEMIX(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_CALLDL(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_POSSCALE(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_ENVMAP(G3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_PRJMAP(G3dRS *pRS, u32 opt);
static inline u32 GetCallbackTiming(const G3dRS *pRS, int cmd) {
    return pRS->cbFunc[cmd] ? pRS->cbTiming[cmd] : 0;
}
static inline void CallCallback(G3dRS *pRS, int cmd) {
    pRS->flag &= ~0x040;
    pRS->cbFunc[cmd](pRS);
}
void NNSi_G3dFuncSbc_NOP(G3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_RET(G3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_NODE(G3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_MTX(G3dRS *pRS, u32 opt);
static inline void CalcMatAnmResult(G3dRS *pRS, G3dMatAnmResult *pResult, const G3dResMatData *pMatData, u32 matID) {
    const u8 *pTexMtxData;
    pResult->flag = 0;
    if (G3dGetResMatDataByIdx(pRS->pResMat, matID)->flag & NNS_G3D_MATFLAG_WIREFRAME) {
        pResult->flag |= 0x20;
    }
    {
        u32 mask              = gMatColorMasks[(pMatData->flag >> 6) & 7];
        pResult->prmMatColor0 = (NNS_G3dGlb.prmMatColor0 & ~mask) | (pMatData->prmMatColor0 & mask);
        mask                  = gMatColorMasks[(pMatData->flag >> 9) & 7];
        pResult->prmMatColor1 = (NNS_G3dGlb.prmMatColor1 & ~mask) | (pMatData->prmMatColor1 & mask);
        pResult->prmPolygonAttr =
            (NNS_G3dGlb.prmPolygonAttr & ~pMatData->polygonAttrMask) | (pMatData->prmPolygonAttr & pMatData->polygonAttrMask);
    }
    pResult->prmTexImage = pMatData->texImageParam;
    pResult->prmTexPltt  = pMatData->texPlttBase;
    if (pMatData->flag & NNS_G3D_MATFLAG_TEXMTX_USE) {
        pTexMtxData = pMatData->texMtxData;
        if (!(pMatData->flag & NNS_G3D_MATFLAG_TEXMTX_SCALEONE)) {
            pResult->scaleS = ((const fx32 *) pTexMtxData)[0];
            pResult->scaleT = ((const fx32 *) pTexMtxData)[1];
            pTexMtxData += 2 * sizeof(fx32);
        } else {
            pResult->flag |= 0x01;
        }
        if (!(pMatData->flag & NNS_G3D_MATFLAG_TEXMTX_ROTZERO)) {
            pResult->sinR = ((const fx16 *) pTexMtxData)[0];
            pResult->cosR = ((const fx16 *) pTexMtxData)[1];
            pTexMtxData += 2 * sizeof(fx16);
        } else {
            pResult->flag |= 0x02;
        }
        if (!(pMatData->flag & NNS_G3D_MATFLAG_TEXMTX_TRANSZERO)) {
            pResult->transS = ((const fx32 *) pTexMtxData)[0];
            pResult->transT = ((const fx32 *) pTexMtxData)[1];
        } else {
            pResult->flag |= 0x04;
        }
        pResult->flag |= 0x08;
    }
    {
        NNSG3dRenderObj *pRenderObj = pRS->pRenderObj;
        if (pRenderObj->anmMat && (pRenderObj->hintMatAnmExist[matID >> 5] & (1u << (matID & 31)))) {
            pRenderObj->funcBlendMat(pResult, pRenderObj->anmMat, matID);
        }
    }
    if (pResult->flag & 0x18) {
        pResult->origWidth  = pMatData->origWidth;
        pResult->origHeight = pMatData->origHeight;
        pResult->magW       = pMatData->scaleS;
        pResult->magH       = pMatData->scaleT;
    }
}
void NNSi_G3dFuncSbc_MAT_InternalDefault(G3dRS *pRS, u32 opt, const G3dResMatData *pMatData, u32 matID);
void NNSi_G3dFuncSbc_MAT(G3dRS *pRS, u32 opt);
static inline void CallShpCallback(G3dRS *pRS) {
    NNSG3dSbcCallBackFunc cb;
    pRS->flag &= ~0x040;
    cb = pRS->cbFunc[0x05];
    ((void (*)(G3dRS *, NNSG3dSbcCallBackFunc)) cb)(pRS, cb);
}
void NNSi_G3dFuncSbc_SHP_InternalDefault(G3dRS *pRS, u32 opt, const G3dResShpData *pShpData);
void NNSi_G3dFuncSbc_SHP(G3dRS *pRS, u32 opt);
static inline G3dResNodeData *GetResNodeDataByIdx(NNSG3dResNodeInfo *pResNodeInfo, u8 idx) {
    if (pResNodeInfo) {
        const NNSG3dResDictMdlSetData *pData = NNS_G3dGetResDataByIdx(&pResNodeInfo->dict, idx);
        if (pData) {
            return (G3dResNodeData *) ((u8 *) pResNodeInfo + pData->offset);
        }
    }
    return ((void *) 0);
}
void NNSi_G3dFuncSbc_NODEDESC(G3dRS *pRS, u32 opt);
static inline void GetCurrentPosMtx(MtxFx44 *pClip) {
    NNS_G3dGeFlushBuffer();
    (*(REGType32v *) (0x04000000 + 0x400)) = (0x15 << 16) | (0x11 << 8) | 0x10;
    (*(REGType32v *) (0x04000000 + 0x400)) = GX_MTXMODE_PROJECTION;
    (*(REGType32v *) (0x04000000 + 0x400)) = 0;
    while (G3X_GetClipMtx(pClip) != 0) {
    }
}
void NNSi_G3dFuncSbc_BB(G3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_BBY(G3dRS *pRS, u32 opt);
static inline u32 BitVecCheck(const u32 *pVec, u32 idx) {
    return pVec[idx >> 5] & (1 << (idx & 31));
}
static inline void BitVecSet(u32 *pVec, u32 idx) {
    pVec[idx >> 5] |= 1 << (idx & 31);
}
static inline G3dResEvpMtx *GetResEvpMtx(const NNSG3dResMdl *pResMdl) {
    return (G3dResEvpMtx *) ((u8 *) pResMdl + pResMdl->ofsEvpMtx);
}
void NNSi_G3dFuncSbc_NODEMIX(G3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_CALLDL(G3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_POSSCALE(G3dRS *pRS, u32 opt);
static inline const u32 *GetResMatEffectMtx(G3dResMatData *pMatData) {
    u8 *p    = pMatData->texMtxData;
    u16 flag = pMatData->flag;
    if (!(flag & NNS_G3D_MATFLAG_TEXMTX_SCALEONE)) {
        p += 2 * sizeof(fx32);
    }
    if (!(flag & NNS_G3D_MATFLAG_TEXMTX_ROTZERO)) {
        p += 2 * sizeof(fx16);
    }
    if (!(flag & NNS_G3D_MATFLAG_TEXMTX_TRANSZERO)) {
        p += 2 * sizeof(fx32);
    }
    return (const u32 *) p;
}
void NNSi_G3dFuncSbc_ENVMAP(G3dRS *pRS, u32 opt);
static inline void SendMtxStore(u32 idx) {
    u32 data = idx;
    NNS_G3dGeBufferOP_N(0x13, &data, 1);
}
static inline void SendMtxMode(u32 mode) {
    u32 data = mode;
    NNS_G3dGeBufferOP_N(0x10, &data, 1);
}
static inline void SendMtxRestore(u32 idx) {
    u32 data = idx;
    NNS_G3dGeBufferOP_N(0x14, &data, 1);
}
static inline void SendTexCoord(fx32 s, fx32 t) {
    u32 data = (u16) (s16) (s >> 8) | ((u16) (s16) (t >> 8) << 16);
    NNS_G3dGeBufferOP_N(0x22, &data, 1);
}
#pragma opt_propagation off
void NNSi_G3dFuncSbc_PRJMAP(G3dRS *pRS, u32 opt) {
    MtxFx43 current;
    MtxFx44 clip;
    u32 flag;
    u32 timing;
    u32 skip;
    G3dResMatData *pMatData;
    u32 width;
    u32 height;
    volatile u32 *pReg;
    flag = pRS->flag;
    if (flag & 0x200) {
        goto end;
    }
    if (!(flag & 0x001)) {
        goto end;
    }
    NNS_G3dGetCurrentMtx(&current, ((void *) 0));
    SendMtxStore(30);
    if ((pRS->pMatAnmResult->prmTexImage & 0xC0000000) != ((u32) (GX_TEXGEN_VERTEX) << 30)) {
        pRS->pMatAnmResult->prmTexImage &= ~0xC0000000;
        pRS->pMatAnmResult->prmTexImage |= ((u32) (GX_TEXGEN_VERTEX) << 30);
        data_020f8cec[1] = pRS->pMatAnmResult->prmTexImage;
        NNS_G3dGeBufferOP_N(data_020f8cec[0], &data_020f8cf0, 1);
    }
    timing = GetCallbackTiming(pRS, 0x0D);
    if (timing == 1) {
        CallCallback(pRS, 0x0D);
        timing = GetCallbackTiming(pRS, 0x0D);
        skip   = pRS->flag & 0x040;
    } else {
        skip = 0;
    }
    if (!skip) {
        height = pRS->pMatAnmResult->origHeight;
        width  = pRS->pMatAnmResult->origWidth;

        data_020f8cec[12] = width << 15;
        data_020f8cec[17] = (u32) (-height) << 15;
        data_020f8cec[24] = width << 15;
        data_020f8cec[25] = height << 15;
        NNS_G3dGeBufferOP_N(0x16, (const u32 *) &data_020f8d1c, 16);
    }
    if (timing == 2) {
        CallCallback(pRS, 0x0D);
        timing = GetCallbackTiming(pRS, 0x0D);
        skip   = pRS->flag & 0x040;
    } else {
        skip = 0;
    }
    if (!skip) {
        pMatData = G3dGetResMatDataByIdx(pRS->pResMat, pRS->c[1]);
        if (pMatData->flag & NNS_G3D_MATFLAG_EFFECTMTX) {
            NNS_G3dGeBufferOP_N(0x18, GetResMatEffectMtx(pMatData), 16);
        }
    }
    if (timing == 3) {
        CallCallback(pRS, 0x0D);
        skip = pRS->flag & 0x040;
    } else {
        skip = 0;
    }
    if (!skip) {
        flag = NNS_G3dGlb.flag;
        if (flag & NNS_G3D_GLB_FLAG_FLUSH_WVP) {
            NNS_G3dGeBufferOP_N(0x1c, (const u32 *) &NNS_G3dGlb.prmBaseTrans, 3);
            NNS_G3dGeBufferOP_N(0x1a, (const u32 *) &NNS_G3dGlb.prmBaseRot, 9);
            NNS_G3dGeBufferOP_N(0x19, (const u32 *) &current, 12);
        } else if (flag & NNS_G3D_GLB_FLAG_FLUSH_VP) {
            NNS_G3dGeBufferOP_N(0x19, (const u32 *) &current, 12);
        } else {
            NNS_G3dGeBufferOP_N(0x19, (const u32 *) NNS_G3dGlbGetInvV(), 12);
            NNS_G3dGeBufferOP_N(0x19, (const u32 *) &current, 12);
        }

        NNS_G3dGeFlushBuffer();
        (*(REGType32v *) (0x04000000 + 0x440)) = GX_MTXMODE_PROJECTION;
        (*(REGType32v *) (0x04000000 + 0x444)) = 0;
        (*(REGType32v *) (0x04000000 + 0x454)) = 0;
        do {
        } while (G3X_GetClipMtx(&clip));
        pReg     = &(*(REGType32v *) (0x04000000 + 0x448));
        pReg[0]  = 1;
        pReg[-2] = GX_MTXMODE_TEXTURE;
        NNS_G3dGeBufferOP_N(0x16, (const u32 *) &clip, 16);
        SendTexCoord(clip._30 >> 4, clip._31 >> 4);
    }
    SendMtxMode(GX_MTXMODE_POSITION_VECTOR);
    SendMtxRestore(30);
end:
    pRS->c += 3;
}
