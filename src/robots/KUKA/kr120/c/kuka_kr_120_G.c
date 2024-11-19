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
  #define CASADI_PREFIX(ID) kuka_kr_120_G_ ## ID
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

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};

/* generalized_gravity:(i0[6])->(o0[6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a7, a8, a9;
  a0=-2.9919600000000001e-02;
  a1=2.5457300000000001e+02;
  a2=9.8100000000000005e+00;
  a3=9.7931777202934950e-12;
  a4=arg[0]? arg[0][0] : 0;
  a5=cos(a4);
  a5=(a3*a5);
  a5=(a2*a5);
  a6=(a1*a5);
  a0=(a0*a6);
  a6=-4.4684199999999999e-03;
  a4=sin(a4);
  a3=(a3*a4);
  a2=(a2*a3);
  a1=(a1*a2);
  a6=(a6*a1);
  a0=(a0-a6);
  a6=arg[0]? arg[0][1] : 0;
  a1=sin(a6);
  a3=9.3673599999999997e-04;
  a4=3.3152800000000002e+02;
  a7=-4.8036025157571776e-11;
  a7=(a7-a5);
  a8=(a4*a7);
  a9=(a3*a8);
  a10=-2.2289300000000001e-01;
  a11=4.8966386501092529e-12;
  a6=cos(a6);
  a12=(a11*a6);
  a13=(a12*a5);
  a14=-9.8100000000000005e+00;
  a15=(a14*a6);
  a13=(a13+a15);
  a15=(a1*a2);
  a13=(a13-a15);
  a15=(a4*a13);
  a16=(a10*a15);
  a9=(a9-a16);
  a16=arg[0]? arg[0][2] : 0;
  a17=cos(a16);
  a18=-1.1350499999999999e-01;
  a19=1.7232499999999999e+02;
  a20=(a19*a7);
  a21=(a18*a20);
  a22=8.6972300000000002e-02;
  a23=(a17*a13);
  a16=sin(a16);
  a2=(a6*a2);
  a24=(a11*a1);
  a5=(a24*a5);
  a14=(a14*a1);
  a5=(a5+a14);
  a2=(a2+a5);
  a5=(a16*a2);
  a23=(a23-a5);
  a5=(a19*a23);
  a14=(a22*a5);
  a21=(a21-a14);
  a14=arg[0]? arg[0][3] : 0;
  a25=cos(a14);
  a26=(a11*a25);
  a27=4.3996199999999999e-06;
  a28=1.8857500000000002e+01;
  a29=(a11*a7);
  a30=(a17*a2);
  a13=(a16*a13);
  a30=(a30+a13);
  a29=(a29-a30);
  a13=(a28*a29);
  a31=(a27*a13);
  a32=-1.7462100000000000e-01;
  a33=(a25*a23);
  a14=sin(a14);
  a34=(a14*a7);
  a33=(a33-a34);
  a34=(a11*a14);
  a35=(a34*a30);
  a33=(a33-a35);
  a35=(a28*a33);
  a36=(a32*a35);
  a31=(a31-a36);
  a36=arg[0]? arg[0][4] : 0;
  a37=cos(a36);
  a38=(a11*a37);
  a39=4.0722900000000003e-05;
  a40=2.5514800000000001e+01;
  a41=(a26*a30);
  a23=(a14*a23);
  a7=(a25*a7);
  a23=(a23+a7);
  a41=(a41+a23);
  a23=(a11*a29);
  a23=(a41+a23);
  a7=(a40*a23);
  a42=(a39*a7);
  a43=-2.5228500000000001e-02;
  a44=(a37*a33);
  a36=sin(a36);
  a45=(a36*a29);
  a44=(a44+a45);
  a45=(a11*a36);
  a46=(a45*a41);
  a44=(a44-a46);
  a46=(a40*a44);
  a47=(a43*a46);
  a42=(a42-a47);
  a47=arg[0]? arg[0][5] : 0;
  a48=cos(a47);
  a49=(a11*a48);
  a50=4.5152949105362271e-06;
  a51=2.1561800000000000e+00;
  a52=(a11*a23);
  a53=(a38*a41);
  a33=(a36*a33);
  a29=(a37*a29);
  a33=(a33-a29);
  a53=(a53+a33);
  a52=(a52-a53);
  a52=(a51*a52);
  a33=(a50*a52);
  a29=1.7473992422710537e-03;
  a54=(a48*a44);
  a47=sin(a47);
  a55=(a47*a23);
  a54=(a54-a55);
  a55=(a11*a47);
  a56=(a55*a53);
  a54=(a54-a56);
  a54=(a51*a54);
  a56=(a29*a54);
  a33=(a33-a56);
  a56=(a49*a33);
  a57=(a49*a53);
  a44=(a47*a44);
  a23=(a48*a23);
  a44=(a44+a23);
  a57=(a57+a44);
  a51=(a51*a57);
  a29=(a29*a51);
  a57=-4.8793559867914560e-05;
  a44=(a57*a52);
  a29=(a29-a44);
  a44=(a55*a29);
  a57=(a57*a54);
  a50=(a50*a51);
  a57=(a57-a50);
  a44=(a44+a57);
  a56=(a56-a44);
  a44=-5.8999999999999997e-02;
  a50=(a47*a51);
  a23=(a48*a54);
  a50=(a50+a23);
  a23=(a44*a50);
  a56=(a56-a23);
  a42=(a42+a56);
  a56=(a38*a42);
  a23=5.1923299999999999e-02;
  a58=(a23*a46);
  a40=(a40*a53);
  a39=(a39*a40);
  a58=(a58-a39);
  a39=(a48*a33);
  a53=(a11*a57);
  a59=(a47*a29);
  a53=(a53-a59);
  a39=(a39+a53);
  a53=1.9500000000000001e-01;
  a59=(a53*a50);
  a39=(a39+a59);
  a58=(a58+a39);
  a43=(a43*a40);
  a23=(a23*a7);
  a43=(a43-a23);
  a33=(a47*a33);
  a29=(a48*a29);
  a33=(a33+a29);
  a49=(a49*a51);
  a55=(a55*a54);
  a55=(a55+a52);
  a49=(a49-a55);
  a44=(a44*a49);
  a48=(a48*a51);
  a52=(a11*a52);
  a47=(a47*a54);
  a52=(a52-a47);
  a48=(a48+a52);
  a53=(a53*a48);
  a44=(a44-a53);
  a33=(a33+a44);
  a43=(a43+a33);
  a33=(a45*a43);
  a33=(a58-a33);
  a56=(a56+a33);
  a33=-3.4150000000000003e-01;
  a40=(a40+a49);
  a49=(a36*a40);
  a46=(a46+a50);
  a50=(a37*a46);
  a49=(a49+a50);
  a50=(a33*a49);
  a56=(a56-a50);
  a31=(a31+a56);
  a56=(a26*a31);
  a28=(a28*a41);
  a32=(a32*a28);
  a41=4.4970000000000001e-03;
  a50=(a41*a13);
  a32=(a32-a50);
  a50=(a36*a42);
  a44=(a37*a43);
  a50=(a50+a44);
  a38=(a38*a40);
  a7=(a7+a48);
  a45=(a45*a46);
  a45=(a7-a45);
  a38=(a38+a45);
  a33=(a33*a38);
  a45=5.8999999999999997e-02;
  a46=(a36*a46);
  a7=(a11*a7);
  a46=(a46+a7);
  a40=(a37*a40);
  a46=(a46-a40);
  a40=(a45*a46);
  a33=(a33-a40);
  a50=(a50+a33);
  a32=(a32+a50);
  a50=(a34*a32);
  a41=(a41*a35);
  a27=(a27*a28);
  a41=(a41-a27);
  a36=(a36*a43);
  a43=(a11*a58);
  a36=(a36+a43);
  a37=(a37*a42);
  a36=(a36-a37);
  a45=(a45*a49);
  a36=(a36+a45);
  a41=(a41+a36);
  a50=(a50+a41);
  a56=(a56-a50);
  a50=-1.1500000000000000e-01;
  a28=(a28+a38);
  a38=(a25*a28);
  a13=(a13+a46);
  a46=(a11*a13);
  a35=(a35+a49);
  a49=(a14*a35);
  a46=(a46-a49);
  a38=(a38+a46);
  a46=(a50*a38);
  a49=9.5000000000000001e-02;
  a36=(a14*a28);
  a45=(a25*a35);
  a36=(a36+a45);
  a45=(a49*a36);
  a46=(a46-a45);
  a56=(a56+a46);
  a21=(a21+a56);
  a56=(a17*a21);
  a19=(a19*a30);
  a22=(a22*a19);
  a30=3.7510700000000002e-01;
  a46=(a30*a20);
  a22=(a22-a46);
  a46=(a14*a31);
  a45=(a25*a32);
  a46=(a46+a45);
  a26=(a26*a28);
  a34=(a34*a35);
  a34=(a34+a13);
  a26=(a26-a34);
  a49=(a49*a26);
  a34=8.7849999999999995e-01;
  a13=(a34*a38);
  a49=(a49-a13);
  a46=(a46+a49);
  a22=(a22+a46);
  a46=(a16*a22);
  a56=(a56-a46);
  a46=-9.5000000000000001e-02;
  a49=(a19+a26);
  a13=(a16*a49);
  a35=(a5+a36);
  a28=(a17*a35);
  a13=(a13+a28);
  a28=(a46*a13);
  a56=(a56-a28);
  a9=(a9+a56);
  a1=(a1*a9);
  a4=(a4*a2);
  a10=(a10*a4);
  a2=4.4928299999999999e-01;
  a9=(a2*a8);
  a10=(a10-a9);
  a21=(a16*a21);
  a22=(a17*a22);
  a21=(a21+a22);
  a17=(a17*a49);
  a16=(a16*a35);
  a17=(a17-a16);
  a46=(a46*a17);
  a16=1.1499999999999999e+00;
  a20=(a20+a38);
  a38=(a16*a20);
  a46=(a46-a38);
  a21=(a21+a46);
  a10=(a10+a21);
  a6=(a6*a10);
  a2=(a2*a15);
  a3=(a3*a4);
  a2=(a2-a3);
  a30=(a30*a5);
  a18=(a18*a19);
  a30=(a30-a18);
  a25=(a25*a31);
  a31=(a11*a41);
  a14=(a14*a32);
  a31=(a31-a14);
  a25=(a25+a31);
  a34=(a34*a36);
  a50=(a50*a26);
  a34=(a34-a50);
  a25=(a25+a34);
  a30=(a30+a25);
  a16=(a16*a13);
  a16=(a30+a16);
  a2=(a2+a16);
  a11=(a11*a2);
  a6=(a6+a11);
  a1=(a1+a6);
  a6=3.3000000000000002e-01;
  a4=(a4+a17);
  a24=(a24*a4);
  a15=(a15+a13);
  a12=(a12*a15);
  a8=(a8+a20);
  a12=(a12-a8);
  a24=(a24+a12);
  a6=(a6*a24);
  a1=(a1+a6);
  a0=(a0+a1);
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a2;
  if (res[0]!=0) res[0][2]=a30;
  if (res[0]!=0) res[0][3]=a41;
  if (res[0]!=0) res[0][4]=a58;
  if (res[0]!=0) res[0][5]=a57;
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
