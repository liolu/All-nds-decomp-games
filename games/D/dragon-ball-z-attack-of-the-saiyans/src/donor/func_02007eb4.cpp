/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* EndFaceHandle from https://github.com/Eebit/fe11-us src/face.cpp (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef s32 BOOL;
struct ProcCmd;
typedef void *ProcPtr;
extern "C" {
struct ProcCmd {
    s16 opcode;
    s16 dataImm;
    void *dataPtr;
};
typedef void (*ProcFunc)(ProcPtr);
extern void func_0200816c(struct ProcCmd *script);
}
class ProcEx {
public:
    struct ProcCmd *proc_script;
    struct ProcCmd *proc_scrCur;
    ProcFunc proc_endCb;
    ProcFunc proc_idleCb;
    ProcFunc unk_14;
    ProcPtr proc_parent;
    ProcPtr proc_child;
    ProcPtr proc_next;
    ProcPtr proc_prev;
    void *unk_28;
    void *unk_2c;
    s16 proc_sleepTime;
    u16 proc_flags;
    u8 proc_mark;
    u8 proc_lockCnt;

    virtual void Init();
    virtual void Loop();
};
struct FaceInfo {
    char *fid;
    char *mpid;
    char *faceFile;
    char *sfImgFile;
    char *sfPalFile;
    u8 mouthFrames[5][2];
    u8 eyeFrames[2][2];
    unsigned char _pad_0x22[(0x24) - (0x22)];
};
class Face {
public:
    struct FaceInfo *pInfo;
    s32 chrBase;
    s32 palBase;
    union {
        u32 flags;
        struct {
            u32 unk_0c_0 : 2;
            u32 isFlipped : 1;
            u32 isSmiling : 1;
            u32 unk_0c_4_5 : 2;
            u32 unk_0c_6_7 : 2;
            u32 unk_0c_8_9 : 2;
            u32 unk_0c_a : 22;
        };
    };
    s16 xBase;
    s16 yBase;
    u8 unk_14;
    s8 alpha;
    s8 unk_16;
    s8 unk_17;
    s8 unk_18;
    unsigned char _pad_0x19[(0x1C) - (0x19)];
    s32 blinkCnt;
    s32 mouthState;
    s32 mouthCnt;

    Face() {};

    inline BOOL HasFaceInfo() {
        return this->pInfo != 0;
    }

    inline u32 GetPaletteIndex(void) {
        return this->palBase + (this->unk_17 >> 1);
    }

    inline BOOL CheckUnk15(void) {
        return (this->alpha != 0 && this->alpha != 0x10) ? 1 : 0;
    }

    char *GetFid(void);
    char *GetName(void);
    u16 *GetSprite(void);
    s32 GetX(s32, s32);
    void Init(s32, s32);
    void _020077b8(char *, s32, s32, u8);
    void _02007874(char *, s32, s32);
    void Update(void);
    void Draw(void);
    void Hide(void);
    void Clear(void);
    void LoadGfx(char *fidStr);
    void UpdateBlink(void);
    void DrawBlink(void);
    void UpdateMouth(void);
    void DrawMouth(void);
    void DrawMouthExt(s32 x, s32 y, s32);
    void _02008454(void);
    void _02008780(void);
};
class FaceHandle : public ProcEx {
public:
    struct Face *faces;

    FaceHandle();

    virtual ~FaceHandle();

    void InitFaces(void);
    void UpdateFaces(void);
    void DrawFaces(void);
    BOOL _02008908(void);
};
extern FaceHandle *data_020a0130;
extern struct ProcCmd data_020a0134[];
extern "C" void func_02007eb4(void) {
    func_0200816c(data_020a0134);
    data_020a0130 = 0;
    return;
}
