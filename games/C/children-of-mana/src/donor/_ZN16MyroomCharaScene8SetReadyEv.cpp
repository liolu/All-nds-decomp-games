/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _ZN16MyroomCharaScene8SetReadyEv from https://github.com/tylzars/bakubrawlers src/08_Myroom/Scene/MyroomCharaScene.cpp
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef s8 unk8;
typedef s32 BOOL;
struct Vec2s {
    s16 x;
    s16 y;
};
class SceneBase;
struct UnkStruct_SceneRequest {
    u8 pad_0x00[(0x12) - (0x00)];
    u16 mRequest;
};
struct UnkStruct_SceneNode {
    u8 pad_0x00[(0x08) - (0x00)];
    UnkStruct_SceneRequest *mRequest;
};
struct UnkStruct_SceneList {
    UnkStruct_SceneNode *mHead;
};
struct SceneContext;
struct SceneInfo {
    union {
        u16 mUnk_00;
        u8 mStep;
    };
    u8 mState;
    u8 mMenuResult;
    s8 mPrevSelection;
    s8 mSelection;
    u8 mUnk_06;
    u8 mScrollRemaining;
    u8 mScrollDir;
    u8 mPage;
    u8 mUnk_0a;
    u8 mUnk_0b;
};
struct SceneContext {
    SceneBase *mScene;
    SceneContext *mPrev;
    SceneContext *mNext;
    union {
        SceneContext *mParent;
        UnkStruct_SceneList *mList;
    };
    u16 mOrder;
    s16 mRequest;
    SceneInfo mInfo;
    u8 pad_0x20[(0x40) - (0x20)];
};
class SceneBase {
public:
    u8 mFinished;
    SceneContext *mContext;

    SceneBase(u32 order, u32 mode);

    virtual ~SceneBase() {}
    virtual void Update() = 0;

    u8 IsFinished() {
        return (mFinished == 1) & 1;
    }

    void RequestScene(int scene) {
        SceneContext *context                        = mContext;
        context->mParent->mScene->mContext->mRequest = scene;
    }
};
class CellAnimation;
class MessageWindow;
class MyroomStatusScene;
class SelectWindow;
struct MessageFile;
class MyroomCharaScene : public SceneBase {
public:
    MyroomStatusScene *mStatus;
    u8 mState;
    s8 mTab;
    s8 mShownTab;
    u8 pad_0x13[(0x14) - (0x13)];
    u32 mCellsVisible[2];
    u32 mCellVisible;
    SelectWindow *mWindow;
    CellAnimation *mCellAnims[2];
    CellAnimation *mCell;
    u32 mResult;
    MessageFile *mStoryCharaNameMessages;
    MessageFile *mMessages;
    void *mTextBuffers[7];
    void *mGlyphBuffer;
    u32 mTextBufferSize;
    u32 mGlyphCount;
    u32 mLinesVisible[7];
    u8 mPage;
    u8 mPageCount;
    u8 mList[17];
    u8 mListCount;
    MessageWindow *mMessageWindow;

    MyroomCharaScene();

    virtual ~MyroomCharaScene();
    virtual void Update();

    void Cleanup();
    void FreeCells();
    void SetReady();
    void InitDisplay();
    void LoadSubGraphics();
    void LoadMainGraphics();
    void SetupTabCells();
    void Draw();
    void DrawWindow();
    void DrawCells();
    void DrawCell();
    u8 func_ov008_02224a4c();
    void LoadText();
    void ClearTextBuffers();

    void PrintValue(u32 line, u32 value, u8 digits, s16 x, s16 suffix);
    void PrintLine(u32 line, u32 kind);
    void DrawText();
    void FreeText();
    void PrintLines();

    void BuildList();
    void RefreshPageButtons();
};
struct SpriteScreen;
struct CellAnimCel {
    void *mOam;
    u16 mOamCount;
    u16 mDuration;
    s32 mRotation;
    s32 mScaleX;
    s32 mScaleY;
    s32 mOffsetX;
    s32 mOffsetY;
};
struct CellAnimFrame {
    CellAnimCel *mCels;
    u32 mMode;
    u32 mStartFrame;
    float mSpeed;
    u32 mFrameCount;
};
struct CellAnimOam {
    u16 mUnk_00;
    u16 mUnk_02;
    u16 mChar;
    u8 pad_0x06[(0x0c) - (0x06)];
};
struct CellAnimData {
    u16 mUnk_00;
    u16 mNumFrames;
    CellAnimFrame *mFrames;
    CellAnimCel *mCels;
    CellAnimOam *mOams;
};
struct CellAnimFile {
    CellAnimData *mData;

