/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiCheckTimedOutPeerOperations from https://github.com/LagoLunatic/ooe libs/GameSpy/GP/gpiPeer.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef unsigned long size_t;
typedef int time_t;
typedef unsigned int gsi_time;
extern gsi_time current_time();
extern void *gsimalloc(size_t size);
typedef struct DArrayImplementation *DArray;
typedef enum _GPResult {
    GP_NO_ERROR,
    GP_MEMORY_ERROR,
    GP_PARAMETER_ERROR,
    GP_NETWORK_ERROR,
    GP_SERVER_ERROR,
    GP_MISC_ERROR,
    GP_COUNT
} GPResult;
typedef void *GPConnection;
typedef int GPProfile;
typedef void (*GPCallback)(GPConnection *connection, void *arg, void *param);
typedef struct {
    GPProfile profile;
    char **keys;
    char **values;
    int numKeys;

} GPGetBuddyStatusInfoKeysArg;
typedef enum _GPIBool {
    GPIFalse,
    GPITrue
} GPIBool;
typedef struct {
    GPCallback callback;
    void *param;
} GPICallback;
extern GPResult gpiAddCallback(GPConnection *connection, GPICallback callback, void *arg,
                               const struct GPIOperation_s *operation, int type);
typedef struct GPIOperation_s {
    int type;
    void *data;
    GPIBool blocking;
    GPICallback callback;
    int state;
    int id;
    GPResult result;
    struct GPIOperation_s *pnext;
} GPIOperation;
typedef struct {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
typedef enum {
    GPI_PEER_OP_STATE_NONE,
    GPI_PEER_OP_STATE_REQUESTED,
    GPI_PEER_OP_STATE_FINISHED
} GPIPeerOpState;
typedef struct _GPIPeerOp {
    GPIPeerOpState state;
    void *userData;
    GPCallback callback;
    struct _GPIPeerOp *next;
    int type;
    gsi_time timeout;
} GPIPeerOp;
typedef struct _GPIPeerOpQueue {
    GPIPeerOp *opList;
    GPIPeerOp *first;
    GPIPeerOp *last;
} GPIPeerOpQueue;
typedef struct GPIPeer_s {
    int state;
    GPIBool initiated;

    unsigned int ip;
    unsigned short port;
    GPProfile profile;
    time_t timeout;
    int nackCount;
    GPIBuffer inputBuffer;
    GPIBuffer outputBuffer;
    DArray messages;
    GPIPeerOpQueue peerOpQueue;
    struct GPIPeer_s *pnext;
} GPIPeer;
extern void gpiPeerRemoveOp(GPIPeer *peer, GPIPeerOp *operation);
extern void gpiCheckTimedOutPeerOperations(GPConnection *connection, GPIPeer *peer);
void gpiCheckTimedOutPeerOperations(GPConnection *connection, GPIPeer *peer) {
    GPIPeerOp *anIterator = peer->peerOpQueue.first;
    {};
    ;
    if (!peer) {
        return;
    }

    while (anIterator && anIterator != peer->peerOpQueue.last) {
        if (anIterator->state != GPI_PEER_OP_STATE_FINISHED && current_time() > anIterator->timeout && anIterator->callback) {

            if (anIterator->type == 104) {
                GPICallback callback;
                GPGetBuddyStatusInfoKeysArg *arg =
                    (GPGetBuddyStatusInfoKeysArg *) gsimalloc(sizeof(GPGetBuddyStatusInfoKeysArg));
                callback.callback = anIterator->callback;
                callback.param    = anIterator->userData;
                arg->keys         = 0;
                arg->numKeys      = 0;
                arg->values       = 0;
                arg->profile      = peer->profile;
                gpiAddCallback(connection, callback, arg, 0, 0);
            }

            ;
            gpiPeerRemoveOp(peer, anIterator);
        }
        anIterator = anIterator->next;
    }
}
void gpiPeerRemoveOp(GPIPeer *peer, GPIPeerOp *operation);
