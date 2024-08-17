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
  #define CASADI_PREFIX(ID) hyumm_offset_r_J_s_ ## ID
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

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[66] = {6, 9, 0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_s:(q[9])->(J_s[6x9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a3, a4, a5, a6, a7, a8, a9;
  a0=1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a1;
  if (res[0]!=0) res[0][4]=a1;
  if (res[0]!=0) res[0][5]=a1;
  if (res[0]!=0) res[0][6]=a1;
  if (res[0]!=0) res[0][7]=a0;
  if (res[0]!=0) res[0][8]=a1;
  if (res[0]!=0) res[0][9]=a1;
  if (res[0]!=0) res[0][10]=a1;
  if (res[0]!=0) res[0][11]=a1;
  a2=arg[0]? arg[0][1] : 0;
  if (res[0]!=0) res[0][12]=a2;
  a3=arg[0]? arg[0][0] : 0;
  a4=(-a3);
  if (res[0]!=0) res[0][13]=a4;
  if (res[0]!=0) res[0][14]=a1;
  if (res[0]!=0) res[0][15]=a1;
  if (res[0]!=0) res[0][16]=a1;
  if (res[0]!=0) res[0][17]=a0;
  a4=2.9999999999999999e-01;
  a5=arg[0]? arg[0][2] : 0;
  a6=sin(a5);
  a7=(a4*a6);
  a8=-4.0000000000000002e-01;
  a5=cos(a5);
  a9=(a8*a5);
  a7=(a7+a9);
  a2=(a2+a7);
  if (res[0]!=0) res[0][18]=a2;
  a4=(a4*a5);
  a8=(a8*a6);
  a4=(a4-a8);
  a3=(a3+a4);
  a4=(-a3);
  if (res[0]!=0) res[0][19]=a4;
  if (res[0]!=0) res[0][20]=a1;
  if (res[0]!=0) res[0][21]=a1;
  if (res[0]!=0) res[0][22]=a1;
  if (res[0]!=0) res[0][23]=a0;
  a0=5.2749999999999997e-01;
  a4=2.2204460492503131e-16;
  a8=arg[0]? arg[0][3] : 0;
  a7=cos(a8);
  a9=(a6*a7);
  a8=sin(a8);
  a10=(a5*a8);
  a9=(a9+a10);
  a10=(a4*a9);
  a11=(a5*a7);
  a12=(a6*a8);
  a11=(a11-a12);
  a10=(a10-a11);
  a12=(a0*a10);
  a12=(-a12);
  if (res[0]!=0) res[0][24]=a12;
  a12=(a5*a7);
  a13=(a6*a8);
  a12=(a12-a13);
  a13=(a4*a12);
  a5=(a5*a8);
  a6=(a6*a7);
  a5=(a5+a6);
  a13=(a13+a5);
  a6=(a0*a13);
  if (res[0]!=0) res[0][25]=a6;
  a6=-1.0900000000000000e-01;
  a7=(a6*a5);
  a3=(a3-a7);
  a7=(a3*a10);
  a6=(a6*a11);
  a2=(a2+a6);
  a6=(a2*a13);
  a7=(a7-a6);
  if (res[0]!=0) res[0][26]=a7;
  if (res[0]!=0) res[0][27]=a13;
  if (res[0]!=0) res[0][28]=a10;
  if (res[0]!=0) res[0][29]=a1;
  a7=-4.5000000000000001e-01;
  a6=arg[0]? arg[0][4] : 0;
  a8=sin(a6);
  a14=(a4*a8);
  a6=cos(a6);
  a14=(a14-a6);
  a15=(a7*a14);
  a0=(a0+a15);
  a15=(a0*a10);
  a15=(-a15);
  if (res[0]!=0) res[0][30]=a15;
  a15=(a0*a13);
  if (res[0]!=0) res[0][31]=a15;
  a15=(a4*a6);
  a15=(a15+a8);
  a16=(a12*a15);
  a17=(a4*a8);
  a18=(a5*a17);
  a16=(a16-a18);
  a18=(a7*a16);
  a19=-3.0499999999999999e-02;
  a20=(a19*a13);
  a18=(a18+a20);
  a3=(a3+a18);
  a18=(a3*a10);
  a15=(a9*a15);
  a17=(a11*a17);
  a15=(a15+a17);
  a7=(a7*a15);
  a19=(a19*a10);
  a7=(a7+a19);
  a2=(a2+a7);
  a7=(a2*a13);
  a18=(a18-a7);
  if (res[0]!=0) res[0][32]=a18;
  if (res[0]!=0) res[0][33]=a13;
  if (res[0]!=0) res[0][34]=a10;
  if (res[0]!=0) res[0][35]=a1;
  a1=-2.6700000000000002e-01;
  a18=arg[0]? arg[0][5] : 0;
  a7=cos(a18);
  a19=(a15*a7);
  a17=(a4*a8);
  a17=(a6-a17);
  a9=(a9*a17);
  a20=(a4*a6);
  a11=(a11*a20);
  a9=(a9+a11);
  a18=sin(a18);
  a11=(a9*a18);
  a19=(a19+a11);
  a11=(a1*a19);
  a21=-7.4999999999999997e-02;
  a22=(a21*a10);
  a11=(a11+a22);
  a2=(a2+a11);
  a6=(a4*a6);
  a8=(a8+a6);
  a6=(a8*a7);
  a11=(a14*a18);
  a6=(a6-a11);
  a11=(a4*a6);
  a14=(a14*a7);
  a8=(a8*a18);
  a14=(a14+a8);
  a11=(a11-a14);
  a8=(a2*a11);
  a22=(a1*a14);
  a0=(a0+a22);
  a9=(a9*a7);
  a15=(a15*a18);
  a9=(a9-a15);
  a15=(a4*a9);
  a22=(a4*a10);
  a15=(a15+a22);
  a15=(a15-a19);
  a22=(a0*a15);
  a8=(a8-a22);
  if (res[0]!=0) res[0][36]=a8;
  a12=(a12*a17);
  a5=(a5*a20);
  a12=(a12-a5);
  a5=(a12*a7);
  a20=(a16*a18);
  a5=(a5-a20);
  a20=(a4*a5);
  a17=(a4*a13);
  a20=(a20+a17);
  a16=(a16*a7);
  a12=(a12*a18);
  a16=(a16+a12);
  a20=(a20-a16);
  a12=(a0*a20);
  a1=(a1*a16);
  a21=(a21*a13);
  a1=(a1+a21);
  a3=(a3+a1);
  a1=(a3*a11);
  a12=(a12-a1);
  if (res[0]!=0) res[0][37]=a12;
  a12=(a3*a15);
  a1=(a2*a20);
  a12=(a12-a1);
  if (res[0]!=0) res[0][38]=a12;
  if (res[0]!=0) res[0][39]=a20;
  if (res[0]!=0) res[0][40]=a15;
  if (res[0]!=0) res[0][41]=a11;
  a12=-1.1400000000000000e-01;
  a1=-2.2204460492503131e-16;
  a21=arg[0]? arg[0][6] : 0;
  a18=cos(a21);
  a7=(a1*a18);
  a21=sin(a21);
  a17=(a4*a21);
  a7=(a7-a17);
  a17=(a19*a7);
  a8=(a9*a21);
  a22=(a10*a18);
  a8=(a8+a22);
  a17=(a17-a8);
  a8=(a12*a17);
  a22=8.3000000000000004e-02;
  a23=(a22*a15);
  a8=(a8+a23);
  a2=(a2+a8);
  a8=(a4*a18);
  a1=(a1*a21);
  a8=(a8+a1);
  a1=(a14*a8);
  a23=(a6*a18);
  a1=(a1+a23);
  a23=(a4*a1);
  a14=(a14*a7);
  a6=(a6*a21);
  a14=(a14-a6);
  a23=(a23-a14);
  a6=(a2*a23);
  a24=(a12*a14);
  a25=(a22*a11);
  a24=(a24+a25);
  a0=(a0+a24);
  a19=(a19*a8);
  a9=(a9*a18);
  a10=(a10*a21);
  a9=(a9-a10);
  a19=(a19+a9);
  a9=(a4*a19);
  a9=(a9-a17);
  a10=(a0*a9);
  a6=(a6-a10);
  if (res[0]!=0) res[0][42]=a6;
  a8=(a16*a8);
  a6=(a5*a18);
  a10=(a13*a21);
  a6=(a6-a10);
  a8=(a8+a6);
  a6=(a4*a8);
  a16=(a16*a7);
  a5=(a5*a21);
  a13=(a13*a18);
  a5=(a5+a13);
  a16=(a16-a5);
  a6=(a6-a16);
  a5=(a0*a6);
  a12=(a12*a16);
  a22=(a22*a20);
  a12=(a12+a22);
  a3=(a3+a12);
  a12=(a3*a23);
  a5=(a5-a12);
  if (res[0]!=0) res[0][43]=a5;
  a5=(a3*a9);
  a12=(a2*a6);
  a5=(a5-a12);
  if (res[0]!=0) res[0][44]=a5;
  if (res[0]!=0) res[0][45]=a6;
  if (res[0]!=0) res[0][46]=a9;
  if (res[0]!=0) res[0][47]=a23;
  a5=-1.6800000000000001e-01;
  a12=arg[0]? arg[0][7] : 0;
  a22=cos(a12);
  a13=(a4*a22);
  a12=sin(a12);
  a13=(a13+a12);
  a18=(a19*a13);
  a21=(a4*a12);
  a7=(a17*a21);
  a10=(a4*a12);
  a10=(a10-a22);
  a24=(a15*a10);
  a7=(a7+a24);
  a18=(a18+a7);
  a7=(a5*a18);
  a24=6.9000000000000006e-02;
  a25=(a24*a9);
  a7=(a7+a25);
  a2=(a2+a7);
  a7=(a4*a12);
  a7=(a22-a7);
  a25=(a1*a7);
  a26=(a4*a22);
  a27=(a14*a26);
  a22=(a4*a22);
  a12=(a12+a22);
  a22=(a11*a12);
  a27=(a27+a22);
  a25=(a25+a27);
  a25=(a4*a25);
  a27=(a4*a23);
  a25=(a25+a27);
  a1=(a1*a13);
  a14=(a14*a21);
  a11=(a11*a10);
  a14=(a14+a11);
  a1=(a1+a14);
  a25=(a25-a1);
  a14=(a2*a25);
  a1=(a5*a1);
  a23=(a24*a23);
  a1=(a1+a23);
  a0=(a0+a1);
  a19=(a19*a7);
  a17=(a17*a26);
  a15=(a15*a12);
  a17=(a17+a15);
  a19=(a19+a17);
  a19=(a4*a19);
  a9=(a4*a9);
  a19=(a19+a9);
  a19=(a19-a18);
  a18=(a0*a19);
  a14=(a14-a18);
  if (res[0]!=0) res[0][48]=a14;
  a7=(a8*a7);
  a26=(a16*a26);
  a12=(a20*a12);
  a26=(a26+a12);
  a7=(a7+a26);
  a7=(a4*a7);
  a4=(a4*a6);
  a7=(a7+a4);
  a8=(a8*a13);
  a16=(a16*a21);
  a20=(a20*a10);
  a16=(a16+a20);
  a8=(a8+a16);
  a7=(a7-a8);
  a0=(a0*a7);
  a5=(a5*a8);
  a24=(a24*a6);
  a5=(a5+a24);
  a3=(a3+a5);
  a5=(a3*a25);
  a0=(a0-a5);
  if (res[0]!=0) res[0][49]=a0;
  a3=(a3*a19);
  a2=(a2*a7);
  a3=(a3-a2);
  if (res[0]!=0) res[0][50]=a3;
  if (res[0]!=0) res[0][51]=a7;
  if (res[0]!=0) res[0][52]=a19;
  if (res[0]!=0) res[0][53]=a25;
  return 0;
}

CASADI_SYMBOL_EXPORT int J_s(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int J_s_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int J_s_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_s_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int J_s_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_s_release(int mem) {
}

CASADI_SYMBOL_EXPORT void J_s_incref(void) {
}

CASADI_SYMBOL_EXPORT void J_s_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int J_s_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int J_s_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real J_s_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_s_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_s_name_out(casadi_int i) {
  switch (i) {
    case 0: return "J_s";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_s_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_s_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int J_s_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
