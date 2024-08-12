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
  #define CASADI_PREFIX(ID) hyumm_offset_r_J_b_ ## ID
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
#define casadi_sq CASADI_PREFIX(sq)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[66] = {6, 9, 0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_b:(q[9])->(J_b[6x9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a7, a8, a9;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][3] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a0=sin(a0);
  a2=sin(a2);
  a5=(a0*a2);
  a4=(a4-a5);
  a5=2.2204460492503131e-16;
  a6=arg[0]? arg[0][4] : 0;
  a7=cos(a6);
  a8=(a5*a7);
  a6=sin(a6);
  a8=(a8+a6);
  a9=(a4*a8);
  a10=(a1*a2);
  a11=(a0*a3);
  a10=(a10+a11);
  a11=(a5*a6);
  a12=(a10*a11);
  a9=(a9-a12);
  a12=arg[0]? arg[0][5] : 0;
  a13=cos(a12);
  a14=(a9*a13);
  a15=(a5*a6);
  a15=(a7-a15);
  a16=(a4*a15);
  a17=(a5*a7);
  a18=(a10*a17);
  a16=(a16-a18);
  a12=sin(a12);
  a18=(a16*a12);
  a14=(a14+a18);
  a18=arg[0]? arg[0][6] : 0;
  a19=cos(a18);
  a20=(a5*a19);
  a21=-2.2204460492503131e-16;
  a18=sin(a18);
  a22=(a21*a18);
  a20=(a20+a22);
  a22=(a14*a20);
  a16=(a16*a13);
  a23=(a9*a12);
  a16=(a16-a23);
  a23=(a16*a19);
  a4=(a5*a4);
  a4=(a4+a10);
  a24=(a4*a18);
  a23=(a23-a24);
  a22=(a22+a23);
  a23=arg[0]? arg[0][7] : 0;
  a24=cos(a23);
  a25=(a5*a24);
  a23=sin(a23);
  a25=(a25+a23);
  a26=(a22*a25);
  a27=(a21*a19);
  a28=(a5*a18);
  a27=(a27-a28);
  a28=(a14*a27);
  a29=(a16*a18);
  a30=(a4*a19);
  a29=(a29+a30);
  a28=(a28-a29);
  a29=(a5*a23);
  a30=(a28*a29);
  a16=(a5*a16);
  a31=(a5*a4);
  a16=(a16+a31);
  a16=(a16-a14);
  a31=(a5*a23);
  a31=(a31-a24);
  a32=(a16*a31);
  a30=(a30+a32);
  a26=(a26+a30);
  a30=arg[0]? arg[0][8] : 0;
  a32=cos(a30);
  a33=(a5*a32);
  a30=sin(a30);
  a34=(a21*a30);
  a33=(a33+a34);
  a34=(a26*a33);
  a35=(a5*a23);
  a35=(a24-a35);
  a36=(a22*a35);
  a37=(a5*a24);
  a38=(a28*a37);
  a24=(a5*a24);
  a23=(a23+a24);
  a24=(a16*a23);
  a38=(a38+a24);
  a36=(a36+a38);
  a38=(a36*a32);
  a22=(a5*a22);
  a22=(a22-a28);
  a24=(a22*a30);
  a38=(a38-a24);
  a34=(a34+a38);
  if (res[0]!=0) res[0][0]=a34;
  a21=(a21*a32);
  a38=(a5*a30);
  a21=(a21-a38);
  a38=(a26*a21);
  a24=(a36*a30);
  a39=(a22*a32);
  a24=(a24+a39);
  a38=(a38-a24);
  if (res[0]!=0) res[0][1]=a38;
  a36=(a5*a36);
  a24=(a5*a22);
  a36=(a36+a24);
  a36=(a36-a26);
  if (res[0]!=0) res[0][2]=a36;
  a24=0.;
  if (res[0]!=0) res[0][3]=a24;
  if (res[0]!=0) res[0][4]=a24;
  if (res[0]!=0) res[0][5]=a24;
  a39=(a0*a3);
  a40=(a1*a2);
  a39=(a39+a40);
  a8=(a39*a8);
  a3=(a1*a3);
  a2=(a0*a2);
  a3=(a3-a2);
  a11=(a3*a11);
  a8=(a8+a11);
  a11=(a8*a13);
  a15=(a39*a15);
  a17=(a3*a17);
  a15=(a15+a17);
  a17=(a15*a12);
  a11=(a11+a17);
  a17=(a11*a20);
  a15=(a15*a13);
  a2=(a8*a12);
  a15=(a15-a2);
  a2=(a15*a19);
  a39=(a5*a39);
  a39=(a39-a3);
  a40=(a39*a18);
  a2=(a2-a40);
  a17=(a17+a2);
  a2=(a17*a25);
  a40=(a11*a27);
  a41=(a15*a18);
  a42=(a39*a19);
  a41=(a41+a42);
  a40=(a40-a41);
  a41=(a40*a29);
  a15=(a5*a15);
  a42=(a5*a39);
  a15=(a15+a42);
  a15=(a15-a11);
  a42=(a15*a31);
  a41=(a41+a42);
  a2=(a2+a41);
  a41=(a2*a33);
  a42=(a17*a35);
  a43=(a40*a37);
  a44=(a15*a23);
  a43=(a43+a44);
  a42=(a42+a43);
  a43=(a42*a32);
  a17=(a5*a17);
  a17=(a17-a40);
  a44=(a17*a30);
  a43=(a43-a44);
  a41=(a41+a43);
  if (res[0]!=0) res[0][6]=a41;
  a43=(a2*a21);
  a44=(a42*a30);
  a45=(a17*a32);
  a44=(a44+a45);
  a43=(a43-a44);
  if (res[0]!=0) res[0][7]=a43;
  a42=(a5*a42);
  a44=(a5*a17);
  a42=(a42+a44);
  a42=(a42-a2);
  if (res[0]!=0) res[0][8]=a42;
  if (res[0]!=0) res[0][9]=a24;
  if (res[0]!=0) res[0][10]=a24;
  if (res[0]!=0) res[0][11]=a24;
  a24=arg[0]? arg[0][1] : 0;
  a44=2.9999999999999999e-01;
  a45=(a44*a0);
  a46=-4.0000000000000002e-01;
  a47=(a46*a1);
  a45=(a45+a47);
  a45=(a24+a45);
  a47=-1.0900000000000000e-01;
  a3=(a47*a3);
  a3=(a45+a3);
  a48=-4.5000000000000001e-01;
  a8=(a48*a8);
  a49=-3.0499999999999999e-02;
  a50=(a49*a39);
  a8=(a8+a50);
  a8=(a3+a8);
  a50=-2.6700000000000002e-01;
  a11=(a50*a11);
  a51=-7.4999999999999997e-02;
  a52=(a51*a39);
  a11=(a11+a52);
  a11=(a8+a11);
  a52=-1.1400000000000000e-01;
  a40=(a52*a40);
  a53=8.3000000000000004e-02;
  a54=(a53*a15);
  a40=(a40+a54);
  a40=(a11+a40);
  a54=-1.6800000000000001e-01;
  a2=(a54*a2);
  a55=6.9000000000000006e-02;
  a56=(a55*a17);
  a2=(a2+a56);
  a2=(a40+a2);
  a56=2.3000000000000001e-01;
  a57=(a56*a42);
  a57=(a2+a57);
  a24=(a24-a57);
  a58=(a34*a24);
  a59=arg[0]? arg[0][0] : 0;
  a44=(a44*a1);
  a46=(a46*a0);
  a44=(a44-a46);
  a44=(a59+a44);
  a47=(a47*a10);
  a47=(a44-a47);
  a9=(a48*a9);
  a49=(a49*a4);
  a9=(a9+a49);
  a9=(a47+a9);
  a14=(a50*a14);
  a51=(a51*a4);
  a14=(a14+a51);
  a14=(a9+a14);
  a28=(a52*a28);
  a51=(a53*a16);
  a28=(a28+a51);
  a28=(a14+a28);
  a26=(a54*a26);
  a51=(a55*a22);
  a26=(a26+a51);
  a26=(a28+a26);
  a51=(a56*a36);
  a51=(a26+a51);
  a59=(a51-a59);
  a49=(a41*a59);
  a58=(a58+a49);
  if (res[0]!=0) res[0][12]=a58;
  a58=(a38*a24);
  a49=(a43*a59);
  a58=(a58+a49);
  if (res[0]!=0) res[0][13]=a58;
  a24=(a36*a24);
  a59=(a42*a59);
  a24=(a24+a59);
  if (res[0]!=0) res[0][14]=a24;
  a24=(a5*a6);
  a24=(a24-a7);
  a59=(a24*a13);
  a7=(a5*a7);
  a6=(a6+a7);
  a7=(a6*a12);
  a59=(a59+a7);
  a20=(a59*a20);
  a6=(a6*a13);
  a12=(a24*a12);
  a6=(a6-a12);
  a19=(a6*a19);
  a20=(a20+a19);
  a25=(a20*a25);
  a27=(a59*a27);
  a18=(a6*a18);
  a27=(a27-a18);
  a29=(a27*a29);
  a6=(a5*a6);
  a6=(a6-a59);
  a31=(a6*a31);
  a29=(a29+a31);
  a25=(a25+a29);
  a33=(a25*a33);
  a35=(a20*a35);
  a37=(a27*a37);
  a23=(a6*a23);
  a37=(a37+a23);
  a35=(a35+a37);
  a37=(a35*a32);
  a20=(a5*a20);
  a20=(a20-a27);
  a23=(a20*a30);
  a37=(a37-a23);
  a33=(a33+a37);
  if (res[0]!=0) res[0][15]=a33;
  a21=(a25*a21);
  a30=(a35*a30);
  a32=(a20*a32);
  a30=(a30+a32);
  a21=(a21-a30);
  if (res[0]!=0) res[0][16]=a21;
  a35=(a5*a35);
  a5=(a5*a20);
  a35=(a35+a5);
  a35=(a35-a25);
  if (res[0]!=0) res[0][17]=a35;
  a45=(a45-a57);
  a5=(a34*a45);
  a44=(a51-a44);
  a30=(a41*a44);
  a5=(a5+a30);
  if (res[0]!=0) res[0][18]=a5;
  a5=(a38*a45);
  a30=(a43*a44);
  a5=(a5+a30);
  if (res[0]!=0) res[0][19]=a5;
  a45=(a36*a45);
  a44=(a42*a44);
  a45=(a45+a44);
  if (res[0]!=0) res[0][20]=a45;
  if (res[0]!=0) res[0][21]=a33;
  if (res[0]!=0) res[0][22]=a21;
  if (res[0]!=0) res[0][23]=a35;
  a45=5.2749999999999997e-01;
  a48=(a48*a24);
  a48=(a45+a48);
  a50=(a50*a59);
  a50=(a48+a50);
  a52=(a52*a27);
  a53=(a53*a6);
  a52=(a52+a53);
  a52=(a50+a52);
  a54=(a54*a25);
  a55=(a55*a20);
  a54=(a54+a55);
  a54=(a52+a54);
  a56=(a56*a35);
  a56=(a54+a56);
  a55=(a56*a39);
  a25=(a45*a39);
  a55=(a55-a25);
  a25=(a34*a55);
  a45=(a45*a4);
  a53=(a56*a4);
  a45=(a45-a53);
  a53=(a41*a45);
  a47=(a47*a39);
  a3=(a3*a4);
  a47=(a47-a3);
  a3=(a51*a39);
  a27=(a57*a4);
  a3=(a3-a27);
  a47=(a47-a3);
  a3=(a33*a47);
  a53=(a53+a3);
  a25=(a25+a53);
  if (res[0]!=0) res[0][24]=a25;
  a25=(a38*a55);
  a53=(a43*a45);
  a3=(a21*a47);
  a53=(a53+a3);
  a25=(a25+a53);
  if (res[0]!=0) res[0][25]=a25;
  a55=(a36*a55);
  a45=(a42*a45);
  a47=(a35*a47);
  a45=(a45+a47);
  a55=(a55+a45);
  if (res[0]!=0) res[0][26]=a55;
  a55=(a34*a4);
  a45=(a41*a39);
  a55=(a55+a45);
  if (res[0]!=0) res[0][27]=a55;
  a55=(a38*a4);
  a45=(a43*a39);
  a55=(a55+a45);
  if (res[0]!=0) res[0][28]=a55;
  a55=(a36*a4);
  a45=(a42*a39);
  a55=(a55+a45);
  if (res[0]!=0) res[0][29]=a55;
  a55=(a56*a39);
  a45=(a48*a39);
  a55=(a55-a45);
  a45=(a34*a55);
  a48=(a48*a4);
  a47=(a56*a4);
  a48=(a48-a47);
  a47=(a41*a48);
  a9=(a9*a39);
  a8=(a8*a4);
  a9=(a9-a8);
  a8=(a51*a39);
  a25=(a57*a4);
  a8=(a8-a25);
  a9=(a9-a8);
  a8=(a33*a9);
  a47=(a47+a8);
  a45=(a45+a47);
  if (res[0]!=0) res[0][30]=a45;
  a45=(a38*a55);
  a47=(a43*a48);
  a8=(a21*a9);
  a47=(a47+a8);
  a45=(a45+a47);
  if (res[0]!=0) res[0][31]=a45;
  a55=(a36*a55);
  a48=(a42*a48);
  a9=(a35*a9);
  a48=(a48+a9);
  a55=(a55+a48);
  if (res[0]!=0) res[0][32]=a55;
  a55=(a34*a4);
  a48=(a41*a39);
  a55=(a55+a48);
  if (res[0]!=0) res[0][33]=a55;
  a55=(a38*a4);
  a48=(a43*a39);
  a55=(a55+a48);
  if (res[0]!=0) res[0][34]=a55;
  a4=(a36*a4);
  a39=(a42*a39);
  a4=(a4+a39);
  if (res[0]!=0) res[0][35]=a4;
  a4=(a11*a6);
  a39=(a50*a15);
  a4=(a4-a39);
  a39=(a57*a6);
  a55=(a56*a15);
  a39=(a39-a55);
  a4=(a4-a39);
  a39=(a34*a4);
  a50=(a50*a16);
  a55=(a14*a6);
  a50=(a50-a55);
  a55=(a56*a16);
  a48=(a51*a6);
  a55=(a55-a48);
  a50=(a50-a55);
  a55=(a41*a50);
  a14=(a14*a15);
  a11=(a11*a16);
  a14=(a14-a11);
  a11=(a51*a15);
  a48=(a57*a16);
  a11=(a11-a48);
  a14=(a14-a11);
  a11=(a33*a14);
  a55=(a55+a11);
  a39=(a39+a55);
  if (res[0]!=0) res[0][36]=a39;
  a39=(a38*a4);
  a55=(a43*a50);
  a11=(a21*a14);
  a55=(a55+a11);
  a39=(a39+a55);
  if (res[0]!=0) res[0][37]=a39;
  a4=(a36*a4);
  a50=(a42*a50);
  a14=(a35*a14);
  a50=(a50+a14);
  a4=(a4+a50);
  if (res[0]!=0) res[0][38]=a4;
  a4=(a34*a16);
  a50=(a41*a15);
  a14=(a33*a6);
  a50=(a50+a14);
  a4=(a4+a50);
  if (res[0]!=0) res[0][39]=a4;
  a4=(a38*a16);
  a50=(a43*a15);
  a14=(a21*a6);
  a50=(a50+a14);
  a4=(a4+a50);
  if (res[0]!=0) res[0][40]=a4;
  a16=(a36*a16);
  a15=(a42*a15);
  a6=(a35*a6);
  a15=(a15+a6);
  a16=(a16+a15);
  if (res[0]!=0) res[0][41]=a16;
  a16=(a40*a20);
  a15=(a52*a17);
  a16=(a16-a15);
  a15=(a57*a20);
  a6=(a56*a17);
  a15=(a15-a6);
  a16=(a16-a15);
  a15=(a34*a16);
  a52=(a52*a22);
  a6=(a28*a20);
  a52=(a52-a6);
  a6=(a56*a22);
  a4=(a51*a20);
  a6=(a6-a4);
  a52=(a52-a6);
  a6=(a41*a52);
  a28=(a28*a17);
  a40=(a40*a22);
  a28=(a28-a40);
  a40=(a51*a17);
  a4=(a57*a22);
  a40=(a40-a4);
  a28=(a28-a40);
  a40=(a33*a28);
  a6=(a6+a40);
  a15=(a15+a6);
  if (res[0]!=0) res[0][42]=a15;
  a15=(a38*a16);
  a6=(a43*a52);
  a40=(a21*a28);
  a6=(a6+a40);
  a15=(a15+a6);
  if (res[0]!=0) res[0][43]=a15;
  a16=(a36*a16);
  a52=(a42*a52);
  a28=(a35*a28);
  a52=(a52+a28);
  a16=(a16+a52);
  if (res[0]!=0) res[0][44]=a16;
  a16=(a34*a22);
  a52=(a41*a17);
  a28=(a33*a20);
  a52=(a52+a28);
  a16=(a16+a52);
  if (res[0]!=0) res[0][45]=a16;
  a16=(a38*a22);
  a52=(a43*a17);
  a28=(a21*a20);
  a52=(a52+a28);
  a16=(a16+a52);
  if (res[0]!=0) res[0][46]=a16;
  a22=(a36*a22);
  a17=(a42*a17);
  a20=(a35*a20);
  a17=(a17+a20);
  a22=(a22+a17);
  if (res[0]!=0) res[0][47]=a22;
  a22=(a2*a35);
  a17=(a54*a42);
  a22=(a22-a17);
  a17=(a57*a35);
  a20=(a56*a42);
  a17=(a17-a20);
  a22=(a22-a17);
  a17=(a34*a22);
  a54=(a54*a36);
  a20=(a26*a35);
  a54=(a54-a20);
  a56=(a56*a36);
  a20=(a51*a35);
  a56=(a56-a20);
  a54=(a54-a56);
  a56=(a41*a54);
  a26=(a26*a42);
  a2=(a2*a36);
  a26=(a26-a2);
  a51=(a51*a42);
  a57=(a57*a36);
  a51=(a51-a57);
  a26=(a26-a51);
  a51=(a33*a26);
  a56=(a56+a51);
  a17=(a17+a56);
  if (res[0]!=0) res[0][48]=a17;
  a17=(a38*a22);
  a56=(a43*a54);
  a51=(a21*a26);
  a56=(a56+a51);
  a17=(a17+a56);
  if (res[0]!=0) res[0][49]=a17;
  a22=(a36*a22);
  a54=(a42*a54);
  a26=(a35*a26);
  a54=(a54+a26);
  a22=(a22+a54);
  if (res[0]!=0) res[0][50]=a22;
  a34=(a34*a36);
  a41=(a41*a42);
  a33=(a33*a35);
  a41=(a41+a33);
  a34=(a34+a41);
  if (res[0]!=0) res[0][51]=a34;
  a38=(a38*a36);
  a43=(a43*a42);
  a21=(a21*a35);
  a43=(a43+a21);
  a38=(a38+a43);
  if (res[0]!=0) res[0][52]=a38;
  a36=casadi_sq(a36);
  a42=casadi_sq(a42);
  a35=casadi_sq(a35);
  a42=(a42+a35);
  a36=(a36+a42);
  if (res[0]!=0) res[0][53]=a36;
  return 0;
}

CASADI_SYMBOL_EXPORT int J_b(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int J_b_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int J_b_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_b_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int J_b_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_b_release(int mem) {
}

CASADI_SYMBOL_EXPORT void J_b_incref(void) {
}

CASADI_SYMBOL_EXPORT void J_b_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int J_b_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int J_b_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real J_b_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_b_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_b_name_out(casadi_int i) {
  switch (i) {
    case 0: return "J_b";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_b_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_b_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int J_b_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
