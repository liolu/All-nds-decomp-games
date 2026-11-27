/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020adcb4 from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern s32 func_020adcb4(void *bssid, void *essid, u32 option);
extern s32 func_020adcd4(void *bssid, void *essid, u32 option);
extern s32 func_020ade4c(void);
s32 func_020adcb4(void *bssid, void *essid, u32 option) {

    if ((bssid == ((void *) 0)) || (essid == ((void *) 0))) {
        return func_020ade4c();
    }

    return func_020adcd4(bssid, essid, option);
}
s32 func_020adcd4(void *bssid, void *essid, u32 option);
s32 func_020ade4c(void);
