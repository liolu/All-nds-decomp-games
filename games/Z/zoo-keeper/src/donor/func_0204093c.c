/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ZONEDATA_GetMapType from https://github.com/Project-Holon/aletheia src/game/arm9/zonedata.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
struct ZoneHeader {
    u8 mapType;
    u8 mapSubType;
    u16 areaId;
    u16 matrixId;
    u16 scriptArcId;
    u16 initScriptArcId;
    u16 msgArcId;
    u16 bgm[4];
    u16 encountId;
    u16 eventDataId;
    u16 parentZoneId;
    u16 placeNameId : 10;
    u16 placeNameWindow : 6;
    u16 weatherId : 6;
    u16 mapChangeType : 3;
    u16 cameraId : 7;
    u16 expObjSetId : 5;
    u16 fieldEffectSetId : 5;
    u16 bikeEnabled : 1;
    u16 dashEnabled : 1;
    u16 weatherEnabled : 1;
    u16 flyEnabled : 1;
    u16 rideBgmEnabled : 1;
    u16 palaceEnabled : 1;
    u16 cameraAreaId;
    u16 pad22;
    s32 posX;
    s32 posY;
    s32 posZ;
};
extern struct ZoneHeader *func_0204071c(u32 id);
extern u32 func_0204093c(u32 id);
struct ZoneHeader *func_0204071c(u32 id);
u32 func_0204093c(u32 id) {
    const struct ZoneHeader *r = func_0204071c(id);
    return r->mapType;
}
