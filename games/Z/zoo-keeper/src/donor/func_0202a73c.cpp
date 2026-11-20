/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16GetCombatantByIDii from https://github.com/DQIX/dqix-decomp src/Combat/Overlay_0/GetCombatantByID.cpp (license:
 * Unlicense), reused by tools/donor_match.py */
struct PrimaryCombatStats {
    unsigned short currHP;
    unsigned short currMP;
    unsigned short maxHP;
    unsigned short maxMP;
    unsigned short attack;
    unsigned short defense;
    unsigned short agility;
    unsigned short unk;
    unsigned int charm : 10;
    unsigned int magicalMight : 10;
    unsigned int magicalMending : 10;
};
struct BaseCombatStats {
    char unk[0x2C];
    struct PrimaryCombatStats primaryStats;
};
struct ModifiableCombatStats {
    struct PrimaryCombatStats primaryStats;
    char unk1[0x44];
    signed int attackBuff : 3;
    signed int defenseBuff : 3;
    signed int agilityBuff : 3;
    signed int charmBuff : 3;
    signed int magicalMightBuff : 3;
    signed int magicalMendingBuff : 3;
};
struct AllocatorBase {
    struct VTable {
        typedef void *(*PFNAllocate)(AllocatorBase *, unsigned int);
        typedef void (*PFNFree)(AllocatorBase *, void *);

        PFNAllocate allocate;
        PFNFree free;
    };

    const VTable *pVTable;
};
struct SignedAllocatorHeader;
class SignedAllocatorList {
public:
    SignedAllocatorHeader *pFirst;
    SignedAllocatorHeader *pLast;
    unsigned short numElements;
    unsigned short signatureLength;

    void Initialize(unsigned short signatureLength);
    void DoInitialInsertion(SignedAllocatorHeader *what);

    void InsertAtEnd(SignedAllocatorHeader *what);
    void InsertAtStart(SignedAllocatorHeader *what);
    void InsertBefore(SignedAllocatorHeader *where, SignedAllocatorHeader *what);
    void Remove(SignedAllocatorHeader *what);

    SignedAllocatorHeader *ElementAfter(SignedAllocatorHeader *what);
    SignedAllocatorHeader *ElementBefore(SignedAllocatorHeader *what);

    SignedAllocatorHeader *GetNthElement(unsigned int n);
};
struct SignedAllocatorHeader {
    unsigned int signature;
    SignedAllocatorHeader *pPrevAllocator;
    SignedAllocatorHeader *pNextAllocator;
    SignedAllocatorList children;
    void *allocBegin;
    void *allocEnd;
    int clearFlags;
};
namespace AllocatorTree {
    extern void Remove(SignedAllocatorHeader *alloc);
}
class UnusedSignedAllocator {
public:
    struct Block {
        Block *pNext;
    };

    SignedAllocatorHeader header;
    Block *pFirstAvailableBlock;
    unsigned int blockSize;

private:
    static Block *PopFrontAndUpdate(Block **ppBlock);

public:
    void *Allocate();

    void Free(void *data);
};
class HMRFAllocator {
public:
    struct SavedState {
        int id;
        unsigned int startAddress;
        unsigned int endAddress;
        SavedState *pPrev;
    };

    struct Block {
        unsigned int startAddress;
        unsigned int endAddress;

        void *AllocateForward(unsigned int len, unsigned int alignment);
        void *AllocateBackward(unsigned int len, unsigned int alignment);
    };

public:
    SignedAllocatorHeader header;
    Block block;
    SavedState *newestState;

    static HMRFAllocator *CreateInRegion(void *start, void *end, unsigned short clearFlags);

    void FreeFront();
    void FreeBack();

    static HMRFAllocator *CreateAtLocation(void *where, unsigned int size, unsigned short clearFlags);
    void RemoveFromTree();

    void *Allocate(unsigned int len, int alignAndDirection);

    void Free(int flags);

    unsigned int GetMaxPossibleAllocation(int alignAndDir);

    bool SaveCurrentState(int id);
    bool RestoreState(int id);
};
class HPXEAllocator {
public:
    struct Block {

        unsigned short signature;

        unsigned short coalescenceData;

        unsigned int size;
        Block *pPrev;
        Block *pNext;
    };

    struct BlockList {
        Block *pFirst;
        Block *pLast;

        Block *RemoveAndGetPrevious(Block *block);

        Block *InsertAfter(Block *newBlock, Block *previous);
    };

    struct MemoryRangeDescription {

        unsigned int beginAddr;
        unsigned int endAddr;

        void PopulateFromBlock(Block *block);
        Block *CreateBlock(unsigned short signature);
    };

    struct BlockManager {
        BlockList freeBlocks;
        BlockList usedBlocks;
        unsigned short unknown_34;

        unsigned short blockSelectFlags;

        void *AllocateFromFreeBlock(Block *freeNode, unsigned int effStart, unsigned int length, unsigned short reversed);
        bool FreeMemoryRange(const MemoryRangeDescription &range);
    };

public:
    SignedAllocatorHeader header;
    BlockManager blocks;

private:
    static HPXEAllocator *CreateInRegion(void *start, void *end, unsigned short clearFlags);

    void *AllocateFromFront(unsigned int len, unsigned int align);
    void *AllocateFromEnd(unsigned int len, unsigned int align);

public:
    static HPXEAllocator *CreateAtLocation(void *where, unsigned int size, unsigned short clearFlags);
    void RemoveFromTree();

    void *Allocate(unsigned int len, int alignAndDir);
    void Free(void *data);

    unsigned int GetMaxPossibleAllocation(int alignAndDir);
};
struct AllocatorTypeA : public AllocatorBase {
    HMRFAllocator *pHMRFAllocator;

