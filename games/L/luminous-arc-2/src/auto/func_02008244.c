/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02008244 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02008244.c (license:
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
extern SNDCommandMgr data_02147ca0;
extern SNDCommand *data_02147cc4[8];
extern SNDCommand data_02147f80[0x100];
extern int func_02006be0(void);
extern void func_02006bf4(int state);
extern void func_02005ae4(void *address, unsigned int size);
extern SNDCommand *func_02008074(int block);
extern int func_02008e50(int channel, unsigned int data, int err);
extern void func_02008600(void);
int func_02008244(unsigned int flags) {
    int state = func_02006be0();

    if (data_02147ca0.reservedHead == 0) {
        func_02006bf4(state);
        return 1;
    }

    if (data_02147ca0.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_02006bf4(state);
            return 0;
        }
        do {
            func_02008074(1);
        } while (data_02147ca0.sentBlockCount >= 8);
        if (data_02147ca0.reservedHead == 0) {
            func_02006bf4(state);
            return 1;
        }
    }

    func_02005ae4(data_02147f80, sizeof(data_02147f80));

    if (func_02008e50(7, (unsigned int) data_02147ca0.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_02006bf4(state);
            return 0;
        }
        while (data_02147ca0.sentBlockCount >= 8 || func_02008e50(7, (unsigned int) data_02147ca0.reservedHead, 0) < 0) {
            func_02006bf4(state);
            func_02008074(0);
            state = func_02006be0();
            func_02005ae4(data_02147f80, sizeof(data_02147f80));
            if (data_02147ca0.reservedHead == 0) {
                func_02006bf4(state);
                return 1;
            }
        }
    }

    data_02147cc4[data_02147ca0.sentRingIndex] = data_02147ca0.reservedHead;
    data_02147ca0.sentRingIndex++;
    if (data_02147ca0.sentRingIndex > 8) {
        data_02147ca0.sentRingIndex = 0;
    }
    data_02147ca0.reservedHead = 0;
    data_02147ca0.reservedTail = 0;
    data_02147ca0.sentBlockCount++;
    data_02147ca0.nextTag++;
    func_02006bf4(state);

    if ((flags & 2) != 0) {
        func_02008600();
    }
    return 1;
}
