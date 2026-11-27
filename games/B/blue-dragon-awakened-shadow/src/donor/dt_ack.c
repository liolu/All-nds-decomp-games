/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dt_ack from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
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
extern void OS_YieldThread(void);
extern void OS_WakeupThreadDirect(OSThread *thread);
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
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
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
enum {
    CPS_STT_CLOSED = 0,
    CPS_STT_LISTEN,
    CPS_STT_SYN_SENT,
    CPS_STT_SYN_RCVD,
    CPS_STT_ESTABLISHED,
    CPS_STT_CLOSE_WAIT,
    CPS_STT_LAST_ACK,
    CPS_STT_FIN_WAIT1,
    CPS_STT_FIN_WAIT2,
    CPS_STT_CLOSING,
    CPS_STT_DATAGRAM,
    CPS_STT_PING
};
enum {
    CPS_BLOCK_NONE = 0,
    CPS_BLOCK_TCPCON,
    CPS_BLOCK_TCPREAD,
    CPS_BLOCK_UDPREAD
};
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
enum TCPHeaderOffset {
    TCP_OFFSET_SOURCE_PORT    = 0,
    TCP_OFFSET_DEST_PORT      = 2,
    TCP_OFFSET_SEQ_NO         = 4,
    TCP_OFFSET_ACK_NO         = 8,
    TCP_OFFSET_DATA_OFFSET    = 12,
    TCP_OFFSET_FLAG           = 13,
    TCP_OFFSET_WINDOW         = 14,
    TCP_OFFSET_CHECKSUM       = 16,
    TCP_OFFSET_URGENT_POINTER = 18,
    TCP_OFFSET_OPTIONS        = 20,
};
enum TCPFlag {
    TCP_FLAG_FIN = 1 << 0,
    TCP_FLAG_SYN = 1 << 1,
    TCP_FLAG_RST = 1 << 2,
    TCP_FLAG_PSH = 1 << 3,
    TCP_FLAG_ACK = 1 << 4,
    TCP_FLAG_URG = 1 << 5,
    TCP_FLAG_ECE = 1 << 6,
    TCP_FLAG_CWR = 1 << 7,
};
CPSSoc *find_socket(u8 *iphdr, u8 *tcphdr);
void tcp_send_ack(CPSSoc *soc, u16 urg);
void tcp_send_finack(CPSSoc *soc, u16 urg);
void tcp_send_rst(u8 *iphdr, u8 *tcphdr, u32 len, u16 urg);
void dt_ack(u8 *iphdr, u8 *tcphdr, u32 len) {
    CPSSoc *soc = find_socket(iphdr, tcphdr);
    if (soc == 0) {
        tcp_send_rst(iphdr, tcphdr, len, 0);
        return;
    }

    u8 flag = tcphdr[TCP_OFFSET_FLAG];

    u32 remote_ackno = (((u32) (CPS_htons((*(u16 *) (&tcphdr[TCP_OFFSET_ACK_NO])))) << 16) |
                        (CPS_htons((*(u16 *) ((&tcphdr[TCP_OFFSET_ACK_NO]) + 2)))));
    if ((int) (remote_ackno - soc->remote_ackno) > 0) {
        soc->remote_ackno = remote_ackno;
    }

    u32 remote_seqno = (((u32) (CPS_htons((*(u16 *) (&tcphdr[TCP_OFFSET_SEQ_NO])))) << 16) |
                        (CPS_htons((*(u16 *) ((&tcphdr[TCP_OFFSET_SEQ_NO]) + 2)))));
    if (soc->state == CPS_STT_ESTABLISHED && soc->ackno != remote_seqno) {
        tcp_send_ack(soc, 0);
        return;
    }

    soc->remote_win = (CPS_htons((*(u16 *) (&tcphdr[TCP_OFFSET_WINDOW]))));

    switch (soc->state) {
        case CPS_STT_CLOSED:
        case CPS_STT_SYN_SENT:
            tcp_send_rst(iphdr, tcphdr, len, 0);
            break;
        case CPS_STT_SYN_RCVD:
            soc->state = CPS_STT_ESTABLISHED;
            if (soc->block_type == CPS_BLOCK_TCPCON) {
                soc->block_type = CPS_BLOCK_NONE;
                OS_WakeupThreadDirect(soc->thread);
            }
            if (len == 0) {
                break;
            }
        case CPS_STT_ESTABLISHED:
            soc->ackrcvd++;

            BOOL bufok;
            if (len > soc->rcvbuf.size - soc->rcvbufp) {
                bufok = 0;
                len   = soc->rcvbuf.size - soc->rcvbufp;
            } else {
                bufok = 1;
            }

            if (len != 0) {
                OSIntrMode enabled = OS_DisableInterrupts();
                MI_CpuCopy8(tcphdr + (tcphdr[TCP_OFFSET_DATA_OFFSET] & 0xF0) / 4, soc->rcvbuf.data + soc->rcvbufp, len);
                soc->rcvbufp += len;
                soc->ackno += len;
                OS_RestoreInterrupts(enabled);

                if (soc->block_type == CPS_BLOCK_TCPREAD) {
                    soc->block_type = CPS_BLOCK_NONE;
                    OS_WakeupThreadDirect(soc->thread);
                }
            }

            if (bufok && (flag & TCP_FLAG_FIN)) {
                soc->state = CPS_STT_LAST_ACK;
                soc->ackno++;
                tcp_send_finack(soc, 0);

                if (len == 0 && soc->block_type == CPS_BLOCK_TCPREAD) {
                    soc->block_type = CPS_BLOCK_NONE;
                    OS_WakeupThreadDirect(soc->thread);
                }
            } else if (len != 0) {
                tcp_send_ack(soc, 0);
            }

            break;
        case CPS_STT_FIN_WAIT1:
        case CPS_STT_FIN_WAIT2:
            if (flag & TCP_FLAG_FIN) {
                soc->ackno += len + 1;
                tcp_send_ack(soc, 0);
                soc->state = CPS_STT_CLOSED;

                if (soc->block_type == CPS_BLOCK_TCPREAD) {
                    soc->block_type = CPS_BLOCK_NONE;
                    OS_WakeupThreadDirect(soc->thread);
                }
            } else {
                if (len != 0) {
                    soc->ackno += len;
                    tcp_send_ack(soc, 0);
                }

                soc->state = CPS_STT_FIN_WAIT2;
            }

            break;
        case CPS_STT_LAST_ACK:
        case CPS_STT_CLOSING:
            soc->state = CPS_STT_CLOSED;
            if (soc->block_type == CPS_BLOCK_TCPREAD) {
                soc->block_type = CPS_BLOCK_NONE;
                OS_WakeupThreadDirect(soc->thread);
            }

            break;
        case CPS_STT_LISTEN:
        case CPS_STT_CLOSE_WAIT:
        default:
            if (flag & TCP_FLAG_FIN) {
                soc->ackno++;
            }

            tcp_send_ack(soc, 0);
            break;
    }

    OS_YieldThread();
}
