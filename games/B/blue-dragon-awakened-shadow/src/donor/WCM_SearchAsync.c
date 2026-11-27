/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WCM_SearchAsync from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern s32 WCM_SearchAsync(void *bssid, void *essid, u32 option);
extern s32 WCM_BeginSearchAsync(void *bssid, void *essid, u32 option);
extern s32 WCM_EndSearchAsync(void);
s32 WCM_SearchAsync(void *bssid, void *essid, u32 option) {

    if ((bssid == ((void *) 0)) || (essid == ((void *) 0))) {
        return WCM_EndSearchAsync();
    }

    return WCM_BeginSearchAsync(bssid, essid, option);
}
s32 WCM_BeginSearchAsync(void *bssid, void *essid, u32 option);
s32 WCM_EndSearchAsync(void);
