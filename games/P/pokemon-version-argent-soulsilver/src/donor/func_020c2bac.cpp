/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* NSBXX_Model_SetAllMaterialFlags from https://github.com/DQIX/dqix-decomp src/NitroSDK/NSBXX/NSBXX.cpp (license: Unlicense),
 * reused by tools/donor_match.py */
typedef unsigned int uint32_t;
typedef signed int int32_t;
typedef unsigned short uint16_t;
typedef signed short int16_t;
typedef unsigned char uint8_t;
typedef signed int intptr_t;
typedef int32_t fix32_t;
typedef int16_t fix16_t;
typedef struct Vector3i {
    int32_t x;
    int32_t y;
    int32_t z;
} Vector3i;
typedef Vector3i Vector3fix;
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
extern "C" {
extern void func_020c2bac(NSBXXInternalModel *model, int value, unsigned int mask);
}
extern "C" void func_020c2bac(NSBXXInternalModel *model, int value, unsigned int mask) {
    unsigned int numMaterials            = model->numMaterials_;
    NSBXXModelMaterialData *materialList = model->GetMaterialData();

    for (unsigned int i = 0; i < numMaterials; i++) {
        NSBXXMaterial *material = materialList->GetMaterialByIndex(i);
        if (value) {
            material->flags_ |= mask;
        } else {
            material->flags_ &= ~mask;
        }
    }
}