    int alignmentAndDir;
    int unknown;

    static void *Allocate(AllocatorBase *base, unsigned int len);
    static void Free(AllocatorBase *base, void *data);

    static const VTable s_vtable;
};
struct AllocatorTypeB : public AllocatorBase {
    HPXEAllocator *pHPXEAllocator;
    int alignmentAndDir;
    int unknown;

    static void *Allocate(AllocatorBase *base, unsigned int len);
    static void Free(AllocatorBase *base, void *data);

    static const VTable s_vtable;
};
class AllocatorUnion {
public:
    union {
        AllocatorBase base;
        AllocatorTypeA typeA;
        AllocatorTypeB typeB;
    } versions;

    void *Allocate(unsigned int len);
    void Free(void *data);

    void InitializeTypeB(HPXEAllocator *pAlloc, int alignAndDir);
    void InitializeTypeA(HMRFAllocator *pAlloc, int alignAndDir);
};
class SafeAllocator {
public:
    SignedAllocatorHeader *pSignedAlloc;
    AllocatorUnion allocUnion;

    static unsigned int GetLiveCount();

    void ResetAllocatorPointer();

    void CreateTypeB(void *bufferStart, unsigned int bufferSize, int alignAndDir);
    void CreateTypeA(void *bufferStart, unsigned int bufferSize);

    void *Allocate(unsigned int len);

    void *AllocateReversed(unsigned int len);

    void Free(void *data);

    void Reset();

    void Destroy();

    unsigned int GetSize() const;

    unsigned int GetMaxPossibleAllocation() const;

    unsigned int GetSizeWithLargestBlockRemoved() const;

    SignedAllocatorHeader *GetSignedAllocator() const;
};
struct GameResources {
    unsigned int flags_00;
    unsigned int flags_04;
    unsigned int flags_08;
    float mainBrightness;
    int mainBrightnessTarget;
    int mainBrightnessTimeRemaining;
    float subBrightness;
    int subBrightnessTarget;
    int subBrightnessTimeRemaining;
    bool mainBrightnessLocked;
    bool subBrightnessLocked;
    bool mainBrightnessDirty;
    bool subBrightnessDirty;
    bool allowBrightnessApply;

    char unk_29[0x38 - 0x29];

    SafeAllocator allocator_array_38[17];
    SafeAllocator lootableContainerAllocator_18c_;
    SafeAllocator allocator_113c;
    char unk_1150[0x70];
    SafeAllocator allocator_11c0;
    char unk_11d4[0x70];
    SafeAllocator allocator_1244;
    char unk_1258[0x70];

    struct Substruct_12C8 {
        char unk_0[4];

        SafeAllocator allocator_array_4[10];

        char unk_cc[0x460];

        SafeAllocator allocator_52c;
        SafeAllocator allocator_540;
        SafeAllocator allocator_554;

        char unk_568[0x70];

        SafeAllocator allocator_5d8;
    } substruct_array_12c8[4];

    char unknown_2a78[0x94];

    SafeAllocator allocator_2b0c;
    char unknown_2b20[0x70];

    struct Substruct_2b90 {
        char unk_0[0x88];
    } substruct_array_2b90[0x12];

    char unknown_3520[0x88];
    char unknown_35a8[0x120];

    void *unknown_ptr_36c8;
    void *unknown_ptr_36cc;
    void *unknown_ptr_36d0;

    char unk_36d4[4];

    void *unknown_ptr_36d8;

    unsigned char unknown_state_36dc[4];

    char unknown_36e0;

    unsigned char unknown_state_36e1[8];

    char unknown_36e9[0x13];

    void *unknown_ptr_array_36fc[7];
    void *unknown_ptr_3718;
    void *unknown_ptr_array_371c[8];

    struct Substruct_373c {
        char unk_0[0x48];
    } substruct_array_373c[0xc];

    struct Substruct_3a9c {

    } substruct_array_3a9c[4];

    void *unknown_ptr_array_3afc[0x33];

    struct Substruct_3bc8 {
        char unk_0[0x14];
    } substruct_array_3bc8[3];

    struct Substruct_3c04 {
        char unknown[0x28];
    } substruct_array_3c04[4];

    void *unknown_ptr_array_3ca4[4];
    char unknown_3cb4[0x3d4];

    void *unknown_ptr_array_4088[3];

    char unknown_4094[0x130];

    void *unknown_ptr_41c4;

    char unknown_41c8[0x158];
    unsigned int field_4320;

    char unknown_4324[4];

    void *unknown_ptr_4328;

    void *unknown_ptr_441c;
    char unk_4420[0x6c];

    struct TreasureMapLanguageDataOffsets *pTMapLanguageOffsets;

