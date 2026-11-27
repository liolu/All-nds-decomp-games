/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOC_Poll from https://github.com/ntrtwl/NitroWiFi libraries/soc/src/soc.c (license: none), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long long int s64;
typedef int BOOL;
extern void OS_Sleep(u32 msec);
typedef u64 OSTick;
extern int SOCL_GetStatus(int s);
typedef struct SOCPollFD {
    int fd;
    short events;
    short revents;
} SOCPollFD;
extern u32(SOC_NtoHl)(u32 netlong);
extern u32(SOC_HtoNl)(u32 hostlong);
extern int SOC_Poll(SOCPollFD fds[], unsigned nfds, OSTick timeout);
int SOC_Poll(SOCPollFD *fds, unsigned int nfds, OSTick timeout) {
    SOCPollFD *fp;
    BOOL is_enable_timeout;
    s64 time;
    int i, num_good;
    int status, status_mask;

    is_enable_timeout = (timeout != (OSTick) (-1));
    time              = (s64) timeout;

    for (;;) {
        fp       = fds;
        num_good = 0;

        for (i = 0; i < nfds; i++) {
            status_mask = fp->events | 0x0020 | 0x0040 | 0x0080;
            status      = SOCL_GetStatus(fp->fd) & status_mask;
            if (status) {
                num_good++;
            }

            fp->revents = (s16) status;
            fp++;
        }

        if (num_good > 0 || (is_enable_timeout && time <= 0)) {
            break;
        }

        OS_Sleep(1);
        time -= (s64) ((OSTick) (((33514000 / 1000) * (u64) (1)) / 64));
    }

    return num_good;
}
