/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiClipBufferToPosition from https://github.com/LagoLunatic/ooe libs/GameSpy/GP/gpiBuffer.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
extern void memmove(void *dest, void *src, size_t count);
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
typedef struct {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
extern GPResult gpiClipBufferToPosition(GPConnection *connection, GPIBuffer *buffer);
GPResult gpiClipBufferToPosition(GPConnection *connection, GPIBuffer *buffer) {
    if (!buffer || !buffer->buffer || !buffer->pos) {
        return GP_NO_ERROR;
    }

    buffer->len -= buffer->pos;
    if (buffer->len) {
        memmove(buffer->buffer, buffer->buffer + buffer->pos, (unsigned int) buffer->len);
    }
    buffer->buffer[buffer->len] = '\0';
    buffer->pos                 = 0;

    {
        void *y = &connection;
        y       = 0;
    };
    return GP_NO_ERROR;
}
