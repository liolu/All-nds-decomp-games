/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(int);
extern void func_020d1808(void *);
extern void func_020d18b0(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead data_021e169c;
extern Node data_021e16d0;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020d2058(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_021e169c.head;
    intr = _Z20DisableIRQInterruptsv();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_021e16d0) {
        _Z20SetIRQInterruptStatei(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_021e169c.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_020d1808(target);
        func_020d18b0();
    }
    _Z20SetIRQInterruptStatei(intr);
    return 1;
}
