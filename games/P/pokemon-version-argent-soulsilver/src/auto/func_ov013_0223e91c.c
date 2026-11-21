typedef struct G {
    unsigned char pad[0xA90];
    unsigned char st;
    unsigned char pad2[3];
    unsigned int w94;
    unsigned int w98;
    unsigned char pad3[0xAAC - 0xA9C];
    signed char c;
} G;
extern void func_ov013_0221fd70(void);
extern G *data_ov013_0224f5e8;

int func_ov013_0223e91c(void) {
    unsigned char s;
    int r;
    s = data_ov013_0224f5e8->st;
    if (s == 1 || s == 0x14 || s == 0x17 || s == 0x1A || s == 0x1D) {
        data_ov013_0224f5e8->st = 0x22;
        data_ov013_0224f5e8->c  = 0;
        return 1;
    }
    if (s == 4 || s == 5 || s == 6 || s == 0xD) {
        if (s == 4 && data_ov013_0224f5e8->w98 < 6) {
            return 0;
        }
        func_ov013_0221fd70();
        data_ov013_0224f5e8->st = 0x10;
        data_ov013_0224f5e8->c  = 2;
        return 1;
    }
    if ((unsigned char) (s + 0xF7) <= 1) {
        data_ov013_0224f5e8->st = 0x20;
        return 1;
    }
    if (s == 0xC) {
        data_ov013_0224f5e8->st = 0x22;
        return 1;
    }
    if (s == 2) {
        r = 0;
    } else {
        r = 0;
    }
    return r;
}
