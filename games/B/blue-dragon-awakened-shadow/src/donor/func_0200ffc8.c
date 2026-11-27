/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PmRemoveCallback from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 OS_DisableInterrupts(void);
extern u32 OS_RestoreInterrupts(u32 state);
typedef struct PMCallbackInfo PMCallbackInfo;
struct PMCallbackInfo {
    void (*func)(void *arg);
    void *arg;
    PMCallbackInfo *next;
};
extern void func_0200ffc8(PMCallbackInfo **head, PMCallbackInfo *node);
void func_0200ffc8(PMCallbackInfo **head, PMCallbackInfo *node) {
    PMCallbackInfo *cur, *prev;
    u32 e;
    if (head == ((void *) 0)) {
        return;
    }
    e    = OS_DisableInterrupts();
    cur  = *head;
    prev = cur;
    while (cur != ((void *) 0)) {
        if (cur == node) {
            if (cur == prev) {
                *head = cur->next;
            } else {
                prev->next = cur->next;
            }
            break;
        }
        prev = cur;
        cur  = cur->next;
    }
    OS_RestoreInterrupts(e);
}
