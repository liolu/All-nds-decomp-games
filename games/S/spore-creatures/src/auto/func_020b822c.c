/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b822c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_020b822c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020b6bd0(void);
extern void func_020b6be4(int state);
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
void func_020b822c(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_020b6bd0();
    tail  = data_020f1d40.reservedTail;

    if (tail == 0) {
        data_020f1d40.reservedHead = command;
        data_020f1d40.reservedTail = command;
    } else {
        tail->next                 = command;
        data_020f1d40.reservedTail = command;
    }
    command->next = 0;
    func_020b6be4(state);
}
