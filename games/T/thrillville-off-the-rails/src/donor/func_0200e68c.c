/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_IdentifyBackupCore from https://github.com/pret/pokediamond arm9/lib/NitroSDK/src/CARD_spi.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
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
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct OSMutex OSMutex;
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

    u32 systemErrno;
};
typedef void (*MIDmaCallback)(void *);
typedef enum {
    CARD_BACKUP_TYPE_EEPROM_4KBITS   = (((1) << 0) | ((9) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_64KBITS  = (((1) << 0) | ((13) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = (((1) << 0) | ((16) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_2MBITS    = (((2) << 0) | ((18) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_4MBITS    = (((2) << 0) | ((19) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_8MBITS    = (((2) << 0) | ((20) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FRAM_256KBITS   = (((3) << 0) | ((15) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_NOT_USE         = 0
} CARDBackupType;
typedef enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
} CARDResult;
typedef enum {
    CARD_TARGET_NONE,
    CARD_TARGET_ROM,
    CARD_TARGET_BACKUP
} CARDTargetMode;
typedef enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_MAX
} CARDRequest;
typedef enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;
typedef s32 CARDiOwner;
typedef struct CARDiCommandArg {
    CARDResult result;
    CARDBackupType type;
    u32 id;
    u32 src;
    u32 dest;
    u32 len;

    struct {
        u32 total_size;
        u32 sect_size;
        u32 page_size;
        u32 addr_width;
        u32 program_page;
        u32 write_page;
        u32 write_page_total;
        u32 erase_chip;
        u32 erase_chip_total;
        u32 erase_sector;
        u32 erase_sector_total;
        u32 erase_page;
        u8 initial_status;
        u8 padding1[3];
        u32 caps;
        u8 padding2[16];
    } spec;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    s32 command;

    volatile CARDiOwner lock_owner;
    volatile s32 lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;

    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    CARDRequest req_type;
    s32 req_retry;
    CARDRequestMode req_mode;
    MIDmaCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *);

    OSThread thread[1];
    OSThread *cur_th;

    u32 priority;
    OSThreadQueue busy_q[1];

    volatile u32 flag;

    u8 dummy[8];

    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
} CARDiCommon;
extern void func_0200e68c(CARDBackupType type);
extern void func_020212fc(register void *dstp, register u8 data, register u32 size);
extern CARDiCommon data_020eb1a0;
void func_0200e68c(CARDBackupType type) {
    CARDiCommandArg *const p = data_020eb1a0.cmd;

    func_020212fc(&p->spec, 0, sizeof(p->spec));
    p->type      = type;
    p->spec.caps = (u32) ((u32) (1 << CARD_REQ_READ_BACKUP) - 1);
    if (type != CARD_BACKUP_TYPE_NOT_USE) {
        const u32 size = (u32) (1 << ((type >> 8) & 0xFF));

        const s32 device = ((type >> 0) & 0xFF);

        p->spec.total_size     = size;
        p->spec.initial_status = 0xFF;
        if (device == 1) {
            switch (size) {
                default:
                    goto invalid_type;
                case 0x000200:
                    p->spec.page_size      = 0x10;
                    p->spec.addr_width     = 1;
                    p->spec.program_page   = 5;
                    p->spec.initial_status = 0xF0;
                    break;
                case 0x002000:
                    p->spec.page_size      = 0x0020;
                    p->spec.addr_width     = 2;
                    p->spec.program_page   = 5;
                    p->spec.initial_status = 0x00;
                    break;
                case 0x010000:
                    p->spec.page_size      = 0x0080;
                    p->spec.addr_width     = 2;
                    p->spec.program_page   = 10;
                    p->spec.initial_status = 0x00;
                    break;
            }
            p->spec.sect_size = p->spec.page_size;
            p->spec.caps |= (u32) (1 << CARD_REQ_READ_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_PROGRAM_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_VERIFY_BACKUP);
        } else if (device == 2) {
            switch (size) {
                default:
                    goto invalid_type;
                case 0x040000:
                case 0x080000:
                case 0x100000:
                    p->spec.write_page       = 25;
                    p->spec.write_page_total = 300;
                    p->spec.erase_page       = 300;
                    p->spec.erase_sector     = 5000;
                    p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_BACKUP);
                    p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_PAGE_BACKUP);
                    break;
                case 0x200000:
                    p->spec.erase_sector       = 1000;
                    p->spec.erase_sector_total = 3000;
                    p->spec.erase_chip         = 17000;
                    p->spec.erase_chip_total   = 40000;
                    p->spec.initial_status     = 0x00;
                    p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_CHIP_BACKUP);
                    break;
                case 0x800000:
                    p->spec.erase_sector       = 1000;
                    p->spec.erase_sector_total = 3000;
                    p->spec.erase_chip         = 68000;
                    p->spec.erase_chip_total   = 160000;
                    p->spec.initial_status     = 0x00;
                    p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_CHIP_BACKUP);
                    break;
            }
            p->spec.sect_size    = 0x010000;
            p->spec.page_size    = 0x0100;
            p->spec.addr_width   = 3;
            p->spec.program_page = 5;
            p->spec.caps |= (u32) (1 << CARD_REQ_READ_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_PROGRAM_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_VERIFY_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_SECTOR_BACKUP);
        } else if (device == 3) {
            switch (size) {
                default:
                    goto invalid_type;
                case 0x002000:
                case 0x008000:
                    break;
            }
            p->spec.page_size      = size;
            p->spec.sect_size      = size;
            p->spec.addr_width     = 2;
            p->spec.initial_status = 0x00;
            p->spec.caps |= (u32) (1 << CARD_REQ_READ_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_PROGRAM_BACKUP);
            p->spec.caps |= (u32) (1 << CARD_REQ_VERIFY_BACKUP);
        } else {
        invalid_type:
            p->type                   = CARD_BACKUP_TYPE_NOT_USE;
            p->spec.total_size        = 0;
            data_020eb1a0.cmd->result = CARD_RESULT_UNSUPPORTED;
            return;
        }
    }
}
