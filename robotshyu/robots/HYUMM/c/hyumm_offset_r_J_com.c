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
  #define CASADI_PREFIX(ID) hyumm_offset_r_J_com_ ## ID
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
static const casadi_int casadi_s1[39] = {3, 9, 0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* jacobianCenterOfMass:(q[9])->(Jacobian CoM[3x9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a9;
  a0=1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a1;
  if (res[0]!=0) res[0][4]=a0;
  if (res[0]!=0) res[0][5]=a1;
  a0=7.9918389189999999e+01;
  a2=arg[0]? arg[0][1] : 0;
  a3=(a0*a2);
  a4=5.5207671930000004e+01;
  a5=-1.3325055224028888e-02;
  a6=arg[0]? arg[0][2] : 0;
  a7=sin(a6);
  a8=(a5*a7);
  a9=-4.0000006595588955e-01;
  a6=cos(a6);
  a10=(a9*a6);
  a8=(a8+a10);
  a8=(a8+a2);
  a8=(a4*a8);
  a10=1.1444445350000001e+01;
  a11=-2.3749000000000000e-04;
  a12=arg[0]? arg[0][3] : 0;
  a13=cos(a12);
  a14=(a7*a13);
  a12=sin(a12);
  a15=(a6*a12);
  a14=(a14+a15);
  a15=(a11*a14);
  a16=-4.3103130000000003e-02;
  a17=(a6*a13);
  a18=(a7*a12);
  a17=(a17-a18);
  a18=(a16*a17);
  a15=(a15+a18);
  a18=2.9999999999999999e-01;
  a19=(a18*a7);
  a20=-4.0000000000000002e-01;
  a21=(a20*a6);
  a19=(a19+a21);
  a2=(a2+a19);
  a15=(a15+a2);
  a15=(a10*a15);
  a19=5.8476655299999996e+00;
  a21=-2.9616699000000002e-01;
  a22=2.2204460492503131e-16;
  a23=arg[0]? arg[0][4] : 0;
  a24=cos(a23);
  a25=(a22*a24);
  a23=sin(a23);
  a25=(a25+a23);
  a26=(a14*a25);
  a27=(a22*a23);
  a28=(a17*a27);
  a26=(a26+a28);
  a28=(a21*a26);
  a29=2.2540000000000001e-05;
  a30=(a22*a23);
  a30=(a24-a30);
  a31=(a14*a30);
  a32=(a22*a24);
  a33=(a17*a32);
  a31=(a31+a33);
  a33=(a29*a31);
  a34=4.4830689999999999e-02;
  a14=(a22*a14);
  a14=(a14-a17);
  a35=(a34*a14);
  a33=(a33+a35);
  a28=(a28+a33);
  a33=-1.0900000000000000e-01;
  a17=(a33*a17);
  a17=(a2+a17);
  a28=(a28+a17);
  a28=(a19*a28);
  a35=2.6820606400000000e+00;
  a36=-1.6804015999999994e-01;
  a37=arg[0]? arg[0][5] : 0;
  a38=cos(a37);
  a39=(a26*a38);
  a37=sin(a37);
  a40=(a31*a37);
  a39=(a39+a40);
  a40=(a36*a39);
  a41=2.1420999999999994e-04;
  a31=(a31*a38);
  a42=(a26*a37);
  a31=(a31-a42);
  a42=(a41*a31);
  a43=-7.0003829999999975e-02;
  a44=(a43*a14);
  a42=(a42+a44);
  a40=(a40+a42);
  a42=-4.5000000000000001e-01;
  a26=(a42*a26);
  a44=-3.0499999999999999e-02;
  a45=(a44*a14);
  a26=(a26+a45);
  a26=(a17+a26);
  a40=(a40+a26);
  a40=(a35*a40);
  a45=2.1298737100000000e+00;
  a46=-2.6846999999999998e-04;
  a47=arg[0]? arg[0][6] : 0;
  a48=cos(a47);
  a49=(a22*a48);
  a50=-2.2204460492503131e-16;
  a47=sin(a47);
  a51=(a50*a47);
  a49=(a49+a51);
  a51=(a39*a49);
  a52=(a31*a48);
  a53=(a14*a47);
  a52=(a52-a53);
  a51=(a51+a52);
  a52=(a46*a51);
  a53=-7.0984400000000003e-02;
  a54=(a50*a48);
  a55=(a22*a47);
  a54=(a54-a55);
  a55=(a39*a54);
  a56=(a31*a47);
  a57=(a14*a48);
  a56=(a56+a57);
  a55=(a55-a56);
  a56=(a53*a55);
  a57=7.6491279999999995e-02;
  a31=(a22*a31);
  a58=(a22*a14);
  a31=(a31+a58);
  a31=(a31-a39);
  a58=(a57*a31);
  a56=(a56+a58);
  a52=(a52+a56);
  a56=-2.6700000000000002e-01;
  a39=(a56*a39);
  a58=-7.4999999999999997e-02;
  a59=(a58*a14);
  a39=(a39+a59);
  a39=(a26+a39);
  a52=(a52+a39);
  a52=(a45*a52);
  a59=2.2241227100000001e+00;
  a60=-9.7962319999999978e-02;
  a61=arg[0]? arg[0][7] : 0;
  a62=cos(a61);
  a63=(a22*a62);
  a61=sin(a61);
  a63=(a63+a61);
  a64=(a51*a63);
  a65=(a22*a61);
  a66=(a55*a65);
  a67=(a22*a61);
  a67=(a67-a62);
  a68=(a31*a67);
  a66=(a66+a68);
  a64=(a64+a66);
  a66=(a60*a64);
  a68=-2.3113999999999996e-04;
  a69=(a22*a61);
  a69=(a62-a69);
  a70=(a51*a69);
  a71=(a22*a62);
  a72=(a55*a71);
  a62=(a22*a62);
  a61=(a61+a62);
  a62=(a31*a61);
  a72=(a72+a62);
  a70=(a70+a72);
  a72=(a68*a70);
  a62=6.4458919999999975e-02;
  a51=(a22*a51);
  a51=(a51-a55);
  a73=(a62*a51);
  a72=(a72+a73);
  a66=(a66+a72);
  a72=-1.1400000000000000e-01;
  a55=(a72*a55);
  a73=8.3000000000000004e-02;
  a74=(a73*a31);
  a55=(a55+a74);
  a55=(a39+a55);
  a66=(a66+a55);
  a66=(a59*a66);
  a74=3.8254932000000003e-01;
  a75=8.1470000000000004e-05;
  a76=arg[0]? arg[0][8] : 0;
  a77=cos(a76);
  a78=(a22*a77);
  a76=sin(a76);
  a79=(a50*a76);
  a78=(a78+a79);
  a79=(a64*a78);
  a80=(a70*a77);
  a81=(a51*a76);
  a80=(a80-a81);
  a79=(a79+a80);
  a79=(a75*a79);
  a80=-4.6556000000000001e-04;
  a50=(a50*a77);
  a81=(a22*a76);
  a50=(a50-a81);
  a81=(a64*a50);
  a82=(a70*a76);
  a83=(a51*a77);
  a82=(a82+a83);
  a81=(a81-a82);
  a81=(a80*a81);
  a82=3.0790970000000001e-02;
  a70=(a22*a70);
  a83=(a22*a51);
  a70=(a70+a83);
  a70=(a70-a64);
  a83=(a82*a70);
  a81=(a81+a83);
  a79=(a79+a81);
  a81=-1.6800000000000001e-01;
  a64=(a81*a64);
  a83=6.9000000000000006e-02;
  a84=(a83*a51);
  a64=(a64+a84);
  a64=(a55+a64);
  a79=(a79+a64);
  a79=(a74*a79);
  a66=(a66+a79);
  a52=(a52+a66);
  a40=(a40+a52);
  a28=(a28+a40);
  a15=(a15+a28);
  a8=(a8+a15);
  a3=(a3-a8);
  a3=(a3/a0);
  if (res[0]!=0) res[0][6]=a3;
  a5=(a5*a6);
  a9=(a9*a7);
  a5=(a5-a9);
  a9=arg[0]? arg[0][0] : 0;
  a5=(a5+a9);
  a4=(a4*a5);
  a5=(a6*a13);
  a3=(a7*a12);
  a5=(a5-a3);
  a11=(a11*a5);
  a12=(a6*a12);
  a13=(a7*a13);
  a12=(a12+a13);
  a16=(a16*a12);
  a11=(a11-a16);
  a18=(a18*a6);
  a20=(a20*a7);
  a18=(a18-a20);
  a18=(a9+a18);
  a11=(a11+a18);
  a10=(a10*a11);
  a25=(a5*a25);
  a27=(a12*a27);
  a25=(a25-a27);
  a27=(a21*a25);
  a30=(a5*a30);
  a32=(a12*a32);
  a30=(a30-a32);
  a32=(a29*a30);
  a5=(a22*a5);
  a5=(a5+a12);
  a34=(a34*a5);
  a32=(a32+a34);
  a27=(a27+a32);
  a33=(a33*a12);
  a33=(a18-a33);
  a27=(a27+a33);
  a27=(a19*a27);
  a12=(a25*a38);
  a32=(a30*a37);
  a12=(a12+a32);
  a32=(a36*a12);
  a30=(a30*a38);
  a34=(a25*a37);
  a30=(a30-a34);
  a34=(a41*a30);
  a43=(a43*a5);
  a34=(a34+a43);
  a32=(a32+a34);
  a25=(a42*a25);
  a44=(a44*a5);
  a25=(a25+a44);
  a25=(a33+a25);
  a32=(a32+a25);
  a32=(a35*a32);
  a44=(a12*a49);
  a34=(a30*a48);
  a43=(a5*a47);
  a34=(a34-a43);
  a44=(a44+a34);
  a34=(a46*a44);
  a43=(a12*a54);
  a11=(a30*a47);
  a20=(a5*a48);
  a11=(a11+a20);
  a43=(a43-a11);
  a11=(a53*a43);
  a30=(a22*a30);
  a20=(a22*a5);
  a30=(a30+a20);
  a30=(a30-a12);
  a20=(a57*a30);
  a11=(a11+a20);
  a34=(a34+a11);
  a12=(a56*a12);
  a58=(a58*a5);
  a12=(a12+a58);
  a12=(a25+a12);
  a34=(a34+a12);
  a34=(a45*a34);
  a58=(a44*a63);
  a11=(a43*a65);
  a20=(a30*a67);
  a11=(a11+a20);
  a58=(a58+a11);
  a11=(a60*a58);
  a20=(a44*a69);
  a7=(a43*a71);
  a6=(a30*a61);
  a7=(a7+a6);
  a20=(a20+a7);
  a7=(a68*a20);
  a44=(a22*a44);
  a44=(a44-a43);
  a6=(a62*a44);
  a7=(a7+a6);
  a11=(a11+a7);
  a43=(a72*a43);
  a7=(a73*a30);
  a43=(a43+a7);
  a43=(a12+a43);
  a11=(a11+a43);
  a11=(a59*a11);
  a7=(a58*a78);
  a6=(a20*a77);
  a16=(a44*a76);
  a6=(a6-a16);
  a7=(a7+a6);
  a7=(a75*a7);
  a6=(a58*a50);
  a16=(a20*a76);
  a13=(a44*a77);
  a16=(a16+a13);
  a6=(a6-a16);
  a6=(a80*a6);
  a20=(a22*a20);
  a16=(a22*a44);
  a20=(a20+a16);
  a20=(a20-a58);
  a16=(a82*a20);
  a6=(a6+a16);
  a7=(a7+a6);
  a58=(a81*a58);
  a6=(a83*a44);
  a58=(a58+a6);
  a58=(a43+a58);
  a7=(a7+a58);
  a7=(a74*a7);
  a11=(a11+a7);
  a34=(a34+a11);
  a32=(a32+a34);
  a27=(a27+a32);
  a10=(a10+a27);
  a4=(a4+a10);
  a9=(a0*a9);
  a4=(a4-a9);
  a4=(a4/a0);
  if (res[0]!=0) res[0][7]=a4;
  if (res[0]!=0) res[0][8]=a1;
  a4=2.4710717260000003e+01;
  a2=(a4*a2);
  a2=(a2-a15);
  a2=(a2/a0);
  if (res[0]!=0) res[0][9]=a2;
  a4=(a4*a18);
  a10=(a10-a4);
  a10=(a10/a0);
  if (res[0]!=0) res[0][10]=a10;
  if (res[0]!=0) res[0][11]=a1;
  a1=(a22*a23);
  a1=(a1-a24);
  a21=(a21*a1);
  a24=(a22*a24);
  a23=(a23+a24);
  a29=(a29*a23);
  a21=(a21+a29);
  a29=5.2749999999999997e-01;
  a21=(a21+a29);
  a19=(a19*a21);
  a21=(a1*a38);
  a24=(a23*a37);
  a21=(a21+a24);
  a36=(a36*a21);
  a23=(a23*a38);
  a37=(a1*a37);
  a23=(a23-a37);
  a41=(a41*a23);
  a36=(a36+a41);
  a42=(a42*a1);
  a42=(a29+a42);
  a36=(a36+a42);
  a35=(a35*a36);
  a49=(a21*a49);
  a48=(a23*a48);
  a49=(a49+a48);
  a46=(a46*a49);
  a54=(a21*a54);
  a47=(a23*a47);
  a54=(a54-a47);
  a53=(a53*a54);
  a23=(a22*a23);
  a23=(a23-a21);
  a57=(a57*a23);
  a53=(a53+a57);
  a46=(a46+a53);
  a56=(a56*a21);
  a56=(a42+a56);
  a46=(a46+a56);
  a45=(a45*a46);
  a63=(a49*a63);
  a65=(a54*a65);
  a67=(a23*a67);
  a65=(a65+a67);
  a63=(a63+a65);
  a60=(a60*a63);
  a69=(a49*a69);
  a71=(a54*a71);
  a61=(a23*a61);
  a71=(a71+a61);
  a69=(a69+a71);
  a68=(a68*a69);
  a49=(a22*a49);
  a49=(a49-a54);
  a62=(a62*a49);
  a68=(a68+a62);
  a60=(a60+a68);
  a72=(a72*a54);
  a73=(a73*a23);
  a72=(a72+a73);
  a72=(a56+a72);
  a60=(a60+a72);
  a59=(a59*a60);
  a78=(a63*a78);
  a60=(a69*a77);
  a73=(a49*a76);
  a60=(a60-a73);
  a78=(a78+a60);
  a75=(a75*a78);
  a50=(a63*a50);
  a76=(a69*a76);
  a77=(a49*a77);
  a76=(a76+a77);
  a50=(a50-a76);
  a80=(a80*a50);
  a69=(a22*a69);
  a22=(a22*a49);
  a69=(a69+a22);
  a69=(a69-a63);
  a82=(a82*a69);
  a80=(a80+a82);
  a75=(a75+a80);
  a81=(a81*a63);
  a83=(a83*a49);
  a81=(a81+a83);
  a81=(a72+a81);
  a75=(a75+a81);
  a75=(a74*a75);
  a59=(a59+a75);
  a45=(a45+a59);
  a35=(a35+a45);
  a19=(a19+a35);
  a83=(a19*a14);
  a63=1.3266271910000000e+01;
  a80=(a29*a14);
  a80=(a63*a80);
  a83=(a83-a80);
  a83=(a83/a0);
  if (res[0]!=0) res[0][12]=a83;
  a29=(a29*a5);
  a29=(a63*a29);
  a19=(a19*a5);
  a29=(a29-a19);
  a29=(a29/a0);
  if (res[0]!=0) res[0][13]=a29;
  a33=(a33*a14);
  a17=(a17*a5);
  a33=(a33-a17);
  a63=(a63*a33);
  a27=(a27*a14);
  a28=(a28*a5);
  a27=(a27-a28);
  a63=(a63-a27);
  a63=(a63/a0);
  if (res[0]!=0) res[0][14]=a63;
  a63=(a35*a14);
  a27=7.4186063799999999e+00;
  a28=(a42*a14);
  a28=(a27*a28);
  a63=(a63-a28);
  a63=(a63/a0);
  if (res[0]!=0) res[0][15]=a63;
  a42=(a42*a5);
  a42=(a27*a42);
  a35=(a35*a5);
  a42=(a42-a35);
  a42=(a42/a0);
  if (res[0]!=0) res[0][16]=a42;
  a25=(a25*a14);
  a26=(a26*a5);
  a25=(a25-a26);
  a27=(a27*a25);
  a32=(a32*a14);
  a40=(a40*a5);
  a32=(a32-a40);
  a27=(a27-a32);
  a27=(a27/a0);
  if (res[0]!=0) res[0][17]=a27;
  a27=4.7365457400000004e+00;
  a32=(a39*a23);
  a40=(a56*a31);
  a32=(a32-a40);
  a32=(a27*a32);
  a40=(a52*a23);
  a5=(a45*a31);
  a40=(a40-a5);
  a32=(a32-a40);
  a32=(a32/a0);
  if (res[0]!=0) res[0][18]=a32;
  a56=(a56*a30);
  a32=(a12*a23);
  a56=(a56-a32);
  a56=(a27*a56);
  a45=(a45*a30);
  a23=(a34*a23);
  a45=(a45-a23);
  a56=(a56-a45);
  a56=(a56/a0);
  if (res[0]!=0) res[0][19]=a56;
  a12=(a12*a31);
  a39=(a39*a30);
  a12=(a12-a39);
  a27=(a27*a12);
  a34=(a34*a31);
  a52=(a52*a30);
  a34=(a34-a52);
  a27=(a27-a34);
  a27=(a27/a0);
  if (res[0]!=0) res[0][20]=a27;
  a27=2.6066720299999999e+00;
  a34=(a55*a49);
  a52=(a72*a51);
  a34=(a34-a52);
  a34=(a27*a34);
  a52=(a66*a49);
  a30=(a59*a51);
  a52=(a52-a30);
  a34=(a34-a52);
  a34=(a34/a0);
  if (res[0]!=0) res[0][21]=a34;
  a72=(a72*a44);
  a34=(a43*a49);
  a72=(a72-a34);
  a72=(a27*a72);
  a59=(a59*a44);
  a49=(a11*a49);
  a59=(a59-a49);
  a72=(a72-a59);
  a72=(a72/a0);
  if (res[0]!=0) res[0][22]=a72;
  a43=(a43*a51);
  a55=(a55*a44);
  a43=(a43-a55);
  a27=(a27*a43);
  a11=(a11*a51);
  a66=(a66*a44);
  a11=(a11-a66);
  a27=(a27-a11);
  a27=(a27/a0);
  if (res[0]!=0) res[0][23]=a27;
  a27=(a64*a69);
  a11=(a81*a70);
  a27=(a27-a11);
  a27=(a74*a27);
  a11=(a79*a69);
  a66=(a75*a70);
  a11=(a11-a66);
  a27=(a27-a11);
  a27=(a27/a0);
  if (res[0]!=0) res[0][24]=a27;
  a81=(a81*a20);
  a27=(a58*a69);
  a81=(a81-a27);
  a81=(a74*a81);
  a75=(a75*a20);
  a69=(a7*a69);
  a75=(a75-a69);
  a81=(a81-a75);
  a81=(a81/a0);
  if (res[0]!=0) res[0][25]=a81;
  a58=(a58*a70);
  a64=(a64*a20);
  a58=(a58-a64);
  a74=(a74*a58);
  a7=(a7*a70);
  a79=(a79*a20);
  a7=(a7-a79);
  a74=(a74-a7);
  a74=(a74/a0);
  if (res[0]!=0) res[0][26]=a74;
  return 0;
}

CASADI_SYMBOL_EXPORT int jacobianCenterOfMass(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int jacobianCenterOfMass_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int jacobianCenterOfMass_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void jacobianCenterOfMass_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int jacobianCenterOfMass_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void jacobianCenterOfMass_release(int mem) {
}

CASADI_SYMBOL_EXPORT void jacobianCenterOfMass_incref(void) {
}

CASADI_SYMBOL_EXPORT void jacobianCenterOfMass_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int jacobianCenterOfMass_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int jacobianCenterOfMass_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real jacobianCenterOfMass_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* jacobianCenterOfMass_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* jacobianCenterOfMass_name_out(casadi_int i) {
  switch (i) {
    case 0: return "Jacobian CoM";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* jacobianCenterOfMass_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* jacobianCenterOfMass_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int jacobianCenterOfMass_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
