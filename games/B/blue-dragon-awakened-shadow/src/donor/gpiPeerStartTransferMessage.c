/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiPeerStartTransferMessage from https://github.com/Project-Holon/aletheia src/game/ov009/gpipeer.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef void (*GPCallback)(void **connection, void *arg, void *param);
typedef struct GPIBuffer {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
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
typedef struct GPITransferID {
    int profileid;
    unsigned int count;
    unsigned int time;
} GPITransferID;
extern int gpiSendOrBufferString(void **connection, GPIPeer *peer, char *string);
extern int func_020068c0(char *dst, const char *fmt, ...);
extern int gpiSendOrBufferString(void **connection, GPIPeer *peer, char *string);
extern int gpiSendOrBufferString(void **connection, GPIPeer *peer, char *string);
extern int gpiPeerStartTransferMessage(void **connection, GPIPeer *peer, int type, GPITransferID *transferID);
extern char data_020fb5ec[];
int gpiPeerStartTransferMessage(void **connection, GPIPeer *peer, int type, GPITransferID *transferID) {
    char buffer[64];
    int profileid;
    unsigned int count;
    unsigned int time;

    profileid = transferID->profileid;
    count     = transferID->count;
    time      = transferID->time;
    if (transferID == 0) {
        return 3;
    }
    func_020068c0(buffer, data_020fb5ec, type, profileid, count, time);
    return gpiSendOrBufferString(connection, peer, buffer);
}
