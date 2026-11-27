/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d57d4 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_020d57d4.c (license:
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
extern SNDCommandMgr data_021e1a80;
extern SNDCommand *data_021e1aa4[8];
extern SNDCommand data_021e1d60[0x100];
extern int _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(int state);
extern void func_020d2894(void *address, unsigned int size);
extern SNDCommand *func_020d5604(int block);
extern int func_020d66c4(int channel, unsigned int data, int err);
extern void func_020d5b90(void);
int func_020d57d4(unsigned int flags) {
    int state = _Z20DisableIRQInterruptsv();

    if (data_021e1a80.reservedHead == 0) {
        _Z20SetIRQInterruptStatei(state);
        return 1;
    }

    if (data_021e1a80.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            _Z20SetIRQInterruptStatei(state);
            return 0;
        }
        do {
            func_020d5604(1);
        } while (data_021e1a80.sentBlockCount >= 8);
        if (data_021e1a80.reservedHead == 0) {
            _Z20SetIRQInterruptStatei(state);
            return 1;
        }
    }

    func_020d2894(data_021e1d60, sizeof(data_021e1d60));

    if (func_020d66c4(7, (unsigned int) data_021e1a80.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            _Z20SetIRQInterruptStatei(state);
            return 0;
        }
        while (data_021e1a80.sentBlockCount >= 8 || func_020d66c4(7, (unsigned int) data_021e1a80.reservedHead, 0) < 0) {
            _Z20SetIRQInterruptStatei(state);
            func_020d5604(0);
            state = _Z20DisableIRQInterruptsv();
            func_020d2894(data_021e1d60, sizeof(data_021e1d60));
            if (data_021e1a80.reservedHead == 0) {
                _Z20SetIRQInterruptStatei(state);
                return 1;
            }
        }
    }

    data_021e1aa4[data_021e1a80.sentRingIndex] = data_021e1a80.reservedHead;
    data_021e1a80.sentRingIndex++;
    if (data_021e1a80.sentRingIndex > 8) {
        data_021e1a80.sentRingIndex = 0;
    }
    data_021e1a80.reservedHead = 0;
    data_021e1a80.reservedTail = 0;
    data_021e1a80.sentBlockCount++;
    data_021e1a80.nextTag++;
    _Z20SetIRQInterruptStatei(state);

    if ((flags & 2) != 0) {
        func_020d5b90();
    }
    return 1;
}
