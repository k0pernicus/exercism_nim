/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/nim-0.17.0/lib -o /Users/antonin/exercism/nim/triangle/nimcache/triangle.o /Users/antonin/exercism/nim/triangle/nimcache/triangle.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct TY_Zj5xKXgsXnI4n4hPS6nACA TY_Zj5xKXgsXnI4n4hPS6nACA;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ValueError_Gi06FkNeykJn7mrqRZYrkA ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (NF item, void* ClE_0);
void* ClE_0;
} TY_oOFCpsHhv02XWxZgwd7x9bA;
typedef NU8 TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw;
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA;
typedef N_CLOSURE_PTR(NIM_BOOL, TM_F2ghBvS39aBJVbUnVc8wl9cw_2) (NF item, void* ClE_0);
struct  TNimObject  {
TNimType* m_type;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  ValueError_Gi06FkNeykJn7mrqRZYrkA  {
  Exception Sup;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_Zj5xKXgsXnI4n4hPS6nACA {
  TGenericSeq Sup;
  NF data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, any_IWKeEMp1ShyGU0DMOrThqA)(TY_Zj5xKXgsXnI4n4hPS6nACA* seq1, TY_oOFCpsHhv02XWxZgwd7x9bA pred);
N_NIMCALL(TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw, kind_wUQGkkjTq4vMBjcQGDQ3pw)(NF a, NF b, NF c);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, colonanonymous__59aLx6fr1GWBdpclZoMblBw)(NF x);
N_NIMCALL(FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA, classify_rfodLs2J9b87EDgWnWZoObA)(NF x);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
extern TNimType NTI_Zj5xKXgsXnI4n4hPS6nACA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_yCEN9anxCD6mzBxGjuaRBdg_;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_TGIN69aJM9a9cQPqgQWjhkaEw_;
STRING_LITERAL(TM_F2ghBvS39aBJVbUnVc8wl9cw_3, "each side must be valid, and greater of equals to 0", 51);
STRING_LITERAL(TM_F2ghBvS39aBJVbUnVc8wl9cw_4, "triangle inequality", 19);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NIM_BOOL, colonanonymous__59aLx6fr1GWBdpclZoMblBw)(NF x) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA T3_;
	nimfr_(":anonymous", "triangle.nim")
{	result = (NIM_BOOL)0;
	nimln_(7, "triangle.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (x <= 0.0);
	if (T1_) goto LA2_;
	T3_ = (FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA)0;
	T3_ = classify_rfodLs2J9b87EDgWnWZoObA(x);
	T1_ = (T3_ == ((FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 4));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim")
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim")
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim")
	nimln_(270, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(272, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(273, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim")
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim")
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim")
	nimln_(281, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(363, "system.nim");
		nimln_(281, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(282, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(363, "system.nim");
		nimln_(282, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(283, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw, kind_wUQGkkjTq4vMBjcQGDQ3pw)(NF a, NF b, NF c) {
	TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw result;
	nimfr_("kind", "triangle.nim")
	result = (TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw)0;
	nimln_(7, "triangle.nim");
	{
		TY_Zj5xKXgsXnI4n4hPS6nACA* T3_;
		TY_oOFCpsHhv02XWxZgwd7x9bA T4_;
		NIM_BOOL T5_;
		ValueError_Gi06FkNeykJn7mrqRZYrkA* e;
		NimStringDesc* T8_;
		T3_ = (TY_Zj5xKXgsXnI4n4hPS6nACA*)0;
		T3_ = (TY_Zj5xKXgsXnI4n4hPS6nACA*) newSeq((&NTI_Zj5xKXgsXnI4n4hPS6nACA_), 3);
		T3_->data[0] = a;
		T3_->data[1] = b;
		T3_->data[2] = c;
		memset((void*)(&T4_), 0, sizeof(T4_));
		T4_.ClP_0 = ((TM_F2ghBvS39aBJVbUnVc8wl9cw_2) (colonanonymous__59aLx6fr1GWBdpclZoMblBw)); T4_.ClE_0 = NIM_NIL;
		T5_ = (NIM_BOOL)0;
		T5_ = any_IWKeEMp1ShyGU0DMOrThqA(T3_, T4_);
		if (!T5_) goto LA6_;
		e = (ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		nimln_(2634, "system.nim");
		e = (ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		nimln_(8, "triangle.nim");
		T8_ = (NimStringDesc*)0;
		T8_ = (*e).Sup.message; (*e).Sup.message = copyStringRC1(((NimStringDesc*) &TM_F2ghBvS39aBJVbUnVc8wl9cw_3));
		if (T8_) nimGCunrefNoCycle(T8_);
		nimln_(2629, "system.nim");
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		nimln_(8, "triangle.nim");
		raiseException((Exception*)e, "ValueError");
	}
	LA6_: ;
	nimln_(9, "triangle.nim");
	{
		NIM_BOOL T11_;
		NIM_BOOL T12_;
		ValueError_Gi06FkNeykJn7mrqRZYrkA* e_2;
		NimStringDesc* T17_;
		T11_ = (NIM_BOOL)0;
		T12_ = (NIM_BOOL)0;
		T12_ = (((NF)(a) + (NF)(b)) < c);
		if (T12_) goto LA13_;
		T12_ = (((NF)(a) + (NF)(c)) < b);
		LA13_: ;
		T11_ = T12_;
		if (T11_) goto LA14_;
		T11_ = (((NF)(b) + (NF)(c)) < a);
		LA14_: ;
		if (!T11_) goto LA15_;
		e_2 = (ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		nimln_(2634, "system.nim");
		e_2 = (ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e_2).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		nimln_(10, "triangle.nim");
		T17_ = (NimStringDesc*)0;
		T17_ = (*e_2).Sup.message; (*e_2).Sup.message = copyStringRC1(((NimStringDesc*) &TM_F2ghBvS39aBJVbUnVc8wl9cw_4));
		if (T17_) nimGCunrefNoCycle(T17_);
		nimln_(2629, "system.nim");
		asgnRef((void**) (&(*e_2).Sup.parent), NIM_NIL);
		nimln_(10, "triangle.nim");
		raiseException((Exception*)e_2, "ValueError");
	}
	LA15_: ;
	nimln_(11, "triangle.nim");
	{
		NIM_BOOL T20_;
		T20_ = (NIM_BOOL)0;
		T20_ = (a == b);
		if (!(T20_)) goto LA21_;
		T20_ = (b == c);
		LA21_: ;
		if (!T20_) goto LA22_;
		nimln_(12, "triangle.nim");
		result = ((TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw) 0);
	}
	goto LA18_;
	LA22_: ;
	{
		NIM_BOOL T25_;
		NIM_BOOL T26_;
		nimln_(13, "triangle.nim");
		T25_ = (NIM_BOOL)0;
		T26_ = (NIM_BOOL)0;
		T26_ = (a == b);
		if (T26_) goto LA27_;
		T26_ = (a == c);
		LA27_: ;
		T25_ = T26_;
		if (T25_) goto LA28_;
		T25_ = (b == c);
		LA28_: ;
		if (!T25_) goto LA29_;
		nimln_(14, "triangle.nim");
		result = ((TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw) 1);
	}
	goto LA18_;
	LA29_: ;
	{
		nimln_(16, "triangle.nim");
		result = ((TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw) 2);
	}
	LA18_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, unknown_triangleInit000)(void) {
	nimfr_("triangle", "triangle.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, unknown_triangleDatInit000)(void) {
static TNimNode* TM_F2ghBvS39aBJVbUnVc8wl9cw_5[3];
NI TM_F2ghBvS39aBJVbUnVc8wl9cw_7;
static char* NIM_CONST TM_F2ghBvS39aBJVbUnVc8wl9cw_6[3] = {
"tkEquilateral", 
"tkIsosceles", 
"tkScalene"};
static TNimNode TM_F2ghBvS39aBJVbUnVc8wl9cw_0[4];
NTI_TGIN69aJM9a9cQPqgQWjhkaEw_.size = sizeof(TriangleType_TGIN69aJM9a9cQPqgQWjhkaEw);
NTI_TGIN69aJM9a9cQPqgQWjhkaEw_.kind = 14;
NTI_TGIN69aJM9a9cQPqgQWjhkaEw_.base = 0;
NTI_TGIN69aJM9a9cQPqgQWjhkaEw_.flags = 3;
for (TM_F2ghBvS39aBJVbUnVc8wl9cw_7 = 0; TM_F2ghBvS39aBJVbUnVc8wl9cw_7 < 3; TM_F2ghBvS39aBJVbUnVc8wl9cw_7++) {
TM_F2ghBvS39aBJVbUnVc8wl9cw_0[TM_F2ghBvS39aBJVbUnVc8wl9cw_7+0].kind = 1;
TM_F2ghBvS39aBJVbUnVc8wl9cw_0[TM_F2ghBvS39aBJVbUnVc8wl9cw_7+0].offset = TM_F2ghBvS39aBJVbUnVc8wl9cw_7;
TM_F2ghBvS39aBJVbUnVc8wl9cw_0[TM_F2ghBvS39aBJVbUnVc8wl9cw_7+0].name = TM_F2ghBvS39aBJVbUnVc8wl9cw_6[TM_F2ghBvS39aBJVbUnVc8wl9cw_7];
TM_F2ghBvS39aBJVbUnVc8wl9cw_5[TM_F2ghBvS39aBJVbUnVc8wl9cw_7] = &TM_F2ghBvS39aBJVbUnVc8wl9cw_0[TM_F2ghBvS39aBJVbUnVc8wl9cw_7+0];
}
TM_F2ghBvS39aBJVbUnVc8wl9cw_0[3].len = 3; TM_F2ghBvS39aBJVbUnVc8wl9cw_0[3].kind = 2; TM_F2ghBvS39aBJVbUnVc8wl9cw_0[3].sons = &TM_F2ghBvS39aBJVbUnVc8wl9cw_5[0];
NTI_TGIN69aJM9a9cQPqgQWjhkaEw_.node = &TM_F2ghBvS39aBJVbUnVc8wl9cw_0[3];
}

