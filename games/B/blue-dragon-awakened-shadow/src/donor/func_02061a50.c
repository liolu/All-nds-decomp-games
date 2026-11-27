/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiSendFromBuffer from https://github.com/Project-Holon/aletheia src/game/ov009/gpibuffer.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned long size_t;
typedef struct GPIBuffer {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
extern int gpiSendData(int *connection, int sock, char *buffer, int bufferLen, int *closed, int *sent, char *id);
extern int func_02061a50(void **connection, int sock, GPIBuffer *outputBuffer, int *connClosed, int clipSentData, char *id);
extern void *memmove(void *dest, const void *src, size_t n);
int gpiSendData(int *connection, int sock, char *buffer, int bufferLen, int *closed, int *sent, char *id);
int func_02061a50(void **connection, int sock, GPIBuffer *outputBuffer, int *connClosed, int clipSentData, char *id) {
    int closed;
    int sent;
    int total;
    int remaining;
    char *buffer;
    int pos;
    int len;
    int result;

    buffer    = outputBuffer->buffer;
    len       = outputBuffer->len;
    pos       = outputBuffer->pos;
    remaining = len - pos;
    total     = 0;

    if (remaining == 0) {
        return 0;
    }

    do {
        result = gpiSendData((int *) connection, sock, &buffer[pos + total], remaining, &closed, &sent, id);
        if (result != 0) {
            return result;
        }
        if (sent) {
            total += sent;
            remaining -= sent;
        }
    } while (sent && remaining);

    if (clipSentData) {
        if (total > 0) {
            memmove(buffer, &buffer[total], remaining + 1);
            len -= total;
        }
    } else {
        pos += total;
    }

    outputBuffer->len = len;
    outputBuffer->pos = pos;
    if (connClosed != 0) {
        *connClosed = closed;
    }
    return 0;
}
