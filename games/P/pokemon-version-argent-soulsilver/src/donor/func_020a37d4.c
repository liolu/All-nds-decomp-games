/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCLi_ExecEnableSslCommand from https://github.com/Project-Holon/aletheia src/game/ov009/socl_ssl.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef s32 sptr;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef u64 OSTick;
typedef struct CPContext {
    u8 opaque[0x1C];
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
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
typedef enum OSThreadState {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
} OSThreadLink;
typedef struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLink;
typedef void (*OSAlarmHandler)(void *arg);
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
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
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
    void (*destructor)(void *);
    void *userParameter;
    int systemErrno;
};
typedef struct CPSSocBuf {
    u32 size;
    u8 *data;
} CPSSocBuf;
typedef struct CPSSocRcvBuf {
    u32 start;
    u32 len;
    u32 order;
} CPSSocRcvBuf;
struct CPSSoc {
    struct _OSThread *thread;
    u32 block_type;
    u8 state;
    u8 ssl;
    u16 local_port;
    struct CPSSslConnection *con;
    u32 when;
    u32 local_ip_real;
    u16 remote_port;
    u16 remote_port_bound;
    u32 remote_ip;
    u32 remote_ip_bound;
    u32 ackno;
    u32 ackno_sent;
    u32 tick_acked;
    u16 win_sent;
    u8 ack_pending;
    u8 sack_enabled;
    u32 seqno;
    u16 remote_win;
    u16 remote_mss;
    u32 remote_ackno;
    u32 ackrcvd;
    int (*udpread_callback)(u8 *buf, u32 len, struct CPSSoc *soc);
    CPSSocBuf rcvbuf;
    u32 rcvbufp;
    CPSSocBuf sndbuf;
    CPSSocBuf linbuf;
    CPSSocBuf outbuf;
    u32 outbufp;
    CPSSocRcvBuf chunks[4];
};
typedef struct CPSSoc CPSSoc;
struct SOCLiUdpData {
    struct SOCLiUdpData *next;
    unsigned short size;
    unsigned short remote_port;
    unsigned long remote_ip;
    unsigned char data[1];
};
struct SOCLiSocketRecvCommandPipe {
    unsigned char pad0[0xc4];
    CPSSoc *cpsoc;
    unsigned char padc8[0x18];
    unsigned char mutex[0x18];
    volatile long consumed;
    unsigned short consumed_min;
    signed char flag_noconsume;
    unsigned char padff;
    struct SOCLiUdpData *volatile tail;
    struct SOCLiUdpData *head;
    unsigned short recv_size;
    unsigned short recv_max;
    OSThreadQueue waiting;
};
struct SOCLiSocketRingBuffer {
    long size;
    unsigned char *area;
    volatile unsigned short in;
    volatile unsigned short out;
    OSThreadQueue waiting;
};
struct SOCLiSocketSendCommandPipe {
    unsigned char pad0[0xe0];
    unsigned char mutex[0x18];
    struct SOCLiSocketRingBuffer buffer;
    struct SOCLSocket *exe_socket;
};
struct SOCLSocket {
    CPSSoc cps_socket;
    struct SOCLiSocketRecvCommandPipe *recv_pipe;
    struct SOCLiSocketSendCommandPipe *send_pipe;
    long result;
    short state;
    signed char flag_block;
    signed char flag_mode;
    unsigned short local_port;
    unsigned short remote_port;
    unsigned long remote_ip;
};
typedef struct SOCLSocket SOCLSocket;
typedef struct SOCLiSocketRecvCommandPipe SOCLiSocketRecvCommandPipe;
typedef struct SOCLiSocketSendCommandPipe SOCLiSocketSendCommandPipe;
extern struct SOCLiCommandPacket *func_020a0b7c(int (*handler)(void *), struct SOCLSocket *socket, long flag);
extern int func_020a0cc4(struct SOCLSocket *socket, struct SOCLiCommandPacket *command);
typedef struct SOCLCaInfo {
    char *dn;
    int modulo_len;
    unsigned char *modulo;
    int exponent_len;
    unsigned char *exponent;
} SOCLCaInfo;
typedef struct CPSPrivateKey {
    int size;
    unsigned char *p0;
    int l1;
    unsigned char *p1;
    int l2;
    unsigned char *p2;
    int l3;
    unsigned char *p3;
    int l4;
    unsigned char *p4;
    int l5;
    unsigned char *p5;
} CPSPrivateKey;
typedef struct CPSSha1Ctx {
    u32 state[5];
    u32 count[2];
    unsigned char buffer[64];
} CPSSha1Ctx;
typedef struct CPSMd5Ctx {
    u32 state[4];
    u32 count[2];
    unsigned char buffer[64];
} CPSMd5Ctx;
typedef struct CPSRc4Ctx {
    unsigned char x;
    unsigned char y;
    unsigned char m[256];
} CPSRc4Ctx;
typedef union CPSCipherCtx {
    CPSRc4Ctx rc4;
    unsigned char b[0x104];
} CPSCipherCtx;
typedef struct CPSSslConnection CPSSslConnection;
struct CPSSslConnection {
    unsigned char master_secret[48];
    unsigned char cache;
    unsigned char resumed;
    unsigned short method;
    unsigned char client_random[32];
    unsigned char server_random[32];
    union {
        unsigned char session_id[0x20];
        unsigned char key_block[72];
    } common1;
    unsigned char *send_mac;
    unsigned char *send_key;
    unsigned char *send_iv;
    CPSCipherCtx send_cipher;
    unsigned char send_seq[8];
    unsigned char *rcv_mac;
    unsigned char *rcv_key;
    unsigned char *rcv_iv;
    CPSCipherCtx rcv_cipher;
    unsigned char rcv_seq[8];
    CPSSha1Ctx sha1_hash;
    CPSSha1Ctx sha1_hash_tmp;
    CPSMd5Ctx md5_hash;
    CPSMd5Ctx md5_hash_tmp;
    unsigned char server;
    unsigned char state;
    unsigned char have_record;
    unsigned char pad457;
    int hash_type;
    int pubkeyAlgo;
    unsigned char *cert_start;
    unsigned char *cert_end;
    unsigned char hash[0x14];
    int hash_len;
    SOCLCaInfo ca;
    unsigned char modulus[0x100];
    int modlen;
    unsigned char pubexp[8];
    int pubexplen;
    unsigned char *sig;
    int sig_len;
    unsigned char subjectPhase;
    unsigned char keyInfoOid;
    unsigned char cnOid;
    unsigned char dateValid;
    char dn[0x100];
    unsigned char subjectDn[0x100];
    unsigned char commonName[0x50];
    char *hostName;
    unsigned char *certData;
    int certLen;
    int currentDate;
    int (*f810)(int result, CPSSslConnection *con, int level);
    SOCLCaInfo **rootCa;
    int rootCaNum;
    CPSPrivateKey *privkey;
    unsigned char pad820[4];
    unsigned char *buf;
    unsigned long end;
    unsigned long pos;
};
extern struct SOCLiCommandPacket *func_020a0b7c(int (*handler)(void *), struct SOCLSocket *socket, long flag);
extern int func_020a37d4(void *socket, void *con);
extern int func_020a3810(void *arg);
int func_020a37d4(void *socket, void *con) {
    int *command;

    command = (int *) func_020a0b7c(func_020a3810, socket, 1);
    if (command == 0) {
        return -33;
    }
    command[4] = (sptr) con;
    return (int) func_020a0cc4((struct SOCLSocket *) socket, (struct SOCLiCommandPacket *) command);
}
int func_020a3810(void *arg);
