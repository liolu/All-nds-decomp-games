/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d579c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_020d579c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(int state);
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
void func_020d579c(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = _Z20DisableIRQInterruptsv();
    tail  = data_021e1a80.reservedTail;

    if (tail == 0) {
        data_021e1a80.reservedHead = command;
        data_021e1a80.reservedTail = command;
    } else {
        tail->next                 = command;
        data_021e1a80.reservedTail = command;
    }
    command->next = 0;
    _Z20SetIRQInterruptStatei(state);
}
