/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiPeerRemoveOp from https://github.com/LagoLunatic/ooe libs/GameSpy/GP/gpiPeer.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef int time_t;
typedef unsigned int gsi_time;
extern void gsifree(void *ptr);
typedef struct DArrayImplementation *DArray;
typedef void *GPConnection;
typedef int GPProfile;
typedef void (*GPCallback)(GPConnection *connection, void *arg, void *param);
typedef enum _GPIBool {
    GPIFalse,
    GPITrue
} GPIBool;
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
void gpiPeerRemoveOp(GPIPeer *peer, GPIPeerOp *operation) {
    {};
    ;
    {};
    ;
    if (!peer || !operation) {
        ;
        return;
    }

    {};
    ;
    if (peer->peerOpQueue.opList == 0) {
        ;
        return;
    }

    if (peer->peerOpQueue.first == peer->peerOpQueue.last && peer->peerOpQueue.first == operation) {
        peer->peerOpQueue.opList = peer->peerOpQueue.first = peer->peerOpQueue.last = operation->next;
    } else if (peer->peerOpQueue.first == operation) {
        peer->peerOpQueue.first  = peer->peerOpQueue.first->next;
        peer->peerOpQueue.opList = peer->peerOpQueue.first;
    } else {
        GPIPeerOp *aPrevOp = 0;
        for (aPrevOp = peer->peerOpQueue.first; aPrevOp->next != operation; aPrevOp = aPrevOp->next) {
            if (aPrevOp->next == 0) {

                ;
                return;
            }
        }
        aPrevOp->next = operation->next;
    }

    ;
    {
        gsifree(operation);
        (operation) = 0;
    };
}