    CellAnimFile(const char *path, u16 unk2, u16 unk3);
    ~CellAnimFile();
};
class CellAnimation {
public:
    CellAnimFrame *mFrames;
    s32 mStep;
    s32 mTimer;
    u16 mCharBase;
    u8 mAnimIndex;
    u8 mFrameIndex;
    u8 mMode;
    s8 mPaletteBase;
    u8 mFinished;
    u8 pad_0x13[(0x14) - (0x13)];
    CellAnimFile *mFile;

    CellAnimation(const char *path, u32 unk2, u16 unk3, u32 unk4);
    CellAnimation(CellAnimFile *file, u32 unk2);
    ~CellAnimation();
    void Update();
    void Draw(u8 unk1, s16 x, s16 y, u8 unk4);
    void ResetAnimation();
    void SetAnimation(u8 index) {
        mAnimIndex = index;
        ResetAnimation();
    }
    void SetMode(u32 unk1);
    void Rewind();
    void DrawFrame(u8 unk1, u8 frame, s16 x, s16 y, u8 unk5);
    void Init(CellAnimFrame *entries, u32 index);
    void DrawToScreen(SpriteScreen *screen, s32 x, s32 y, u8 unk4);
    void DrawFrameToScreen(SpriteScreen *screen, u32 frame, s32 x, s16 y, u8 unk5);

    void DrawTransformedToScreen(SpriteScreen *screen, s32 x, s32 y, u8 unk4, s32 scaleX, s32 scaleY, u16 rotation);
    u32 GetDuration();
    void DrawTransformed(u32 screen, s32 x, s32 y, u32 mode, s32 scaleX, s32 scaleY, u32 unk7);
};
struct SpriteOamEntry {
    u32 mAttr01;
    u16 mAttr2;
    u16 mUnk_06;
};
struct SpriteScreen {
    SpriteOamEntry mOam[128];
    u16 mCharSize;
    u8 mBgIndex;
    u8 mObjVramMode;
    u8 mOamCount;
    u8 mMatrixCount;
    u8 pad_0x406[(0x408) - (0x406)];

    SpriteScreen();
    void SetBgIndex(u32 unk1);
    void FlushOam();
    void ResetOam();
    u32 LoadCharacters(const char *path, u32 offset, u32 unk3);
    u32 LoadPalette(const char *path, u32 offset, u32 unk3);
    void LoadExtPalette(const char *path, u32 unk2, u32 unk3);
    void *DownsampleCharacters(u8 *data);
    u32 GetCharBase(u32 unk1);
    void SetObjVramMode(s32 unk1);
    void AddOam(void *buffer, u8 count, s16 unk3, s16 unk4, u32 unk5, u32 unk6, u32 unk7, u32 unk8);
};
class Camera;
class CellAnimation;
class ModelInstance;
class ModelLightGroup;
class Ranking;
class UnkStruct_0205401c;
struct MessageFile;
class MyroomStatusScene : public SceneBase {
public:
    CellAnimation *mCellAnim;
    UnkStruct_0205401c *mModel;
    ModelInstance *mMyroombgModel;
    Camera *mCamera;
    ModelLightGroup *mLights;
    MessageFile *mMessages;
    void *mTextBuffers[5];
    void *mGlyphBuffer;
    u32 mTextBufferSize;
    u32 mGlyphCount;
    u32 mReady;
    u8 mState;
    u32 mUnk_4c;
    Ranking *mRanking;
    u16 mHours;
    u8 mMinutes;
    u8 mSeconds;

    MyroomStatusScene(u32 unk);

    virtual ~MyroomStatusScene();
    virtual void Update();

    void SetReady();
    void InitDisplay();
    void CreateModel();
    void Setup3D();
    void Draw3D();
    void DrawCell();
    void LoadText();
    void ClearTextBuffers();
    void PrintLine(u8 line);
    void DrawLines();
    void FreeText();
    void UpdateTime();
};
struct MessageFile;
class MessageWindow {
public:
    MessageFile *mFile;
    void *mBuffer;
    void *mGlyphs;
    u32 mBufferSize;
    u32 mGlyphCount;
    u32 mVram;
    s16 mX;
    s16 mY;
    u16 mTextWidth;
    s16 mTextX;
    s16 mMessage;
    u8 mUnk_26;
    u8 mUnk_27;
    u8 mScreen;
    u8 mWidth;
    u8 mTimer;
    u8 mLoopShortText;

    MessageWindow(const char *name, u32 unk2, u32 unk3);
    virtual ~MessageWindow();
    void ClearBuffer();
    void Update();
    void func_02065bd4(u32 unk1, u32 unk2, u32 unk3);
    void SetWidth(u32 unk1);
    void StartMessage(u32 unk1, u32 unk2, u32 unk3);
    void SetVram(u32 vram);
    void LoadMessageFile(const char *name);
    void InitText();
    void UploadTextPalette();
};
class CellAnimation;
struct WindowCellRecord {
    const char *mPath;

