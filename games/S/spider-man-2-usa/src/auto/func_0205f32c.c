/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Fifo8Handler from https://github.com/RonyxDumb/mkds src/arm9/0214ffb4_Fifo8Handler.c (license: none), reused by
 * tools/donor_match.py */
extern void func_0205f4dc(int a);
typedef struct {
    short *ptr;
    int pad;
} PtrEntry;
extern PtrEntry data_02164120[];
typedef struct {
    unsigned short flag;
    short pad;
    int pad2;
} FlagEntry;
extern FlagEntry data_0216411c[];
extern int data_021640ec;
extern int data_021640f0;
typedef struct {
    char pad[0xc];
    int *fc;
} StructH;
extern StructH data_021640f8;
void func_0205f32c(int a0, unsigned int msg, int flag) {
    unsigned short cmd;
    unsigned short val;

    if (flag != 0) {
        func_0205f4dc(2);
        return;
    }

    cmd = (msg & 0x7f00) >> 8;
    val = (msg & 0xff) << 16 >> 16;

    if (cmd >= 0x70 && cmd <= 0x73) {
        int idx           = cmd - 0x70;
        unsigned short pv = val & 0xff;
        short *p          = data_02164120[idx].ptr;
        if (p != 0) {
            *p = pv;
        }
        data_0216411c[idx].flag = 1;
        val                     = 0;
    } else if (cmd == 0x60) {
        data_021640ec = 1;
    } else if (cmd == 0x62) {
        data_021640f0 = 1;
    } else if (cmd == 0x67) {
        int *q = data_021640f8.fc;
        if (q != 0) {
            *q = val;
        }
        val = 0;
    }

    func_0205f4dc(val);
}
