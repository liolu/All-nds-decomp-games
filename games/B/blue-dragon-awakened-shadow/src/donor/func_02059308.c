/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_ProcessReliableQueueEx from https://github.com/Project-Holon/aletheia src/game/ov009/dwc_reliable.c (license: none (MIT
 * = tooling only)), reused by tools/donor_match.py */
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
extern int func_02059308(int (*func)(void *, unsigned char *, int, int));
extern QueueInfo data_0210f058;
int func_02059308(int (*func)(void *, unsigned char *, int, int)) {
    SendQueue *it;
    int retrycount;
    int res;

    for (it = data_0210f058.head; it != 0; it = it->next) {
        retrycount = 0;
        do {
            res = func(it->connection, it->data, (int) it->size, 1);
            if (res == 0) {
                data_0210f058.total -= it->size;
                DWC_Free(4, it->data, (long unsigned int) it->size);
                it->data       = 0;
                it->size       = 0;
                it->connection = 0;
                break;
            }
            retrycount++;
        } while (retrycount < 3);
        if (retrycount == 3) {
            break;
        }
    }
    for (it = data_0210f058.head; it != 0; it = data_0210f058.head) {
        if (it->data != 0) {
            break;
        }
        data_0210f058.head = it->next;
        DWC_Free(4, it, 0);
    }
    return it == 0;
}
