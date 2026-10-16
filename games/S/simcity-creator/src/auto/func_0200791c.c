/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200791c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_0200791c.c (license:
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
extern SNDCommandMgr data_020d1000;
extern SNDCommand *data_020d1024[8];
extern SNDCommand data_020d12e0[0x100];
extern int func_020066e0(void);
extern void func_020066f4(int state);
extern void func_020055c4(void *address, unsigned int size);
extern SNDCommand *func_0200774c(int block);
extern int func_020084fc(int channel, unsigned int data, int err);
extern void func_02007cd8(void);
int func_0200791c(unsigned int flags) {
    int state = func_020066e0();

    if (data_020d1000.reservedHead == 0) {
        func_020066f4(state);
        return 1;
    }

    if (data_020d1000.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_020066f4(state);
            return 0;
        }
        do {
            func_0200774c(1);
        } while (data_020d1000.sentBlockCount >= 8);
        if (data_020d1000.reservedHead == 0) {
            func_020066f4(state);
            return 1;
        }
    }

    func_020055c4(data_020d12e0, sizeof(data_020d12e0));

    if (func_020084fc(7, (unsigned int) data_020d1000.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_020066f4(state);
            return 0;
        }
        while (data_020d1000.sentBlockCount >= 8 || func_020084fc(7, (unsigned int) data_020d1000.reservedHead, 0) < 0) {
            func_020066f4(state);
            func_0200774c(0);
            state = func_020066e0();
            func_020055c4(data_020d12e0, sizeof(data_020d12e0));
            if (data_020d1000.reservedHead == 0) {
                func_020066f4(state);
                return 1;
            }
        }
    }

    data_020d1024[data_020d1000.sentRingIndex] = data_020d1000.reservedHead;
    data_020d1000.sentRingIndex++;
    if (data_020d1000.sentRingIndex > 8) {
        data_020d1000.sentRingIndex = 0;
    }
    data_020d1000.reservedHead = 0;
    data_020d1000.reservedTail = 0;
    data_020d1000.sentBlockCount++;
    data_020d1000.nextTag++;
    func_020066f4(state);

    if ((flags & 2) != 0) {
        func_02007cd8();
    }
    return 1;
}
