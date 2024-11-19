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
  #define CASADI_PREFIX(ID) KARM_EQM_fkrot_ee_ ## ID
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

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* fk_rot:(q[7])->(Rot_eef_fixed[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][1] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a5=9.9976101413514729e-01;
  a6=arg[0]? arg[0][2] : 0;
  a7=cos(a6);
  a8=(a5*a7);
  a9=(a4*a8);
  a2=sin(a2);
  a10=(a1*a2);
  a11=-2.1861258322928699e-02;
  a12=(a11*a7);
  a13=(a10*a12);
  a0=sin(a0);
  a6=sin(a6);
  a14=(a0*a6);
  a13=(a13-a14);
  a9=(a9+a13);
  a13=arg[0]? arg[0][3] : 0;
  a14=cos(a13);
  a15=(a5*a14);
  a13=sin(a13);
  a16=(a11*a13);
  a15=(a15-a16);
  a16=(a9*a15);
  a17=2.1861258322928699e-02;
  a18=(a17*a4);
  a19=(a5*a10);
  a18=(a18+a19);
  a19=(a17*a14);
  a20=(a5*a13);
  a19=(a19-a20);
  a20=(a18*a19);
  a16=(a16+a20);
  a20=arg[0]? arg[0][4] : 0;
  a21=cos(a20);
  a22=(a16*a21);
  a23=(a5*a6);
  a4=(a4*a23);
  a24=(a0*a7);
  a25=(a11*a6);
  a10=(a10*a25);
  a24=(a24+a10);
  a4=(a4+a24);
  a20=sin(a20);
  a24=(a4*a20);
  a22=(a22-a24);
  a24=arg[0]? arg[0][5] : 0;
  a10=cos(a24);
  a26=(a22*a10);
  a27=(a5*a13);
  a11=(a11*a14);
  a27=(a27+a11);
  a9=(a9*a27);
  a13=(a17*a13);
  a14=(a5*a14);
  a13=(a13+a14);
  a18=(a18*a13);
  a9=(a9+a18);
  a24=sin(a24);
  a18=(a9*a24);
  a26=(a26-a18);
  a18=arg[0]? arg[0][6] : 0;
  a14=cos(a18);
  a11=(a26*a14);
  a16=(a16*a20);
  a4=(a4*a21);
  a16=(a16+a4);
  a18=sin(a18);
  a4=(a16*a18);
  a11=(a11-a4);
  if (res[0]!=0) res[0][0]=a11;
  a11=(a0*a3);
  a4=(a11*a8);
  a6=(a1*a6);
  a0=(a0*a2);
  a28=(a0*a12);
  a6=(a6+a28);
  a4=(a4+a6);
  a6=(a4*a15);
  a28=(a17*a11);
  a29=(a5*a0);
  a28=(a28+a29);
  a29=(a28*a19);
  a6=(a6+a29);
  a29=(a6*a21);
  a1=(a1*a7);
  a0=(a0*a25);
  a1=(a1-a0);
  a11=(a11*a23);
  a1=(a1-a11);
  a11=(a1*a20);
  a29=(a29+a11);
  a11=(a29*a10);
  a4=(a4*a27);
  a28=(a28*a13);
  a4=(a4+a28);
  a28=(a4*a24);
  a11=(a11-a28);
  a28=(a11*a14);
  a1=(a1*a21);
  a6=(a6*a20);
  a1=(a1-a6);
  a6=(a1*a18);
  a28=(a28+a6);
  if (res[0]!=0) res[0][1]=a28;
  a12=(a3*a12);
  a8=(a2*a8);
  a12=(a12-a8);
  a15=(a12*a15);
  a5=(a5*a3);
  a17=(a17*a2);
  a5=(a5-a17);
  a19=(a5*a19);
  a15=(a15+a19);
  a19=(a15*a21);
  a2=(a2*a23);
  a3=(a3*a25);
  a2=(a2-a3);
  a3=(a2*a20);
  a19=(a19+a3);
  a3=(a19*a10);
  a12=(a12*a27);
  a5=(a5*a13);
  a12=(a12+a5);
  a5=(a12*a24);
  a3=(a3-a5);
  a5=(a3*a14);
  a2=(a2*a21);
  a15=(a15*a20);
  a2=(a2-a15);
  a15=(a2*a18);
  a5=(a5+a15);
  if (res[0]!=0) res[0][2]=a5;
  a26=(a26*a18);
  a16=(a16*a14);
  a26=(a26+a16);
  a26=(-a26);
  if (res[0]!=0) res[0][3]=a26;
  a1=(a1*a14);
  a11=(a11*a18);
  a1=(a1-a11);
  if (res[0]!=0) res[0][4]=a1;
  a2=(a2*a14);
  a3=(a3*a18);
  a2=(a2-a3);
  if (res[0]!=0) res[0][5]=a2;
  a22=(a22*a24);
  a9=(a9*a10);
  a22=(a22+a9);
  if (res[0]!=0) res[0][6]=a22;
  a29=(a29*a24);
  a4=(a4*a10);
  a29=(a29+a4);
  if (res[0]!=0) res[0][7]=a29;
  a19=(a19*a24);
  a12=(a12*a10);
  a19=(a19+a12);
  if (res[0]!=0) res[0][8]=a19;
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_rot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fk_rot_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_rot_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_rot_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fk_rot_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_rot_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fk_rot_incref(void) {
}

CASADI_SYMBOL_EXPORT void fk_rot_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fk_rot_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int fk_rot_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real fk_rot_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_rot_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_rot_name_out(casadi_int i) {
  switch (i) {
    case 0: return "Rot_eef_fixed";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_rot_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_rot_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_rot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