    char unk_4490[0x34];
    void *unknown_ptr_44c4;
};
struct TreasureMapLanguageDataOffsets {
    unsigned int bossRangesByQuality;
    unsigned int bossIDsAndWeights;
    unsigned int environs;
    unsigned int prefixRangesByMonsterRank;
    unsigned int prefixNames;
    unsigned int floorRangesByQuality;
    unsigned int unknown_18;
    unsigned int startingMonsterRanksByQuality;
    unsigned int mapLocations;
    unsigned int seeminglyChestRanksByMonsterRank;
    unsigned int localeRankRangesByFloorCount;
    unsigned int localeNames;
    unsigned int suffixRangesByBoss;
    unsigned int suffixNames;
    unsigned int grottoBossDrops;
    unsigned int legacyBossDrops;
    unsigned int legacyBossData;
};
typedef unsigned long long uint64_t;
typedef unsigned int uint32_t;
typedef signed int int32_t;
typedef unsigned short uint16_t;
typedef signed short int16_t;
typedef unsigned char uint8_t;
typedef signed int intptr_t;
typedef int CBool;
typedef int32_t fix32_t;
typedef int16_t fix16_t;
typedef struct Vector3i {
    int32_t x;
    int32_t y;
    int32_t z;
} Vector3i;
typedef Vector3i Vector3fix;
typedef union Matrix3x3 {
    Vector3fix rows[3];
    fix32_t entries[9];
} Matrix3x3;
typedef union Matrix4x3 {
    Vector3fix rows[4];
    fix32_t entries[12];
    struct {
        Matrix3x3 rotation;
        Vector3fix translation;
    };
} Matrix4x3;
typedef union Vector4fix {
    fix32_t entries[4];
    Vector3fix xyz;
    struct {
        fix32_t x;
        fix32_t y;
        fix32_t z;
        fix32_t w;
    };
};
typedef union Matrix4x4 {
    fix32_t entries[16];
    Vector4fix rows[4];
} Matrix4x4;
struct NSBXXContainer {
    uint32_t signature_;
    uint16_t byteOrderMark_;
    uint16_t version_;
    uint32_t fileSize_;
    uint16_t headerSize_;
    uint16_t numSubfiles_;
};
struct NSBXXNameList {
    uint8_t unknown_0_;
    uint8_t numEntries_;
    uint16_t totalSize_;

    uint16_t subheaderSize_;
    uint16_t offsetToDataStart_;

    struct SearchTreeEntry {
        uint8_t bitIndex_;
        uint8_t children_[2];
        uint8_t resourceIndex_;
    } treeRoot_8_;
    template <class T> inline T *GetEntryByIndex(unsigned int n) const volatile {
        if (this != 0 && n < numEntries_) {
            intptr_t dataStart = (intptr_t) this + offsetToDataStart_;
            uint16_t stride    = *(uint16_t *) dataStart;
            return (T *) (dataStart + 4 + stride * n);
        }
        return 0;
    }

    template <class T> inline T *GetEntryByIndex_notVolatile(unsigned int n) const {
        if (this != 0 && n < numEntries_) {
            const char *dataStart = (const char *) this + offsetToDataStart_;
            uint16_t stride       = *(uint16_t *) dataStart;
            return (T *) (dataStart + 4 + stride * n);
        }
        return 0;
    }

    template <class T> inline T *GetEntryFromu32Offset(unsigned int n) const {
        uint32_t *pOffset = GetEntryByIndex_notVolatile<uint32_t>(n);
        if (pOffset != 0) {
            return (T *) ((intptr_t) this + *pOffset);
        }
        return 0;
    }

    template <class T> inline T *GetEntryFromu32Offset_v2(unsigned int n) const {
        if (this != 0) {
            uint32_t *pOffset = GetEntryByIndex_notVolatile<uint32_t>(n);
            if (pOffset != 0) {
                return (T *) ((const char *) this + *pOffset);
            }
        }
        return 0;
    }

    inline const char *GetNameByIndex(unsigned int n) const {
        const uint16_t *dataStart;
        if (this != 0 && n < numEntries_) {
            dataStart = (const uint16_t *) ((const char *) this + offsetToDataStart_);
            return (const char *) ((const char *) dataStart + dataStart[1] + 16 * n);
        } else {
            return 0;
        }
    }

    inline const char *GetNameByIndexAndOffset(unsigned int n, unsigned int offsetInBuffer) const {
        if (this != 0 && n < numEntries_) {
            intptr_t dataStart = (intptr_t) this + offsetToDataStart_;
            intptr_t nameStart = dataStart + *(uint16_t *) (dataStart + 2);
            return (const char *) (nameStart + offsetInBuffer);
        }
        return 0;
    }

    inline void *GetDataStart() const {
        return (void *) ((intptr_t) this + offsetToDataStart_);
    }
    inline void *GetEntryv3Helper(unsigned int index, void *dataStart) const {
        return (void *) ((intptr_t) dataStart + 4 + *(uint16_t *) dataStart * index);
    }

    inline void *GetEntryv3(unsigned int index) const {
        return GetEntryv3Helper(index, GetDataStart());
    }

    inline void *GetEntryv3Safe(unsigned int index) const {
        return (this != 0 && index < numEntries_) ? GetEntryv3(index) : 0;
    }

    inline void *GetEntryFromPtrOffset(void *pOffset) const {
        return (void *) ((intptr_t) this + *(uint32_t *) pOffset);
    }

    inline void *GetEntryFromOffsetList_v3(unsigned int index) const {
        uint32_t *pOffset;
        return (this != 0 && (pOffset = (uint32_t *) GetEntryv3Safe(index))) ? GetEntryFromPtrOffset(pOffset) : 0;
    }
};
struct NSBXXBoneMatrix {
    uint16_t flags_;

    fix16_t m_11;

    struct Translation {
        fix32_t x;
        fix32_t y;
        fix32_t z;
    };
    struct PivotMatrixData {
        fix16_t a;
        fix16_t b;
    };

    struct RotationMatrixData {
        fix16_t entries[8];
    };

    struct Scaling {
        fix32_t x;
        fix32_t y;
        fix32_t z;

        fix32_t x_v2;
        fix32_t y_v2;
        fix32_t z_v2;
    };
};
struct ModelBoundingBox {

    int16_t xMin_;
    int16_t yMin_;
    int16_t zMin_;
    int16_t xSize_;
    int16_t ySize_;
    int16_t zSize_;
};
struct NSBXXMaterial {
    uint16_t unk_0;
    uint16_t size_;
    uint32_t paramDIF_AMB_;
    uint32_t paramSPE_EMI_;
    uint32_t paramPOLYGON_ATTR_;
    uint32_t maskPOLYGON_ATTR_;
    uint32_t paramTEXIMAGE_PARAMS_;

