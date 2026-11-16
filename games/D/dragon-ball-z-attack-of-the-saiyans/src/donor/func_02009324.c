/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* BTL_SERVER_FLOW_ItemEffectCureParalysis from https://github.com/Project-Holon/aletheia src/game/ov093/btl_server_flow.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef s32 fx32;
union SickCont {
    u32 raw;
    struct {
        u32 kind : 3;
        u32 paramLow : 6;
        u32 paramHigh : 6;
        u32 flags : 17;
    } byPart;
    struct {
        u32 kind : 3;
        u32 index : 6;
        u32 value : 16;
        u32 flagsWide : 7;
    } byValue;
    struct {
        u32 kind : 3;
        u32 skip : 12;
        u32 value : 16;
        u32 extra : 1;
    } wideParam;
    struct {
        u32 kind : 3;
        u32 skip : 22;
        u32 flag : 1;
        u32 extra : 6;
    } flagMid;
    struct {
        u32 kind : 3;
        u32 skip : 28;
        u32 flag : 1;
    } flagHigh;
    struct {
        u32 kind : 3;
        u32 index : 6;
        u32 extra : 23;
    } indexOnly;
};
struct MoveInfo {
    u16 id;
    u8 pp;
    u8 ppMax;
    u8 ppUp;
    union {
        u8 counters;
        struct {
            u8 counterLow : 4;
            u8 counterHigh : 4;
        };
    };
};
struct BattleMoveSlot {
    union {
        u16 halves[6];
        struct {
            struct MoveInfo cur;
            struct MoveInfo saved;
        };
    };
    u8 savedActive;
    u8 savedSpare;
};
struct StatStages {
    union {
        u8 stage[7];
        struct {
            s8 attack;
            s8 defense;
            s8 spAttack;
            s8 spDefense;
            u8 speed;
            s8 accuracy;
            s8 evasion;
        };
    };
};
struct BtlHitRecord {
    u16 moveId;
    u16 damage;
    union {
        u16 typeAndAttacker;
        struct {
            u8 moveType;
            u8 attackerId;
        };
    };
    union {
        u16 hitFlags;
        struct {
            u8 attackerPos;
            u8 hitFlagsHigh;
        };
    };
};
struct BtlLevelUpResult {
    u8 level;
    u8 reserved;
    u16 maxHpGain;
    u16 attackGain;
    u16 defenseGain;
    u16 spAttackGain;
    u16 spDefenseGain;
    u16 speedGain;
};
struct BtlPokeParam {
    struct PokemonParam *mon;
    struct PokemonParam *illusionMon;
    u32 exp;
    u16 species;
    u16 maxHp;
    u16 hp;
    u16 heldItem;
    u16 consumedItem;
    u16 baseAbility;
    u8 level;
    u8 partyIndex;
    u8 genderRatio;
    u8 baseForm : 5;
    u8 isTransformed : 1;
    u8 illusionActive : 1;
    u8 thresholdArmed : 1;
    union SickCont sickCont[36];
    u8 sickTurn[36];
    u8 foughtCount;
    u8 foughtIds[0x18];
    u8 padE9[0xee - 0xe9];
    u16 attack;
    u16 defense;
    u16 spAttack;
    u16 spDefense;
    u16 speed;
    u8 type1;
    u8 type2;
    u8 gender;
    u8 padFB;
    struct StatStages stages;
    u8 pad103[1];
    struct BattleMoveSlot moves[4];
    u16 ability;
    u16 weight;
    u8 moveCount;
    u8 form;
    u8 critStage;
    u8 usedMoveCount;
    u8 lastTargetPos;
    u8 pad145[1];
    u16 turnsOnField;
    u16 turnThreshold;
    u16 lastSelectedMoveId;
    u16 lastUsedMoveId;
    u16 moveStreak;
    u8 pad150[2];
    u8 lastMoveSlot;
    u8 turnFlags[2];
    u8 contFlags[2];
    u8 counters[5];
    struct BtlHitRecord hitHistory[3][6];
    u8 hitCount[3];
    u8 hitTurnIndex;
    u8 hitHistorySpare;
    u8 pad1F1[1];
    u16 substituteHp;
    u16 storedMoveId;
    u8 storedPokeId;
    u8 pad1F7;
};
typedef struct BtlPokeParam BtlPokeParam;
typedef struct {
    u64 seed;
    u64 mul;
    u64 add;
} BtlRngState;
struct BtlClientSet {
    u32 count;
    u8 ids[4];
};
union BtlAction {
    u32 raw;
    struct {
        u32 kind : 4;
        u32 rest : 28;
    } head;
    struct {
        u32 kind : 4;
        u32 targetPos : 3;
        u32 moveId : 16;
        u32 unused : 3;
        u32 slotFlag : 1;
        u32 rest : 5;
    } fight;
    struct {
        u32 kind : 4;
        u32 targetIndex : 3;
        u32 itemId : 16;
        u32 itemParam : 8;
        u32 rest : 1;
    } item;
    struct {
        u32 kind : 4;
        u32 posIndex : 3;
        u32 memberIndex : 3;
        u32 depleted : 1;
        u32 rest : 21;
    } change;
    struct {
        u32 kind : 4;
        u32 direction : 3;
        u32 rest : 25;
    } rotate;
};
typedef struct {
    u8 *bytes;
    u32 size : 31;
    u32 failed : 1;
    u32 readPos[4];
    u32 lastRecord[4][16];
} BtlRecReader;
typedef struct {
    u8 used;
    u8 channelMask;
    u8 recordCount;
    u8 type : 6;
    u8 flag : 1;
    u8 full : 1;
    u8 data[60];
} BtlRecPacket;
typedef struct {
    struct BtlPokeParam *pokeParam;
    union BtlAction action;
    u32 orderKey;
    u8 clientId;
    u8 done;
    u8 flag;
    u8 pad;
} BtlServerEntry;
struct BtlMoveParam {
    u16 moveId;
    u16 origMoveId;
    u16 typePair;
    u8 type;
    u8 pad07;
    u32 damageType;
    u32 range;
    union {
        u32 flags;
        struct {
            u32 deferred : 1;
            u32 rest : 31;
        } bits;
    } u;
};
typedef struct BtlServer BtlServer;
typedef int (*BtlServerHandler)(BtlServer *server, int *step);
typedef struct {
    void *adapter;
    struct BtlSideSlot *party;
    u8 partyCount;
    u8 battleSlots;
    u8 adapterBorrowed;
    u8 clientId;
} BtlServerClient;
typedef struct {
    u16 playerClientId;
    u16 result;
} BtlServerResult;
typedef struct {
    union BtlAction action[4][3];
    u8 count[4];
} BtlServerActionTable;
struct BtlServer {
    BtlServerHandler handler;
    int step;
    u32 pad08;
    struct BtlMain *main;
    void *partyTable;
    BtlServerClient clients[4];
    void *flow;
    int flowResult;
    int flowParam;
    BtlRngState rngState;
    BtlRecPacket recorder;
    BtlServerResult result;
    void *nameBuf;
    struct BtlClientSet *finalData;
    BtlServerActionTable replies;
    u8 padE8[4];
    u8 shiftPromptMon;
    u8 quitState;
    u8 padEE[2];
    u8 sendBufStorage[0xBC0];
    void *sendBuf;
    u8 changeClients[6];
    u8 changeCount;
    u8 padCBB[4];
    u8 changeLock;
    u16 heapId;
    u8 padCC2[2];
};
typedef int (*BtlEventSkipCheck)(struct BtlEventFactor *other, void *context, int factorType, int eventId, u16 key,
                                 u8 ownerId);
