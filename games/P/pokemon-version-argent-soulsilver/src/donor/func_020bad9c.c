/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dUpdateCellTransferStateManager from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_cell_transfer.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef u32 uptr;
typedef enum {
    VRAM_TYPE_3DMAIN = 0,
    VRAM_TYPE_2DMAIN,
    VRAM_TYPE_2DSUB,
    VRAM_TYPE_MAX
} VRamType;
typedef struct {
    u32 baseAddrOfVram[VRAM_TYPE_MAX];
} VRamLocation;
typedef struct CellTransferState {
    VRamLocation dstVramLocation;
    u32 szDst;
    const void *pSrcNCGR;
    const void *pSrcNCBR;
    u32 szSrcData;
    BOOL bActive;
    u32 bDrawn;
    u32 bTransferRequested;
    u32 srcOffset;
    u32 szByte;
} CellTransferState;
typedef BOOL (*TransferFunc)(s32 type, u32 dstAddr, void *pSrc, u32 szByte);
extern void func_020bad9c(void);
typedef struct CellTransferStateManager {
    TransferFunc pFuncTransfer;
    u32 numState;
    CellTransferState *pStateArray;
} CellTransferStateManager;
extern s32 func_020b894c(const s32 *tbl, u32 i);
extern void func_020bad9c(void);
extern CellTransferStateManager data_021da490;
extern s32 data_0210934c[VRAM_TYPE_MAX];
static inline BOOL ShouldTransfer_(const CellTransferState *s, VRamType t) {
    return (BOOL) ((s->bTransferRequested & (1 << t)) && (s->bDrawn & (1 << t)));
}
void func_020bad9c(void) {
    u32 i;
    VRamType t;

    for (i = 0; i < data_021da490.numState; i++) {
        CellTransferState *s = &data_021da490.pStateArray[i];
        if (s->bActive) {
            for (t = VRAM_TYPE_3DMAIN; t < VRAM_TYPE_MAX; t++) {
                if (ShouldTransfer_(s, t)) {
                    s32 gfdType     = data_0210934c[t];
                    const void *src = (t == VRAM_TYPE_3DMAIN) ? s->pSrcNCBR : s->pSrcNCGR;
                    if ((*data_021da490.pFuncTransfer)(gfdType, func_020b894c((const s32 *) (&s->dstVramLocation), t),
                                                       (void *) ((uptr) src + s->srcOffset), s->szByte)) {
                        s->bTransferRequested &= ~(1 << t);
                    }
                }
            }
            s->bDrawn = 0;
        }
    }
}
