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
  #define CASADI_PREFIX(ID) hyumm_floating_fk_ee_ ## ID
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

static const casadi_int casadi_s0[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s1[23] = {4, 4, 0, 4, 8, 12, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};

/* fk_T:(q[13])->(T_indy7_tcp[4x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a6, a7, a8, a9;
  a0=1.;
  a1=2.;
  a2=arg[0]? arg[0][4] : 0;
  a3=(a1*a2);
  a4=(a3*a2);
  a5=arg[0]? arg[0][5] : 0;
  a6=(a1*a5);
  a5=(a6*a5);
  a7=(a4+a5);
  a7=(a0-a7);
  a8=arg[0]? arg[0][7] : 0;
  a9=cos(a8);
  a10=(a7*a9);
  a11=arg[0]? arg[0][3] : 0;
  a12=(a3*a11);
  a13=arg[0]? arg[0][6] : 0;
  a14=(a6*a13);
  a15=(a12-a14);
  a8=sin(a8);
  a16=(a15*a8);
  a10=(a10+a16);
  a16=2.2204460492503131e-16;
  a17=arg[0]? arg[0][8] : 0;
  a18=cos(a17);
  a19=(a16*a18);
  a17=sin(a17);
  a19=(a19+a17);
  a20=(a10*a19);
  a15=(a15*a9);
  a21=(a7*a8);
  a15=(a15-a21);
  a21=(a16*a17);
  a22=(a15*a21);
  a23=(a6*a11);
  a3=(a3*a13);
  a24=(a23+a3);
  a25=(a16*a17);
  a25=(a25-a18);
  a26=(a24*a25);
  a22=(a22+a26);
  a20=(a20+a22);
  a22=arg[0]? arg[0][9] : 0;
  a26=cos(a22);
  a27=(a20*a26);
  a28=(a16*a17);
  a28=(a18-a28);
  a29=(a10*a28);
  a30=(a16*a18);
  a31=(a15*a30);
  a18=(a16*a18);
  a17=(a17+a18);
  a18=(a24*a17);
  a31=(a31+a18);
  a29=(a29+a31);
  a22=sin(a22);
  a31=(a29*a22);
  a27=(a27+a31);
  a31=arg[0]? arg[0][10] : 0;
  a18=cos(a31);
  a32=(a16*a18);
  a33=-2.2204460492503131e-16;
  a31=sin(a31);
  a34=(a33*a31);
  a32=(a32+a34);
  a34=(a27*a32);
  a29=(a29*a26);
  a35=(a20*a22);
  a29=(a29-a35);
  a35=(a29*a18);
  a10=(a16*a10);
  a10=(a10-a15);
  a36=(a10*a31);
  a35=(a35-a36);
  a34=(a34+a35);
  a35=arg[0]? arg[0][11] : 0;
  a36=cos(a35);
  a37=(a16*a36);
  a35=sin(a35);
  a37=(a37+a35);
  a38=(a34*a37);
  a39=(a33*a18);
  a40=(a16*a31);
  a39=(a39-a40);
  a40=(a27*a39);
  a41=(a29*a31);
  a42=(a10*a18);
  a41=(a41+a42);
  a40=(a40-a41);
  a41=(a16*a35);
  a42=(a40*a41);
  a29=(a16*a29);
  a43=(a16*a10);
  a29=(a29+a43);
  a29=(a29-a27);
  a43=(a16*a35);
  a43=(a43-a36);
  a44=(a29*a43);
  a42=(a42+a44);
  a38=(a38+a42);
  a42=arg[0]? arg[0][12] : 0;
  a44=cos(a42);
  a45=(a16*a44);
  a42=sin(a42);
  a46=(a33*a42);
  a45=(a45+a46);
  a46=(a38*a45);
  a47=(a16*a35);
  a47=(a36-a47);
  a48=(a34*a47);
  a49=(a16*a36);
  a50=(a40*a49);
  a36=(a16*a36);
  a35=(a35+a36);
  a36=(a29*a35);
  a50=(a50+a36);
  a48=(a48+a50);
  a50=(a48*a44);
  a34=(a16*a34);
  a34=(a34-a40);
  a36=(a34*a42);
  a50=(a50-a36);
  a46=(a46+a50);
  if (res[0]!=0) res[0][0]=a46;
  a12=(a12+a14);
  a14=(a12*a9);
  a1=(a1*a11);
  a11=(a1*a11);
  a5=(a11+a5);
  a5=(a0-a5);
  a46=(a5*a8);
  a14=(a14+a46);
  a46=(a14*a19);
  a5=(a5*a9);
  a50=(a12*a8);
  a5=(a5-a50);
  a50=(a5*a21);
  a6=(a6*a2);
  a1=(a1*a13);
  a13=(a6-a1);
  a2=(a13*a25);
  a50=(a50+a2);
  a46=(a46+a50);
  a50=(a46*a26);
  a2=(a14*a28);
  a36=(a5*a30);
  a51=(a13*a17);
  a36=(a36+a51);
  a2=(a2+a36);
  a36=(a2*a22);
  a50=(a50+a36);
  a36=(a50*a32);
  a2=(a2*a26);
  a51=(a46*a22);
  a2=(a2-a51);
  a51=(a2*a18);
  a14=(a16*a14);
  a14=(a14-a5);
  a52=(a14*a31);
  a51=(a51-a52);
  a36=(a36+a51);
  a51=(a36*a37);
  a52=(a50*a39);
  a53=(a2*a31);
  a54=(a14*a18);
  a53=(a53+a54);
  a52=(a52-a53);
  a53=(a52*a41);
  a2=(a16*a2);
  a54=(a16*a14);
  a2=(a2+a54);
  a2=(a2-a50);
  a54=(a2*a43);
  a53=(a53+a54);
  a51=(a51+a53);
  a53=(a51*a45);
  a54=(a36*a47);
  a55=(a52*a49);
  a56=(a2*a35);
  a55=(a55+a56);
  a54=(a54+a55);
  a55=(a54*a44);
  a36=(a16*a36);
  a36=(a36-a52);
  a56=(a36*a42);
  a55=(a55-a56);
  a53=(a53+a55);
  if (res[0]!=0) res[0][1]=a53;
  a23=(a23-a3);
  a3=(a23*a9);
  a6=(a6+a1);
  a1=(a6*a8);
  a3=(a3+a1);
  a19=(a3*a19);
  a6=(a6*a9);
  a8=(a23*a8);
  a6=(a6-a8);
  a21=(a6*a21);
  a11=(a11+a4);
  a11=(a0-a11);
  a25=(a11*a25);
  a21=(a21+a25);
  a19=(a19+a21);
  a21=(a19*a26);
  a28=(a3*a28);
  a30=(a6*a30);
  a17=(a11*a17);
  a30=(a30+a17);
  a28=(a28+a30);
  a30=(a28*a22);
  a21=(a21+a30);
  a32=(a21*a32);
  a28=(a28*a26);
  a22=(a19*a22);
  a28=(a28-a22);
  a22=(a28*a18);
  a3=(a16*a3);
  a3=(a3-a6);
  a26=(a3*a31);
  a22=(a22-a26);
  a32=(a32+a22);
  a37=(a32*a37);
  a39=(a21*a39);
  a31=(a28*a31);
  a18=(a3*a18);
  a31=(a31+a18);
  a39=(a39-a31);
  a41=(a39*a41);
  a28=(a16*a28);
  a31=(a16*a3);
  a28=(a28+a31);
  a28=(a28-a21);
  a43=(a28*a43);
  a41=(a41+a43);
  a37=(a37+a41);
  a45=(a37*a45);
  a47=(a32*a47);
  a49=(a39*a49);
  a35=(a28*a35);
  a49=(a49+a35);
  a47=(a47+a49);
  a49=(a47*a44);
  a32=(a16*a32);
  a32=(a32-a39);
  a35=(a32*a42);
  a49=(a49-a35);
  a45=(a45+a49);
  if (res[0]!=0) res[0][2]=a45;
  a45=0.;
  if (res[0]!=0) res[0][3]=a45;
  a33=(a33*a44);
  a49=(a16*a42);
  a33=(a33-a49);
  a49=(a38*a33);
  a35=(a48*a42);
  a41=(a34*a44);
  a35=(a35+a41);
  a49=(a49-a35);
  if (res[0]!=0) res[0][4]=a49;
  a49=(a51*a33);
  a35=(a54*a42);
  a41=(a36*a44);
  a35=(a35+a41);
  a49=(a49-a35);
  if (res[0]!=0) res[0][5]=a49;
  a33=(a37*a33);
  a42=(a47*a42);
  a44=(a32*a44);
  a42=(a42+a44);
  a33=(a33-a42);
  if (res[0]!=0) res[0][6]=a33;
  if (res[0]!=0) res[0][7]=a45;
  a48=(a16*a48);
  a33=(a16*a34);
  a48=(a48+a33);
  a48=(a48-a38);
  if (res[0]!=0) res[0][8]=a48;
  a54=(a16*a54);
  a33=(a16*a36);
  a54=(a54+a33);
  a54=(a54-a51);
  if (res[0]!=0) res[0][9]=a54;
  a47=(a16*a47);
  a16=(a16*a32);
  a47=(a47+a16);
  a47=(a47-a37);
  if (res[0]!=0) res[0][10]=a47;
  if (res[0]!=0) res[0][11]=a45;
  a45=arg[0]? arg[0][0] : 0;
  a16=2.9999999999999999e-01;
  a7=(a16*a7);
  a33=3.0549999999999999e-01;
  a42=(a33*a24);
  a7=(a7+a42);
  a45=(a45+a7);
  a7=-1.0900000000000000e-01;
  a15=(a7*a15);
  a42=2.2200000000000000e-01;
  a24=(a42*a24);
  a15=(a15+a24);
  a45=(a45+a15);
  a15=-4.5000000000000001e-01;
  a20=(a15*a20);
  a24=-3.0499999999999999e-02;
  a44=(a24*a10);
  a20=(a20+a44);
  a45=(a45+a20);
  a20=-2.6700000000000002e-01;
  a27=(a20*a27);
  a44=-7.4999999999999997e-02;
  a10=(a44*a10);
  a27=(a27+a10);
  a45=(a45+a27);
  a27=-1.1400000000000000e-01;
  a40=(a27*a40);
  a10=8.3000000000000004e-02;
  a29=(a10*a29);
  a40=(a40+a29);
  a45=(a45+a40);
  a40=-1.6800000000000001e-01;
  a38=(a40*a38);
  a29=6.9000000000000006e-02;
  a34=(a29*a34);
  a38=(a38+a34);
  a45=(a45+a38);
  a38=2.3000000000000001e-01;
  a48=(a38*a48);
  a45=(a45+a48);
  if (res[0]!=0) res[0][12]=a45;
  a45=arg[0]? arg[0][1] : 0;
  a12=(a16*a12);
  a48=(a33*a13);
  a12=(a12+a48);
  a45=(a45+a12);
  a5=(a7*a5);
  a13=(a42*a13);
  a5=(a5+a13);
  a45=(a45+a5);
  a46=(a15*a46);
  a5=(a24*a14);
  a46=(a46+a5);
  a45=(a45+a46);
  a50=(a20*a50);
  a14=(a44*a14);
  a50=(a50+a14);
  a45=(a45+a50);
  a52=(a27*a52);
  a2=(a10*a2);
  a52=(a52+a2);
  a45=(a45+a52);
  a51=(a40*a51);
  a36=(a29*a36);
  a51=(a51+a36);
  a45=(a45+a51);
  a54=(a38*a54);
  a45=(a45+a54);
  if (res[0]!=0) res[0][13]=a45;
  a45=arg[0]? arg[0][2] : 0;
  a16=(a16*a23);
  a33=(a33*a11);
  a16=(a16+a33);
  a45=(a45+a16);
  a7=(a7*a6);
  a42=(a42*a11);
  a7=(a7+a42);
  a45=(a45+a7);
  a15=(a15*a19);
  a24=(a24*a3);
  a15=(a15+a24);
  a45=(a45+a15);
  a20=(a20*a21);
  a44=(a44*a3);
  a20=(a20+a44);
  a45=(a45+a20);
  a27=(a27*a39);
  a10=(a10*a28);
  a27=(a27+a10);
  a45=(a45+a27);
  a40=(a40*a37);
  a29=(a29*a32);
  a40=(a40+a29);
  a45=(a45+a40);
  a38=(a38*a47);
  a45=(a45+a38);
  if (res[0]!=0) res[0][14]=a45;
  if (res[0]!=0) res[0][15]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_T(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fk_T_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_T_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_T_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fk_T_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_T_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fk_T_incref(void) {
}

CASADI_SYMBOL_EXPORT void fk_T_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real fk_T_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_out(casadi_int i) {
  switch (i) {
    case 0: return "T_indy7_tcp";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_T_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_T_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_T_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
