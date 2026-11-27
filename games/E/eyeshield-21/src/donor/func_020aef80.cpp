/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z31ConvertWorldToScreenCoordinatesPK8Vector3iPiS2_ from https://github.com/DQIX/dqix-decomp
 * src/NitroSDK/NSBXX/GeometryFifo.cpp (license: Unlicense), reused by tools/donor_match.py */
typedef unsigned long long uint64_t;
typedef signed long long int64_t;
typedef unsigned int uint32_t;
typedef signed int int32_t;
typedef signed short int16_t;
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
extern "C" {
extern void func_020b6ef0(const Vector3fix *inVec, const Matrix4x3 *inMat, Vector3fix *out);
extern int64_t func_020b79f8();
extern void func_020b7980(fix32_t x);
}
extern int ConvertWorldToScreenCoordinates(const Vector3fix *world, int *outX, int *outY);
struct RenderConfig {

    uint32_t magicCommands_0;

    uint32_t magicParam_4;

    Matrix4x4 projectionMatrix;

    uint32_t magicParam_48;

    Matrix4x3 viewMatrix;

    uint32_t magicCommands_7c;

    uint32_t lightVectors[4];

    uint32_t magicCommands_90;

    uint32_t diffuseAmbientArg;
    uint32_t specularArg;

    uint32_t polygonAttrArg;
    uint32_t viewportArg;

    uint32_t magicCommands_a4;

    uint32_t lightColors[4];

    uint32_t magicCommands_b8;

    Matrix4x3 objectRotationPosition;

    Vector3fix objectScale;

    uint32_t texImageParams;

    uint32_t flags;

    Matrix4x3 cachedInverseView;

    Matrix4x3 cachedWorldView;

    Matrix4x3 cachedInverseWorldView;

    char unk_190[0xb0];

    Vector3fix eyeVector;
    Vector3fix upVector;
    Vector3fix targetVector;

    static void Reset();

    static void SubmitToFifo();
    static void SetObjectPosition(Vector3fix *pos);
    static void SetObjectScale(Vector3fix *scale);

    static void SetLightVector(unsigned int light, fix16_t x, fix16_t y, fix16_t z);

    static void SetLightColor(unsigned int light, uint32_t rgb);

    static void SetDiffuseAmbientColors(uint32_t diffuseRGB, uint32_t ambientRGB, int setVertexColor);

    static void SetPolygonAttributes(unsigned int lights, unsigned int mode, unsigned int culling, unsigned int polygonID,
                                     unsigned int alpha, unsigned int miscFlags);

    static const Matrix4x3 *GetInverseViewMatrix();

    static const Matrix4x3 *GetCombinedWorldViewMatrix();

    static const Matrix4x3 *GetInverseCombinedWorldViewMatrix();

    static void GetViewport(int *left, int *top, int *right, int *bottom);
};
extern RenderConfig data_02129334;
int ConvertWorldToScreenCoordinates(const Vector3fix *world, int *outX, int *outY) {
    int success;
    Vector3fix viewVector;

    Matrix4x4 *proj = &data_02129334.projectionMatrix;

    func_020b6ef0(world, &data_02129334.viewMatrix, &viewVector);

    int64_t projectedW = (uint64_t) viewVector.x * proj->entries[3] + (int64_t) viewVector.y * proj->entries[7] +
                         (int64_t) viewVector.z * proj->entries[11];

    func_020b7980((fix32_t) (projectedW >> 12) + proj->entries[15]);

    int64_t productX = (uint64_t) viewVector.x * proj->entries[0] + (int64_t) viewVector.y * proj->entries[4] +
                       (int64_t) viewVector.z * proj->entries[8];

    fix32_t reducedX = (fix32_t) (productX >> 12) + proj->entries[12];

    int64_t productY = (uint64_t) viewVector.x * proj->entries[1] + (int64_t) viewVector.y * proj->entries[5] +
                       (int64_t) viewVector.z * proj->entries[9];

    fix32_t reducedY = (fix32_t) (productY >> 12) + proj->entries[13];

    int64_t largeInvW = func_020b79f8();

    fix32_t normalizedX = ((fix32_t) ((largeInvW * reducedX + (1u << 31)) >> 32) + 0x1000) / 2;
    fix32_t normalizedY = ((fix32_t) ((largeInvW * reducedY + (1u << 31)) >> 32) + 0x1000) / 2;

    success = 0;

    if (normalizedX < 0 || normalizedY < 0 || normalizedX > 0x1000 || normalizedY > 0x1000) {
        success = -1;
    }

    int left, top, right, bottom;

    RenderConfig::GetViewport(&left, &top, &right, &bottom);

    int width  = right - left;
    int height = bottom - top;

    *outX = left + ((normalizedX * width + 0x800) >> 12);
    *outY = (191 - top) - ((normalizedY * height + 0x800) >> 12);

    return success;
}
