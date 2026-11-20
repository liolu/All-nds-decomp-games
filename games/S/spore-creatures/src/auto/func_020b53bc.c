/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020b6bd0(void);
extern void func_020b6be4(int);
extern void func_020b4c34(void *);
extern void func_020b4cdc(void);
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
extern ListHead data_020f1950;
extern Node data_020f1984;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020b53bc(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_020f1950.head;
    intr = func_020b6bd0();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_020f1984) {
        func_020b6be4(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_020f1950.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_020b4c34(target);
        func_020b4cdc();
    }
    func_020b6be4(intr);
    return 1;
}
