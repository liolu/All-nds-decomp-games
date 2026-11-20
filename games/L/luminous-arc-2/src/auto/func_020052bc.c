/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_02006be0(void);
extern void func_02006bf4(int);
extern void func_02004b34(void *);
extern void func_02004bdc(void);
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
extern ListHead data_021478e0;
extern Node data_02147914;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020052bc(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_021478e0.head;
    intr = func_02006be0();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_02147914) {
        func_02006bf4(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_021478e0.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_02004b34(target);
        func_02004bdc();
    }
    func_02006bf4(intr);
    return 1;
}
