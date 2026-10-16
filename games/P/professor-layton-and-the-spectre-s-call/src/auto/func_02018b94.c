/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02018b94 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02018b94.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0201732c(void);
extern void func_02017340(int state);
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
extern SNDCommandMgr data_02034e24;
void func_02018b94(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_0201732c();
    tail  = data_02034e24.reservedTail;

    if (tail == 0) {
        data_02034e24.reservedHead = command;
        data_02034e24.reservedTail = command;
    } else {
        tail->next                 = command;
        data_02034e24.reservedTail = command;
    }
    command->next = 0;
    func_02017340(state);
}
