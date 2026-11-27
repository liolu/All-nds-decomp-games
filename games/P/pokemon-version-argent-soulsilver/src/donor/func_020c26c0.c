/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dResDefaultSetup from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g3d_util.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef u32 NNSGfdTexKey;
typedef NNSGfdTexKey (*NNSGfdFuncAllocTexVram)(u32 szByte, BOOL is4x4comp, u32 opt);
typedef int (*NNSGfdFuncFreeTexVram)(NNSGfdTexKey key);
extern NNSGfdFuncAllocTexVram data_02110944;
extern NNSGfdFuncFreeTexVram data_02110948;
static inline NNSGfdTexKey NNS_GfdAllocTexVram(u32 szByte, BOOL is4x4comp, u32 opt) {
    return (*data_02110944)(szByte, is4x4comp, opt);
}
static inline int NNS_GfdFreeTexVram(NNSGfdTexKey memKey) {
    return (*data_02110948)(memKey);
}
typedef struct NNSG3dResDataBlockHeader_ {
    union {
        u32 kind;
        char chr[4];
    };
    u32 size;
} NNSG3dResDataBlockHeader;
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
typedef struct NNSG3dResTex_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dict;
} NNSG3dResTex;
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
extern NNSG3dResMdlSet *func_020c3b40(const NNSG3dResFileHeader *header);
extern NNSG3dResTex *func_020c3b50(const NNSG3dResFileHeader *header);
typedef u32 NNSG3dTexKey;
typedef u32 NNSG3dPlttKey;
extern BOOL func_020bed00(NNSG3dResMdlSet *pMdlSet, const NNSG3dResTex *pTex);
extern u32 func_020be3dc(const NNSG3dResTex *pTex);
extern u32 func_020be3f0(const NNSG3dResTex *pTex);
extern void func_020be404(NNSG3dResTex *pTex, NNSG3dTexKey texKey, NNSG3dTexKey tex4x4Key);
extern void func_020be418(NNSG3dResTex *pTex, BOOL exec_begin_end);
extern u32 func_020be51c(const NNSG3dResTex *pTex);
extern void func_020be530(NNSG3dResTex *pTex, NNSG3dPlttKey plttKey);
extern void func_020be538(NNSG3dResTex *pTex, BOOL exec_begin_end);
extern BOOL func_020c26c0(void *pResData);
typedef u32 NNSGfdPlttKey;
typedef NNSGfdPlttKey (*NNSGfdFuncAllocPlttVram)(u32 szByte, BOOL is4pltt, u32 opt);
typedef int (*NNSGfdFuncFreePlttVram)(NNSGfdPlttKey plttKey);
extern NNSGfdFuncAllocPlttVram data_0211094c;
extern NNSGfdFuncFreePlttVram data_02110950;
static inline NNSGfdPlttKey NNS_GfdAllocPlttVram(u32 szByte, BOOL is4pltt, u32 opt) {
    return (*data_0211094c)(szByte, is4pltt, opt);
}
static inline int NNS_GfdFreePlttVram(NNSGfdPlttKey plttKey) {
    return (*data_02110950)(plttKey);
}
BOOL func_020c26c0(void *pResData) {
    NNSG3dResTex *pTex;
    BOOL texOk;
    BOOL tex4x4Ok;
    BOOL plttOk;
    u32 texSize;
    u32 tex4x4Size;
    u32 plttSize;
    NNSGfdTexKey texKey;
    NNSGfdTexKey tex4x4Key;
    NNSGfdPlttKey plttKey;
    switch (*(u32 *) pResData) {
        case 0x30415642:
        case 0x30414D42:
        case 0x30414342:
        case 0x30415442:
        case 0x30505442:
            goto ok;
        case 0x30444D42:
        case 0x30585442: {
            texOk    = 1;
            tex4x4Ok = texOk;
            plttOk   = texOk;
            pTex     = func_020c3b50(pResData);
            if (pTex) {
                texSize    = func_020be3dc(pTex);
                tex4x4Size = func_020be3f0(pTex);
                plttSize   = func_020be51c(pTex);
                if (texSize) {
                    texKey = NNS_GfdAllocTexVram(texSize, 0, 0);
                    if (!texKey) {
                        texOk = 0;
                    }
                } else {
                    texKey = 0;
                }
                if (tex4x4Size) {
                    tex4x4Key = NNS_GfdAllocTexVram(tex4x4Size, 1, 0);
                    if (!tex4x4Key) {
                        tex4x4Ok = 0;
                    }
                } else {
                    tex4x4Key = 0;
                }
                if (plttSize) {

                    plttKey = NNS_GfdAllocPlttVram(plttSize, pTex->tex4x4Info.flag & NNS_G3D_RESPLTT_USEPLTT4, 0);
                    if (!plttKey) {
                        plttOk = 0;
                    }
                } else {
                    plttKey = 0;
                }
                if (!texOk || !tex4x4Ok || !plttOk) {
                    if (plttOk) {
                        NNS_GfdFreePlttVram(plttKey);
                    }
                    if (tex4x4Ok) {
                        NNS_GfdFreeTexVram(tex4x4Key);
                    }
                    if (texOk) {
                        NNS_GfdFreeTexVram(texKey);
                    }
                    return 0;
                }
                func_020be404(pTex, texKey, tex4x4Key);
                func_020be530(pTex, plttKey);
                func_020be418(pTex, 1);
                func_020be538(pTex, 1);
            }
            if (*(u32 *) pResData == 0x30444D42) {
                NNSG3dResMdlSet *pMdlSet = func_020c3b40(pResData);
                if (pTex) {
                    func_020bed00(pMdlSet, pTex);
                }
            }
            return 1;
        }
        default:
            goto error;
    }
ok:
    return 1;
error:
    return 0;
}
