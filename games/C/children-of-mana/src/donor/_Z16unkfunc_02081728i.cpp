/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_02081728i from https://github.com/GoldieLeGenie/DQIV-DECOMP src/main/dss/UnkDisplay.cpp (license: none), reused
 * by tools/donor_match.py */
namespace dss {
    struct DisplayPlugin {
        virtual void initialize();
        virtual void finalize();
        virtual void update(int frame);

        int displayTextCounter_;
        int type_;

        void unkfunc_020819a8(int chr);
        void unkfunc_02081a38(int textType, int screen1, int screen2, int bg0, int bg1, int unk_10, int palette);
        void updateDisplayText();
        void setDisplayText(int counter);
        int getType() {
            return type_;
        }
    };
} // namespace dss
struct UnkPaletteBuffer;
struct UnkScreenBuffer {
    unsigned short *buf_;
    unsigned short *base_;
    int width_;
    int height_;
    int pitch_;
};
extern "C" {
extern "C" {
extern "C" {
typedef unsigned int u32;
typedef unsigned short u16;
}
}
typedef struct {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
        struct {

            u16 yPos : 8;
            u16 affineMode : 2;
            u16 objMode : 2;
            u16 mosaic : 1;
            u16 colorMode : 1;
            u16 shape : 2;

            u16 xPos : 9;
            u16 affineParam : 5;
            u16 size : 2;
        };
        struct {
            u16 _pad0 : 16;
            u16 _pad1 : 12;
            u16 flipH : 1;
            u16 flipV : 1;
            u16 _pad2 : 2;
        };
    };
    union {
        u32 attr23;
        struct {
            u16 attr2;
            u16 attr3;
        };
        struct {

            u16 charName : 10;
            u16 priority : 2;
            u16 colorParam : 4;
        };
    };
} GXOamAttr;
}
struct UnkOamBuffer {
    GXOamAttr oam_[128];
    int count_;
    int prevCount_;
    int unk_408;

    void unkfunc_02082644();
    void unkfunc_02082648();
    void unkfunc_02082678(int type);
    GXOamAttr *unkfunc_02082694();
};
struct UnkPaletteBuffer {
    unsigned short color_[0x100];

    void unkfunc_020826ac(int type);
    void unkfunc_020826c8(int index, int color, unsigned short rgb);
    void unkfunc_020826d8(int index, int color, const void *src, int count);
};
struct UnkDisplayText {
    int type_;
    int screen1_;
    int screen2_;
    int unk_0c;
    int unk_10;
    int unk_14;
};
struct UnkDisplayWindow {
    int plane_;
    int x_;
    int y_;
    int w_;
    int h_;
};
struct UnkDisplay {
    dss::DisplayPlugin *plugin_;
    dss::DisplayPlugin *nextPlugin_;
    unsigned int frame_;
    unsigned short backColor_;
    unsigned short unk_0e;
    int blendMode_;
    UnkPaletteBuffer bgPalette_[2];
    UnkPaletteBuffer objPalette_[2];
    UnkOamBuffer oam_[2];
    UnkDisplayText text_;
    UnkScreenBuffer screen_;
    unsigned short screenData_[2][0x300];
    int windowEnable_[2];
    UnkDisplayWindow window_[2];
    char unk_1c88[0x50];
    int capture_;
    int captureStep_;
    int captureX_;
    int captureY_;
    int blendA_;
    int blendB_;

    UnkDisplay() {
        unkfunc_02080dd8();
    }
    UnkDisplay *unkfunc_02080dd8();
};
extern UnkDisplay data_021310a4;
extern void unkfunc_02081728(int counter);
extern UnkDisplay data_021310a4;
#pragma thumb off
void unkfunc_02081728(int counter) {
    if (data_021310a4.plugin_ != 0) {
        data_021310a4.plugin_->setDisplayText(counter);
    }
}
