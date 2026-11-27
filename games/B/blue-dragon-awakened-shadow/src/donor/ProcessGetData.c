/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ProcessGetData from https://github.com/Project-Holon/aletheia src/game/ov009/gstats.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
extern char *strstr(const char *str1, const char *str2);
extern int atoi(const char *s);
extern char *value_for_key_safe(char *s, char *key);
extern int FindRequest(int reqtype, int localid, int profileid);
extern void ProcessGetData(char *buf, int len);
extern void CallReqCallback(int reqindex, int success, long modified, char *data, int length);
extern char data_020fbb9c[];
extern char data_020fbbac[];
extern char data_020fbbc0[];
extern char data_020fbbc8[];
extern char data_020fbbcc[];
extern char data_020fbbd0[];
extern char data_020fbbd8[];
void CallReqCallback(int reqindex, int success, long modified, char *data, int length);
void ProcessGetData(char *buf, int len) {
    int reqindex;
    int pid;
    int lid;
    int success;
    int length;
    long modified;
    char *data;

    success  = atoi(value_for_key_safe(buf, data_020fbbc0));
    lid      = atoi(value_for_key_safe(buf, data_020fbbac));
    pid      = atoi(value_for_key_safe(buf, data_020fbbc8));
    modified = atoi(value_for_key_safe(buf, data_020fbbcc));
    reqindex = FindRequest(1, lid, pid);
    if (reqindex == -1) {
        return;
    }
    length = atoi(value_for_key_safe(buf, data_020fbbd0));
    data   = (char *) strstr(buf, data_020fbbd8);
    if (data == 0) {
        data   = data_020fbb9c;
        length = 0;
    } else {
        data += 6;
    }
    CallReqCallback(reqindex, success, modified, data, length);
}
int FindRequest(int reqtype, int localid, int profileid);
char *value_for_key_safe(char *s, char *key);
