/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_G2dGetUnpackedFont from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSystem/src/g2d/load/g2d_NFT_load.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef int BOOL;
extern void func_020befc4(void);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dBinaryFileHeader {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSG2dBinaryFileHeader;
typedef struct NNSG2dBinaryBlockHeader {
    u32 kind;
    u32 size;
} NNSG2dBinaryBlockHeader;
typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
    u8 glyphTable[];
} NNSG2dFontGlyph;
typedef struct NNSG2dFontWidth {
    u16 indexBegin;
    u16 indexEnd;
    struct NNSG2dFontWidth *pNext;
    NNSG2dCharWidths widthTable[];
} NNSG2dFontWidth;
typedef struct NNSG2dFontCodeMap {
    u16 ccodeBegin;
    u16 ccodeEnd;
    u16 mappingMethod;
    u16 reserved;
    struct NNSG2dFontCodeMap *pNext;
    u16 mapInfo[];
} NNSG2dFontCodeMap;
typedef struct NNSG2dFontInformation {
    u8 fontType;
    s8 linefeed;
    u16 alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    u8 encoding;
    NNSG2dFontGlyph *pGlyph;
    NNSG2dFontWidth *pWidth;
    NNSG2dFontCodeMap *pMap;
} NNSG2dFontInformation;
extern BOOL func_020aa7b8(void *pNftrFile, NNSG2dFontInformation **ppFont);
extern void func_020aa6c0(NNSG2dBinaryFileHeader *pHeader);
extern NNSG2dBinaryBlockHeader *func_020a35b8(NNSG2dBinaryFileHeader *pBinFileHeader, u32 signature);
inline BOOL NNSi_G2dIsBinFileSignatureValid(const NNSG2dBinaryFileHeader *pBinFile, u32 binFileSig) {
    if (pBinFile != ((void *) 0)) {
        if ((pBinFile->signature == binFileSig)) {
            return 1;
        }
    }

    return 0;
}
inline BOOL NNSi_G2dIsBinFileVersionValid(const NNSG2dBinaryFileHeader *pBinFile, u16 version) {
    if (pBinFile != ((void *) 0)) {
        if (pBinFile->version >= version) {
            return 1;
        }
    }

    return 0;
}
inline BOOL NNS_G2dIsBinFileValid(const NNSG2dBinaryFileHeader *pBinFile, u32 binFileSig, u16 version) {
    if (pBinFile != ((void *) 0)) {
        return NNSi_G2dIsBinFileSignatureValid(pBinFile, binFileSig) && NNSi_G2dIsBinFileVersionValid(pBinFile, version);
    }

    return 0;
}
BOOL func_020aa7b8(void *pNftrFile, NNSG2dFontInformation **ppRes) {

    BOOL isOldVer;

    if (NNS_G2dIsBinFileValid(pNftrFile, (u32) 'NFTR', (u16) (((u8) 1 << 8) | (u8) 0))) {
        isOldVer = 0;
    } else if (NNS_G2dIsBinFileValid(pNftrFile, (u32) 'NFTR', (u16) (((u8) 0 << 8) | (u8) 1))) {
        isOldVer = 1;
    } else {
        func_020befc4();
    }

    {
        NNSG2dBinaryFileHeader *pBinFile = (NNSG2dBinaryFileHeader *) pNftrFile;
        NNSG2dBinaryBlockHeader *pBinBlock;

        func_020aa6c0(pBinFile);

        pBinBlock = func_020a35b8(pBinFile, (u32) 'FINF');

        if (pBinBlock == ((void *) 0)) {
            *ppRes = ((void *) 0);
            return 0;
        }

        *ppRes = (NNSG2dFontInformation *) ((u8 *) pBinBlock + sizeof(*pBinBlock));

        if (isOldVer) {
            (*ppRes)->encoding               = (u8) (*ppRes)->defaultWidth.charWidth;
            (*ppRes)->defaultWidth.charWidth = 0;
        }
    }

    return 1 + isOldVer;
}
void func_020aa6c0(NNSG2dBinaryFileHeader *pHeader);