    uint32_t unk_18;
    uint16_t texturePaletteVRAMOffset_;
    uint16_t flags_;
    uint16_t width_;
    uint16_t height_;
    fix32_t xScale_;
    fix32_t yScale_;
    struct ExtensionData_Bit1 {
        fix32_t scaleX_;
        fix32_t scaleY_;
    };

    struct ExtensionData_Bit2 {
        fix16_t sine_;
        fix16_t cosine_;
    };

    struct ExtensionData_Bit3 {
        uint32_t translateX_;
        uint32_t translateY_;
    };

    struct ExtensionData_Bit13 {
        Matrix4x4 matrix_;
    };
};
struct NSBXXModelMaterialData {

    uint16_t texturePairingsOffset_;

    uint16_t palettePairingsOffset_;

    NSBXXNameList materialOffsetList_;

    inline struct NSBXXMaterial *GetMaterialByIndex(unsigned int n) const {
        if (this != 0) {
            uint32_t *materialOffset = (uint32_t *) materialOffsetList_.GetEntryByIndex_notVolatile<uint32_t>(n);
            if (materialOffset != 0) {
                return (NSBXXMaterial *) ((intptr_t) this + *materialOffset);
            }
        }
        return 0;
    }
};
struct NSBXXMesh {
    uint16_t unk_0;
    uint16_t size_;
    uint32_t unk_4;
    uint32_t gpuCommandsOffset_;
    uint32_t gpuCommandsLength_;

    inline const uint32_t *GetGPUCommands() const {
        return (uint32_t *) ((intptr_t) this + gpuCommandsOffset_);
    }
};
struct NSBXXInternalModel {
    uint32_t filesize_;
    uint32_t renderCommandsOffset_;
    uint32_t materialsOffset_;
    uint32_t meshesOffset_;
    uint32_t inverseBindsOffset_;
    uint8_t unk_14;

    uint8_t boneScalingMode_;
    uint8_t materialCallbackType_;
    uint8_t numBoneMatrices_;
    uint8_t numMaterials_;
    uint8_t numMeshes_;
    uint8_t unk_1a[2];
    fix32_t upScale_;
    fix32_t downScale_;
    uint16_t numVertices_;
    uint16_t numPolygons_;
    uint16_t numTriangles_;
    uint16_t numQuads_;
    ModelBoundingBox bounds_;
    int32_t maybeScale_;
    char unk_3c[4];
    NSBXXNameList boneList_;

    inline NSBXXModelMaterialData *GetMaterialData() const {
        if (this != 0 && materialsOffset_ != 0) {
            return (NSBXXModelMaterialData *) ((intptr_t) this + materialsOffset_);
        } else {
            return 0;
        }
    }

    inline NSBXXNameList *GetMeshListUnsafe() const {
        return (NSBXXNameList *) ((intptr_t) this + meshesOffset_);
    }

    inline NSBXXNameList *GetMeshListSafe() const {
        return (this != 0 && meshesOffset_ != 0) ? GetMeshListUnsafe() : 0;
    }

    inline NSBXXNameList *GetMeshList() const {
        if (this != 0 && meshesOffset_ != 0) {
            return (NSBXXNameList *) ((intptr_t) this + meshesOffset_);
        }
        return 0;
    }

    inline NSBXXMesh *GetMesh(unsigned int n) const {
        NSBXXNameList *meshList;
        if (this != 0 && meshesOffset_ != 0) {
            meshList = (NSBXXNameList *) ((intptr_t) this + meshesOffset_);
        } else {
            meshList = 0;
        }

        if (meshList != 0) {
            return meshList->GetEntryFromu32Offset<NSBXXMesh>(n);
        }
        return 0;
    }
};
struct NSBXXMdl {
    uint32_t signature_;
    uint32_t unknown_4;
    NSBXXNameList nameList_;

    NSBXXInternalModel *GetInternalModelByIndex(unsigned int n) const {
        NSBXXInternalModel *internalModel;
        if (this != 0) {
            uint32_t *pModelOffset = nameList_.GetEntryByIndex_notVolatile<uint32_t>(n);

            if (pModelOffset != 0) {
                internalModel = (NSBXXInternalModel *) ((intptr_t) this + *pModelOffset);
                return internalModel;
            }
        }
        return 0;
    }
};
struct NSBXXTex {
    uint32_t signature;
    uint32_t maybeTotalSize_4_;

    uint32_t block1VRAMLoadOffset_;
    uint16_t block1NumEightBytes_;
    uint16_t textureListOffset_;
    uint16_t maybeBlock1Flags_10_;
    char padding_12[2];
    uint32_t block1Offset_;

    uint32_t block2Or3VRAMLoadOffset_;
    uint16_t block2NumEightBytes_;
    uint16_t unk_1e;
    uint16_t maybeBlock23Flags_20_;
    char padding_22[2];
    uint32_t block2Offset_;
    uint32_t block3Offset_;

    uint32_t block4VRAMLoadOffset_;
    uint16_t block4NumEightBytes_;
    uint16_t maybeBlock4Flags_32_;
    uint16_t paletteListOffset_;
    uint16_t unk_36;
    uint32_t block4Offset_;

    NSBXXNameList textureList_;

    inline NSBXXNameList *GetPaletteList() const {
        if (this != 0 && paletteListOffset_ != 0) {
            return (NSBXXNameList *) ((intptr_t) this + paletteListOffset_);
        } else {
            return 0;
        }
    }
};
struct RenderCommandHandler;
typedef void (*RenderCommandHook)(RenderCommandHandler *);
struct BoneMatrixRenderData {
    union Scale {
        struct {
            fix32_t x;
            fix32_t y;
            fix32_t z;
        };
        fix32_t array[3];
    };

