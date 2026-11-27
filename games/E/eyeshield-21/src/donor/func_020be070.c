/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02080414 from projets/nintendogs-shiba-friends/src/donor/func_02080414.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
extern u32 func_020bef48(void);
extern u32 func_020bef5c(u32 state);
extern void func_020bd888(OsThreadQueue *queue);
extern void func_020bd8fc(OsThreadQueue *queue);
typedef struct OsMessageQueue {
    OsThreadQueue send_waiters;
    OsThreadQueue receive_waiters;
    void **messages;
    int capacity;
    int first;
    int count;
} OsMessageQueue;
extern int func_020be070(OsMessageQueue *queue, void **message, int flags);
int func_020be070(OsMessageQueue *queue, void **message, int flags) {
    u32 state = func_020bef48();
    while (queue->count == 0) {
        if (!(flags & 1)) {
            func_020bef5c(state);
            return 0;
        }
        func_020bd8fc(&queue->receive_waiters);
    }
    if (message) {
        *message = queue->messages[queue->first];
    }
    queue->first = (queue->first + 1) % queue->capacity;
    queue->count--;
    func_020bd888(&queue->send_waiters);
    func_020bef5c(state);
    return 1;
}
