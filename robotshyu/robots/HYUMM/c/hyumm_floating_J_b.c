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
  #define CASADI_PREFIX(ID) hyumm_floating_J_b_ ## ID
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

static const casadi_int casadi_s0[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s1[87] = {6, 12, 0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_b:(q[13])->(J_b[6x12]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a7, a8, a9;
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
  a21=(a15*a9);
  a22=(a7*a8);
  a21=(a21-a22);
  a22=(a16*a17);
  a23=(a21*a22);
  a24=(a6*a11);
  a3=(a3*a13);
  a25=(a24+a3);
  a26=(a16*a17);
  a26=(a26-a18);
  a27=(a25*a26);
  a23=(a23+a27);
  a20=(a20+a23);
  a23=arg[0]? arg[0][9] : 0;
  a27=cos(a23);
  a28=(a20*a27);
  a29=(a16*a17);
  a29=(a18-a29);
  a30=(a10*a29);
  a31=(a16*a18);
  a32=(a21*a31);
  a18=(a16*a18);
  a17=(a17+a18);
  a18=(a25*a17);
  a32=(a32+a18);
  a30=(a30+a32);
  a23=sin(a23);
  a32=(a30*a23);
  a28=(a28+a32);
  a32=arg[0]? arg[0][10] : 0;
  a18=cos(a32);
  a33=(a16*a18);
  a34=-2.2204460492503131e-16;
  a32=sin(a32);
  a35=(a34*a32);
  a33=(a33+a35);
  a35=(a28*a33);
  a30=(a30*a27);
  a36=(a20*a23);
  a30=(a30-a36);
  a36=(a30*a18);
  a10=(a16*a10);
  a10=(a10-a21);
  a37=(a10*a32);
  a36=(a36-a37);
  a35=(a35+a36);
  a36=arg[0]? arg[0][11] : 0;
  a37=cos(a36);
  a38=(a16*a37);
  a36=sin(a36);
  a38=(a38+a36);
  a39=(a35*a38);
  a40=(a34*a18);
  a41=(a16*a32);
  a40=(a40-a41);
  a41=(a28*a40);
  a42=(a30*a32);
  a43=(a10*a18);
  a42=(a42+a43);
  a41=(a41-a42);
  a42=(a16*a36);
  a43=(a41*a42);
  a30=(a16*a30);
  a44=(a16*a10);
  a30=(a30+a44);
  a30=(a30-a28);
  a44=(a16*a36);
  a44=(a44-a37);
  a45=(a30*a44);
  a43=(a43+a45);
  a39=(a39+a43);
  a43=arg[0]? arg[0][12] : 0;
  a45=cos(a43);
  a46=(a16*a45);
  a43=sin(a43);
  a47=(a34*a43);
  a46=(a46+a47);
  a47=(a39*a46);
  a48=(a16*a36);
  a48=(a37-a48);
  a49=(a35*a48);
  a50=(a16*a37);
  a51=(a41*a50);
  a37=(a16*a37);
  a36=(a36+a37);
  a37=(a30*a36);
  a51=(a51+a37);
  a49=(a49+a51);
  a51=(a49*a45);
  a35=(a16*a35);
  a35=(a35-a41);
  a37=(a35*a43);
  a51=(a51-a37);
  a47=(a47+a51);
  a51=(a47*a7);
  a12=(a12+a14);
  a14=(a12*a9);
  a1=(a1*a11);
  a11=(a1*a11);
  a5=(a11+a5);
  a5=(a0-a5);
  a37=(a5*a8);
  a14=(a14+a37);
  a37=(a14*a19);
  a52=(a5*a9);
  a53=(a12*a8);
  a52=(a52-a53);
  a53=(a52*a22);
  a6=(a6*a2);
  a1=(a1*a13);
  a13=(a6-a1);
  a2=(a13*a26);
  a53=(a53+a2);
  a37=(a37+a53);
  a53=(a37*a27);
  a2=(a14*a29);
  a54=(a52*a31);
  a55=(a13*a17);
  a54=(a54+a55);
  a2=(a2+a54);
  a54=(a2*a23);
  a53=(a53+a54);
  a54=(a53*a33);
  a2=(a2*a27);
  a55=(a37*a23);
  a2=(a2-a55);
  a55=(a2*a18);
  a14=(a16*a14);
  a14=(a14-a52);
  a56=(a14*a32);
  a55=(a55-a56);
  a54=(a54+a55);
  a55=(a54*a38);
  a56=(a53*a40);
  a57=(a2*a32);
  a58=(a14*a18);
  a57=(a57+a58);
  a56=(a56-a57);
  a57=(a56*a42);
  a2=(a16*a2);
  a58=(a16*a14);
  a2=(a2+a58);
  a2=(a2-a53);
  a58=(a2*a44);
  a57=(a57+a58);
  a55=(a55+a57);
  a57=(a55*a46);
  a58=(a54*a48);
  a59=(a56*a50);
  a60=(a2*a36);
  a59=(a59+a60);
  a58=(a58+a59);
  a59=(a58*a45);
  a54=(a16*a54);
  a54=(a54-a56);
  a60=(a54*a43);
  a59=(a59-a60);
  a57=(a57+a59);
  a59=(a57*a12);
  a24=(a24-a3);
  a3=(a24*a9);
  a6=(a6+a1);
  a1=(a6*a8);
  a3=(a3+a1);
  a19=(a3*a19);
  a9=(a6*a9);
  a8=(a24*a8);
  a9=(a9-a8);
  a22=(a9*a22);
  a11=(a11+a4);
  a0=(a0-a11);
  a26=(a0*a26);
  a22=(a22+a26);
  a19=(a19+a22);
  a22=(a19*a27);
  a29=(a3*a29);
  a31=(a9*a31);
  a17=(a0*a17);
  a31=(a31+a17);
  a29=(a29+a31);
  a31=(a29*a23);
  a22=(a22+a31);
  a33=(a22*a33);
  a29=(a29*a27);
  a23=(a19*a23);
  a29=(a29-a23);
  a23=(a29*a18);
  a3=(a16*a3);
  a3=(a3-a9);
  a27=(a3*a32);
  a23=(a23-a27);
  a33=(a33+a23);
  a38=(a33*a38);
  a40=(a22*a40);
  a32=(a29*a32);
  a18=(a3*a18);
  a32=(a32+a18);
  a40=(a40-a32);
  a42=(a40*a42);
  a29=(a16*a29);
  a32=(a16*a3);
  a29=(a29+a32);
  a29=(a29-a22);
  a44=(a29*a44);
  a42=(a42+a44);
  a38=(a38+a42);
  a46=(a38*a46);
  a48=(a33*a48);
  a50=(a40*a50);
  a36=(a29*a36);
  a50=(a50+a36);
  a48=(a48+a50);
  a50=(a48*a45);
  a33=(a16*a33);
  a33=(a33-a40);
  a36=(a33*a43);
  a50=(a50-a36);
  a46=(a46+a50);
  a50=(a46*a24);
  a59=(a59+a50);
  a51=(a51+a59);
  if (res[0]!=0) res[0][0]=a51;
  a34=(a34*a45);
  a51=(a16*a43);
  a34=(a34-a51);
  a51=(a39*a34);
  a59=(a49*a43);
  a50=(a35*a45);
  a59=(a59+a50);
  a51=(a51-a59);
  a59=(a51*a7);
  a50=(a55*a34);
  a36=(a58*a43);
  a42=(a54*a45);
  a36=(a36+a42);
  a50=(a50-a36);
  a36=(a50*a12);
  a34=(a38*a34);
  a43=(a48*a43);
  a45=(a33*a45);
  a43=(a43+a45);
  a34=(a34-a43);
  a43=(a34*a24);
  a36=(a36+a43);
  a59=(a59+a36);
  if (res[0]!=0) res[0][1]=a59;
  a49=(a16*a49);
  a59=(a16*a35);
  a49=(a49+a59);
  a49=(a49-a39);
  a59=(a49*a7);
  a58=(a16*a58);
  a36=(a16*a54);
  a58=(a58+a36);
  a58=(a58-a55);
  a36=(a58*a12);
  a48=(a16*a48);
  a16=(a16*a33);
  a48=(a48+a16);
  a48=(a48-a38);
  a16=(a48*a24);
  a36=(a36+a16);
  a59=(a59+a36);
  if (res[0]!=0) res[0][2]=a59;
  a59=0.;
  if (res[0]!=0) res[0][3]=a59;
  if (res[0]!=0) res[0][4]=a59;
  if (res[0]!=0) res[0][5]=a59;
  a36=(a47*a15);
  a16=(a57*a5);
  a43=(a46*a6);
  a16=(a16+a43);
  a36=(a36+a16);
  if (res[0]!=0) res[0][6]=a36;
  a36=(a51*a15);
  a16=(a50*a5);
  a43=(a34*a6);
  a16=(a16+a43);
  a36=(a36+a16);
  if (res[0]!=0) res[0][7]=a36;
  a36=(a49*a15);
  a16=(a58*a5);
  a43=(a48*a6);
  a16=(a16+a43);
  a36=(a36+a16);
  if (res[0]!=0) res[0][8]=a36;
  if (res[0]!=0) res[0][9]=a59;
  if (res[0]!=0) res[0][10]=a59;
  if (res[0]!=0) res[0][11]=a59;
  a36=(a47*a25);
  a16=(a57*a13);
  a43=(a46*a0);
  a16=(a16+a43);
  a36=(a36+a16);
  if (res[0]!=0) res[0][12]=a36;
  a36=(a51*a25);
  a16=(a50*a13);
  a43=(a34*a0);
  a16=(a16+a43);
  a36=(a36+a16);
  if (res[0]!=0) res[0][13]=a36;
  a36=(a49*a25);
  a16=(a58*a13);
  a43=(a48*a0);
  a16=(a16+a43);
  a36=(a36+a16);
  if (res[0]!=0) res[0][14]=a36;
  if (res[0]!=0) res[0][15]=a59;
  if (res[0]!=0) res[0][16]=a59;
  if (res[0]!=0) res[0][17]=a59;
  a59=arg[0]? arg[0][1] : 0;
  a36=(a59*a24);
  a16=arg[0]? arg[0][2] : 0;
  a43=(a16*a12);
  a36=(a36-a43);
  a43=2.9999999999999999e-01;
  a45=(a43*a12);
  a42=3.0549999999999999e-01;
  a44=(a42*a13);
  a45=(a45+a44);
  a45=(a59+a45);
  a44=-1.0900000000000000e-01;
  a52=(a44*a52);
  a32=2.2200000000000000e-01;
  a18=(a32*a13);
  a52=(a52+a18);
  a52=(a45+a52);
  a18=-4.5000000000000001e-01;
  a37=(a18*a37);
  a23=-3.0499999999999999e-02;
  a27=(a23*a14);
  a37=(a37+a27);
  a37=(a52+a37);
  a27=-2.6700000000000002e-01;
  a53=(a27*a53);
  a31=-7.4999999999999997e-02;
  a17=(a31*a14);
  a53=(a53+a17);
  a53=(a37+a53);
  a17=-1.1400000000000000e-01;
  a56=(a17*a56);
  a26=8.3000000000000004e-02;
  a11=(a26*a2);
  a56=(a56+a11);
  a56=(a53+a56);
  a11=-1.6800000000000001e-01;
  a55=(a11*a55);
  a4=6.9000000000000006e-02;
  a8=(a4*a54);
  a55=(a55+a8);
  a55=(a56+a55);
  a8=2.3000000000000001e-01;
  a1=(a8*a58);
  a1=(a55+a1);
  a60=(a1*a24);
  a61=(a43*a24);
  a62=(a42*a0);
  a61=(a61+a62);
  a61=(a16+a61);
  a9=(a44*a9);
  a62=(a32*a0);
  a9=(a9+a62);
  a9=(a61+a9);
  a19=(a18*a19);
  a62=(a23*a3);
  a19=(a19+a62);
  a19=(a9+a19);
  a22=(a27*a22);
  a62=(a31*a3);
  a22=(a22+a62);
  a22=(a19+a22);
  a40=(a17*a40);
  a62=(a26*a29);
  a40=(a40+a62);
  a40=(a22+a40);
  a38=(a11*a38);
  a62=(a4*a33);
  a38=(a38+a62);
  a38=(a40+a38);
  a62=(a8*a48);
  a62=(a38+a62);
  a63=(a62*a12);
  a60=(a60-a63);
  a36=(a36-a60);
  a60=(a47*a36);
  a63=(a16*a7);
  a64=arg[0]? arg[0][0] : 0;
  a65=(a64*a24);
  a63=(a63-a65);
  a65=(a62*a7);
  a43=(a43*a7);
  a42=(a42*a25);
  a43=(a43+a42);
  a43=(a64+a43);
  a44=(a44*a21);
  a32=(a32*a25);
  a44=(a44+a32);
  a44=(a43+a44);
  a18=(a18*a20);
  a23=(a23*a10);
  a18=(a18+a23);
  a18=(a44+a18);
  a27=(a27*a28);
  a31=(a31*a10);
  a27=(a27+a31);
  a27=(a18+a27);
  a17=(a17*a41);
  a26=(a26*a30);
  a17=(a17+a26);
  a17=(a27+a17);
  a11=(a11*a39);
  a4=(a4*a35);
  a11=(a11+a4);
  a11=(a17+a11);
  a8=(a8*a49);
  a8=(a11+a8);
  a4=(a8*a24);
  a65=(a65-a4);
  a63=(a63-a65);
  a65=(a57*a63);
  a4=(a64*a12);
  a39=(a59*a7);
  a4=(a4-a39);
  a39=(a8*a12);
  a26=(a1*a7);
  a39=(a39-a26);
  a4=(a4-a39);
  a39=(a46*a4);
  a65=(a65+a39);
  a60=(a60+a65);
  if (res[0]!=0) res[0][18]=a60;
  a60=(a51*a36);
  a65=(a50*a63);
  a39=(a34*a4);
  a65=(a65+a39);
  a60=(a60+a65);
  if (res[0]!=0) res[0][19]=a60;
  a36=(a49*a36);
  a63=(a58*a63);
  a4=(a48*a4);
  a63=(a63+a4);
  a36=(a36+a63);
  if (res[0]!=0) res[0][20]=a36;
  a36=(a47*a7);
  a63=(a57*a12);
  a4=(a46*a24);
  a63=(a63+a4);
  a36=(a36+a63);
  if (res[0]!=0) res[0][21]=a36;
  a36=(a51*a7);
  a63=(a50*a12);
  a4=(a34*a24);
  a63=(a63+a4);
  a36=(a36+a63);
  if (res[0]!=0) res[0][22]=a36;
  a7=(a49*a7);
  a12=(a58*a12);
  a24=(a48*a24);
  a12=(a12+a24);
  a7=(a7+a12);
  if (res[0]!=0) res[0][23]=a7;
  a7=(a59*a6);
  a12=(a16*a5);
  a7=(a7-a12);
  a12=(a1*a6);
  a24=(a62*a5);
  a12=(a12-a24);
  a7=(a7-a12);
  a12=(a47*a7);
  a24=(a16*a15);
  a36=(a64*a6);
  a24=(a24-a36);
  a36=(a62*a15);
  a63=(a8*a6);
  a36=(a36-a63);
  a24=(a24-a36);
  a36=(a57*a24);
  a63=(a64*a5);
  a4=(a59*a15);
  a63=(a63-a4);
  a4=(a8*a5);
  a60=(a1*a15);
  a4=(a4-a60);
  a63=(a63-a4);
  a4=(a46*a63);
  a36=(a36+a4);
  a12=(a12+a36);
  if (res[0]!=0) res[0][24]=a12;
  a12=(a51*a7);
  a36=(a50*a24);
  a4=(a34*a63);
  a36=(a36+a4);
  a12=(a12+a36);
  if (res[0]!=0) res[0][25]=a12;
  a7=(a49*a7);
  a24=(a58*a24);
  a63=(a48*a63);
  a24=(a24+a63);
  a7=(a7+a24);
  if (res[0]!=0) res[0][26]=a7;
  a7=(a47*a15);
  a24=(a57*a5);
  a63=(a46*a6);
  a24=(a24+a63);
  a7=(a7+a24);
  if (res[0]!=0) res[0][27]=a7;
  a7=(a51*a15);
  a24=(a50*a5);
  a63=(a34*a6);
  a24=(a24+a63);
  a7=(a7+a24);
  if (res[0]!=0) res[0][28]=a7;
  a15=(a49*a15);
  a5=(a58*a5);
  a6=(a48*a6);
  a5=(a5+a6);
  a15=(a15+a5);
  if (res[0]!=0) res[0][29]=a15;
  a15=(a59*a0);
  a5=(a16*a13);
  a15=(a15-a5);
  a5=(a1*a0);
  a6=(a62*a13);
  a5=(a5-a6);
  a15=(a15-a5);
  a5=(a47*a15);
  a16=(a16*a25);
  a6=(a64*a0);
  a16=(a16-a6);
  a6=(a62*a25);
  a7=(a8*a0);
  a6=(a6-a7);
  a16=(a16-a6);
  a6=(a57*a16);
  a64=(a64*a13);
  a59=(a59*a25);
  a64=(a64-a59);
  a59=(a8*a13);
  a7=(a1*a25);
  a59=(a59-a7);
  a64=(a64-a59);
  a59=(a46*a64);
  a6=(a6+a59);
  a5=(a5+a6);
  if (res[0]!=0) res[0][30]=a5;
  a5=(a51*a15);
  a6=(a50*a16);
  a59=(a34*a64);
  a6=(a6+a59);
  a5=(a5+a6);
  if (res[0]!=0) res[0][31]=a5;
  a15=(a49*a15);
  a16=(a58*a16);
  a64=(a48*a64);
  a16=(a16+a64);
  a15=(a15+a16);
  if (res[0]!=0) res[0][32]=a15;
  a15=(a47*a25);
  a16=(a57*a13);
  a64=(a46*a0);
  a16=(a16+a64);
  a15=(a15+a16);
  if (res[0]!=0) res[0][33]=a15;
  a15=(a51*a25);
  a16=(a50*a13);
  a64=(a34*a0);
  a16=(a16+a64);
  a15=(a15+a16);
  if (res[0]!=0) res[0][34]=a15;
  a15=(a49*a25);
  a16=(a58*a13);
  a64=(a48*a0);
  a16=(a16+a64);
  a15=(a15+a16);
  if (res[0]!=0) res[0][35]=a15;
  a15=(a45*a0);
  a16=(a61*a13);
  a15=(a15-a16);
  a16=(a1*a0);
  a64=(a62*a13);
  a16=(a16-a64);
  a15=(a15-a16);
  a16=(a47*a15);
  a61=(a61*a25);
  a64=(a43*a0);
  a61=(a61-a64);
  a64=(a62*a25);
  a5=(a8*a0);
  a64=(a64-a5);
  a61=(a61-a64);
  a64=(a57*a61);
  a43=(a43*a13);
  a45=(a45*a25);
  a43=(a43-a45);
  a45=(a8*a13);
  a5=(a1*a25);
  a45=(a45-a5);
  a43=(a43-a45);
  a45=(a46*a43);
  a64=(a64+a45);
  a16=(a16+a64);
  if (res[0]!=0) res[0][36]=a16;
  a16=(a51*a15);
  a64=(a50*a61);
  a45=(a34*a43);
  a64=(a64+a45);
  a16=(a16+a64);
  if (res[0]!=0) res[0][37]=a16;
  a15=(a49*a15);
  a61=(a58*a61);
  a43=(a48*a43);
  a61=(a61+a43);
  a15=(a15+a61);
  if (res[0]!=0) res[0][38]=a15;
  a15=(a47*a25);
  a61=(a57*a13);
  a43=(a46*a0);
  a61=(a61+a43);
  a15=(a15+a61);
  if (res[0]!=0) res[0][39]=a15;
  a15=(a51*a25);
  a61=(a50*a13);
  a43=(a34*a0);
  a61=(a61+a43);
  a15=(a15+a61);
  if (res[0]!=0) res[0][40]=a15;
  a25=(a49*a25);
  a13=(a58*a13);
  a0=(a48*a0);
  a13=(a13+a0);
  a25=(a25+a13);
  if (res[0]!=0) res[0][41]=a25;
  a25=(a52*a3);
  a13=(a9*a14);
  a25=(a25-a13);
  a13=(a1*a3);
  a0=(a62*a14);
  a13=(a13-a0);
  a25=(a25-a13);
  a13=(a47*a25);
  a9=(a9*a10);
  a0=(a44*a3);
  a9=(a9-a0);
  a0=(a62*a10);
  a15=(a8*a3);
  a0=(a0-a15);
  a9=(a9-a0);
  a0=(a57*a9);
  a44=(a44*a14);
  a52=(a52*a10);
  a44=(a44-a52);
  a52=(a8*a14);
  a15=(a1*a10);
  a52=(a52-a15);
  a44=(a44-a52);
  a52=(a46*a44);
  a0=(a0+a52);
  a13=(a13+a0);
  if (res[0]!=0) res[0][42]=a13;
  a13=(a51*a25);
  a0=(a50*a9);
  a52=(a34*a44);
  a0=(a0+a52);
  a13=(a13+a0);
  if (res[0]!=0) res[0][43]=a13;
  a25=(a49*a25);
  a9=(a58*a9);
  a44=(a48*a44);
  a9=(a9+a44);
  a25=(a25+a9);
  if (res[0]!=0) res[0][44]=a25;
  a25=(a47*a10);
  a9=(a57*a14);
  a44=(a46*a3);
  a9=(a9+a44);
  a25=(a25+a9);
  if (res[0]!=0) res[0][45]=a25;
  a25=(a51*a10);
  a9=(a50*a14);
  a44=(a34*a3);
  a9=(a9+a44);
  a25=(a25+a9);
  if (res[0]!=0) res[0][46]=a25;
  a25=(a49*a10);
  a9=(a58*a14);
  a44=(a48*a3);
  a9=(a9+a44);
  a25=(a25+a9);
  if (res[0]!=0) res[0][47]=a25;
  a25=(a37*a3);
  a9=(a19*a14);
  a25=(a25-a9);
  a9=(a1*a3);
  a44=(a62*a14);
  a9=(a9-a44);
  a25=(a25-a9);
  a9=(a47*a25);
  a19=(a19*a10);
  a44=(a18*a3);
  a19=(a19-a44);
  a44=(a62*a10);
  a13=(a8*a3);
  a44=(a44-a13);
  a19=(a19-a44);
  a44=(a57*a19);
  a18=(a18*a14);
  a37=(a37*a10);
  a18=(a18-a37);
  a37=(a8*a14);
  a13=(a1*a10);
  a37=(a37-a13);
  a18=(a18-a37);
  a37=(a46*a18);
  a44=(a44+a37);
  a9=(a9+a44);
  if (res[0]!=0) res[0][48]=a9;
  a9=(a51*a25);
  a44=(a50*a19);
  a37=(a34*a18);
  a44=(a44+a37);
  a9=(a9+a44);
  if (res[0]!=0) res[0][49]=a9;
  a25=(a49*a25);
  a19=(a58*a19);
  a18=(a48*a18);
  a19=(a19+a18);
  a25=(a25+a19);
  if (res[0]!=0) res[0][50]=a25;
  a25=(a47*a10);
  a19=(a57*a14);
  a18=(a46*a3);
  a19=(a19+a18);
  a25=(a25+a19);
  if (res[0]!=0) res[0][51]=a25;
  a25=(a51*a10);
  a19=(a50*a14);
  a18=(a34*a3);
  a19=(a19+a18);
  a25=(a25+a19);
  if (res[0]!=0) res[0][52]=a25;
  a10=(a49*a10);
  a14=(a58*a14);
  a3=(a48*a3);
  a14=(a14+a3);
  a10=(a10+a14);
  if (res[0]!=0) res[0][53]=a10;
  a10=(a53*a29);
  a14=(a22*a2);
  a10=(a10-a14);
  a14=(a1*a29);
  a3=(a62*a2);
  a14=(a14-a3);
  a10=(a10-a14);
  a14=(a47*a10);
  a22=(a22*a30);
  a3=(a27*a29);
  a22=(a22-a3);
  a3=(a62*a30);
  a25=(a8*a29);
  a3=(a3-a25);
  a22=(a22-a3);
  a3=(a57*a22);
  a27=(a27*a2);
  a53=(a53*a30);
  a27=(a27-a53);
  a53=(a8*a2);
  a25=(a1*a30);
  a53=(a53-a25);
  a27=(a27-a53);
  a53=(a46*a27);
  a3=(a3+a53);
  a14=(a14+a3);
  if (res[0]!=0) res[0][54]=a14;
  a14=(a51*a10);
  a3=(a50*a22);
  a53=(a34*a27);
  a3=(a3+a53);
  a14=(a14+a3);
  if (res[0]!=0) res[0][55]=a14;
  a10=(a49*a10);
  a22=(a58*a22);
  a27=(a48*a27);
  a22=(a22+a27);
  a10=(a10+a22);
  if (res[0]!=0) res[0][56]=a10;
  a10=(a47*a30);
  a22=(a57*a2);
  a27=(a46*a29);
  a22=(a22+a27);
  a10=(a10+a22);
  if (res[0]!=0) res[0][57]=a10;
  a10=(a51*a30);
  a22=(a50*a2);
  a27=(a34*a29);
  a22=(a22+a27);
  a10=(a10+a22);
  if (res[0]!=0) res[0][58]=a10;
  a30=(a49*a30);
  a2=(a58*a2);
  a29=(a48*a29);
  a2=(a2+a29);
  a30=(a30+a2);
  if (res[0]!=0) res[0][59]=a30;
  a30=(a56*a33);
  a2=(a40*a54);
  a30=(a30-a2);
  a2=(a1*a33);
  a29=(a62*a54);
  a2=(a2-a29);
  a30=(a30-a2);
  a2=(a47*a30);
  a40=(a40*a35);
  a29=(a17*a33);
  a40=(a40-a29);
  a29=(a62*a35);
  a10=(a8*a33);
  a29=(a29-a10);
  a40=(a40-a29);
  a29=(a57*a40);
  a17=(a17*a54);
  a56=(a56*a35);
  a17=(a17-a56);
  a56=(a8*a54);
  a10=(a1*a35);
  a56=(a56-a10);
  a17=(a17-a56);
  a56=(a46*a17);
  a29=(a29+a56);
  a2=(a2+a29);
  if (res[0]!=0) res[0][60]=a2;
  a2=(a51*a30);
  a29=(a50*a40);
  a56=(a34*a17);
  a29=(a29+a56);
  a2=(a2+a29);
  if (res[0]!=0) res[0][61]=a2;
  a30=(a49*a30);
  a40=(a58*a40);
  a17=(a48*a17);
  a40=(a40+a17);
  a30=(a30+a40);
  if (res[0]!=0) res[0][62]=a30;
  a30=(a47*a35);
  a40=(a57*a54);
  a17=(a46*a33);
  a40=(a40+a17);
  a30=(a30+a40);
  if (res[0]!=0) res[0][63]=a30;
  a30=(a51*a35);
  a40=(a50*a54);
  a17=(a34*a33);
  a40=(a40+a17);
  a30=(a30+a40);
  if (res[0]!=0) res[0][64]=a30;
  a35=(a49*a35);
  a54=(a58*a54);
  a33=(a48*a33);
  a54=(a54+a33);
  a35=(a35+a54);
  if (res[0]!=0) res[0][65]=a35;
  a35=(a55*a48);
  a54=(a38*a58);
  a35=(a35-a54);
  a54=(a1*a48);
  a33=(a62*a58);
  a54=(a54-a33);
  a35=(a35-a54);
  a54=(a47*a35);
  a38=(a38*a49);
  a33=(a11*a48);
  a38=(a38-a33);
  a62=(a62*a49);
  a33=(a8*a48);
  a62=(a62-a33);
  a38=(a38-a62);
  a62=(a57*a38);
  a11=(a11*a58);
  a55=(a55*a49);
  a11=(a11-a55);
  a8=(a8*a58);
  a1=(a1*a49);
  a8=(a8-a1);
  a11=(a11-a8);
  a8=(a46*a11);
  a62=(a62+a8);
  a54=(a54+a62);
  if (res[0]!=0) res[0][66]=a54;
  a54=(a51*a35);
  a62=(a50*a38);
  a8=(a34*a11);
  a62=(a62+a8);
  a54=(a54+a62);
  if (res[0]!=0) res[0][67]=a54;
  a35=(a49*a35);
  a38=(a58*a38);
  a11=(a48*a11);
  a38=(a38+a11);
  a35=(a35+a38);
  if (res[0]!=0) res[0][68]=a35;
  a47=(a47*a49);
  a57=(a57*a58);
  a46=(a46*a48);
  a57=(a57+a46);
  a47=(a47+a57);
  if (res[0]!=0) res[0][69]=a47;
  a51=(a51*a49);
  a50=(a50*a58);
  a34=(a34*a48);
  a50=(a50+a34);
  a51=(a51+a50);
  if (res[0]!=0) res[0][70]=a51;
  a49=casadi_sq(a49);
  a58=casadi_sq(a58);
  a48=casadi_sq(a48);
  a58=(a58+a48);
  a49=(a49+a58);
  if (res[0]!=0) res[0][71]=a49;
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
