/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b8264 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_020b8264.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_020f1d40;
extern SNDCommand *data_020f1d64[8];
extern SNDCommand data_020f2020[0x100];
extern int func_020b6bd0(void);
extern void func_020b6be4(int state);
extern void func_020b5bc0(void *address, unsigned int size);
extern SNDCommand *func_020b8094(int block);
extern int func_020b8ec8(int channel, unsigned int data, int err);
extern void func_020b8620(void);
int func_020b8264(unsigned int flags) {
    int state = func_020b6bd0();

    if (data_020f1d40.reservedHead == 0) {
        func_020b6be4(state);
        return 1;
    }

    if (data_020f1d40.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_020b6be4(state);
            return 0;
        }
        do {
            func_020b8094(1);
        } while (data_020f1d40.sentBlockCount >= 8);
        if (data_020f1d40.reservedHead == 0) {
            func_020b6be4(state);
            return 1;
        }
    }

    func_020b5bc0(data_020f2020, sizeof(data_020f2020));

    if (func_020b8ec8(7, (unsigned int) data_020f1d40.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_020b6be4(state);
            return 0;
        }
        while (data_020f1d40.sentBlockCount >= 8 || func_020b8ec8(7, (unsigned int) data_020f1d40.reservedHead, 0) < 0) {
            func_020b6be4(state);
            func_020b8094(0);
            state = func_020b6bd0();
            func_020b5bc0(data_020f2020, sizeof(data_020f2020));
            if (data_020f1d40.reservedHead == 0) {
                func_020b6be4(state);
                return 1;
            }
        }
    }

    data_020f1d64[data_020f1d40.sentRingIndex] = data_020f1d40.reservedHead;
    data_020f1d40.sentRingIndex++;
    if (data_020f1d40.sentRingIndex > 8) {
        data_020f1d40.sentRingIndex = 0;
    }
    data_020f1d40.reservedHead = 0;
    data_020f1d40.reservedTail = 0;
    data_020f1d40.sentBlockCount++;
    data_020f1d40.nextTag++;
    func_020b6be4(state);

    if ((flags & 2) != 0) {
        func_020b8620();
    }
    return 1;
}
