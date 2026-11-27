/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiPeerSendMessages from https://github.com/LagoLunatic/ooe libs/GameSpy/GP/gpiPeer.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef int time_t;
typedef unsigned int gsi_time;
typedef struct DArrayImplementation *DArray;
extern int ArrayLength(const DArray array);
extern void *ArrayNth(DArray array, int n);
extern void ArrayDeleteAt(DArray array, int n);
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
extern GPResult gpiSendBufferToPeer(GPConnection *connection, unsigned int ip, unsigned short port, GPIBuffer *outputBuffer,
                                    GPIBool *closed, GPIBool clipSentData);
typedef enum {
    GPI_PEER_OP_STATE_NONE,
    GPI_PEER_OP_STATE_REQUESTED,
    GPI_PEER_OP_STATE_FINISHED
} GPIPeerOpState;
typedef struct GPIMessage {
    GPIBuffer buffer;
    int type;
    int start;
} GPIMessage;
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
extern GPResult gpiPeerSendMessages(GPConnection *connection, GPIPeer *peer);
GPResult gpiPeerSendMessages(GPConnection *connection, GPIPeer *peer) {
    GPIBool connClosed;
    GPIMessage *message;
    GPResult result;

    {};
    ;
    if (!peer) {
        return GP_NETWORK_ERROR;
    }

    if (peer->outputBuffer.len) {
        return GP_NO_ERROR;
    }

    while (ArrayLength(peer->messages)) {

        message = (GPIMessage *) ArrayNth(peer->messages, 0);

        result = gpiSendBufferToPeer(connection, peer->ip, peer->port, &message->buffer, &connClosed, GPIFalse);
        if (connClosed || (result != GP_NO_ERROR)) {
            peer->state = 106;
            return GP_NO_ERROR;
        }

        if (message->buffer.pos != message->buffer.len) {
            break;
        }

        ArrayDeleteAt(peer->messages, 0);
    }

    return GP_NO_ERROR;
}
