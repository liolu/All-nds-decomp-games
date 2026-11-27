/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dInitCellTransferStateManager from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_cell_transfer.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
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
extern void func_020bad38(CellTransferState *pStates, u32 numStates, TransferFunc pTransferFunc);
typedef struct CellTransferStateManager {
    TransferFunc pFuncTransfer;
    u32 numState;
    CellTransferState *pStateArray;
} CellTransferStateManager;
extern void func_020b8928(s32 *tbl);
extern void func_020bad38(CellTransferState *pStates, u32 numStates, TransferFunc pTransferFunc);
extern CellTransferStateManager data_021da490;
void func_020bad38(CellTransferState *pStates, u32 numStates, TransferFunc pTransferFunc) {
    u32 i = 0;

    data_021da490.pFuncTransfer = pTransferFunc;
    data_021da490.pStateArray   = pStates;
    data_021da490.numState      = numStates;
    if (numStates == 0) {
        return;
    }
    do {
        func_020b8928((s32 *) pStates);
        pStates->szDst              = 0;
        pStates->pSrcNCGR           = 0;
        pStates->pSrcNCBR           = 0;
        pStates->szSrcData          = 0;
        pStates->bActive            = 0;
        pStates->bDrawn             = 0;
        pStates->bTransferRequested = 0;
        pStates->srcOffset          = 0;
        pStates->szByte             = 0;
        pStates++;
        i++;
    } while (i < numStates);
}
