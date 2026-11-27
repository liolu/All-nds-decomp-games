/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dSetupSoftwareSpriteCamera from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g2d_softsprite.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef int BOOL;
typedef s32 fx32;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef enum {
    GX_MTXMODE_PROJECTION      = 0,
    GX_MTXMODE_POSITION        = 1,
    GX_MTXMODE_POSITION_VECTOR = 2,
    GX_MTXMODE_TEXTURE         = 3
} GXMtxMode;
static inline void G3_ViewPort(int x1, int y1, int x2, int y2) {
    (*(REGType32v *) (0x04000000 + 0x580)) = ((u32) ((x1) | ((y1) << 8) | ((x2) << 16) | ((y2) << 24)));
}
static inline void G3_MtxMode(GXMtxMode mode) {
    (*(REGType32v *) (0x04000000 + 0x440)) = ((u32) ((mode) << 0));
}
extern void func_020b7350(void);
extern const VecFx32 data_02109304;
extern const VecFx32 data_02109310;
extern void func_020cfb08(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, BOOL draw, MtxFx44 *mtx);
extern void func_020cfb6c(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, BOOL draw, MtxFx43 *mtx);
static inline void OrthoW(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx) {
    func_020cfb08(t, b, l, r, n, f, scaleW, 1, mtx);
}
static inline void LookAt(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx) {
    func_020cfb6c(camPos, camUp, target, 1, mtx);
}
void func_020b7350(void) {
    G3_ViewPort(0, 0, 255, 191);
    OrthoW(0, 192 * ((fx32) 0x0000000000001000L), 0, 256 * ((fx32) 0x0000000000001000L), -1024 * ((fx32) 0x0000000000001000L),
           1024 * ((fx32) 0x0000000000001000L), 1024 * ((fx32) 0x0000000000001000L), ((void *) 0));
    (*(REGType32v *) (0x04000000 + 0x44C)) = 0;
    {
        VecFx32 camPos = {0, 0, 0};
        VecFx32 camUp  = data_02109304;
        VecFx32 target = data_02109310;
        LookAt(&camPos, &camUp, &target, ((void *) 0));
    }
    G3_MtxMode(GX_MTXMODE_POSITION);
}
