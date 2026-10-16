/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02065d3c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02065d3c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02064a3c(void);
extern void func_02064a50(int state);
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
void func_02065d3c(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_02064a3c();
    tail  = data_0208e9a0.reservedTail;

    if (tail == 0) {
        data_0208e9a0.reservedHead = command;
        data_0208e9a0.reservedTail = command;
    } else {
        tail->next                 = command;
        data_0208e9a0.reservedTail = command;
    }
    command->next = 0;
    func_02064a50(state);
}
