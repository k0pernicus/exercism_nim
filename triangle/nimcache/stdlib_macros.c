/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/nim-0.17.0/lib -o /Users/antonin/exercism/nim/triangle/nimcache/stdlib_macros.o /Users/antonin/exercism/nim/triangle/nimcache/stdlib_macros.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct NimNodeObj_vF2hEdnP1tA65csMBW8XYQ NimNodeObj_vF2hEdnP1tA65csMBW8XYQ;
typedef struct NimSymObj_b8s6YD9cuGEbmoi5mI9ceqwg NimSymObj_b8s6YD9cuGEbmoi5mI9ceqwg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ;
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
struct  NimNodeObj_vF2hEdnP1tA65csMBW8XYQ  {
char dummy;
};
struct  NimSymObj_b8s6YD9cuGEbmoi5mI9ceqwg  {
char dummy;
};
N_NIMCALL(NimNodeObj_vF2hEdnP1tA65csMBW8XYQ*, getImpl_chMUbLwvJ706uC370blMmQ)(NimSymObj_b8s6YD9cuGEbmoi5mI9ceqwg* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, dollar__vQky4Id9aQQanEihYvDcSMg)(NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set x);
N_NIMCALL(NimStringDesc*, collectionToString_40YJKN7tcFDGToBXndCp0A)(NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set x, NimStringDesc* b, NimStringDesc* e);
N_NIMCALL(NI, cmpIgnoreStyle_qMUI9c5RdcsOHtRhn2D7HqA)(NCSTRING a, NCSTRING b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_CHAR, toLower_Fwx7k03EYImpkyEMwVKBpAmacros)(NIM_CHAR c);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, eqIdent_4oBKY2udrWe85yjP9cRPFEw)(NimStringDesc* a, NimStringDesc* b);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_;
NIM_CONST NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set nnkLiterals_9bhEkB9cFodk9cxRUKKgtz1BA = {
0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set nnkCallKinds_AghZgUfleRQoWZNdKFsmJw = {
0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set RoutineNodes_QLKlhF4hHbMN9cxu6xm0mcg = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
0x00, 0x80, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set AtomicNodes_Rq0ynG1tdFv1swPPc9cZhcg = {
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ_Set CallNodes_KO9ajNLR9bDAAwecb5g9aCOiA = {
0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;

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

N_NIMCALL(NimNodeObj_vF2hEdnP1tA65csMBW8XYQ*, getImpl_chMUbLwvJ706uC370blMmQ)(NimSymObj_b8s6YD9cuGEbmoi5mI9ceqwg* s) {
	NimNodeObj_vF2hEdnP1tA65csMBW8XYQ* result;
	nimfr_("getImpl", "macros.nim")
	result = (NimNodeObj_vF2hEdnP1tA65csMBW8XYQ*)0;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_CHAR, toLower_Fwx7k03EYImpkyEMwVKBpAmacros)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr_("toLower", "macros.nim")
	result = (NIM_CHAR)0;
	nimln_(844, "macros.nim");
	{
		NI TM_rY22sBfKo26xl9aV6GtFfSg_7;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		TM_rY22sBfKo26xl9aV6GtFfSg_7 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TM_rY22sBfKo26xl9aV6GtFfSg_7), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(845, "macros.nim");
		result = c;
	}
	LA1_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI, cmpIgnoreStyle_qMUI9c5RdcsOHtRhn2D7HqA)(NCSTRING a, NCSTRING b) {
	NI result;
	NI i;
	NI j;
	nimfr_("cmpIgnoreStyle", "macros.nim")
{	result = (NI)0;
	nimln_(846, "macros.nim");
	i = ((NI) 0);
	nimln_(847, "macros.nim");
	j = ((NI) 0);
	nimln_(849, "macros.nim");
	{
		nimln_(363, "system.nim");
		nimln_(849, "macros.nim");
		if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		nimln_(850, "macros.nim");
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			NI TM_rY22sBfKo26xl9aV6GtFfSg_8;
			NI TM_rY22sBfKo26xl9aV6GtFfSg_9;
			NI TM_rY22sBfKo26xl9aV6GtFfSg_10;
			{
				nimln_(851, "macros.nim");
				while (1) {
					NI TM_rY22sBfKo26xl9aV6GtFfSg_5;
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8;
					TM_rY22sBfKo26xl9aV6GtFfSg_5 = addInt(i, ((NI) 1));
					i = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_5);
				} LA8: ;
			}
			{
				nimln_(852, "macros.nim");
				while (1) {
					NI TM_rY22sBfKo26xl9aV6GtFfSg_6;
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10;
					TM_rY22sBfKo26xl9aV6GtFfSg_6 = addInt(j, ((NI) 1));
					j = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_6);
				} LA10: ;
			}
			nimln_(853, "macros.nim");
			aa = toLower_Fwx7k03EYImpkyEMwVKBpAmacros(a[i]);
			nimln_(854, "macros.nim");
			bb = toLower_Fwx7k03EYImpkyEMwVKBpAmacros(b[j]);
			nimln_(855, "macros.nim");
			TM_rY22sBfKo26xl9aV6GtFfSg_8 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_8);
			nimln_(856, "macros.nim");
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				nimln_(363, "system.nim");
				nimln_(856, "macros.nim");
				T13_ = !((result == ((NI) 0)));
				if (T13_) goto LA14_;
				T13_ = ((NU8)(aa) == (NU8)(0));
				LA14_: ;
				if (!T13_) goto LA15_;
				goto LA5;
			}
			LA15_: ;
			nimln_(857, "macros.nim");
			TM_rY22sBfKo26xl9aV6GtFfSg_9 = addInt(i, ((NI) 1));
			i = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_9);
			nimln_(858, "macros.nim");
			TM_rY22sBfKo26xl9aV6GtFfSg_10 = addInt(j, ((NI) 1));
			j = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_10);
		}
	} LA5: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, eqIdent_4oBKY2udrWe85yjP9cRPFEw)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("eqIdent", "macros.nim")
	result = (NIM_BOOL)0;
	nimln_(860, "macros.nim");
	T1_ = (NI)0;
	T1_ = cmpIgnoreStyle_qMUI9c5RdcsOHtRhn2D7HqA(a->data, b->data);
	result = (T1_ == ((NI) 0));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void) {
	nimfr_("macros", "macros.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void) {
static TNimNode* TM_rY22sBfKo26xl9aV6GtFfSg_2[159];
NI TM_rY22sBfKo26xl9aV6GtFfSg_4;
static char* NIM_CONST TM_rY22sBfKo26xl9aV6GtFfSg_3[159] = {
"nnkNone", 
"nnkEmpty", 
"nnkIdent", 
"nnkSym", 
"nnkType", 
"nnkCharLit", 
"nnkIntLit", 
"nnkInt8Lit", 
"nnkInt16Lit", 
"nnkInt32Lit", 
"nnkInt64Lit", 
"nnkUIntLit", 
"nnkUInt8Lit", 
"nnkUInt16Lit", 
"nnkUInt32Lit", 
"nnkUInt64Lit", 
"nnkFloatLit", 
"nnkFloat32Lit", 
"nnkFloat64Lit", 
"nnkFloat128Lit", 
"nnkStrLit", 
"nnkRStrLit", 
"nnkTripleStrLit", 
"nnkNilLit", 
"nnkMetaNode", 
"nnkDotCall", 
"nnkCommand", 
"nnkCall", 
"nnkCallStrLit", 
"nnkInfix", 
"nnkPrefix", 
"nnkPostfix", 
"nnkHiddenCallConv", 
"nnkExprEqExpr", 
"nnkExprColonExpr", 
"nnkIdentDefs", 
"nnkVarTuple", 
"nnkPar", 
"nnkObjConstr", 
"nnkCurly", 
"nnkCurlyExpr", 
"nnkBracket", 
"nnkBracketExpr", 
"nnkPragmaExpr", 
"nnkRange", 
"nnkDotExpr", 
"nnkCheckedFieldExpr", 
"nnkDerefExpr", 
"nnkIfExpr", 
"nnkElifExpr", 
"nnkElseExpr", 
"nnkLambda", 
"nnkDo", 
"nnkAccQuoted", 
"nnkTableConstr", 
"nnkBind", 
"nnkClosedSymChoice", 
"nnkOpenSymChoice", 
"nnkHiddenStdConv", 
"nnkHiddenSubConv", 
"nnkConv", 
"nnkCast", 
"nnkStaticExpr", 
"nnkAddr", 
"nnkHiddenAddr", 
"nnkHiddenDeref", 
"nnkObjDownConv", 
"nnkObjUpConv", 
"nnkChckRangeF", 
"nnkChckRange64", 
"nnkChckRange", 
"nnkStringToCString", 
"nnkCStringToString", 
"nnkAsgn", 
"nnkFastAsgn", 
"nnkGenericParams", 
"nnkFormalParams", 
"nnkOfInherit", 
"nnkImportAs", 
"nnkProcDef", 
"nnkMethodDef", 
"nnkConverterDef", 
"nnkMacroDef", 
"nnkTemplateDef", 
"nnkIteratorDef", 
"nnkOfBranch", 
"nnkElifBranch", 
"nnkExceptBranch", 
"nnkElse", 
"nnkAsmStmt", 
"nnkPragma", 
"nnkPragmaBlock", 
"nnkIfStmt", 
"nnkWhenStmt", 
"nnkForStmt", 
"nnkParForStmt", 
"nnkWhileStmt", 
"nnkCaseStmt", 
"nnkTypeSection", 
"nnkVarSection", 
"nnkLetSection", 
"nnkConstSection", 
"nnkConstDef", 
"nnkTypeDef", 
"nnkYieldStmt", 
"nnkDefer", 
"nnkTryStmt", 
"nnkFinally", 
"nnkRaiseStmt", 
"nnkReturnStmt", 
"nnkBreakStmt", 
"nnkContinueStmt", 
"nnkBlockStmt", 
"nnkStaticStmt", 
"nnkDiscardStmt", 
"nnkStmtList", 
"nnkImportStmt", 
"nnkImportExceptStmt", 
"nnkExportStmt", 
"nnkExportExceptStmt", 
"nnkFromStmt", 
"nnkIncludeStmt", 
"nnkBindStmt", 
"nnkMixinStmt", 
"nnkUsingStmt", 
"nnkCommentStmt", 
"nnkStmtListExpr", 
"nnkBlockExpr", 
"nnkStmtListType", 
"nnkBlockType", 
"nnkWith", 
"nnkWithout", 
"nnkTypeOfExpr", 
"nnkObjectTy", 
"nnkTupleTy", 
"nnkTupleClassTy", 
"nnkTypeClassTy", 
"nnkStaticTy", 
"nnkRecList", 
"nnkRecCase", 
"nnkRecWhen", 
"nnkRefTy", 
"nnkPtrTy", 
"nnkVarTy", 
"nnkConstTy", 
"nnkMutableTy", 
"nnkDistinctTy", 
"nnkProcTy", 
"nnkIteratorTy", 
"nnkSharedTy", 
"nnkEnumTy", 
"nnkEnumFieldDef", 
"nnkArglist", 
"nnkPattern", 
"nnkReturnToken", 
"nnkClosure", 
"nnkGotoState", 
"nnkState", 
"nnkBreakState"};
static TNimNode TM_rY22sBfKo26xl9aV6GtFfSg_0[160];
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.size = sizeof(NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ);
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.kind = 14;
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.base = 0;
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.flags = 3;
for (TM_rY22sBfKo26xl9aV6GtFfSg_4 = 0; TM_rY22sBfKo26xl9aV6GtFfSg_4 < 159; TM_rY22sBfKo26xl9aV6GtFfSg_4++) {
TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_4+0].kind = 1;
TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_4+0].offset = TM_rY22sBfKo26xl9aV6GtFfSg_4;
TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_4+0].name = TM_rY22sBfKo26xl9aV6GtFfSg_3[TM_rY22sBfKo26xl9aV6GtFfSg_4];
TM_rY22sBfKo26xl9aV6GtFfSg_2[TM_rY22sBfKo26xl9aV6GtFfSg_4] = &TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_4+0];
}
TM_rY22sBfKo26xl9aV6GtFfSg_0[159].len = 159; TM_rY22sBfKo26xl9aV6GtFfSg_0[159].kind = 2; TM_rY22sBfKo26xl9aV6GtFfSg_0[159].sons = &TM_rY22sBfKo26xl9aV6GtFfSg_2[0];
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.node = &TM_rY22sBfKo26xl9aV6GtFfSg_0[159];
}

