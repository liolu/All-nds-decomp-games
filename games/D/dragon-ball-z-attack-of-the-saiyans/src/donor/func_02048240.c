/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GetScriptState from https://github.com/tylzars/bakutrainer src/Main/Script/script_records.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct ScriptEvent {
    s16 mKind;
    s16 mParam;
    u8 mUnk_04[0x20 - 4];

    u8 mValueCount;
    u8 mUnk_21;
} ScriptEvent;
typedef struct ScriptEye {
    u16 mUsed;
    s16 mId;
    s16 mAltId;

    u16 mDelayMin;
    u16 mDelayLimit;
    u16 mAltFrameCount;
    s16 mSpriteId;
    s16 mOffsetX;
    s16 mOffsetY;

    s16 mTimer;
    u16 mShowingAlt;
} ScriptEye;
typedef struct ScriptLs {
    u16 mUsed;
    s16 mStillId;
    u16 mAnimId;

    u16 mAnimFrameCount;
    u16 mFramesPerAnimFrame;
    s16 mOffsetX;
    s16 mOffsetY;
    s16 mSpriteId;
} ScriptLs;
typedef struct ScriptText {
    u16 mTextId;
    s16 mX;
    s16 mY;

    s16 mLineWidth;
    s16 mLineHeight;

    s16 mAlign;
    u16 mCharCount;
    u16 mFontIndex;
    u8 mCharFrameCount;

    u8 mLayer;
} ScriptText;
typedef struct ScriptSprite {
    s32 mId;
    u32 mDrawId;

    s16 mX;
    s16 mY;

    s16 mMoveEndX;
    s16 mMoveEndY;

    s16 mMovePerFrame;

    s16 mStartX;
    s16 mStartY;
    u16 mDelayTimer;

    u16 mShowTimer;

    u16 mDrawOrder;

    u8 mAnimFrameCount;
    u8 mAnimFramesRemaining;
    u8 mFramesPerAnimFrame;
    u8 mAnimFrameFrames;
    u8 mSlideProgress;
    union {
        u8 mUnk_21;
        struct {

            u8 mNoReverse : 1;
            u8 mAnimLoop : 1;

            u8 mMoveBounce : 1;

            u8 mFlipOnReturn : 1;
            u8 mUnk_21_4 : 1;
            u8 mUnk_21_5 : 3;
        };
    };
    u8 mLayer;
    u8 mUnk_23;
} ScriptSprite;
typedef struct Unk_020c642c {
    u8 mUnk_00[0x10];
    u8 mEventWriteIndex;
    u8 mEventReadIndex;
    u8 mUnk_12[2];

    u8 mPendingImageLayers[2];
    u16 mPendingImageIndices[2];
    u8 mUnk_1a[2];

    s32 mScrDrawId;
    u16 mScrX;
    u16 mScrY;
    s16 mIfValueA;
    s16 mIfValueB;
    u8 (*mTextEscapeFunc)(void);

    u16 mLayer1ImageId;
    u16 mLayer2ImageId;
    u16 mUnk_30;
    u8 mUnk_32[2];
    s32 mLsIndex;
    s32 mLsSpriteIndex;

    u16 mLsTimer;
    u8 mUnk_3e[2];
    s32 mUnk_40;
} Unk_020c642c;
typedef struct ScriptWork {

    void (*mSpriteDrawFunc)(u32 id, int x, int y, int w, int mode);
    u32 (*mSoundIdFunc)(u32);
    u16 mScriptFileId;
    u16 mTextFileId;
    u16 mTextNameFileId;
    u16 mLineNameFileId;
    u16 mLineId;
    u16 mNextTextId;

    u16 mDefaultWindowLineCount;
    u16 mSpriteCount;
    u16 mWaitTimer;
    u8 mEofFlags;
    u8 mState;
    union {
        u8 mUnk_1c;
        struct {

            u8 mSpritesBusy : 1;

            u8 mFastText : 1;

            u8 mSkipToEnd : 1;

            u8 mTextIncomplete : 1;
            u8 mUnk_1c_4 : 4;
        };
    };
    u8 mUnk_1d;
    u16 mTextCount;

    u16 mCharFrameCount;
    u16 mCharFrames;
    u16 mUnk_24;
    u16 mUnk_26;

    u16 mCharSoundId;
    s16 mTextOffsetY;
    u8 *mRecords;
    u8 mUnk_30;
    u8 mUnk_31;
    s16 mTrackFileId;
    u8 mTrackVolume;
    u8 mUnk_35;
    u16 mSoundIds[8];
    u8 mSoundVolumes[8];

    u8 mSoundModes[8];
    u8 mSoundCount;
    u8 mUnk_57;
    ScriptLs *mLsList;
    ScriptEye *mEyes;
    ScriptSprite *mSprites;

    ScriptText *mTexts;
    ScriptText *mUnk_68;
    void *mUnk_6c;

    union {
        ScriptEvent mEvents[16];
        struct {
            u8 mUnk_70_pad[0x280 - 0x70];
            Unk_020c642c mUnk_280;
        };
    };
} ScriptWork;
extern ScriptWork data_0209f7a8;
extern u8 func_02048240(void);
extern ScriptWork data_0209f7a8;
u8 func_02048240(void) {
    return data_0209f7a8.mState;
}