typedef struct {
    int eventId;
    void (*handler)(struct BtlEventFactor *factor, void *context, u8 ownerId, void *work);
} BtlEventHandler;
struct BtlEventFactor {
    struct BtlEventFactor *prev, *next;
    const BtlEventHandler *handlers;
    BtlEventSkipCheck skipCheck;
    int factorType;
    u32 priority;
    u32 addDepth : 16;
    u32 handlerCount : 8;
    u32 running : 1;
    u32 suspended : 1;
    u32 answersSpecial : 1;
    u32 removePending : 1;
    u32 keepRunning : 1;
    u32 active : 1;
    u32 disabled : 1;
    u32 reserved31 : 1;
    u32 work[7];
    u16 key;
    u8 ownerId;
    u8 pokeId;
};
typedef struct BtlStrParam {
    u16 strId;
    union {
        struct {
            u8 strType;
            u8 argCount : 7;
            u8 argFlag : 1;
        };
        struct {
            u16 strTypeHalf : 8;
            u16 argCountHalf : 7;
            u16 argFlagHalf : 1;
        };
    };
    u32 args[8];
} BtlStrParam;
typedef struct BtlWazaRecEntry {
    u32 turn;
    u16 wazaId;
    u8 pokeId;
    u8 effective;
} BtlWazaRecEntry;
typedef struct BtlWazaRec {
    u32 writeIndex;
    BtlWazaRecEntry entry[120];
} BtlWazaRec;
typedef struct BtlDeadRecTurn {
    u8 count;
    u8 reported[24];
    u8 pokeId[24];
} BtlDeadRecTurn;
typedef struct BtlDeadRec {
    BtlDeadRecTurn turn[4];
} BtlDeadRec;
typedef struct BtlPosPokeEntry {
    u8 valid;
    u8 clientId;
    u8 pokeId;
} BtlPosPokeEntry;
typedef struct BtlPosPoke {
    BtlPosPokeEntry entry[6];
    u8 posOfPoke[6];
} BtlPosPoke;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct RailLocation {
    u16 railIndex;
    u8 type;
    u8 key;
    s16 widthGrid;
    u16 lineGrid;
} RailLocation;
typedef struct Location {
    u32 type;
    u16 zoneId;
    s16 exitId;
    s16 dir;
    u16 exitOffset;
    u32 posType;
    union {
        VecFx32 vec;
        RailLocation rail;
    } pos;
} Location;
typedef struct PlayerPosition {
    u32 x;
    u32 y;
    u32 z;
} PlayerPosition;
struct MyStatus {
    u16 name[8];
    u32 id;
    u32 profile_id;
    u8 nation;
    u8 area;
    u8 language;
    u8 rom_code;
    u8 trainer_view;
    u8 sex;
};
struct PlayerWork {
    unsigned short zoneId;
    unsigned short railZoneId;
    PlayerPosition position;
    RailLocation rail;
    unsigned short direction;
    unsigned char posType;
    unsigned char moveForm;
    unsigned short palaceZoneId;
    unsigned char pad1E[2];
    struct MyStatus status;
    unsigned int objectCode;
};
struct GameData {
    struct SaveControl *saveControl;
    struct PlayerWork playerWork[5];
    void *eventData;
    struct PlayerLocationData *situation;
    struct Location *startLocation;
    struct Location *entranceLocation;
    struct Location *specialLocation;
    struct Location *escapeLocation;
    struct Location warpLocation;
    struct BagCursor *mapMatrix;
    void *myItem;
    void *myParty;
    struct Config *config;
    u32 *boxManager;
    struct WifiList *wifiList;
    struct BgmInfoTable *bagCursor;
    void *occupyInfo;
    void *eventWork;
    struct MapMatrix *fieldWork;
    struct FieldSoundSystem *bgmInfo;
    void *moveModelSys;
    unsigned int lastBattleResult;
    unsigned int saveStatus;
    unsigned char season;
    unsigned char weatherId;
    unsigned char subscreenType;
    unsigned char fieldMenuCursor;
    unsigned char walkCount;
    unsigned char walkCountEnabled;
    unsigned char enterMode;
    unsigned char ownNetId;
    unsigned char intrudeCount;
    unsigned char intrudeId;
    unsigned char isSaving;
    unsigned char symbolMapFlag;
    unsigned char slotFlags[4];
    unsigned char battleRecSlot[4][0x10];
    unsigned char unionInfo[2][0x1E8];
    void *fieldGimmick;
    unsigned char rtcWork[4];
    unsigned char fieldSave[0x94];
    void *eventState;
    struct CommPlayerSupport *pmsWork;
    void *currentEvent;
    struct BeaconStatus *itemUseWork;
    struct CalenderWork *musicalWork;
    unsigned char saveSyncBlock[0x10];
    unsigned int listCursor;
    void *externalWork;
    struct PlayTime *playTime;
};
struct FieldSituation {
    int bgType;
    int bgAttr;
    unsigned char weather;
    unsigned char season;
    unsigned short zoneId;
    unsigned char hour;
    unsigned char minute;
};
struct BattleRngState {
    unsigned int words[6];
};
struct BattleTrainerData {
    unsigned int trainerId;
    unsigned int trainerType;
    unsigned int aiFlags;
    unsigned short itemIds[4];
    void *name;
    union {
        unsigned char winWord[8];
        unsigned short winWords[4];
    };
    union {
        unsigned char loseWord[8];
        unsigned short loseWords[4];
    };
};
struct BattleSetupParam {
    unsigned int competitor;
    unsigned int rule;
    struct FieldSituation fieldSituation;
    unsigned short bgmBattle;
    unsigned short bgmWin;
    struct GFLNetHandle *netHandle;
    unsigned char commPos;
    unsigned char netId;
    unsigned char multiMode;
    unsigned char ownsSlots;
    struct Party *party[4];
    void *playerStatus[4];
    unsigned char voiceFlags[4];
    struct BattleTrainerData *trainerData[4];
    struct GameData *gameData;
    struct Config *config;
    void *myItem;
    struct BagCursor *mapMatrix;
    void *zukanWork;
    void *trainerRecord;
    struct CommPlayerSupport *pmsWork;
    unsigned short limitTimeGame;
    unsigned short limitTimeCommand;
    unsigned char regulationRules[7];
    unsigned char recordEnabled;
    unsigned char badgeCount;
    unsigned char pad81;
    unsigned short statusFlags;
    unsigned short levelCap;
    unsigned short resultCount;
    int moneyDelta;
    unsigned int outcome;
    unsigned char resultValue[4];
    void *recordBuffer;
    unsigned int recordSize;
    struct BattleRngState rng;
    unsigned short hpSum;
    unsigned char turnCount;
    unsigned char stats[6];
    unsigned char won;
    unsigned char enemyFainted;
    unsigned char ownFainted;
    unsigned char moveUseTotal;
    union {
        unsigned char bitFlags;
        struct {
            unsigned char recordInvalid : 1;
            unsigned char recordComplete : 1;
            unsigned char hidePlayerNames : 1;
            unsigned char flagsRest : 5;
        } bits;
    };
    unsigned char resultFlags[6];
    unsigned char memberStatus[4][6];
    unsigned int hpPercent[4];
};
typedef struct PmsData {
    unsigned short sentenceType;
    unsigned short sentenceId;
    unsigned short word[2];
} PmsData;
typedef struct {
    u32 value;
    u32 count;
} BtlFieldCountdown;
typedef struct {
    BtlFieldCountdown countdown;
    struct BtlEventFactor *effectHandle[8];
    union SickCont key[8];
    u32 elapsedTurns[8];
    u32 holderIds[8][6];
    u32 holderCount[8];
    u32 inUse[8];
} BtlFieldState;
typedef int (*BtlStepFn)(u32 *step, void *arg);
struct BtlTask {
    BtlStepFn current;
    BtlStepFn queued;
    void *arg;
    u32 step;
};
struct BtlRuleExchange {
    u32 regulation[6];
    u16 resultCount;
    u16 limitTimeGame;
    u16 limitTimeCommand;
    u8 textSpeed;
    u8 sceneOff : 4;
    u8 reserved : 4;
};
struct BtlTrainerSlot {
    void *handle;
    void *name;
    u16 trainerType;
    u16 trainerId;
    int aiFlags;
    u16 itemIds[4];
    PmsData winWord;
    PmsData loseWord;
};
struct BtlSideSlot {
    struct BtlPokeParam *items[6];
    u8 count;
    u8 pad19[3];
};
struct BtlSide {
    struct BtlMain *main;
    struct BtlSideSlot slots[4];
    struct Party *parties[4];
    struct BtlPokeParam *pokeParams[24];
    u32 sideIndex;
};
struct BtlMainFlagBits {
    u8 commLost : 1;
    u8 commLostHandled : 1;
    u8 noBattleAnim : 1;
    u8 moneyLocked : 1;
    u8 penaltyDone : 1;
    u8 keepBgm : 1;
    u8 doubleMoney : 1;
    u8 sleepHooksSet : 1;
};
struct BtlMain {
    struct BattleSetupParam *setup;
    struct BtlvCore *viewCore;
    struct BtlServer *server;
    struct BtlServer *subServer;
    struct BtlClient *clients[4];
    struct BtlTrainerSlot trainers[4];
    struct MyStatus *playerStatus;
    u8 clientReady[4];
    struct BtlSide sides[2];
    struct Party *battleParties[4];
    struct Party *savedParties[4];
    struct Party *tempParty;
    BtlFieldState *field;
    void *tempBuffer;
    void *netBuffer;
    BtlRecReader recordReader;
    struct PerapVoice *voices[4];
    BtlRngState rng;
    struct BtlRuleExchange ruleExchange;
    u8 slotClientIds[6];
    u8 pad42E[2];
    int prizeMoney;
    int bonusMoney;
    int penaltyMoney;
    u32 textSpeed;
    u16 limitTimeGame;
    u16 limitTimeCommand;
    u32 outcome;
    struct BtlClientSet defeatedClients;
    struct BtlTask task;
    union {
        u32 subStep;
        int fadeLevel;
    };
    int (*tick)(struct BtlMain *main);
    u16 heapId;
    u8 pad46A;
    u8 clientCount;
    u8 ownClientId;
    u8 ownFirstSlot;
    u8 hostsServer;
    u8 isSetStyle;
    u8 exchangeIndex;
    u8 multiState;
    u8 exchangeSlot;
    struct BtlMainFlagBits flags;
};
typedef struct BtlPokeSet {
    struct BtlPokeParam *poke[6];
    u16 damage[6];
    u16 damageExtra[6];
    u8 damageKind[6];
    u16 speed[6];
    u8 count;
    u8 countMax;
    u8 seekIndex;
    u8 emptyMarked;
    u8 pad46[2];
} BtlPokeSet;
typedef struct EventParamBuf {
    u8 work[0x220];
    u32 pendingCounter;
} EventParamBuf;
typedef struct BtlServerFlowFrame {
    BtlPokeSet targetSet;
    BtlPokeSet targetSetWork;
    BtlPokeSet hitSetA;
    BtlPokeSet hitSetB;
    BtlPokeSet damageSet;
    BtlPokeSet effectSet;
    BtlPokeSet queuedSet;
    u8 moveTurnState[8];
    struct BtlMoveParam moveParam;
    struct BtlMoveParam moveParamBackup;
    u8 hitInfo[6];
    u8 interruptQueue[0x13];
    u8 deferredQueue[0x13];
    u8 hitRecordA[0x1C];
    u8 hitRecordB[0x1C];
    u8 retargetSlot;
    u8 frameFlagA;
    u8 failMessageShown;
    u8 padFrameEnd;
} BtlServerFlowFrame;
typedef struct BtlServerFlow {
    struct BtlServer *server;
    struct BtlMain *mainModule;
    struct BtlSide *pokeCon;
    void *cmdQueue;
    u32 turnCount;
    u32 flowResult;
    int bagMode;
    BtlWazaRec wazaRec;
    BtlDeadRec deadRec;
    void *evolutionHandle;
    u8 *curMoveTurnState;
    u8 *curInterruptQueue;
    u8 *curDeferredQueue;
    u8 *curHitInfo;
    struct BtlClientSet escapedClientSet;
    struct BtlLevelUpResult levelUpResult;
    u8 changeClientList[6];
    u8 actOrderScratch[0x2A0];
    u32 actionCounter;
    u32 serialNumber;
    u8 initDone;
    u8 unusedFlag;
    u8 turnCheckStep;
    u8 retargetSlot;
    u16 heapId;
    u8 numActOrder;
    u8 actOrderIndex;
    u8 capturedTargetSlot;
    u8 seenCount;
    u8 escapeAttemptCount;
    u8 unusedByte;
    u8 frontOrderCount;
    u8 currentTargetPokeId;
    union {
        u8 raw;
        struct {
            u8 pursuitRunning : 1;
            u8 winBgmStarted : 1;
            u8 memberInMessageShown : 1;
            u8 frameFlagA : 1;
            u8 failMessageShown : 1;
            u8 healBlockShown : 1;
            u8 reservedFlag6 : 1;
            u8 reservedFlag7 : 1;
        } bits;
    } stateFlags;
    u8 frontOrder[6];
    u8 seenValues[0x18];
    u8 faintHandled[0x18];
    u8 memberInPending[0x18];
    u8 memberChangeCount[7];
    BtlServerEntry actOrder[6];
    BtlServerEntry actOrderTemp;
    BtlPokeSet *curTargetSet;
    BtlPokeSet *curTargetSetWork;
    BtlPokeSet *curHitSetA;
    BtlPokeSet *curHitSetB;
    BtlPokeSet *curDamageSet;
    BtlPokeSet *curEffectSet;
    BtlPokeSet *curQueuedSet;
    void *curHitRecordA;
    void *curHitRecordB;
    BtlServerFlowFrame frames[7];
    u32 frameDepth;
    BtlPokeSet memberInSet;
    struct BtlMoveParam *curMoveParam;
    struct BtlMoveParam *curMoveParamBackup;
    BtlPosPoke posPoke;
    u8 padPosPokeEnd[0x14];
    BtlStrParam msgRecord;
    u8 expShareTable[0x48];
    EventParamBuf eventParamBuf;
    u32 cmdLock;
    u8 pad1D78[0x1FC];
    u16 lastMoveId;
    u8 pad1F76[2];
    int disobeyResult;
    u16 effectivenessRecord[6];
    u32 hitTable[24];
    u8 turnOnceFlags[4];
    u8 scratchBuffer[0x140];
} BtlServerFlow;
extern BtlStrParam;
extern int func_02009324(BtlServerFlow *flow, void *b, int c, int d);
extern int func_02008cc0(BtlServerFlow *flow, struct BtlPokeParam *poke, int itemId, int checkResult, u32 sickId);
extern int func_02009324(BtlServerFlow *flow, void *b, int c, int d);
int func_02009324(BtlServerFlow *flow, void *b, int c, int d) {
    return func_02008cc0(flow, b, c, d, 0x1);
}
int func_02008cc0(BtlServerFlow *flow, struct BtlPokeParam *poke, int itemId, int checkResult, u32 sickId);