    union {
        u8 mAnimIndex;
        u32 mAnimIndexWord;
    };
    u32 mCharOffset;
    union {
        s8 mPaletteBase;
        u32 mPaletteBaseWord;
    };
    union {
        u8 mUnk_10;
        u32 mUnk_10_word;
    };
    u32 mEnabled;
    u8 mAnimIndices[4];
};
struct WindowItemRecord {
    u32 mId;
    u32 mFlags;
    s16 mX;
    s16 mY;
    s16 mWidth;
    s16 mHeight;
    union {
        u16 mSlideInOut;
        struct {
            u8 mSlideIn;
            u8 mSlideOut;
        };
    };
    s8 mNeighbors[4];
    u16 mUnk_16;
    u32 mTouchKind;
};
struct WindowItem {
    s8 mId;
    u8 pad_0x01[(0x04) - (0x01)];
    u32 mFlags;
    s16 mX;
    s16 mY;
    s16 mWidth;
    s16 mHeight;
    u8 mSlideIn;
    u8 mSlideOut;
    s8 mNeighbors[4];
    u8 pad_0x16[(0x18) - (0x16)];
    u32 mTouchKind;
};
struct SelectWindowCursor {
    WindowItem *mItems;
    u8 mCount;
    s8 mInputItem;
    s8 mSelection;
    s8 mPressedItem;
    u8 mPressedOnSelection;
    u8 mScrollItem;
    u8 mDragging;
    u8 mScrollItemY;
    u8 mScrollAreaY;
    u8 mScrollAreaHeight;
    u8 mShownRowCount;
    u8 mRowCount;
    u8 mScrollMax;
    u8 mScroll;
    u8 pad_0x12[(0x14) - (0x12)];

    SelectWindowCursor(u32 count, const void *table, u32 unk3);
    u32 Update(u32 unk1);
    u32 UpdateInput(u32 playSound);
    void SetupScroll(u32 unk1, u32 unk2, u32 unk3, u32 unk4);
    void SetScroll(u32 scroll);
    void RefreshScrollItemY();
    BOOL HasNeighbor(int index);
};
struct WindowButton {
    u8 mUnk_00;
    u8 pad_0x01[(0x04) - (0x01)];
    u32 mEnabled;
    u8 mUnk_08;
    u8 mResultAnimIndex;
    u8 mUnk_0a;
    u8 pad_0x0b[(0x0c) - (0x0b)];
};
class SelectWindow {
public:
    SelectWindowCursor *mCursor;
    CellAnimation *mCellAnims[22];
    u8 mCellCount;
    u8 mState;
    u8 mSlideStep;
    s8 mSavedSelection;
    u8 mEnabled;
    u8 mInputLocked;
    u8 mSlideInRequested;
    u8 pad_0x067[(0x068) - (0x067)];
    u8 mSlideToTarget[22];

    u8 mDisabledButtonsSelectable;
    u8 pad_0x07f[(0x080) - (0x07f)];
    Vec2s mCellPos[22];
    s16 mSlideTargetX;
    s16 mSlideTargetY;
    u32 mResult;
    u8 mItemTouched;
    u8 pad_0x0e1[(0x0e4) - (0x0e1)];
    WindowButton mButtons[22];

    SelectWindow(u32 itemCount, const WindowItemRecord *items, s32 unk3);
    virtual ~SelectWindow();
    void SetCells(u32 count, const WindowCellRecord *cells);
    BOOL Update(BOOL acceptInput);
    void Draw();
    void Reset(int selection);
    void SetResultItem(u32 unk1, u32 unk2);
    void SetItems(u32 count, WindowItem *items, s32 selection);
    void FreeCells();
    void FreeCursor();
    BOOL UpdateSlideIn();
    void UpdateSlideOut();

    void SlideCellTo(u8 index, s16 x, s16 y) {
        mSlideToTarget[index] = 1;
        mSlideTargetX         = x;
        mSlideTargetY         = y;
    }
    Vec2s GetCellPos(int index) {
        return mCellPos[index];
    }
    void SetCellPos(int index, Vec2s pos) {
        mCellPos[index] = pos;
    }
    s8 GetSelectedId() {
        SelectWindowCursor *c = mCursor;
        if (c->mSelection == -1) {
            return -1;
        }
        return c->mItems[c->mSelection].mId;
    }
};
struct MessageEntry {

    volatile u16 mOffset;
    u16 mLength;
};
struct MessageFile {
    u8 pad_0x00[(0x02) - (0x00)];
    MessageEntry mEntries[1];

    const u8 *GetText(int index) {
        return (const u8 *) this + mEntries[index].mOffset;
    }
    u16 GetLength(int index) {
        return mEntries[index].mLength;
    }
};
void MyroomCharaScene::SetReady() {
    if (mStatus != 0) {
        mStatus->SetReady();
    }
}
