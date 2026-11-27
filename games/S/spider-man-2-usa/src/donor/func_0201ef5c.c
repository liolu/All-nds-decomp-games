/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* TouchRegionManager_Tick from https://github.com/SHOEGAZEssb/Rosy-Rupeeland-Decomp src/system/touch_region.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct RectS16 {
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
} RectS16;
typedef struct TouchRegion TouchRegion;
typedef struct TouchRegionVTable {
    TouchRegion *(*destroy)(TouchRegion *region);
    TouchRegion *(*destroyAndFree)(TouchRegion *region);
    void (*tick)(TouchRegion *region);
    void (*beginPress)(TouchRegion *region);
    void (*endPress)(TouchRegion *region);
    void (*notify)(TouchRegion *region, s32 value);
} TouchRegionVTable;
struct TouchRegion {
    const TouchRegionVTable *vtable;
    s32 value;
    s32 pressState;
    u32 flags;
    s32 countdown;
    RectS16 bounds;
};
typedef struct TouchRegionArray {
    TouchRegion **items;
    s32 capacity;
} TouchRegionArray;
typedef struct TouchRegionManager {
    const void *vtable;
    TouchRegionArray regions;
    s32 count;
    u32 flags;
} TouchRegionManager;
extern void func_0201ef5c(TouchRegionManager *manager);
void func_0201ef5c(TouchRegionManager *manager) {
    s32 i;

    for (i = 0; i < manager->count; i++) {
        manager->regions.items[i]->vtable->tick(manager->regions.items[i]);
    }
}
