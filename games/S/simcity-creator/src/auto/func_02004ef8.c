/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020066e0(void);
extern void func_020066f4(int);
extern void func_0200480c(void *);
extern void func_020048b4(void);
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
extern ListHead data_020d0c40;
extern Node data_020d0c74;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_02004ef8(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_020d0c40.head;
    intr = func_020066e0();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_020d0c74) {
        func_020066f4(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_020d0c40.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_0200480c(target);
        func_020048b4();
    }
    func_020066f4(intr);
    return 1;
}
