/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiPeerAddMessage from https://github.com/Project-Holon/aletheia src/game/ov009/gpipeer.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned long size_t;
typedef void (*GPCallback)(void **connection, void *arg, void *param);
typedef struct GPIBuffer {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
typedef struct GPIMessage {
    GPIBuffer buffer;
    int type;
    int start;
} GPIMessage;
typedef struct GPIPeerOp {
    int state;
    void *userData;
    GPCallback callback;
    struct GPIPeerOp *next;
    int type;
    unsigned int timeout;
} GPIPeerOp;
typedef struct GPIPeer {
    int state;
    int initiated;
    unsigned int ip;
    unsigned short port;
    int profile;
    int timeout;
    int nackCount;
    GPIBuffer inputBuffer;
    GPIBuffer outputBuffer;
    void *messages;
    GPIPeerOp *queueHead;
    GPIPeerOp *firstOp;
    GPIPeerOp *lastOp;
    struct GPIPeer *pnext;
} GPIPeer;
extern int func_02061568(void **connection, GPIBuffer *buffer, int c);
extern int func_020615e0(void **connection, GPIBuffer *buffer, const char *src, int n);
extern int gpiAppendStringToBuffer(void **connection, GPIBuffer *buffer, const char *string);
extern int gpiAppendIntToBuffer(void **connection, GPIBuffer *buffer, int value);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern void ArrayAppend(struct DArrayImplementation *array, void *newElem);
extern size_t strlen(const char *str);
extern long time(long *timer);
extern int gpiPeerAddMessage(void **connection, GPIPeer *peer, int type, char *message);
extern char data_020fb5d8[];
extern char data_020fb5dc[];
extern char data_020fb5e4[];
int gpiPeerAddMessage(void **connection, GPIPeer *peer, int type, char *message) {
    int len;

    if (peer == 0) {
        return 3;
    }
    if (message == 0) {
        return 3;
    }
    len = strlen(message);
    {
        GPIMessage gpiMessage = {0};
        gpiMessage.type       = type;
        {
            int __result__ = gpiAppendStringToBuffer(connection, (&gpiMessage.buffer), data_020fb5d8);
            if (__result__ != 0) {
                return __result__;
            }
        }
        {
            int __result__ = gpiAppendIntToBuffer(connection, (&gpiMessage.buffer), type);
            if (__result__ != 0) {
                return __result__;
            }
        }
        {
            int __result__ = gpiAppendStringToBuffer(connection, (&gpiMessage.buffer), data_020fb5dc);
            if (__result__ != 0) {
                return __result__;
            }
        }
        {
            int __result__ = gpiAppendIntToBuffer(connection, (&gpiMessage.buffer), len);
            if (__result__ != 0) {
                return __result__;
            }
        }
        {
            int __result__ = gpiAppendStringToBuffer(connection, (&gpiMessage.buffer), data_020fb5e4);
            if (__result__ != 0) {
                return __result__;
            }
        }
        gpiMessage.start = gpiMessage.buffer.len;
        {
            int __result__ = func_020615e0(connection, (&gpiMessage.buffer), message, len);
            if (__result__ != 0) {
                return __result__;
            }
        }
        {
            int __result__ = func_02061568(connection, (&gpiMessage.buffer), 0);
            if (__result__ != 0) {
                return __result__;
            }
        }
        ArrayAppend(peer->messages, &gpiMessage);
        peer->timeout = time(0) + 10000;
        return 0;
    }
}
