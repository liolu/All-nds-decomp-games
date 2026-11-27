/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dGetCellTransferStateIndex from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_cell_transfer.c
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
extern int func_020baee4(void);
typedef struct CellTransferStateManager {
    TransferFunc pFuncTransfer;
    u32 numState;
    CellTransferState *pStateArray;
} CellTransferStateManager;
extern int func_020baee4(void);
extern CellTransferStateManager data_021da490;
int func_020baee4(void) {
    u32 i = 0;

    if (data_021da490.numState > i) {
        CellTransferState *c = data_021da490.pStateArray;
        do {
            if (c->bActive != 1) {
                data_021da490.pStateArray[i].bActive = 1;
                return i;
            }
            i++;
            c++;
        } while (i < data_021da490.numState);
    }
    return -1;
}
