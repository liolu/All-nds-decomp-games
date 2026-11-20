/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ghttpRequestThink from https://github.com/Project-Holon/aletheia src/game/ov114/ghttpmain.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef enum {
    GHTTPFalse,
    GHTTPTrue
} GHTTPBool;
typedef void (*GHTTPProgressCallbackFn)(int request, int state, const char *buffer, int bufferLen, int bytesReceived,
                                        int totalSize, void *param);
typedef int (*GHTTPCompletedCallbackFn)(int request, int result, char *buffer, int bufferLen, void *param);
typedef void (*GHTTPPostCallback)(int request, int bytesPosted, int totalBytes, int objectsPosted, int totalObjects,
                                  void *param);
typedef int (*GHIEncryptorFunc)(struct GHIConnection *connection, struct GHIEncryptor *encryptor);
typedef int (*GHIEncryptFunc)(struct GHIConnection *connection, void *encryptor, const char *plainText, int plainTextLen,
                              char *cipherText, int *cipherTextLen);
typedef int (*GHIDecryptFunc)(struct GHIConnection *connection, void *encryptor, char *readPos, int *readLen, char *writePos,
                              int *writeLen);
typedef int (*GHICleanupFunc)(struct GHIConnection *connection, struct GHIEncryptor *encryptor);
typedef struct GHIBuffer {
    struct GHIConnection *connection;
    char *data;
    int size;
    int len;
    int pos;
    int sizeIncrement;
    int fixed;
    int dontFree;
    int readOnly;
} GHIBuffer;
typedef struct GHIPost {
    void *data;
    void *callback;
    void *param;
    GHTTPBool hasFiles;
    GHTTPBool hasSoap;
    GHTTPBool useDIME;
    GHTTPBool autoFree;
} GHIPost;
typedef struct GHIPostingState {
    void *states;
    int index;
    int bytesPosted;
    int totalBytes;
    GHTTPPostCallback callback;
    void *param;
    int waitPostContinue;
    int completed;
} GHIPostingState;
typedef struct GsTwlSslInterface {
    void *con;
    int connected;
} GsTwlSslInterface;
typedef struct GHIEncryptor {
    GsTwlSslInterface *mInterface;
    int engine;
    int interfaceCreated;
    int initialized;
    int sessionEstablished;
    int encryptOnBuffer;
    int encryptOnSend;
    int handshaking;
    GHIEncryptorFunc initFunc;
    GHICleanupFunc cleanupFunc;
    GHIEncryptorFunc startFunc;
    GHIEncryptFunc encryptFunc;
    GHIDecryptFunc decryptFunc;
} GHIEncryptor;
typedef struct GHIConnection {
    int inUse;
    int request;
    int uniqueID;
    int type;
    int state;
    char *URL;
    char *serverAddress;
    u32 serverIP;
    u16 serverPort;
    char *requestPath;
    int protocol;
    char *sendHeaders;
    void *saveFile;
    char *saveFileName;
    int blocking;
    int persistConnection;
    int result;
    GHTTPProgressCallbackFn progressCallback;
    GHTTPCompletedCallbackFn completedCallback;
    void *callbackParam;
    int socket;
    int socketError;
    GHIBuffer sendBuffer;
    GHIBuffer encodeBuffer;
    GHIBuffer recvBuffer;
    GHIBuffer decodeBuffer;
    GHIBuffer getFileBuffer;
    int userBufferSupplied;
    int statusMajorVersion;
    int statusMinorVersion;
    int statusCode;
    int statusStringIndex;
    int headerStringIndex;
    int completed;
    int fileBytesReceived;
    int totalSize;
    char *redirectURL;
    int redirectCount;
    int chunkedTransfer;
    char chunkHeader[12];
    int chunkHeaderLen;
    int chunkBytesLeft;
    int chunkReadingState;
    int processing;
    int connectionClosed;
    int throttle;
    u32 lastThrottleRecv;
    GHIPost *post;
    GHIPostingState postingState;
    u32 maxRecvTime;
    char *proxyOverrideServer;
    u16 proxyOverridePort;
    GHIEncryptor encryptor;
    int handleStatus;
    void *handle;
    u32 receiveFileIdleTime;
} GHIConnection;
extern GHIConnection *func_0200bf34(int request);
extern int socket(int pf, int type, int protocol);
extern int func_02002b28(GHIConnection *connection);
extern int func_0200c02c(int request);
int func_02002b28(GHIConnection *connection);
int func_0200c02c(int request) {
    GHIConnection *connection = func_0200bf34(request);
    if (connection == 0) {
        return 0;
    }
    func_02002b28(connection);
    return 1;
}
