/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02065d74 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02065d74.c (license:
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
extern SNDCommandMgr data_0208e9a0;
extern SNDCommand *data_0208e9c4[8];
extern SNDCommand data_0208ec80[0x100];
extern int func_02064a3c(void);
extern void func_02064a50(int state);
extern void func_02063a0c(void *address, unsigned int size);
extern SNDCommand *func_02065ba4(int block);
extern int func_02066960(int channel, unsigned int data, int err);
extern void func_02066130(void);
int func_02065d74(unsigned int flags) {
    int state = func_02064a3c();

    if (data_0208e9a0.reservedHead == 0) {
        func_02064a50(state);
        return 1;
    }

    if (data_0208e9a0.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_02064a50(state);
            return 0;
        }
        do {
            func_02065ba4(1);
        } while (data_0208e9a0.sentBlockCount >= 8);
        if (data_0208e9a0.reservedHead == 0) {
            func_02064a50(state);
            return 1;
        }
    }

    func_02063a0c(data_0208ec80, sizeof(data_0208ec80));

    if (func_02066960(7, (unsigned int) data_0208e9a0.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_02064a50(state);
            return 0;
        }
        while (data_0208e9a0.sentBlockCount >= 8 || func_02066960(7, (unsigned int) data_0208e9a0.reservedHead, 0) < 0) {
            func_02064a50(state);
            func_02065ba4(0);
            state = func_02064a3c();
            func_02063a0c(data_0208ec80, sizeof(data_0208ec80));
            if (data_0208e9a0.reservedHead == 0) {
                func_02064a50(state);
                return 1;
            }
        }
    }

    data_0208e9c4[data_0208e9a0.sentRingIndex] = data_0208e9a0.reservedHead;
    data_0208e9a0.sentRingIndex++;
    if (data_0208e9a0.sentRingIndex > 8) {
        data_0208e9a0.sentRingIndex = 0;
    }
    data_0208e9a0.reservedHead = 0;
    data_0208e9a0.reservedTail = 0;
    data_0208e9a0.sentBlockCount++;
    data_0208e9a0.nextTag++;
    func_02064a50(state);

    if ((flags & 2) != 0) {
        func_02066130();
    }
    return 1;
}
