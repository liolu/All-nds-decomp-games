/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a14e8 from https://github.com/ntrtwl/NitroWiFi libraries/soc/src/socl_bind.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef int BOOL;
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    int systemErrno;
};
typedef struct OSMessageQueue OSMessageQueue;
typedef void *OSMessage;
struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
};
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
extern const u16(*ctrdgi_fl_maxtime);
typedef struct CPSSoc CPSSoc;
typedef u32 CPSInAddr;
typedef BOOL (*CPSUDPReadCallback)(u8 *data, u32 len, CPSSoc *soc);
typedef struct CPSSocBuf {
    u32 size;
    u8 *data;
} CPSSocBuf;
typedef struct CPSSoc {
    OSThread *thread;
    u32 block_type;
    u8 state;
    u8 ssl;
    u16 local_port;
    void *con;
    u32 when;
    u32 local_ip_real;
    u16 remote_port;
    u16 remote_port_bound;
    CPSInAddr remote_ip;
    CPSInAddr remote_ip_bound;
    u32 ackno;
    u32 seqno;
    u16 remote_win;
    u16 remote_mss;
    u32 remote_ackno;
    u32 ackrcvd;
    CPSUDPReadCallback udpread_callback;
    CPSSocBuf rcvbuf;
    u32 rcvbufp;
    CPSSocBuf sndbuf;
    CPSSocBuf linbuf;
    CPSSocBuf outbuf;
    u32 outbufp;
} CPSSoc;
typedef struct {
    u32 state[4];
    u32 count[2];
    u8 buffer[64];
} CPSMd5Ctx;
typedef struct {
    u32 state[5];
    u32 count[2];
    u8 buffer[64];
} CPSSha1Ctx;
typedef struct {
    u8 x;
    u8 y;
    u8 m[256];
    u16 padding;
} CPSRc4Ctx;
typedef struct {
    char *dn;
    int modulus_len;
    u8 *modulus;
    int exponent_len;
    u8 *exponent;
} CPSCaInfo;
typedef struct {
    int certificate_len;
    u8 *certificate;
} CPSCertificate;
typedef struct {
    int modulus_len;
    u8 *modulus;
    int prime1_len;
    u8 *prime1;
    int prime2_len;
    u8 *prime2;
    int exponent1_len;
    u8 *exponent1;
    int exponent2_len;
    u8 *exponent2;
    int coefficient_len;
    u8 *coefficient;
} CPSPrivateKey;
typedef union {
    CPSRc4Ctx rc4_ctx;
} CPSCipherCtx;
typedef struct _CPSSslConnection {
    u8 master_secret[48];
    u8 session_cached;
    u8 reuse_session;
    u16 method;
    u8 client_random[32];
    u8 server_random[32];
    union {
        u8 sessionID[32];
        u8 key_block[2 * (20 + 16 + 0)];
    } common1;
    u8 *send_mac;
    u8 *send_key;
    u8 *send_iv;
    CPSCipherCtx send_cipher;
    u8 send_seq[8];
    u8 *rcv_mac;
    u8 *rcv_key;
    u8 *rcv_iv;
    CPSCipherCtx rcv_cipher;
    u8 rcv_seq[8];
    CPSSha1Ctx sha1_hash;
    CPSSha1Ctx sha1_hash_tmp;
    CPSMd5Ctx md5_hash;
    CPSMd5Ctx md5_hash_tmp;
    u8 server;
    u8 state;
    u8 inbuf_decrypted;
    u8 padding2;
    int sig_algorithm;
    int pub_algorithm;
    u8 *hash_start;
    u8 *hash_end;
    u8 hash_val[20];
    int hash_len;
    CPSCaInfo midca_info;
    u8 modulus[(2048 / 8)];
    u32 modulus_len;
    u8 exponent[(64 / 8)];
    int exponent_len;
    u8 *signature;
    int signature_len;
    u8 seen_validity;
    u8 seen_pub_algorithm;
    u8 seen_attr;
    u8 date_ok;
    char issuer[255 + 1];
    char subject[255 + 1];
    char cn[79 + 1];
    char *server_name;
    u8 *cert;
    int certlen;
    u32 cur_date;
    int (*auth_callback)(int, struct _CPSSslConnection *, int);
    CPSCaInfo **ca_info;
    int ca_builtins;
    CPSPrivateKey *my_key;
    CPSCertificate *my_certificate;
    u8 *inbuf;
    long inbuf_len;
    long inbuf_pnt;
} CPSSslConnection;
typedef CPSInAddr SOCLInAddr;
typedef struct SOCLiSocketRingBuffer {
    CPSSocBuf area;
    vu16 in;
    vu16 out;
    OSThreadQueue waiting;
} SOCLiSocketRingBuffer;
typedef struct SOCLiSocketUdpData {
    struct SOCLiSocketUdpData *next;
    u16 size;
    u16 remote_port;
    SOCLInAddr remote_ip;
} SOCLiSocketUdpData;
typedef struct SOCLiSocketUdpDataControl {
    SOCLiSocketUdpData *volatile in;
    SOCLiSocketUdpData *volatile out;
    vu16 size;
    u16 size_max;
    OSThreadQueue waiting;
} SOCLiSocketUdpDataControl;
typedef struct SOCLSocketCommandPipe {
    OSMessageQueue queue;
    OSThread thread;
    OSMutex in_use;
} SOCLiSocketCommandPipe;
typedef struct SOCLiSocketRecvCommandPipe {
    SOCLiSocketCommandPipe h;
    vs32 consumed;
    u16 consumed_min;
    s8 flag_noconsume;
    u8 padding[1];
    SOCLiSocketUdpDataControl udpdata;
} SOCLiSocketRecvCommandPipe;
typedef struct SOCLiSocketSendCommandPipe {
    SOCLiSocketCommandPipe h;
    SOCLiSocketRingBuffer buffer;
    struct SOCLSocket *exe_socket;
} SOCLiSocketSendCommandPipe;
typedef struct SOCLSocket {
    CPSSoc cps_socket;
    SOCLiSocketRecvCommandPipe *recv_pipe;
    SOCLiSocketSendCommandPipe *send_pipe;
    vs32 result;
    vs16 state;
    s8 flag_block;
    s8 flag_mode;
    u16 local_port;
    u16 remote_port;
    SOCLInAddr remote_ip;
    struct SOCLSocket *next;
} SOCLSocket;
typedef CPSSslConnection SOCLSslConnection;
typedef int (*SOCLiCommandHandler)(void *);
typedef struct SOCLiCommandHeader {
    SOCLiCommandHandler handler;
    SOCLSocket *socket;
    OSMessageQueue *response;
    s8 flag_mode;
    s8 flag_block;
    u8 padding[2];
} SOCLiCommandHeader;
typedef struct SOCLiCommandCreateSocket {
    SOCLiCommandHeader h;
} SOCLiCommandCreateSocket;
typedef struct SOCLiCommandBind {
    SOCLiCommandHeader h;
    u16 local_port;
    u16 remote_port;
    SOCLInAddr remote_ip;
} SOCLiCommandBind;
typedef struct SOCLiCommandListenAccept {
    SOCLiCommandHeader h;
    u16 local_port;
    u8 padding[2];
    volatile u16 *remote_port_ptr;
    volatile SOCLInAddr *remote_ip_ptr;
} SOCLiCommandListenAccept;
typedef struct SOCLiCommandRead {
    SOCLiCommandHeader h;
    u8 *buffer;
    s32 buffer_len;
    u16 *remote_port;
    SOCLInAddr *remote_ip;
    s8 flag_noconsume;
    u8 padding[3];
} SOCLiCommandRead;
typedef struct SOCLiCommandConsume {
    SOCLiCommandHeader h;
} SOCLiCommandConsume;
typedef struct SOCLiCommandWrite {
    SOCLiCommandHeader h;
    u8 *buffer1;
    s32 buffer1_len;
    u8 *buffer2;
    s32 buffer2_len;
    u16 wrtbuf_after;
    u8 padding[2];
    u16 local_port;
    u16 remote_port;
    SOCLInAddr remote_ip;
} SOCLiCommandWrite;
typedef struct SOCLiCommandShutdown {
    SOCLiCommandHeader h;
} SOCLiCommandShutdown;
typedef struct SOCLiCommandClose {
    SOCLiCommandHeader h;
} SOCLiCommandClose;
typedef struct SOCLiCommandEnableSsl {
    SOCLiCommandHeader h;
    SOCLSslConnection *connection;
} SOCLiCommandEnableSsl;
typedef union SOCLiCommandPacket {
    SOCLiCommandHeader h;
    SOCLiCommandCreateSocket create_socket;
    SOCLiCommandBind bind;
    SOCLiCommandListenAccept listen_accept;
    SOCLiCommandRead read;
    SOCLiCommandConsume consume;
    SOCLiCommandWrite write;
    SOCLiCommandShutdown shutdown;
    SOCLiCommandClose close;
    SOCLiCommandEnableSsl enable_ssl;
} SOCLiCommandPacket;
extern SOCLiCommandPacket *func_020a0b7c(SOCLiCommandHandler handler, SOCLSocket *socket, s32 flag);
extern int func_020a0cc4(SOCLSocket *socket, SOCLiCommandPacket *command);
extern int func_020a1540(void *arg);
extern int func_020a14e8(SOCLSocket *socket);
int func_020a14e8(SOCLSocket *socket) {
    SOCLiCommandPacket *command;
    s32 result;

    command = func_020a0b7c(func_020a1540, socket, socket->flag_block);

    if (((void *) 0) == command) {
        return (-33);
    }

    command->bind.local_port  = socket->local_port;
    command->bind.remote_port = socket->remote_port;
    command->bind.remote_ip   = socket->remote_ip;
    socket->state |= 0x0002;

    result = func_020a0cc4(socket, command);

    return result;
}
int func_020a1540(void *arg);
