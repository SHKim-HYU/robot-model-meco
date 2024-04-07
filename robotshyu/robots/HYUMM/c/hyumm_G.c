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
  #define CASADI_PREFIX(ID) hyumm_G_ ## ID
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

/* generalized_gravity:(i0[9])->(o0[9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a6, a7, a8, a9;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][3] : 0;
  a3=cos(a2);
  a4=2.2204460492503131e-16;
  a5=arg[0]? arg[0][4] : 0;
  a6=cos(a5);
  a7=(a4*a6);
  a5=sin(a5);
  a7=(a7+a5);
  a8=5.8476655299999996e+00;
  a9=9.8100000000000005e+00;
  a10=(a4*a5);
  a10=(a10-a6);
  a11=(a9*a10);
  a12=(a8*a11);
  a13=arg[0]? arg[0][5] : 0;
  a14=cos(a13);
  a15=2.6820606400000000e+00;
  a16=(a14*a11);
  a13=sin(a13);
  a17=(a4*a6);
  a17=(a5+a17);
  a9=(a9*a17);
  a18=(a13*a9);
  a16=(a16+a18);
  a18=(a15*a16);
  a19=arg[0]? arg[0][6] : 0;
  a20=cos(a19);
  a21=(a4*a20);
  a22=-2.2204460492503131e-16;
  a19=sin(a19);
  a23=(a22*a19);
  a21=(a21+a23);
  a23=2.1298737100000000e+00;
  a24=(a21*a16);
  a25=(a14*a9);
  a11=(a13*a11);
  a25=(a25-a11);
  a11=(a20*a25);
  a24=(a24+a11);
  a11=(a23*a24);
  a26=arg[0]? arg[0][7] : 0;
  a27=cos(a26);
  a28=(a4*a27);
  a26=sin(a26);
  a28=(a28+a26);
  a29=2.2241227100000001e+00;
  a30=(a28*a24);
  a31=(a4*a26);
  a32=(a22*a20);
  a33=(a4*a19);
  a32=(a32-a33);
  a33=(a32*a16);
  a34=(a19*a25);
  a33=(a33-a34);
  a34=(a31*a33);
  a35=(a4*a26);
  a35=(a35-a27);
  a36=(a4*a25);
  a36=(a36-a16);
  a16=(a35*a36);
  a34=(a34+a16);
  a30=(a30+a34);
  a34=(a29*a30);
  a16=arg[0]? arg[0][8] : 0;
  a37=cos(a16);
  a38=(a4*a37);
  a16=sin(a16);
  a39=(a22*a16);
  a38=(a38+a39);
  a39=3.8255032000000000e-01;
  a40=(a38*a30);
  a41=(a4*a26);
  a41=(a27-a41);
  a42=(a41*a24);
  a43=(a4*a27);
  a44=(a43*a33);
  a27=(a4*a27);
  a26=(a26+a27);
  a27=(a26*a36);
  a44=(a44+a27);
  a42=(a42+a44);
  a44=(a37*a42);
  a24=(a4*a24);
  a24=(a24-a33);
  a27=(a16*a24);
  a44=(a44-a27);
  a40=(a40+a44);
  a40=(a39*a40);
  a44=(a38*a40);
  a22=(a22*a37);
  a27=(a4*a16);
  a22=(a22-a27);
  a27=(a22*a30);
  a45=(a16*a42);
  a46=(a37*a24);
  a45=(a45+a46);
  a27=(a27-a45);
  a27=(a39*a27);
  a45=(a22*a27);
  a46=(a4*a42);
  a47=(a4*a24);
  a46=(a46+a47);
  a46=(a46-a30);
  a39=(a39*a46);
  a45=(a45-a39);
  a44=(a44+a45);
  a45=(a34+a44);
  a46=(a28*a45);
  a42=(a29*a42);
  a30=(a37*a40);
  a47=(a4*a39);
  a48=(a16*a27);
  a47=(a47-a48);
  a30=(a30+a47);
  a47=(a42+a30);
  a48=(a41*a47);
  a29=(a29*a24);
  a24=(a4*a39);
  a49=(a37*a27);
  a24=(a24-a49);
  a49=(a16*a40);
  a24=(a24-a49);
  a49=(a29+a24);
  a50=(a4*a49);
  a48=(a48+a50);
  a46=(a46+a48);
  a48=(a11+a46);
  a50=(a21*a48);
  a33=(a23*a33);
  a51=(a31*a45);
  a52=(a43*a47);
  a52=(a52-a49);
  a51=(a51+a52);
  a52=(a33+a51);
  a49=(a32*a52);
  a23=(a23*a36);
  a45=(a35*a45);
  a47=(a26*a47);
  a45=(a45+a47);
  a47=(a23+a45);
  a49=(a49-a47);
  a50=(a50+a49);
  a49=(a18+a50);
  a36=(a14*a49);
  a15=(a15*a25);
  a25=(a20*a48);
  a53=(a4*a47);
  a54=(a19*a52);
  a53=(a53-a54);
  a25=(a25+a53);
  a53=(a15+a25);
  a54=(a13*a53);
  a36=(a36-a54);
  a54=(a12+a36);
  a7=(a7*a54);
  a55=(a4*a5);
  a55=(a6-a55);
  a8=(a8*a9);
  a49=(a13*a49);
  a53=(a14*a53);
  a49=(a49+a53);
  a53=(a8+a49);
  a55=(a55*a53);
  a47=(a4*a47);
  a52=(a20*a52);
  a47=(a47-a52);
  a48=(a19*a48);
  a47=(a47-a48);
  a48=(a4*a47);
  a55=(a55+a48);
  a7=(a7+a55);
  a55=(a3*a7);
  a2=sin(a2);
  a5=(a4*a5);
  a5=(a5*a54);
  a6=(a4*a6);
  a6=(a6*a53);
  a6=(a6-a47);
  a5=(a5+a6);
  a6=(a2*a5);
  a55=(a55-a6);
  a6=(a1*a55);
  a0=sin(a0);
  a2=(a2*a7);
  a3=(a3*a5);
  a2=(a2+a3);
  a3=(a0*a2);
  a6=(a6-a3);
  if (res[0]!=0) res[0][0]=a6;
  a0=(a0*a55);
  a1=(a1*a2);
  a0=(a0+a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=-7.0984400000000003e-02;
  a1=(a0*a23);
  a55=7.6491279999999995e-02;
  a6=(a55*a33);
  a1=(a1-a6);
  a6=-2.3113999999999996e-04;
  a3=(a6*a29);
  a5=6.4458919999999975e-02;
  a53=(a5*a42);
  a3=(a3-a53);
  a53=-4.6555878300977510e-04;
  a54=(a53*a39);
  a48=3.0791046353432411e-02;
  a52=(a48*a27);
  a54=(a54-a52);
  a38=(a38*a54);
  a48=(a48*a40);
  a52=8.1469787034552752e-05;
  a39=(a52*a39);
  a48=(a48-a39);
  a22=(a22*a48);
  a52=(a52*a27);
  a53=(a53*a40);
  a52=(a52-a53);
  a22=(a22-a52);
  a38=(a38+a22);
  a22=6.9000000000000006e-02;
  a53=(a22*a30);
  a38=(a38-a53);
  a3=(a3+a38);
  a28=(a28*a3);
  a5=(a5*a34);
  a38=-9.7962319999999978e-02;
  a29=(a38*a29);
  a5=(a5-a29);
  a29=(a37*a54);
  a53=(a4*a52);
  a40=(a16*a48);
  a53=(a53-a40);
  a29=(a29+a53);
  a22=(a22*a44);
  a44=-1.6800000000000001e-01;
  a24=(a44*a24);
  a22=(a22-a24);
  a29=(a29+a22);
  a5=(a5+a29);
  a41=(a41*a5);
  a38=(a38*a42);
  a6=(a6*a34);
  a38=(a38-a6);
  a6=(a4*a52);
  a37=(a37*a48);
  a6=(a6-a37);
  a16=(a16*a54);
  a6=(a6-a16);
  a44=(a44*a30);
  a6=(a6+a44);
  a38=(a38+a6);
  a6=(a4*a38);
  a41=(a41+a6);
  a28=(a28+a41);
  a41=-1.1400000000000000e-01;
  a45=(a41*a45);
  a6=8.3000000000000004e-02;
  a51=(a6*a51);
  a45=(a45-a51);
  a28=(a28+a45);
  a1=(a1+a28);
  a21=(a21*a1);
  a55=(a55*a11);
  a28=-2.6846999999999998e-04;
  a23=(a28*a23);
  a55=(a55-a23);
  a31=(a31*a3);
  a43=(a43*a5);
  a43=(a43-a38);
  a31=(a31+a43);
  a6=(a6*a46);
  a31=(a31+a6);
  a55=(a55+a31);
  a32=(a32*a55);
  a28=(a28*a33);
  a0=(a0*a11);
  a28=(a28-a0);
  a35=(a35*a3);
  a26=(a26*a5);
  a35=(a35+a26);
  a41=(a41*a46);
  a35=(a35-a41);
  a28=(a28+a35);
  a32=(a32-a28);
  a21=(a21+a32);
  a32=-7.4999999999999997e-02;
  a35=(a32*a25);
  a21=(a21-a35);
  a35=-7.0003829999999975e-02;
  a41=(a35*a15);
  a21=(a21-a41);
  a41=(a14*a21);
  a35=(a35*a18);
  a46=(a20*a1);
  a26=(a4*a28);
  a5=(a19*a55);
  a26=(a26-a5);
  a46=(a46+a26);
  a32=(a32*a50);
  a50=-2.6700000000000002e-01;
  a26=(a50*a47);
  a32=(a32-a26);
  a46=(a46+a32);
  a35=(a35+a46);
  a46=(a13*a35);
  a41=(a41-a46);
  a46=-3.0499999999999999e-02;
  a32=(a46*a49);
  a41=(a41-a32);
  a32=4.7625540000000001e-02;
  a26=(a32*a8);
  a41=(a41-a26);
  a10=(a10*a41);
  a32=(a32*a12);
  a13=(a13*a21);
  a14=(a14*a35);
  a13=(a13+a14);
  a46=(a46*a36);
  a36=-4.5000000000000001e-01;
  a47=(a36*a47);
  a46=(a46-a47);
  a13=(a13+a46);
  a32=(a32+a13);
  a17=(a17*a32);
  a10=(a10+a17);
  a17=-1.0900000000000000e-01;
  a17=(a17*a7);
  a10=(a10-a17);
  a17=2.9999999999999999e-01;
  a17=(a17*a2);
  a17=(a10+a17);
  if (res[0]!=0) res[0][2]=a17;
  if (res[0]!=0) res[0][3]=a10;
  a10=-2.9477535999999999e-01;
  a10=(a10*a8);
  a8=-2.3609999999999999e-05;
  a8=(a8*a12);
  a10=(a10-a8);
  a8=-1.6804015999999994e-01;
  a8=(a8*a15);
  a15=2.1420999999999994e-04;
  a15=(a15*a18);
  a8=(a8-a15);
  a4=(a4*a28);
  a20=(a20*a55);
  a4=(a4-a20);
  a19=(a19*a1);
  a4=(a4-a19);
  a50=(a50*a25);
  a4=(a4+a50);
  a8=(a8+a4);
  a36=(a36*a49);
  a36=(a8+a36);
  a10=(a10+a36);
  if (res[0]!=0) res[0][4]=a10;
  if (res[0]!=0) res[0][5]=a8;
  if (res[0]!=0) res[0][6]=a28;
  if (res[0]!=0) res[0][7]=a38;
  if (res[0]!=0) res[0][8]=a52;
  return 0;
}

CASADI_SYMBOL_EXPORT int generalized_gravity(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int generalized_gravity_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int generalized_gravity_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void generalized_gravity_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int generalized_gravity_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void generalized_gravity_release(int mem) {
}

CASADI_SYMBOL_EXPORT void generalized_gravity_incref(void) {
}

CASADI_SYMBOL_EXPORT void generalized_gravity_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int generalized_gravity_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int generalized_gravity_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real generalized_gravity_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* generalized_gravity_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* generalized_gravity_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* generalized_gravity_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* generalized_gravity_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int generalized_gravity_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
