/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CombatSprite_SetPosition from https://github.com/Yotona/twewy src/Combat/Core/CombatSprite.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct ObjResource {
    struct ObjResource *next;
    u16 flags;
    u16 refCount;
    struct {
        u16 mode : 1;
        u16 skipTransfer : 1;
        u16 unk_02 : 1;
        u16 hasSourceData : 1;
        u16 _reserved : 12;
    };
    s16 unk_0A;
    s32 unk_0C;
    s16 bitmapIndex;
    s16 unk_12;
    s32 vramOffset;
    void *loadedCharData;
    struct OamCellPiece *loadedCellPieces;
} ObjResource;
typedef struct PaletteResource {
    struct PaletteResource *next;
    u16 flags;
    u16 refCount;
    u32 unk_08;
    struct {
        u32 slotType : 3;
        u32 chunkSize : 5;
        u32 chunkCount : 5;
        u32 colorParam : 6;
        u32 _pad0C : 13;
    };
    s16 palIndex;
    u16 unk_12;
    s16 colorBias;
    u16 processMode;
    void *sourcePalette;
    void *blendPalette;
} PaletteResource;
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
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
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
typedef struct BinIdentifier {
    u32 id;
    char *path;
} BinIdentifier;
typedef struct Bin {
    struct Bin *next;
    u16 unk_04;
    u16 unk_06;
    u16 flags;
    u16 refCount;
    u32 id;
    u32 size;
    void *data;
    void *secondaryData;
    u32 unk_1C;
} Bin;
typedef struct PackEntry {
    u32 offset;
    u32 size;
} PackEntry;
typedef struct Pack {
    struct Pack *next;
    u16 refCount;
    u16 entryCount;
    Bin *loadedBin;
    BinIdentifier *binIden;
    FS_FileIdentifier fileIden;
    PackEntry *entries;
    u32 unk_1C;
} Pack;
typedef struct Data {
    struct Data *next;
    struct {
        u32 slotIndex : 4;
        u32 dataType : 4;
        u32 ownsData : 1;
        u32 isCompressed : 1;
        u32 isLoaded : 1;
        u32 _pad : 5;
        u32 refCount : 16;
    };
    void *buffer;
    s32 dataSize;
    s32 unk_10;
    BinIdentifier *binIden;
    s32 offset;
    Bin *bin;
    Pack *pack;
    s32 packIndex;
    s32 unk_28;
    s32 unk_2C;
} Data;
typedef struct {
    s32 updateSteps;
    s32 pieceCount;
    struct OamCellPiece *cellPieces;
    struct OamAffineParam *affine;
    s32 sortKey;
} SpriteFrameInfo;
typedef SpriteFrameInfo *(*SpriteFrameInfoCallback)(struct Sprite *sprite, s32 arg, s32 mode);
typedef struct UnkSmallInternal {
    char unk_00[0x6];
    u16 unk_06;
    char unk_08[0x4];
    u32 unk_0C_bits_0_2 : 3;
    u32 unk_0C_bits_3_31 : 29;
    s16 unk_10;
    s16 unk_12;
    char unk_14[0x4];
    struct UnkSmallInternal *unk_18;
} UnkSmallInternal;
typedef struct {
    u16 pieceOffset;
    u16 pieceCount;
    u16 charTileCount;
    u16 charByteSize;
} SpriteCell;
typedef union {
    struct {
        u16 unk_00 : 1;
        u16 unk_01 : 1;
        u16 unk_02 : 2;
        u16 unk_04 : 1;
        u16 unk_05 : 5;
        u16 unk_10 : 2;
        u16 unk_12 : 4;
    };
    u16 raw;
} Unk_Bitfield;
typedef struct Sprite {

    u32 bits_0_1 : 2;
    u32 bit_2 : 1;
    u32 bits_3_4 : 2;
    u32 animationMode : 2;
    u32 bits_7 : 1;
    u32 bits_8 : 1;
    u32 bits_9 : 1;
    u32 isPlaying : 1;
    u32 bit_11 : 1;
    u32 isSingleFrame : 1;
    u32 bit_13 : 1;
    u32 bit_14 : 1;
    u32 bits_15_18 : 4;
    u32 bit_19 : 1;
    u32 bits_20_25 : 6;
    u32 bits_26_29 : 4;
    u32 bits_30_31 : 2;

    u16 currentFrame;
    u16 loopFrame;
    s16 frameTimer;
    Unk_Bitfield unk_0A;
    s16 posX;
    s16 posY;
    s16 scaleX;
    s16 scaleY;
    s16 animIndex;
    s16 cellIndex;
    s16 *animData;
    SpriteCell *cellTable;
    SpriteFrameInfoCallback frameInfoCallback;
    void *owner;
    Data *resourceData;
    ObjResource *charData;
    PaletteResource *paletteData;
    void *unk34;
    struct OamCellPiece *lastCellPieces;
    UnkSmallInternal *unk3C;
} Sprite;
typedef struct {
    u16 charDataIndex;
    u16 paletteDataIndex;
    u16 frameDataIndex;
    s16 animDataIndex;
} SpriteAnimEntry;
typedef struct {
    Sprite sprite;
    SpriteAnimEntry *animTable;
    s16 animTableIndex;
    u16 flags46;
    s32 sortKey;
    struct OamAffineParam *affine;
    UnkSmallInternal *basePaletteSource;
    PaletteResource *basePalette;
    s32 paletteMode;
    s16 paletteTimer;
    char unk_5E[0x2];
} CombatSprite;
struct SpriteAnimEntry {
    u16 charDataIndex;
    u16 paletteDataIndex;
    u16 frameDataIndex;
    s16 animDataIndex;
};
extern void func_02067bf0(CombatSprite *cSprite, s32 posX, s32 posY);
typedef struct OamCellPiece {
    u16 charName;
    union {
        u16 attr0;
        struct {
            u16 yPos : 8;
            u16 affineMode : 2;
            u16 objMode : 2;
            u16 mosaic : 1;
            u16 colorMode : 1;
            u16 shape : 2;
        };
    };
    union {
        u16 attr1;
        struct {
            u16 xPos : 9;
            u16 affineParam : 5;
            u16 size : 2;
        };
        struct {
            u16 _pad0 : 10;
            u16 sortPriority : 2;
            u16 flipH : 1;
            u16 flipV : 1;
            u16 _pad1 : 2;
        };
    };
    union {
        u16 attr2;
        struct {
            u16 baseCharName : 10;
            u16 priority : 2;
            u16 colorParam : 4;
        };
    };
} OamCellPiece;
typedef struct OamAffineParam {
    s32 rotation;
    s32 scaleX;
    s32 scaleY;
    u16 unk_0C;
    u16 unk_0E;
} OamAffineParam;
void func_02067bf0(CombatSprite *cSprite, s32 posX, s32 posY) {
    cSprite->sprite.posX = posX;
    cSprite->sprite.posY = posY;
}
