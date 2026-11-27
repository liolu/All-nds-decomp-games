/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_CleanupReliableQueue from https://github.com/Project-Holon/aletheia src/game/ov009/dwc_reliable.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef struct SendQueue {
    void *connection;
    unsigned char *data;
    int size;
    struct SendQueue *next;
} SendQueue;
typedef struct QueueInfo {
    SendQueue *head;
    int total;
} QueueInfo;
extern void DWC_Free(int name, void *ptr, unsigned long size);
extern void func_02059270(char *p);
extern QueueInfo data_0210f058;
void func_02059270(char *p) {
    SendQueue *it;

    while ((it = data_0210f058.head) != 0) {
        data_0210f058.head = it->next;
        DWC_Free(4, it->data, (long unsigned int) it->size);
        DWC_Free(4, it, 0);
    }
    data_0210f058.head  = 0;
    data_0210f058.total = 0;
}
