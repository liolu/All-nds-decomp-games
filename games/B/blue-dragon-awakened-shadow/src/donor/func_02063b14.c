/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiIntToDate from https://github.com/Project-Holon/aletheia src/game/ov009/gpiinfo.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
extern void gpiSetErrorString(void **connection, char *errorString);
extern int gpiIsValidDate(int day, int month, int year);
extern int func_02063b14(void **connection, int date, int *day, int *month, int *year);
extern char data_020fb1ac[];
int gpiIsValidDate(int day, int month, int year);
int func_02063b14(void **connection, int date, int *day, int *month, int *year) {
    int d;
    int m;
    int y;

    d = (date >> 24) & 0xFF;
    m = (date >> 16) & 0xFF;
    y = date & 0xFFFF;
    if (!gpiIsValidDate(d, m, y)) {
        gpiSetErrorString(connection, data_020fb1ac);
        return 2;
    }
    *day   = d;
    *month = m;
    *year  = y;
    return 0;
}
