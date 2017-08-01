/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/nim-0.17.0/lib -o /Users/antonin/exercism/nim/triangle/nimcache/stdlib_sequtils.o /Users/antonin/exercism/nim/triangle/nimcache/stdlib_sequtils.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct TY_Zj5xKXgsXnI4n4hPS6nACA TY_Zj5xKXgsXnI4n4hPS6nACA;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (NF item, void* ClE_0);
void* ClE_0;
} TY_oOFCpsHhv02XWxZgwd7x9bA;
typedef N_CLOSURE_PTR(NIM_BOOL, TM_77ITQxrABVT9b2GcbWeV4SQ_2) (NF item);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY_Zj5xKXgsXnI4n4hPS6nACA {
  TGenericSeq Sup;
  NF data[SEQ_DECL_SIZE];
};
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_77ITQxrABVT9b2GcbWeV4SQ_4, "len(a) == L seq modified while iterating over it", 48);

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

N_NIMCALL(NIM_BOOL, any_IWKeEMp1ShyGU0DMOrThqA)(TY_Zj5xKXgsXnI4n4hPS6nACA* seq1, TY_oOFCpsHhv02XWxZgwd7x9bA pred) {
	NIM_BOOL result;
	nimfr_("any", "sequtils.nim")
{	result = (NIM_BOOL)0;
	{
		NF i;
		NI i_2;
		NI L;
		i = (NF)0;
		nimln_(3580, "system.nim");
		i_2 = ((NI) 0);
		nimln_(3581, "system.nim");
		L = (seq1 ? seq1->Sup.len : 0);
		{
			nimln_(3582, "system.nim");
			while (1) {
				NI TM_77ITQxrABVT9b2GcbWeV4SQ_3;
				if (!(i_2 < L)) goto LA3;
				nimln_(3583, "system.nim");
				if ((NU)(i_2) >= (NU)(seq1->Sup.len)) raiseIndexError();
				i = seq1->data[i_2];
				nimln_(438, "sequtils.nim");
				{
					NIM_BOOL T6_;
					T6_ = (NIM_BOOL)0;
					T6_ = pred.ClE_0? pred.ClP_0(i, pred.ClE_0):((TM_77ITQxrABVT9b2GcbWeV4SQ_2)(pred.ClP_0))(i);
					if (!T6_) goto LA7_;
					nimln_(439, "sequtils.nim");
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA7_: ;
				nimln_(3584, "system.nim");
				TM_77ITQxrABVT9b2GcbWeV4SQ_3 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_3);
				nimln_(3585, "system.nim");
				{
					if (!!(((seq1 ? seq1->Sup.len : 0) == L))) goto LA11_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_77ITQxrABVT9b2GcbWeV4SQ_4));
				}
				LA11_: ;
			} LA3: ;
		}
	}
	nimln_(440, "sequtils.nim");
	result = NIM_FALSE;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void) {
	nimfr_("sequtils", "sequtils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void) {
}