    unsigned int flags_;
    Scale scale_v0_;
    Scale scale_v1_;
    Scale scale_v2_;
    Matrix3x3 rotationMatrix_;
    Vector3fix translate_;
};
struct MaterialRenderData {

    unsigned int flags_;
    unsigned int paramDIF_AMB_;
    unsigned int paramSPE_EMI_;
    unsigned int paramPOLYGON_ATTR_;
    unsigned int paramTEXIMAGE_PARAMS_;
    unsigned int texturePaletteBase_;
    fix32_t extensionScaleX_;
    fix32_t extensionScaleY_;
    fix16_t rotationSine_;
    fix16_t rotationCosine_;
    fix32_t translateX_;
    fix32_t translateY_;
    unsigned short materialWidth_;
    unsigned short materialHeight_;
    fix32_t materialxScale_;
    fix32_t materialyScale_;
};
struct AnimationData;
struct ModelRenderContext {

    unsigned int flags_;
    NSBXXInternalModel *internalModel_;
    AnimationData *materialAnimations_;

    bool (*pfnProcessMaterialAnimations_)(MaterialRenderData *, AnimationData *, unsigned int);
    AnimationData *jointAnimations_;

    bool (*pfnProcessJointAnimations_)(BoneMatrixRenderData *, AnimationData *, unsigned int);
    AnimationData *visibilityAnimations_;

    bool (*pfnProcessVisibilityAnimations_)(int *, AnimationData *, unsigned int);
    void (*renderCommandHook_)(RenderCommandHandler *);
    unsigned char renderCommandHookCommandID_;
    unsigned char renderCommandHookStage_;
    char padding_26[2];
    void (*preRenderCallback_)(RenderCommandHandler *);
    char unk_2c[4];
    uint8_t *renderCommandList_;
    BoneMatrixRenderData *boneMatrixRenderDataArray_;
    MaterialRenderData *materialRenderDataArray_;

    unsigned int animatedMaterials_[2];
    unsigned int animatedBoneMatrices_[2];
    unsigned int animatedVisibilityConditions_[2];
};
struct RenderCommandHandler {
    uint8_t *instructionPointer_;
    ModelRenderContext *modelContext_;
    unsigned int flags_;
    RenderCommandHook hooks_[32];
    unsigned char hookStages_[32];
    unsigned char command2Arg1_;
    unsigned char boundMaterial_;
    unsigned char currentBoneMatrix_;
    char padding_af;
    MaterialRenderData *pMaterialRenderData_;
    BoneMatrixRenderData *pBoneMatrixRenderData_;
    int *pCommand2Word_;
    unsigned int materialBitfield_[2];

    unsigned int boneMatrixBitfield_[2];
    unsigned int invBindBitfield_[2];
    NSBXXNameList *boneList_;
    NSBXXModelMaterialData *modelMaterials_;
    NSBXXNameList *meshList_;
    fix32_t upScale_;
    fix32_t downScale_;

    void (*boneMatrixRenderDataScalePopulateProc_)(BoneMatrixRenderData *, NSBXXBoneMatrix::Scaling *boneMatrixScaleData,
                                                   uint8_t *ip, int boneMatrixFlags);
    void (*boneMatrixRenderDataSubmitProc_)(BoneMatrixRenderData *);
    void (*textureMatrixCreateProc_)(MaterialRenderData *);
    MaterialRenderData scratchMaterialRenderData_;
    BoneMatrixRenderData scratchBoneMatrixRenderData_;
    int scratchCommand2Word_;
};
struct AnimationData {
    typedef void (*Callback)(void *, AnimationData *, int);

    fix32_t time_;

    fix32_t weight_;
    void *pRawData_;

    void (*callback_)(void *renderData, AnimationData *animData, int arg);
    AnimationData *pNext_;
    NSBXXTex *pTex0_;
    unsigned char unk_18;
    unsigned char numEntries_;
    unsigned short entries_[64];
};
class Model3D;
class Animation3D {
public:
    NSBXXContainer *pRawFile_;
    AnimationData *pAnimData_;
    fix32_t playbackSpeed_;

    unsigned int flags_;

    void DefaultInitialize();

    bool SetRawFile(NSBXXContainer *file);

    bool CreateData(Model3D *attachedModel, SafeAllocator *alloc, Model3D *alternateModel);

    void AdvanceTimer(fix32_t dt);

    AnimationData *GetBasicAnimationData();
    void SetAnimationTime(fix32_t);
};
class Model3D {
public:
    enum TextureStagingMode {
        TextureStagingMode_Normal       = 0,
        TextureStagingMode_HighPriority = 1,
        TextureStagingMode_Immediate    = 2
    };

    ModelRenderContext renderContext_;
    NSBXXInternalModel *rawInternalModel_;
    NSBXXTex *rawTEX_;
    void *rawBMD_;
    unsigned int rawBMDFileSize_;

    fix32_t xMax_;
    fix32_t yMax_;
    fix32_t zMax_;
    fix32_t xMin_;
    fix32_t yMin_;
    fix32_t zMin_;
    fix32_t xMiddle_;
    fix32_t maybeYBase_;
    fix32_t zMiddle_;
    fix32_t maybeApproxRadius_;
    fix32_t copyOfHeight_;
    BoneMatrixRenderData *pBoneMatrixRenderData_;
    MaterialRenderData *pMaterialRenderData_;
    int unknown_98_;
    int unknown_9c_;
    unsigned short unknown_a0_;
    short alpha_;
    short imageStagingTaskID_;
    short paletteStagingTaskID_;
    int unknown_flags_a8_0_ : 1;
    int unknown_flags_a8_1_ : 1;
    int unknown_flags_a8_2_ : 1;
    void Clear();

    void Func0207e2e0();
    void LoadFromFile(const char *path, AllocatorUnion *alloc, TextureStagingMode stagingMode);

