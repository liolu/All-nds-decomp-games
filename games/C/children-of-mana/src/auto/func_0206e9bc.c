/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MaybeDisposeCommonHeaderFileData from https://github.com/RonyxDumb/mkds src/arm9/02012b30_MaybeDisposeCommonHeaderFileData.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 NNSGfdTexKey;
typedef int (*NNSGfdFuncFreeTexVram)(NNSGfdTexKey key);
extern NNSGfdFuncFreeTexVram data_020ff378;
inline int NNS_GfdFreeTexVram(NNSGfdTexKey memKey) {
    return (*data_020ff378)(memKey);
}
typedef u32 NNSGfdPlttKey;
typedef int (*NNSGfdFuncFreePlttVram)(NNSGfdPlttKey plttKey);
extern NNSGfdFuncFreePlttVram data_020ff380;
inline int NNS_GfdFreePlttVram(NNSGfdPlttKey plttKey) {
    return (*data_020ff380)(plttKey);
}
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
typedef struct NNSG3dResDataBlockHeader_ {
    union {
        u32 kind;
        char chr[4];
    };
    u32 size;
} NNSG3dResDataBlockHeader;
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
typedef struct NNSG3dResPlttInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} NNSG3dResPlttInfo;
typedef struct NNSG3dResTex_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dict;
} NNSG3dResTex;
typedef struct NNSG3dResMdlSet_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResDict dict;
} NNSG3dResMdlSet;
typedef u32 NNSG3dTexKey;
typedef u32 NNSG3dPlttKey;
extern void func_0206b54c(NNSG3dResTex *pTex, NNSG3dTexKey *texKey, NNSG3dTexKey *tex4x4Key);
extern NNSG3dPlttKey func_0206b4ac(NNSG3dResTex *pTex);
extern void func_0206af58(NNSG3dResMdlSet *pMdlSet);
extern void func_0206e9bc(void *pResData);
extern NNSG3dResMdlSet *func_0206effc(const NNSG3dResFileHeader *header);
extern NNSG3dResTex *func_0206efbc(const NNSG3dResFileHeader *header);
#pragma thumb off
void func_0206e9bc(void *pResData) {
    u8 *binFile = (u8 *) pResData;
    BOOL failed = 0;

    ((void) 0);

    switch (*(u32 *) &binFile[0]) {
        case '0DMB': {
            NNSG3dResTex *tex;
            NNSG3dResMdlSet *mdlSet = func_0206effc(pResData);
            ((void) 0);
            tex = func_0206efbc((NNSG3dResFileHeader *) pResData);

            if (tex) {

                func_0206af58(mdlSet);
            }
        }

        case '0XTB': {
            NNSG3dResTex *tex;
            NNSG3dPlttKey plttKey;
            NNSG3dTexKey texKey, tex4x4Key;
            int status;
            tex = func_0206efbc((NNSG3dResFileHeader *) pResData);

            if (tex) {
                plttKey = func_0206b4ac(tex);
                func_0206b54c(tex, &texKey, &tex4x4Key);

                if (plttKey > 0) {
                    status = NNS_GfdFreePlttVram(plttKey);
                    ((void) 0);
                }

                if (tex4x4Key > 0) {
                    status = NNS_GfdFreeTexVram(tex4x4Key);
                    ((void) 0);
                }

                if (texKey > 0) {
                    status = NNS_GfdFreeTexVram(texKey);
                    ((void) 0);
                }
            }
        } break;
        case '0ACB':
        case '0AVB':
        case '0AMB':
        case '0PTB':
        case '0ATB':
            break;
        default:
            ((void) 0);
            break;
    };
}
