/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dApplyOamManagerToHW from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_oam_manager.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
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
typedef enum {
    SCFG_CPU_SPEED_1X = 0,
    SCFG_CPU_SPEED_2X = 1
} SCFGCpuSpeed;
typedef enum GXVRam {
    GX_VRAM_NONE = 0x0000,
    GX_VRAM_A    = 0x0001,
    GX_VRAM_B    = 0x0002,
    GX_VRAM_C    = 0x0004,
    GX_VRAM_D    = 0x0008,
    GX_VRAM_E    = 0x0010,
    GX_VRAM_F    = 0x0020,
    GX_VRAM_G    = 0x0040,
    GX_VRAM_H    = 0x0080,
    GX_VRAM_I    = 0x0100
} GXVRam;
typedef enum GXDispSelect {
    GX_DISP_SELECT_SUB_MAIN = 0,
    GX_DISP_SELECT_MAIN_SUB = 1
} GXDispSelect;
typedef enum GXBGColorMode {
    GX_BG_COLORMODE_16  = 0,
    GX_BG_COLORMODE_256 = 1
} GXBGColorMode;
typedef enum GXBGAreaOver {
    GX_BG_AREAOVER_REPEAT = 0,
    GX_BG_AREAOVER_XLU    = 1
} GXBGAreaOver;
typedef enum GXBGExtPltt {
    GX_BG_EXTPLTT_01 = 0,
    GX_BG_EXTPLTT_23 = 1
} GXBGExtPltt;
typedef enum GXBGCharBase {
    GX_BG_CHARBASE_0x00000 = 0,
    GX_BG_CHARBASE_0x04000,
    GX_BG_CHARBASE_0x08000,
    GX_BG_CHARBASE_0x0c000,
    GX_BG_CHARBASE_0x10000,
    GX_BG_CHARBASE_0x14000,
    GX_BG_CHARBASE_0x18000,
    GX_BG_CHARBASE_0x1c000,
    GX_BG_CHARBASE_0x20000,
    GX_BG_CHARBASE_0x24000,
    GX_BG_CHARBASE_0x28000,
    GX_BG_CHARBASE_0x2c000,
    GX_BG_CHARBASE_0x30000,
    GX_BG_CHARBASE_0x34000,
    GX_BG_CHARBASE_0x38000,
    GX_BG_CHARBASE_0x3c000
} GXBGCharBase;
typedef enum GXBGScrBase {
    GX_BG_SCRBASE_0x0000 = 0,
    GX_BG_SCRBASE_0x0800,
    GX_BG_SCRBASE_0x1000,
    GX_BG_SCRBASE_0x1800,
    GX_BG_SCRBASE_0x2000,
    GX_BG_SCRBASE_0x2800,
    GX_BG_SCRBASE_0x3000,
    GX_BG_SCRBASE_0x3800,
    GX_BG_SCRBASE_0x4000,
    GX_BG_SCRBASE_0x4800,
    GX_BG_SCRBASE_0x5000,
    GX_BG_SCRBASE_0x5800,
    GX_BG_SCRBASE_0x6000,
    GX_BG_SCRBASE_0x6800,
    GX_BG_SCRBASE_0x7000,
    GX_BG_SCRBASE_0x7800,
    GX_BG_SCRBASE_0x8000,
    GX_BG_SCRBASE_0x8800,
    GX_BG_SCRBASE_0x9000,
    GX_BG_SCRBASE_0x9800,
    GX_BG_SCRBASE_0xa000,
    GX_BG_SCRBASE_0xa800,
    GX_BG_SCRBASE_0xb000,
    GX_BG_SCRBASE_0xb800,
    GX_BG_SCRBASE_0xc000,
    GX_BG_SCRBASE_0xc800,
    GX_BG_SCRBASE_0xd000,
    GX_BG_SCRBASE_0xd800,
    GX_BG_SCRBASE_0xe000,
    GX_BG_SCRBASE_0xe800,
    GX_BG_SCRBASE_0xf000,
    GX_BG_SCRBASE_0xf800
} GXBGScrBase;
typedef enum GXBGScrSizeText {
    GX_BG_SCRSIZE_TEXT_256x256 = 0,
    GX_BG_SCRSIZE_TEXT_512x256,
    GX_BG_SCRSIZE_TEXT_256x512,
    GX_BG_SCRSIZE_TEXT_512x512
} GXBGScrSizeText;
typedef enum GXOBJVRamModeChar {
    GX_OBJVRAMMODE_CHAR_2D      = 0x00000000,
    GX_OBJVRAMMODE_CHAR_1D_32K  = 0x00000010,
    GX_OBJVRAMMODE_CHAR_1D_64K  = 0x00100010,
    GX_OBJVRAMMODE_CHAR_1D_128K = 0x00200010,
    GX_OBJVRAMMODE_CHAR_1D_256K = 0x00300010
} GXOBJVRamModeChar;
typedef enum GXPolygonMode {
    GX_POLYGONMODE_MODULATE = 0,
    GX_POLYGONMODE_DECAL    = 1,
    GX_POLYGONMODE_TOON     = 2,
    GX_POLYGONMODE_SHADOW   = 3
} GXPolygonMode;
typedef enum GXCull {
    GX_CULL_ALL   = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK  = 2,
    GX_CULL_NONE  = 3
} GXCull;
typedef enum GXShading {
    GX_SHADING_TOON      = 0,
    GX_SHADING_HIGHLIGHT = 1
} GXShading;
typedef enum GXFogBlend {
    GX_FOGBLEND_COLOR_ALPHA = 0,
    GX_FOGBLEND_ALPHA       = 1
} GXFogBlend;
typedef enum GXFogSlope {
    GX_FOGSLOPE_0x0400 = 0,
    GX_FOGSLOPE_0x0200,
    GX_FOGSLOPE_0x0100,
    GX_FOGSLOPE_0x0080,
    GX_FOGSLOPE_0x0040,
    GX_FOGSLOPE_0x0020,
    GX_FOGSLOPE_0x0010,
    GX_FOGSLOPE_0x0008,
    GX_FOGSLOPE_0x0004,
    GX_FOGSLOPE_0x0002,
    GX_FOGSLOPE_0x0001
} GXFogSlope;
typedef enum GXTexFmt {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum GXTexSizeS {
    GX_TEXSIZE_S8 = 0,
    GX_TEXSIZE_S16,
    GX_TEXSIZE_S32,
    GX_TEXSIZE_S64,
    GX_TEXSIZE_S128,
    GX_TEXSIZE_S256,
    GX_TEXSIZE_S512,
    GX_TEXSIZE_S1024
} GXTexSizeS;
typedef enum GXTexSizeT {
    GX_TEXSIZE_T8 = 0,
    GX_TEXSIZE_T16,
    GX_TEXSIZE_T32,
    GX_TEXSIZE_T64,
    GX_TEXSIZE_T128,
    GX_TEXSIZE_T256,
    GX_TEXSIZE_T512,
    GX_TEXSIZE_T1024
} GXTexSizeT;
typedef enum GXTexRepeat {
    GX_TEXREPEAT_NONE = 0,
    GX_TEXREPEAT_S    = 1,
    GX_TEXREPEAT_T    = 2,
    GX_TEXREPEAT_ST   = 3
} GXTexRepeat;
typedef enum GXTexFlip {
    GX_TEXFLIP_NONE = 0,
    GX_TEXFLIP_S    = 1,
    GX_TEXFLIP_T    = 2,
    GX_TEXFLIP_ST   = 3
} GXTexFlip;
typedef enum GXTexGen {
    GX_TEXGEN_NONE     = 0,
    GX_TEXGEN_TEXCOORD = 1,
    GX_TEXGEN_NORMAL   = 2,
    GX_TEXGEN_VERTEX   = 3
} GXTexGen;
typedef enum GXTexPlttColor0 {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef union GXOamAttr {
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 attr3;
    };
    struct {
        u32 attr01;
        u32 attr23;
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
        u32 charNo : 10;
        u32 priority : 2;
        u32 cParam : 4;
        u32 _3 : 16;
    };
    struct {
        u32 _0 : 28;
        u32 flipH : 1;
        u32 flipV : 1;
        u32 _1 : 2;
        u32 _2 : 2;
        u32 _4 : 16;
    };
} GXOamAttr;
typedef struct GX_VRAMCnt_ {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clrImg;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 sub_bg;
    u16 sub_obj;
    u16 sub_bgExtPltt;
    u16 sub_objExtPltt;
} GX_VRAMCnt_;
typedef struct GX_State {
    GX_VRAMCnt_ vramCnt;
} GX_State;
typedef struct OamAttributeCache {
    u16 reservationTable[128];
    GXOamAttr oamBuffer[128];
} OamAttributeCache;
typedef struct OamAffineCache {
    u16 reservationTable[32];
} OamAffineCache;
typedef struct OamCache {
    OamAttributeCache attributeCache;
    OamAffineCache affineCache;
} OamCache;
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
typedef struct {
    u16 _0, _1, _2;
    s16 PA;
    u16 _4, _5, _6;
    s16 PB;
    u16 _8, _9, _10;
    s16 PC;
    u16 _12, _13, _14;
    s16 PD;
} GXOamAffine;
typedef enum {
    NNS_G2D_OAMTYPE_MAIN              = 0,
    NNS_G2D_OAMTYPE_SUB               = 1,
    NNS_G2D_OAMTYPE_SOFTWAREEMULATION = 2
} NNSG2dOamType;
typedef struct NNSG2dOAMManageArea {
    u16 fromIdx;
    u16 toIdx;
    u16 currentIdx;
} NNSG2dOAMManageArea;
typedef struct NNSG2dOamManagerInstance {
    NNSG2dOamType type;
    NNSG2dOAMManageArea managedAttrArea;
    NNSG2dOAMManageArea managedAffineArea;
    u16 GUID;
    u16 pad16_;
    BOOL bFastTransferEnable;
    fx32 spriteZoffsetStep;
} NNSG2dOamManagerInstance;
typedef void(OBJLoadFunction)(const void *pSrc, u32 offset, u32 szByte);
struct VramResource {
    u16 width;
    u16 height;
    int offset;
    u32 bank;
    int pad_fc;
    u32 size;
    void *src;
};
struct VramHandle {
    int vramAddrMode0;
    int vramAddrMode1;
    int vramAddrMode2;
    int heightCode;
    int widthCode;
    int offset;
    int reserved18;
    int isSet;
    u32 bank;
};
typedef struct VramResourceSel {
    u32 formatCode;
    u32 handle;
    u32 size;
    u32 src;
} VramResourceSel;
typedef struct VramHandleSel {
    u32 formatCode;
    u32 handle;
} VramHandleSel;
typedef struct VramResourceList {
    u32 formatCode;
    u32 handle;
    u32 size;
    u32 src;
} VramResourceList;
typedef struct VramHandleList {
    u32 formatCode;
    u32 handle;
} VramHandleList;
typedef struct VramResourceIndices {
    u16 count;
    u16 *items;
} VramResourceIndices;
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
extern void DC_FlushAll(void);
extern void DC_InvalidateRange(void *startAddr, u32 nBytes);
extern void DC_StoreRange(void *startAddr, u32 nBytes);
extern void func_020d2894(void *startAddr, unsigned long nBytes);
extern void DC_WaitWriteBufferEmpty(void);
extern void IC_InvalidateAll(void);
extern void IC_InvalidateRange(void *startAddr, u32 nBytes);
extern void GX_LoadBGPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBGPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadOBJPltt(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadOBJPltt(const void *pSrc, u32 offset, u32 szByte);
extern void func_020cfdc8(const void *pSrc, u32 offset, u32 szByte);
extern void func_020cfe1c(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadOBJ(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadOBJ(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG0Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG0Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG1Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG1Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG2Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG2Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG3Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG3Scr(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG0Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG0Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG1Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG1Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG2Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG2Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_LoadBG3Char(const void *pSrc, u32 offset, u32 szByte);
extern void GXS_LoadBG3Char(const void *pSrc, u32 offset, u32 szByte);
extern void GX_BeginLoadBGExtPltt(void);
extern void GX_LoadBGExtPltt(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GX_EndLoadBGExtPltt(void);
extern void GX_BeginLoadOBJExtPltt(void);
extern void GX_LoadOBJExtPltt(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GX_EndLoadOBJExtPltt(void);
extern void *GXS_BeginLoadBGExtPltt(void);
extern void GXS_LoadBGExtPltt(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GXS_EndLoadBGExtPltt(void);
extern void *GXS_BeginLoadOBJExtPltt(void);
extern void GXS_LoadOBJExtPltt(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GXS_EndLoadOBJExtPltt(void);
extern void MIi_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size, BOOL dmaEnable);
extern void MIi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size, BOOL dmaEnable);
extern void MIi_DmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size, BOOL dmaEnable);
extern void MI_WaitDma(u32 dmaNo);
extern void MI_StopDma(u32 dmaNo);
extern void MI_StopAllDma(void);
extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void GX_BeginLoadTex(void);
extern void GX_LoadTex(void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GX_EndLoadTex(void);
extern void GX_BeginLoadTexPltt(void);
extern void GX_LoadTexPltt(void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GX_EndLoadTexPltt(void);
extern void GX_BeginLoadClearImage(void);
extern void GX_LoadClearImageColor(void *pSrc, u32 szByte);
extern void GX_LoadClearImageDepth(void *pSrc, u32 szByte);
extern void GX_EndLoadClearImage(void);
extern void NNSi_G2dCpuLoadOamSub(void *src, u32 offset, u32 size);
extern void NNSi_G2dCpuLoadOamMain(void *src, u32 offset, u32 size);
extern void NNS_G2dInitOamManagerModule(void);
extern u32 NNSi_G2dReserveOamManagerSpan(NNSG2dOamManagerInstance *s, u16 first, int count, int which);
extern u32 NNSi_G2dEntryOamManagerOam(NNSG2dOamManagerInstance *win, GXOamAttr *src, u32 mode);
extern u16 NNS_G2dEntryOamManagerAffine(NNSG2dOamManagerInstance *pMan, const MtxFx22 *mtx);
extern void func_020b7cb8(NNSG2dOamManagerInstance *pMan, u32 bound);
extern void NNS_G2dResetOamManagerBuffer(NNSG2dOamManagerInstance *pMan);
extern int NNSi_G2dGetVramHandle(unsigned short *p, int i);
extern void NNSi_G2dInitVramHandle(u32 *p);
extern void NNSi_G2dSetVramHandle(int *p, int i, int v);
extern int NNSi_G2dGetVramHandleValue(int *p, int i);
extern int NNSi_G2dIsVramHandleSet(const u32 *p, u32 i);
extern void NNSi_G2dInitVramHandleEx(u32 *p);
extern void NNSi_G2dSetVramHandleEx(char *p, int i, int v);
extern int NNSi_G2dGetVramHandleEx(char *p, int i);
extern int NNSi_G2dIsVramHandleSetEx(char *p, int i);
extern void NNSi_G2dLoadVramResourceMain(struct VramResource *r, u32 dst, int mode, struct VramHandle *out);
extern void NNSi_G2dLoadVramResourceSub(struct VramResource *r, u32 dst, int mode, struct VramHandle *out);
extern void NNSi_G2dSetupVramResource(struct VramResource *r, u32 dst, int mode, struct VramHandle *out);
extern void NNSi_G2dLoadVramResourceBySel(VramResourceSel *self, u32 offset, int sel, VramHandleSel *out);
extern void NNSi_G2dLoadVramResourceList(VramResourceList *self, VramResourceIndices *list, u32 base, int sel,
                                         VramHandleList *out);
extern OamCache data_021d8538[3];
extern u16 g_02146BC4;
extern OBJLoadFunction *data_021109e8[5];
extern u32 GXi_DmaId;
void NNSi_G2dCpuLoadOamSub(void *src, u32 offset, u32 size);
void NNSi_G2dCpuLoadOamMain(void *src, u32 offset, u32 size);
void NNS_G2dInitOamManagerModule(void);
static inline void Fill(u16 *tbl, u16 first, u16 last, u16 id) {
    MIi_CpuClear16(id, (u8 *) tbl + first * 2, (last - first + 1) * 2);
}
static inline u32 IsFree(u16 *tbl, u16 first, u16 last) {
    u16 *p   = &tbl[first];
    u16 *end = &tbl[last];
    for (; p <= end; p++) {
        if (*p != 0xFFFF) {
            return 0;
        }
    }
    return 1;
}
u32 NNSi_G2dReserveOamManagerSpan(NNSG2dOamManagerInstance *s, u16 first, int count, int which);
u32 NNSi_G2dEntryOamManagerOam(NNSG2dOamManagerInstance *win, GXOamAttr *src, u32 mode);
static inline BOOL IsManageAreaValid_(const NNSG2dOAMManageArea *pArea) {
    return (BOOL) ((pArea->currentIdx <= pArea->toIdx + 1) && (pArea->fromIdx <= pArea->toIdx));
}
static inline OamCache *GetOamCachePtr_(NNSG2dOamType type) {
    return &data_021d8538[type];
}
static inline GXOamAttr *GetOamBufferPtr_(NNSG2dOamType type, u16 index) {
    {
        OamCache *pOamCache = GetOamCachePtr_(type);

        return pOamCache->attributeCache.oamBuffer + index;
    }
}
static inline GXOamAffine *GetAffineBufferPtr_(NNSG2dOamType type, u16 index) {
    {
        GXOamAffine *pAff = (GXOamAffine *) GetOamBufferPtr_(type, 0);

        return pAff + index;
    }
}
static inline u16 GetCapacity_(const NNSG2dOAMManageArea *pArea) {
    if (IsManageAreaValid_(pArea)) {
        return (u16) ((int) pArea->toIdx - pArea->currentIdx + 1);
    } else {
        return 0;
    }
}
static inline BOOL HasEnoughCapacity_(const NNSG2dOAMManageArea *pArea, u16 num) {
    return (BOOL) (GetCapacity_(pArea) >= num);
}
static inline void G2_SetOBJAffine(GXOamAffine *oam, const MtxFx22 *mtx) {
    oam->PA = (s16) (mtx->_00 >> 4);
    oam->PB = (s16) (mtx->_01 >> 4);
    oam->PC = (s16) (mtx->_10 >> 4);
    oam->PD = (s16) (mtx->_11 >> 4);
}
static inline void SetAffineParams_(NNSG2dOamType type, const MtxFx22 *mtx, u16 idx) {
    {
        GXOamAffine *pAff = GetAffineBufferPtr_(type, idx);

        G2_SetOBJAffine(pAff, mtx);
    }
}
u16 NNS_G2dEntryOamManagerAffine(NNSG2dOamManagerInstance *pMan, const MtxFx22 *mtx);
static inline OBJLoadFunction *GetOBJLoadFunction_(NNSG2dOamType type) {
    return data_021109e8[type];
}
static inline void LoadOneAffine_(const GXOamAffine *pAff, u32 offset, OBJLoadFunction *pOBJLoadFunc) {
    offset += sizeof(u16) * 3;

    (*pOBJLoadFunc)(&pAff->PA, offset + sizeof(GXOamAttr) * 0, sizeof(u16));
    (*pOBJLoadFunc)(&pAff->PB, offset + sizeof(GXOamAttr) * 1, sizeof(u16));
    (*pOBJLoadFunc)(&pAff->PC, offset + sizeof(GXOamAttr) * 2, sizeof(u16));
    (*pOBJLoadFunc)(&pAff->PD, offset + sizeof(GXOamAttr) * 3, sizeof(u16));
}
static inline void LoadOamAndAffineFast_(NNSG2dOamType type, u16 fromIdx, u16 toIdx) {
    GXOamAttr *pFrom = GetOamBufferPtr_(type, fromIdx);
    const u16 szByte = (u16) (sizeof(GXOamAttr) * (toIdx - fromIdx + 1));
    u16 offset       = (u16) (sizeof(GXOamAttr) * fromIdx);

    func_020d2894(pFrom, szByte);

    switch (type) {
        case NNS_G2D_OAMTYPE_MAIN:
            func_020cfdc8(pFrom, offset, szByte);
            break;
        case NNS_G2D_OAMTYPE_SUB:
            func_020cfe1c(pFrom, offset, szByte);
            break;
        default:
            break;
    }
}
static inline void LoadOam_(NNSG2dOamType type, u16 fromIdx, u16 toIdx) {
    GXOamAttr *pFrom  = GetOamBufferPtr_(type, fromIdx);
    const u16 numArea = (u16) (toIdx - fromIdx + 1);
    u16 offset        = (u16) (sizeof(GXOamAttr) * fromIdx);
    u16 i;
    OBJLoadFunction *pOBJLoadFunc = GetOBJLoadFunction_(type);

    for (i = 0; i < numArea; i++) {
        (*pOBJLoadFunc)(pFrom, offset, sizeof(u16) * 3);

        offset += sizeof(GXOamAttr);
        pFrom++;
    }
}
static inline void LoadAffine_(NNSG2dOamType type, u16 fromIdx, u16 toIdx) {
    GXOamAffine *pFrom = GetAffineBufferPtr_(type, fromIdx);
    const u16 numArea  = (u16) (toIdx - fromIdx + 1);
    u16 offset         = (u16) (sizeof(GXOamAffine) * fromIdx);
    u16 i;
    OBJLoadFunction *pOBJLoadFunc = GetOBJLoadFunction_(type);

    for (i = 0; i < numArea; i++) {
        LoadOneAffine_(pFrom, offset, pOBJLoadFunc);

        offset += sizeof(GXOamAffine);
        pFrom++;
    }
}
void func_020b7cb8(NNSG2dOamManagerInstance *pMan, u32 bound) {
    {
        if (pMan->bFastTransferEnable) {
            LoadOamAndAffineFast_(pMan->type, pMan->managedAttrArea.fromIdx, pMan->managedAttrArea.toIdx);
        } else {
            LoadOam_(pMan->type, pMan->managedAttrArea.fromIdx, pMan->managedAttrArea.toIdx);

            if (IsManageAreaValid_(&pMan->managedAffineArea)) {
                LoadAffine_(pMan->type, pMan->managedAffineArea.fromIdx, pMan->managedAffineArea.toIdx);
            }
        }
    }
}
static inline u32 GX_GetDefaultDMA(void) {
    return (GXi_DmaId > 3) ? (u32) ~0 : GXi_DmaId;
}
static inline void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size) {
    MIi_DmaFill32(dmaNo, dest, data, size, 1);
}
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    MIi_CpuClear32(data, dest, size);
}
static inline void NNSi_G2dDmaFill32(u32 dmaNo, void *dest, u32 data, u32 size) {
    if (dmaNo != (u32) ~0) {
        MI_DmaFill32(dmaNo, dest, data, size);
    } else {
        MI_CpuFill32(dest, data, size);
    }
}
static inline GXOamAttr *GetOamFromPtr_(NNSG2dOamManagerInstance *pMan) {
    {
        GXOamAttr *pFrom = GetOamBufferPtr_(pMan->type, pMan->managedAttrArea.fromIdx);

        return pFrom;
    }
}
static inline u32 GetSizeOfManageArea_(const NNSG2dOAMManageArea *pArea) {
    if (IsManageAreaValid_(pArea)) {
        return (u32) (sizeof(GXOamAttr) * (u16) (pArea->toIdx - pArea->fromIdx + 1));
    } else {
        return 0;
    }
}
static inline void ResetOam_(NNSG2dOamType type, u16 fromIdx, u16 toIdx) {
    GXOamAttr *pFrom  = GetOamBufferPtr_(type, fromIdx);
    const u16 numArea = (u16) (toIdx - fromIdx + 1);
    u16 i;

    for (i = 0; i < numArea; i++) {
        *((u16 *) pFrom) = 192;
        pFrom++;
    }
}
void NNS_G2dResetOamManagerBuffer(NNSG2dOamManagerInstance *pMan);
int NNSi_G2dGetVramHandle(unsigned short *p, int i);
void NNSi_G2dInitVramHandle(u32 *p);
void NNSi_G2dSetVramHandle(int *p, int i, int v);
int NNSi_G2dGetVramHandleValue(int *p, int i);
int NNSi_G2dIsVramHandleSet(const u32 *p, u32 i);
void NNSi_G2dInitVramHandleEx(u32 *p);
void NNSi_G2dSetVramHandleEx(char *p, int i, int v);
int NNSi_G2dGetVramHandleEx(char *p, int i);
int NNSi_G2dIsVramHandleSetEx(char *p, int i);
void NNSi_G2dLoadVramResourceMain(struct VramResource *r, u32 dst, int mode, struct VramHandle *out);
void NNSi_G2dLoadVramResourceSub(struct VramResource *r, u32 dst, int mode, struct VramHandle *out);
void NNSi_G2dSetupVramResource(struct VramResource *r, u32 dst, int mode, struct VramHandle *out);
void NNSi_G2dLoadVramResourceBySel(VramResourceSel *self, u32 offset, int sel, VramHandleSel *out);
void NNSi_G2dLoadVramResourceList(VramResourceList *self, VramResourceIndices *list, u32 base, int sel, VramHandleList *out);