    void CopyAndProcessRawFile(AllocatorUnion *alloc, const void *data, unsigned int len, TextureStagingMode stagingMode);
    void SetAndProcessRawFile(void *data, unsigned int len, TextureStagingMode stagingMode);

    void CopyRawFile(AllocatorUnion *alloc, const void *data, unsigned int len);
    void SetRawFile(void *rawData, unsigned int length);
    void ClearRawFileCache();
    void ProcessRawFile(TextureStagingMode stagingMode);

    bool Draw(bool applyClipping);

    bool DrawMeshWithMaterial(bool applyClipping, unsigned int materialIdx, unsigned int meshIdx, int bind);
    int TestVisible();

    int GetBoneIndex(const char *boneName);

    void ApplyTexturesFromModel(Model3D *otherModel);
    NSBXXMdl *GetMDL0();
    void RemoveTextures();

    void CreateBoneMatrixAndMaterialArrays(SafeAllocator *alloc, int flags);
    void StoreBoneMatrixAndMaterialArrayPointers();

    void SetAlpha(int alpha);
    int GetAlpha() const;

    void AddAnimation(Animation3D *anim);
    void RemoveAnimations();

    void SetBoneMatrixRenderData(BoneMatrixRenderData *);
    BoneMatrixRenderData *GetBoneMatrixRenderData();

    void ApplyRenderConfigMaterialDiffuseColor();

    void SetMaterialDiffuseColor(unsigned int rgb);

    NSBXXTex *GetTEX0();
    void SetTEX0(NSBXXTex *tex);

    void RestageTexturePalette();
    void RestageTextureImage();
};
class BCFG {
public:
    struct SizeCEntry {
        unsigned short unk_0;
        unsigned short animationIndex;
        short unk_4;
        char unk_6[2];
        SizeCEntry *pNext;
    };

    struct AltSizeCEntry {
        unsigned short maybeSoundEffect;
        unsigned short animationIndex;
        fix16_t triggerTime;
        char unk_6[2];
        AltSizeCEntry *pNext;
    };

    struct AnimationRecord {
        char name[16];
        fix32_t startTime;
        fix32_t endTime;

        fix32_t frameRate;
        SizeCEntry *firstSizeC;
        AltSizeCEntry *firstAlt;
    };

    AnimationRecord *animations_;
    unsigned short maybeAnimationCount;
    unsigned short maybeAnimationCapacity;
    SizeCEntry *sizeCEntries_;
    unsigned short sizeCCapacity_;
    unsigned short sizeCCount_;

    AltSizeCEntry *altSizeCEntries_;
    unsigned short altSizeCCount_;
    unsigned short altSizeCCapacity_;
    unsigned short unknown_18;
    char unk_1a[2];
    char *maybeRootBoneName_;

    void Reset();
    void LoadFromScript(SafeAllocator *alloc, const void *data, unsigned int length);

public:
    void AllocateAnimationEntries(SafeAllocator *alloc, int count);
    void InsertAnimationRecord(const AnimationRecord *entry);
    int SearchAnimationByName(const char *name);
    AnimationRecord *GetAnimationRecord(int idx);
    int GetNumAnimations() const;

    void AllocateSizeCEntries(SafeAllocator *alloc, int count);
    void InsertSizeCEntry(const SizeCEntry *entry);

    void AllocateAltSizeCEntries(SafeAllocator *alloc, int count);
    void InsertAltSizeCEntry(const AltSizeCEntry *entry);

    void MaybeSetRootBoneName(SafeAllocator *alloc, const char *name);
    const char *MaybeGetRootBoneName();
};
struct AlphaTween {

    uint16_t current;

    uint16_t target;
    float changePerTick;

    float GetTarget() const;
    void SetCurrentValue(float to);
    void Reset();

    float Advance(int numTicks);

    void ConfigureTween(int targetAlpha, int duration);
};
struct AnimationPackage {

    unsigned int animationType : 1;
    unsigned int packageID : 8;
    BCFG bcfgData;
    struct Reference {
        int count;
        Animation3D *data;
    } *pAnim3Ds;
    AnimationPackage *pNext;

    void Reset();
};
struct ObjectArchiveLoadInfo {
    int unk_0;
    const void *fileData;
    int unk_8;
    SafeAllocator *allocator;
    int unk_10;
    int unk_14;
    int unk_18;
    int packageID;
};
class Object3D {
public:
    unsigned short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    unsigned short unknown_6_;
    Model3D *pModel_;
    AnimationPackage *loadedAnimationPackageList_;
    AnimationPackage *activeAnimationPackage_;
    BCFG::AnimationRecord *activeAnimationRecord_;
    char activeAnimationIndex_;
    unsigned char animationFlags_;
    unsigned char unk_1a[2];

    fix32_t animationTime_;
    fix32_t prevFrameAnimationTime_;
    fix32_t normalizedAnimationTime_;
    fix32_t prevFrameNormalizedAnimationTime_;

    struct AnimationBlend {
        AnimationPackage *source;
        fix32_t sourceTime;
        unsigned short unk_8;
        short blendWeight;
        unsigned int blendTimeRemaining;

        void Clear();
    } priorAnimationBlend_;
    fix32_t defaultAnimBlendDuration_;

    unsigned char animationEnded_ : 1;
    unsigned char unknown_40_bit_1_ : 1;
    unsigned char animationReachedEnd_ : 1;

    unsigned char inheritedAlpha_ : 5;
    unsigned char ownAlpha_ : 5;
    unsigned char drawSuccessful_ : 1;

    unsigned char noTextureTimer_;
    char padding_43;
    Vector3fix position_;

