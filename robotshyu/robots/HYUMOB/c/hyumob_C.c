/* This file was automatically generated by CasADi 3.6.3+.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) hyumob_C_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* coriolis:(i0[3],i1[3])->(o0[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  a1=5.0000000000000000e-01;
  a2=5.3537364080000003e+01;
  a3=arg[0]? arg[0][2] : 0;
  a4=sin(a3);
  a3=cos(a3);
  a5=arg[1]? arg[1][0] : 0;
  a6=(a3*a5);
  a7=arg[1]? arg[1][1] : 0;
  a8=(a4*a7);
  a6=(a6+a8);
  a8=(a4*a6);
  a7=(a3*a7);
  a5=(a4*a5);
  a7=(a7-a5);
  a5=(a3*a7);
  a8=(a8+a5);
  a5=arg[0]? arg[0][0] : 0;
  a9=arg[1]? arg[1][2] : 0;
  a10=(a5*a9);
  a10=(a8-a10);
  a11=-2.3141630000000000e-02;
  a12=(a11*a3);
  a12=(a5+a12);
  a13=(a12*a9);
  a13=(a10+a13);
  a13=(a2*a13);
  a13=(a1*a13);
  a10=(a1*a10);
  a10=(a2*a10);
  a14=(a1*a9);
  a14=(a2*a14);
  a15=(a12*a14);
  a15=(a10+a15);
  a16=(a13-a15);
  if (res[0]!=0) res[0][2]=a16;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a0;
  a3=(a3*a6);
  a7=(a4*a7);
  a3=(a3-a7);
  a7=arg[0]? arg[0][1] : 0;
  a6=(a7*a9);
  a6=(a3+a6);
  a0=(a1*a6);
  a0=(a2*a0);
  a11=(a11*a4);
  a11=(a7+a11);
  a14=(a11*a14);
  a14=(a0-a14);
  a9=(a11*a9);
  a6=(a6-a9);
  a6=(a2*a6);
  a1=(a1*a6);
  a6=(a14-a1);
  if (res[0]!=0) res[0][5]=a6;
  a8=(a2*a8);
  a15=(a15+a13);
  a15=(a8-a15);
  if (res[0]!=0) res[0][6]=a15;
  a14=(a14+a1);
  a2=(a2*a3);
  a14=(a14-a2);
  if (res[0]!=0) res[0][7]=a14;
  a15=(a7*a15);
  a14=(a5*a14);
  a15=(a15-a14);
  a16=(a16*a7);
  a6=(a6*a5);
  a16=(a16-a6);
  a6=(a0*a12);
  a5=(a10*a11);
  a6=(a6+a5);
  a0=(a12*a0);
  a10=(a11*a10);
  a0=(a0+a10);
  a6=(a6+a0);
  a16=(a16+a6);
  a12=(a12*a2);
  a11=(a11*a8);
  a12=(a12+a11);
  a16=(a16-a12);
  a15=(a15+a16);
  if (res[0]!=0) res[0][8]=a15;
  return 0;
}

CASADI_SYMBOL_EXPORT int coriolis(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int coriolis_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int coriolis_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void coriolis_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int coriolis_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void coriolis_release(int mem) {
}

CASADI_SYMBOL_EXPORT void coriolis_incref(void) {
}

CASADI_SYMBOL_EXPORT void coriolis_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int coriolis_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int coriolis_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real coriolis_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* coriolis_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* coriolis_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* coriolis_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* coriolis_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int coriolis_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
