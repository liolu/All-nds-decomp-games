/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_02064a3c(void);
extern void func_02064a50(int);
extern void func_02062dd8(void *);
extern void func_02062e80(void);
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
extern ListHead data_0208e5c8;
extern Node data_0208e5fc;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020633c0(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_0208e5c8.head;
    intr = func_02064a3c();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_0208e5fc) {
        func_02064a50(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_0208e5c8.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_02062dd8(target);
        func_02062e80();
    }
    func_02064a50(intr);
    return 1;
}