    Vector3fix rotation_;
    fix16_t scale_[3];
    char padding_62[2];
    fix32_t radius_;
    fix32_t height_;
    unsigned int flags_;
    AlphaTween alphaTransition_;

    unsigned short unknown_78_;
    unsigned short unknown_7a_;
    fix16_t animationPlaybackSpeed_;
    fix16_t targetAnimationPlaybackSpeed_;
    unsigned short animationPlaybackSpeedTransitionRemainingTicks_;
    char padding_82[2];

    Vector3fix maybeShadowPosition_;
    short shadowBoneIndex_;

    short attachmentBoneIndex_;

    Object3D *pPrevChild_;
    Object3D *pNextChild_;
    short unknown_9c_;
    char unknown_9e_;
    char padding_9f;

    fix16_t alphaScaleFactor_;
    char unk_a2[2];
    unsigned int alternativeTexturePaletteOffset_;

    struct TrackedBoneMatrix {
        unsigned short boneIndex;
        Matrix4x3 matrix;
        TrackedBoneMatrix *pNext;
    } *trackedBoneMatrixList_;

    typedef void (Object3D::*AnimationAdvanceProc)();

public:
    void Initialize();

    void AdvanceEffects();

    void AdvanceAnimations();

    void AdvanceAnimations_v0();
    void AdvanceAnimations_v1();

    void ApplyAnimations(Object3D *otherObj);
    void ApplyTextures();
    void PopulateRenderConfigWorld();

    bool IsVisibleAndAdjustFlags();

    bool Draw(bool applyClipping);

    bool DrawSimple(bool applyClipping);

    bool DrawSimple2(bool applyClipping);

    bool DrawMeshWithMaterial(bool applyClipping, int material, int mesh, int bind);

    bool DrawMeshWithMaterialSimple(bool applyClipping, int material, int mesh, int bind);

    bool DrawSimple3(bool applyClipping);

    void MaybeUpdateBonePositions();

    void SendTransformToFifo();
    void SendTranslationToFifo();
    void SendRotationToFifo();
    void SendScalingToFifo();

    void SetModelFromFileCopy(SafeAllocator *alloc, const void *modelFile, unsigned int modelLength,
                              Model3D::TextureStagingMode stagingMode);

    bool SetModelFromFile(SafeAllocator *alloc, void *modelFile, unsigned int modelLength,
                          Model3D::TextureStagingMode stagingMode);

    void LoadType0AnimationFromFile(int slot, const char *filename, SafeAllocator *alloc);

    void LoadType0AnimationFromFileInMemory(int slot, SafeAllocator *alloc, const void *data, unsigned int len);
    void LoadType0AnimationFromPersistentMemory(int slot, SafeAllocator *alloc, void *data, unsigned int len);

    void LoadType0AnimationPackageFromBCFGScript(const char *filename, SafeAllocator *alloc);
    AnimationPackage *CreateType0AnimationPackage(SafeAllocator *alloc);
    void LoadType0AnimationPackageFromBCFGScript(SafeAllocator *alloc, const void *script, unsigned int len);

    bool LoadFromCHRArchive(ObjectArchiveLoadInfo *loadInfo);
    bool InternalLoadFromCHRArchive(ObjectArchiveLoadInfo *loadInfo);

    bool LoadFromCCHROrCMOTArchive(ObjectArchiveLoadInfo *loadInfo, int (*animCallback)(BCFG::AnimationRecord *));

    void ShallowCloneTo(Object3D *out);
    void ShallowCloneModelAndAnimationsTo(Object3D *out);

    bool MaybeSetRegularAnimation(const char *animName, int flags);
    bool MaybeSetBCFGAnimation(int index, int flags);
    void StopCurrentAnimation();

    int HasAnimationStopped() const;

    int HasAnimationReachedEnd() const;

    int GetOffset40Bit1() const;

    void SetCurrentAnimationTime(fix32_t time);
    fix32_t GetCurrentAnimationTime() const;

    void SetNormalizedAnimationTime(fix32_t normTime);

    void TransitionInheritedAlpha(int alpha, int duration);

    void SetFlag16();
    void ClearFlag16();

    void Destroy();
    void RemoveAnimationPackageByID(int id);
    void RemoveAllAnimationPackages();

    bool IsVisible() const;
    void MakeVisible();
    void MakeHidden();
    void SetInheritedAlpha(int alpha);
    int GetInheritedAlpha() const;
    int GetOwnAlpha() const;
    int GetCombinedAlpha() const;

    BCFG *GetCurrentAnimationConfig();

    void SetScale(const Vector3fix *vec);
    void SetScale(fix32_t x, fix32_t y, fix32_t z);
    Vector3fix GetScale() const;

    void SetDiffuseColor(unsigned int bgrCol);
    void UseRenderConfigDiffuseColor();

    BCFG::AnimationRecord *GetLoadedAnimationRecord(const char *name);
    AnimationPackage *GetAnimationPackageByIndex(int idx);

    void SetField06(unsigned short value);
    unsigned short GetField06() const;
    void SetField78(unsigned short value);
    unsigned short GetField78() const;
    void SetField7a(unsigned short value);
    unsigned short GetField7a() const;

    void SetAnimationPlaybackSpeed(fix16_t speed, int transitionTime);

    void StageTextureData();
    void ComputeShadowPosition();

    Vector3fix MaybeGetShadowSource() const;

    void SetHeight(fix32_t height);
    fix32_t GetHeight() const;
    void SetRadius(fix32_t radius);
    fix32_t GetRadius() const;

    bool IsTransitioningAnimations() const;

    void SkipAnimationTransition();

    void ClearChildListData();

    void Attach(Object3D *toParent, short boneIndex);

    void Attach(Object3D *toParent, const char *boneName);

    void Detach();
    void DrawChildren(Object3D *topLevelObject);

    bool IsChild() const;
    bool IsParent() const;

    int GetFlag(int mask) const;
    void EnableFlag(int mask);
    void DisableFlag(int mask);
    int GetFlags() const;

    void SetNoTextureTimer(int timer);

    void SetTexturePaletteOffset(unsigned int offset);
    unsigned int GetTexturePaletteOffset() const;

    void SetAlphaScaleFactor(fix32_t value);
    fix32_t GetAlphaScaleFactor() const;

    void SetField9e(unsigned char value);
    unsigned char GetField9e() const;

    void TrackBone(TrackedBoneMatrix *trackingEntry);
    void UntrackBoneByIndex(int idx);
    void UntrackAllBones();
    TrackedBoneMatrix *GetTrackedBoneMatrix(int idx);

    void EnableBoneTracking();
    Vector3fix GetPointInFront(fix32_t distance) const;
};
enum TimeOfDay {
    TimeOfDay_Invalid = -1,
    TimeOfDay_Night   = 0,
    TimeOfDay_Morning = 1,
    TimeOfDay_Day     = 2,
    TimeOfDay_Evening = 3
};
enum eDiscoveryState {
    DiscoveryState_Invalid      = 0,
    DiscoveryState_Undiscovered = 1,
    DiscoveryState_Discovered   = 2,
    DiscoveryState_Cleared      = 3
};
enum eTreasureMapType {
    TreasureMapType_Invalid = 0,
    TreasureMapType_Regular = 1,
    TreasureMapType_Legacy  = 2
};
class TreasureMapMetadata {

public:
    unsigned char DiscoveryStateAndMapTypeAndUnknown;

    char DiscoveredBy[10];

    char ClearedBy[10];
    unsigned char Location;

    unsigned char TreasureDiscoveryFlags;
    unsigned char QualityOrLegacyBossID;

    unsigned char LegacyBossLevel;
    unsigned short SeedOrMinTurns;

    void InitialiseAsNonLegacyMap(unsigned int quality, int seed);

    void InitialiseAsLegacyBossMap(unsigned int bossID, unsigned int level);

    void SetDiscoveryState(eDiscoveryState state);
    eDiscoveryState GetDiscoveryState() const;

    void SetMapType(eTreasureMapType type);
    eTreasureMapType GetMapType() const;

    void SetInitialByteUnknownBit();
    void ClearInitialByteUnknownBit();
    bool GetInitialByteUnknownBit() const;
};
struct DetailedTreasureMapData;
struct GrottoStruct {
    unsigned char unknown_0[5];

    unsigned char activeEnviron;
    unsigned char activeStartingMonsterRank;
    unsigned char activeMapLevel;

    unsigned char unknown_8, unknown_9;
    char unk_a[2];

    unsigned short entranceZoneId;
    int entranceX, entranceY, entranceZ;
    char activeMapImageName[16];

    TreasureMapMetadata activeMapData;
    char unk_88[0x7c];
    unsigned char numMaps;
    char padding[1];
    TreasureMapMetadata maps[99];

    void LoadActiveMetadataFromDetailed(DetailedTreasureMapData *detail);
};
class GameState;
class GameObject {
public:
    Object3D obj3D_;
    char unk_ac[0x134 - 0xac];
    BaseCombatStats *baseStats_;
    ModifiableCombatStats *currentStats_;
};
class GameState {
public:
    GameResources *pResources_;
    char unk_4[4];
    GameObject *objects_[0xe9];
    int protagonistObjectIndex_;
    void *unknown_3b0_;
    unsigned int effectiveDeltaTimeMilliseconds_;
    unsigned int trueDeltaTimeMilliseconds_;
    fix16_t gameSpeed_;
    fix32_t animationDeltaTime_;
    unsigned int numTicks_;
    unsigned int currentNumTicks_;
    float dayTimer_;
    float dayLength_;
    float daySpeed_;
    CBool dayTimerRunning_;
    TimeOfDay timeOfDay_;
    float unknown_3e0_;
    char unk_3e4[4];
    uint64_t mainTimestamp_;
    uint64_t altTimestamp_;

    unsigned char unknownObjectIndex_397c_;
    char unk_397d[0x63e0 - 0x397d];

    unsigned char *treasureMapLanguageData_;
    GrottoStruct grottoInfo_;

    char unk_6fc0[0x7ff4 - 0x6fc0];

public:
    static GameState *GetInstance();

    GameObject *GetGameObjectByIndex(int idx);

    GameObject *GetMaybeWanderingMonsterByIndex(int idx);
    GameObject *GetProtagonist();

    GameObject *GetUnknownGameObject();

    GameObject *GetPartyMemberByIndex(int idx);

    GameObject *GetMaybeFieldMonsterByIndex(int idx);

    GameObject *GetCombatantByIndex(int idx);

    void CalculateDeltaTime(uint64_t microseconds);

    unsigned int GetEffectiveDeltaTime() const;

    unsigned int GetTrueDeltaTime() const;

    fix32_t GetAnimationDeltaTime() const;

    unsigned int GetTickCount() const;

    void SetGameSpeed(fix32_t speed);

    fix32_t GetGameSpeed() const;

    void AdvanceDayTimer();

    float GetDayTimer() const;

    void SetDayTimer(float to);

    void SetDayTimerRunning(CBool to);

    TimeOfDay GetTimeOfDay() const;

    void SetTimeOfDay(TimeOfDay);

    bool IsMorningDayOrEvening() const;

    unsigned char *GetTreasureMapLanguageData();
    void SetTreasureMapLanguageDataPtr(unsigned char *);

    GrottoStruct *GetGrottoStruct();
};
struct GameObject *GetCombatantByID(int unused, int id) {
    return GameState::GetInstance()->GetCombatantByIndex(id);
}
