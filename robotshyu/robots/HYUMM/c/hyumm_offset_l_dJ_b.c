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
  #define CASADI_PREFIX(ID) hyumm_offset_l_dJ_b_ ## ID
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

/* dJ_b:(q[9],v[9])->(dJ_b[6x9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a0;
  if (res[0]!=0) res[0][5]=a0;
  if (res[0]!=0) res[0][6]=a0;
  if (res[0]!=0) res[0][7]=a0;
  if (res[0]!=0) res[0][8]=a0;
  if (res[0]!=0) res[0][9]=a0;
  if (res[0]!=0) res[0][10]=a0;
  if (res[0]!=0) res[0][11]=a0;
  a1=arg[0]? arg[0][2] : 0;
  a2=cos(a1);
  a3=arg[0]? arg[0][3] : 0;
  a4=cos(a3);
  a5=(a2*a4);
  a1=sin(a1);
  a3=sin(a3);
  a6=(a1*a3);
  a5=(a5-a6);
  a6=2.2204460492503131e-16;
  a7=arg[0]? arg[0][4] : 0;
  a8=cos(a7);
  a9=(a6*a8);
  a7=sin(a7);
  a9=(a9+a7);
  a10=(a5*a9);
  a11=(a2*a3);
  a12=(a1*a4);
  a11=(a11+a12);
  a12=(a6*a7);
  a13=(a11*a12);
  a10=(a10-a13);
  a13=arg[0]? arg[0][5] : 0;
  a14=cos(a13);
  a15=(a10*a14);
  a16=(a6*a7);
  a16=(a8-a16);
  a17=(a5*a16);
  a18=(a6*a8);
  a19=(a11*a18);
  a17=(a17-a19);
  a13=sin(a13);
  a19=(a17*a13);
  a15=(a15+a19);
  a19=arg[0]? arg[0][6] : 0;
  a20=cos(a19);
  a21=(a6*a20);
  a22=-2.2204460492503131e-16;
  a19=sin(a19);
  a23=(a22*a19);
  a21=(a21+a23);
  a23=(a15*a21);
  a24=(a17*a14);
  a25=(a10*a13);
  a24=(a24-a25);
  a25=(a24*a20);
  a26=(a6*a5);
  a26=(a26+a11);
  a27=(a26*a19);
  a25=(a25-a27);
  a23=(a23+a25);
  a25=arg[0]? arg[0][7] : 0;
  a27=cos(a25);
  a28=(a6*a27);
  a25=sin(a25);
  a28=(a28+a25);
  a29=(a23*a28);
  a30=(a22*a20);
  a31=(a6*a19);
  a30=(a30-a31);
  a31=(a15*a30);
  a32=(a24*a19);
  a33=(a26*a20);
  a32=(a32+a33);
  a31=(a31-a32);
  a32=(a6*a25);
  a33=(a31*a32);
  a34=(a6*a24);
  a35=(a6*a26);
  a34=(a34+a35);
  a34=(a34-a15);
  a35=(a6*a25);
  a35=(a35-a27);
  a36=(a34*a35);
  a33=(a33+a36);
  a29=(a29+a33);
  a33=arg[0]? arg[0][8] : 0;
  a36=cos(a33);
  a37=(a6*a36);
  a33=sin(a33);
  a38=(a22*a33);
  a37=(a37+a38);
  a38=(a29*a37);
  a39=(a6*a25);
  a39=(a27-a39);
  a40=(a23*a39);
  a41=(a6*a27);
  a42=(a31*a41);
  a27=(a6*a27);
  a25=(a25+a27);
  a27=(a34*a25);
  a42=(a42+a27);
  a40=(a40+a42);
  a42=(a40*a36);
  a27=(a6*a23);
  a27=(a27-a31);
  a43=(a27*a33);
  a42=(a42-a43);
  a38=(a38+a42);
  a42=arg[1]? arg[1][0] : 0;
  a43=(a2*a42);
  a44=arg[1]? arg[1][1] : 0;
  a45=(a1*a44);
  a43=(a43+a45);
  a45=(a1*a43);
  a44=(a2*a44);
  a42=(a1*a42);
  a44=(a44-a42);
  a42=(a2*a44);
  a45=(a45+a42);
  a42=(a38*a45);
  a46=(a1*a4);
  a47=(a2*a3);
  a46=(a46+a47);
  a47=(a46*a9);
  a48=(a2*a4);
  a49=(a1*a3);
  a48=(a48-a49);
  a49=(a48*a12);
  a47=(a47+a49);
  a49=(a47*a14);
  a50=(a46*a16);
  a51=(a48*a18);
  a50=(a50+a51);
  a51=(a50*a13);
  a49=(a49+a51);
  a51=(a49*a21);
  a52=(a50*a14);
  a53=(a47*a13);
  a52=(a52-a53);
  a53=(a52*a20);
  a54=(a6*a46);
  a54=(a54-a48);
  a55=(a54*a19);
  a53=(a53-a55);
  a51=(a51+a53);
  a53=(a51*a28);
  a55=(a49*a30);
  a56=(a52*a19);
  a57=(a54*a20);
  a56=(a56+a57);
  a55=(a55-a56);
  a56=(a55*a32);
  a57=(a6*a52);
  a58=(a6*a54);
  a57=(a57+a58);
  a57=(a57-a49);
  a58=(a57*a35);
  a56=(a56+a58);
  a53=(a53+a56);
  a56=(a53*a37);
  a58=(a51*a39);
  a59=(a55*a41);
  a60=(a57*a25);
  a59=(a59+a60);
  a58=(a58+a59);
  a59=(a58*a36);
  a60=(a6*a51);
  a60=(a60-a55);
  a61=(a60*a33);
  a59=(a59-a61);
  a56=(a56+a59);
  a59=(a2*a43);
  a61=(a1*a44);
  a59=(a59-a61);
  a61=(a56*a59);
  a42=(a42-a61);
  if (res[0]!=0) res[0][12]=a42;
  a22=(a22*a36);
  a42=(a6*a33);
  a22=(a22-a42);
  a42=(a29*a22);
  a61=(a40*a33);
  a62=(a27*a36);
  a61=(a61+a62);
  a42=(a42-a61);
  a61=(a42*a45);
  a62=(a53*a22);
  a63=(a58*a33);
  a64=(a60*a36);
  a63=(a63+a64);
  a62=(a62-a63);
  a63=(a62*a59);
  a61=(a61-a63);
  if (res[0]!=0) res[0][13]=a61;
  a61=(a6*a40);
  a63=(a6*a27);
  a61=(a61+a63);
  a61=(a61-a29);
  a45=(a61*a45);
  a63=(a6*a58);
  a64=(a6*a60);
  a63=(a63+a64);
  a63=(a63-a53);
  a59=(a63*a59);
  a45=(a45-a59);
  if (res[0]!=0) res[0][14]=a45;
  if (res[0]!=0) res[0][15]=a0;
  if (res[0]!=0) res[0][16]=a0;
  if (res[0]!=0) res[0][17]=a0;
  a45=4.0000000000000002e-01;
  a59=arg[1]? arg[1][2] : 0;
  a64=(a45*a59);
  a43=(a43-a64);
  a64=(a4*a43);
  a65=2.9999999999999999e-01;
  a66=(a65*a59);
  a44=(a44+a66);
  a66=(a3*a44);
  a64=(a64+a66);
  a46=(a46*a64);
  a4=(a4*a44);
  a3=(a3*a43);
  a4=(a4-a3);
  a3=(a48*a4);
  a46=(a46+a3);
  a3=(a38*a46);
  a5=(a5*a64);
  a43=(a11*a4);
  a5=(a5-a43);
  a43=(a56*a5);
  a3=(a3-a43);
  if (res[0]!=0) res[0][18]=a3;
  a3=(a42*a46);
  a43=(a62*a5);
  a3=(a3-a43);
  if (res[0]!=0) res[0][19]=a3;
  a46=(a61*a46);
  a5=(a63*a5);
  a46=(a46-a5);
  if (res[0]!=0) res[0][20]=a46;
  if (res[0]!=0) res[0][21]=a0;
  if (res[0]!=0) res[0][22]=a0;
  if (res[0]!=0) res[0][23]=a0;
  a0=(a6*a7);
  a0=(a0-a8);
  a46=arg[1]? arg[1][3] : 0;
  a46=(a46+a59);
  a59=(a0*a46);
  a5=(a47*a59);
  a8=(a6*a8);
  a7=(a7+a8);
  a8=(a7*a46);
  a3=(a50*a8);
  a43=arg[1]? arg[1][4] : 0;
  a44=(a54*a43);
  a3=(a3+a44);
  a5=(a5+a3);
  a3=arg[0]? arg[0][0] : 0;
  a44=(a65*a2);
  a66=(a45*a1);
  a44=(a44-a66);
  a3=(a3+a44);
  a44=-1.0900000000000000e-01;
  a11=(a44*a11);
  a3=(a3-a11);
  a11=(a3*a54);
  a66=arg[0]? arg[0][1] : 0;
  a65=(a65*a1);
  a45=(a45*a2);
  a65=(a65+a45);
  a66=(a66+a65);
  a48=(a44*a48);
  a66=(a66+a48);
  a48=(a66*a26);
  a11=(a11-a48);
  a48=(a5*a11);
  a65=(a0*a59);
  a45=(a7*a8);
  a65=(a65+a45);
  a45=5.2749999999999997e-01;
  a2=(a45*a26);
  a1=(a65*a2);
  a48=(a48-a1);
  a44=(a44*a46);
  a64=(a64-a44);
  a9=(a9*a64);
  a12=(a12*a4);
  a9=(a9+a12);
  a12=(a0*a9);
  a16=(a16*a64);
  a18=(a18*a4);
  a16=(a16+a18);
  a18=(a7*a16);
  a12=(a12+a18);
  a18=(a3*a5);
  a44=(a10*a59);
  a46=(a17*a8);
  a1=(a26*a43);
  a46=(a46+a1);
  a44=(a44+a46);
  a46=(a66*a44);
  a18=(a18-a46);
  a12=(a12+a18);
  a18=(a12*a54);
  a48=(a48-a18);
  a18=-4.5000000000000001e-01;
  a46=(a18*a47);
  a1=-3.0499999999999999e-02;
  a67=(a1*a54);
  a46=(a46+a67);
  a46=(a66+a46);
  a67=-2.6700000000000002e-01;
  a68=(a67*a49);
  a69=-7.4999999999999997e-02;
  a70=(a69*a54);
  a68=(a68+a70);
  a68=(a46+a68);
  a70=-1.1400000000000000e-01;
  a71=(a70*a55);
  a72=8.3000000000000004e-02;
  a73=(a72*a57);
  a71=(a71+a73);
  a71=(a68+a71);
  a73=-1.6800000000000001e-01;
  a74=(a73*a53);
  a75=6.9000000000000006e-02;
  a76=(a75*a60);
  a74=(a74+a76);
  a74=(a71+a74);
  a76=2.3000000000000001e-01;
  a77=(a76*a63);
  a77=(a74+a77);
  a78=(a44*a54);
  a79=(a5*a26);
  a78=(a78-a79);
  a79=(a77*a78);
  a80=(a18*a0);
  a80=(a45+a80);
  a81=(a0*a14);
  a82=(a7*a13);
  a81=(a81+a82);
  a82=(a67*a81);
  a82=(a80+a82);
  a83=(a81*a30);
  a7=(a7*a14);
  a0=(a0*a13);
  a7=(a7-a0);
  a0=(a7*a19);
  a83=(a83-a0);
  a0=(a70*a83);
  a84=(a6*a7);
  a84=(a84-a81);
  a85=(a72*a84);
  a0=(a0+a85);
  a0=(a82+a0);
  a85=(a81*a21);
  a86=(a7*a20);
  a85=(a85+a86);
  a86=(a85*a28);
  a87=(a83*a32);
  a88=(a84*a35);
  a87=(a87+a88);
  a86=(a86+a87);
  a87=(a73*a86);
  a88=(a6*a85);
  a88=(a88-a83);
  a89=(a75*a88);
  a87=(a87+a89);
  a87=(a0+a87);
  a89=(a85*a39);
  a90=(a83*a41);
  a91=(a84*a25);
  a90=(a90+a91);
  a89=(a89+a90);
  a90=(a6*a89);
  a91=(a6*a88);
  a90=(a90+a91);
  a90=(a90-a86);
  a91=(a76*a90);
  a91=(a87+a91);
  a92=(a65*a26);
  a93=(a91*a92);
  a79=(a79-a93);
  a48=(a48-a79);
  a79=(a38*a48);
  a12=(a12*a26);
  a93=(a45*a54);
  a94=(a65*a93);
  a11=(a44*a11);
  a94=(a94+a11);
  a12=(a12-a94);
  a94=(a65*a54);
  a11=(a91*a94);
  a95=(a18*a10);
  a96=(a1*a26);
  a95=(a95+a96);
  a95=(a3+a95);
  a96=(a67*a15);
  a97=(a69*a26);
  a96=(a96+a97);
  a96=(a95+a96);
  a97=(a70*a31);
  a98=(a72*a34);
  a97=(a97+a98);
  a97=(a96+a97);
  a98=(a73*a29);
  a99=(a75*a27);
  a98=(a98+a99);
  a98=(a97+a98);
  a76=(a76*a61);
  a76=(a98+a76);
  a99=(a76*a78);
  a11=(a11+a99);
  a12=(a12+a11);
  a11=(a56*a12);
  a99=(a86*a37);
  a100=(a89*a36);
  a101=(a88*a33);
  a100=(a100-a101);
  a99=(a99+a100);
  a10=(a10*a9);
  a17=(a17*a16);
  a64=(a6*a64);
  a64=(a64-a4);
  a4=(a26*a64);
  a17=(a17+a4);
  a10=(a10+a17);
  a66=(a66*a65);
  a17=(a45*a5);
  a66=(a66-a17);
  a10=(a10+a66);
  a10=(a10*a54);
  a47=(a47*a9);
  a50=(a50*a16);
  a66=(a54*a64);
  a50=(a50+a66);
  a47=(a47+a50);
  a45=(a45*a44);
  a3=(a3*a65);
  a45=(a45-a3);
  a47=(a47+a45);
  a47=(a47*a26);
  a10=(a10-a47);
  a44=(a44*a2);
  a5=(a5*a93);
  a44=(a44+a5);
  a10=(a10+a44);
  a44=(a76*a92);
  a5=(a77*a94);
  a44=(a44+a5);
  a10=(a10-a44);
  a44=(a99*a10);
  a11=(a11+a44);
  a79=(a79+a11);
  if (res[0]!=0) res[0][24]=a79;
  a79=(a42*a48);
  a11=(a62*a12);
  a44=(a86*a22);
  a5=(a89*a33);
  a93=(a88*a36);
  a5=(a5+a93);
  a44=(a44-a5);
  a5=(a44*a10);
  a11=(a11+a5);
  a79=(a79+a11);
  if (res[0]!=0) res[0][25]=a79;
  a48=(a61*a48);
  a12=(a63*a12);
  a10=(a90*a10);
  a12=(a12+a10);
  a48=(a48+a12);
  if (res[0]!=0) res[0][26]=a48;
  a48=(a56*a92);
  a12=(a99*a78);
  a48=(a48+a12);
  a12=(a38*a94);
  a48=(a48-a12);
  if (res[0]!=0) res[0][27]=a48;
  a48=(a62*a92);
  a12=(a44*a78);
  a48=(a48+a12);
  a12=(a42*a94);
  a48=(a48-a12);
  if (res[0]!=0) res[0][28]=a48;
  a92=(a63*a92);
  a78=(a90*a78);
  a92=(a92+a78);
  a94=(a61*a94);
  a92=(a92-a94);
  if (res[0]!=0) res[0][29]=a92;
  a92=(a14*a59);
  a94=(a13*a8);
  a92=(a92+a94);
  a94=(a49*a92);
  a78=(a14*a8);
  a48=(a13*a59);
  a78=(a78-a48);
  a48=(a52*a78);
  a12=arg[1]? arg[1][5] : 0;
  a12=(a12+a43);
  a10=(a54*a12);
  a48=(a48+a10);
  a94=(a94+a48);
  a48=(a95*a54);
  a10=(a46*a26);
  a48=(a48-a10);
  a10=(a94*a48);
  a79=(a81*a92);
  a11=(a7*a78);
  a79=(a79+a11);
  a11=(a80*a26);
  a5=(a79*a11);
  a10=(a10-a5);
  a5=(a1*a8);
  a9=(a9+a5);
  a5=(a14*a9);
  a1=(a1*a59);
  a43=(a18*a43);
  a1=(a1-a43);
  a16=(a16-a1);
  a1=(a13*a16);
  a5=(a5+a1);
  a81=(a81*a5);
  a14=(a14*a16);
  a13=(a13*a9);
  a14=(a14-a13);
  a7=(a7*a14);
  a81=(a81+a7);
  a7=(a95*a94);
  a13=(a15*a92);
  a9=(a24*a78);
  a16=(a26*a12);
  a9=(a9+a16);
  a13=(a13+a9);
  a9=(a46*a13);
  a7=(a7-a9);
  a81=(a81+a7);
  a7=(a81*a54);
  a10=(a10-a7);
  a7=(a13*a54);
  a9=(a94*a26);
  a7=(a7-a9);
  a9=(a77*a7);
  a16=(a79*a26);
  a1=(a91*a16);
  a9=(a9-a1);
  a10=(a10-a9);
  a9=(a38*a10);
  a81=(a81*a26);
  a1=(a80*a54);
  a43=(a79*a1);
  a48=(a13*a48);
  a43=(a43+a48);
  a81=(a81-a43);
  a43=(a79*a54);
  a48=(a91*a43);
  a59=(a76*a7);
  a48=(a48+a59);
  a81=(a81+a48);
  a48=(a56*a81);
  a15=(a15*a5);
  a24=(a24*a14);
  a18=(a18*a8);
  a64=(a64-a18);
  a18=(a26*a64);
  a24=(a24+a18);
  a15=(a15+a24);
  a46=(a46*a79);
  a24=(a80*a94);
  a46=(a46-a24);
  a15=(a15+a46);
  a15=(a15*a54);
  a49=(a49*a5);
  a52=(a52*a14);
  a54=(a54*a64);
  a52=(a52+a54);
  a49=(a49+a52);
  a80=(a80*a13);
  a95=(a95*a79);
  a80=(a80-a95);
  a49=(a49+a80);
  a49=(a49*a26);
  a15=(a15-a49);
  a13=(a13*a11);
  a94=(a94*a1);
  a13=(a13+a94);
  a15=(a15+a13);
  a13=(a76*a16);
  a94=(a77*a43);
  a13=(a13+a94);
  a15=(a15-a13);
  a13=(a99*a15);
  a48=(a48+a13);
  a9=(a9+a48);
  if (res[0]!=0) res[0][30]=a9;
  a9=(a42*a10);
  a48=(a62*a81);
  a13=(a44*a15);
  a48=(a48+a13);
  a9=(a9+a48);
  if (res[0]!=0) res[0][31]=a9;
  a10=(a61*a10);
  a81=(a63*a81);
  a15=(a90*a15);
  a81=(a81+a15);
  a10=(a10+a81);
  if (res[0]!=0) res[0][32]=a10;
  a10=(a56*a16);
  a81=(a99*a7);
  a10=(a10+a81);
  a81=(a38*a43);
  a10=(a10-a81);
  if (res[0]!=0) res[0][33]=a10;
  a10=(a62*a16);
  a81=(a44*a7);
  a10=(a10+a81);
  a81=(a42*a43);
  a10=(a10-a81);
  if (res[0]!=0) res[0][34]=a10;
  a16=(a63*a16);
  a7=(a90*a7);
  a16=(a16+a7);
  a43=(a61*a43);
  a16=(a16-a43);
  if (res[0]!=0) res[0][35]=a16;
  a16=(a69*a78);
  a5=(a5+a16);
  a16=(a21*a5);
  a69=(a69*a92);
  a43=(a67*a12);
  a69=(a69-a43);
  a14=(a14-a69);
  a69=(a20*a14);
  a67=(a67*a78);
  a64=(a64-a67);
  a67=(a19*a64);
  a69=(a69-a67);
  a16=(a16+a69);
  a69=(a51*a16);
  a67=(a30*a5);
  a43=(a19*a14);
  a7=(a20*a64);
  a43=(a43+a7);
  a67=(a67-a43);
  a43=(a55*a67);
  a14=(a6*a14);
  a64=(a6*a64);
  a14=(a14+a64);
  a14=(a14-a5);
  a5=(a57*a14);
  a43=(a43+a5);
  a69=(a69+a43);
  a21=(a21*a92);
  a43=(a20*a78);
  a5=(a19*a12);
  a43=(a43-a5);
  a21=(a21+a43);
  a43=(a23*a21);
  a30=(a30*a92);
  a19=(a19*a78);
  a20=(a20*a12);
  a19=(a19+a20);
  a30=(a30-a19);
  a19=(a31*a30);
  a20=arg[1]? arg[1][6] : 0;
  a78=(a6*a78);
  a12=(a6*a12);
  a78=(a78+a12);
  a78=(a78-a92);
  a20=(a20+a78);
  a78=(a34*a20);
  a19=(a19+a78);
  a43=(a43+a19);
  a19=(a82*a43);
  a78=(a85*a21);
  a92=(a83*a30);
  a12=(a84*a20);
  a92=(a92+a12);
  a78=(a78+a92);
  a92=(a96*a78);
  a19=(a19-a92);
  a69=(a69+a19);
  a19=(a69*a84);
  a85=(a85*a16);
  a83=(a83*a67);
  a92=(a84*a14);
  a83=(a83+a92);
  a85=(a85+a83);
  a51=(a51*a21);
  a55=(a55*a30);
  a83=(a57*a20);
  a55=(a55+a83);
  a51=(a51+a55);
  a55=(a96*a51);
  a83=(a68*a43);
  a55=(a55-a83);
  a85=(a85+a55);
  a55=(a85*a57);
  a19=(a19-a55);
  a55=(a96*a57);
  a83=(a68*a34);
  a55=(a55-a83);
  a83=(a51*a55);
  a92=(a82*a34);
  a96=(a96*a84);
  a92=(a92-a96);
  a96=(a78*a92);
  a83=(a83-a96);
  a19=(a19+a83);
  a83=(a43*a57);
  a96=(a51*a34);
  a83=(a83-a96);
  a96=(a77*a83);
  a12=(a78*a34);
  a5=(a43*a84);
  a12=(a12-a5);
  a5=(a91*a12);
  a96=(a96-a5);
  a19=(a19-a96);
  a96=(a38*a19);
  a85=(a85*a34);
  a23=(a23*a16);
  a31=(a31*a67);
  a5=(a34*a14);
  a31=(a31+a5);
  a23=(a23+a31);
  a31=(a68*a78);
  a5=(a82*a51);
  a31=(a31-a5);
  a23=(a23+a31);
  a31=(a23*a84);
  a85=(a85-a31);
  a68=(a68*a84);
  a82=(a82*a57);
  a68=(a68-a82);
  a82=(a78*a68);
  a55=(a43*a55);
  a82=(a82-a55);
  a85=(a85+a82);
  a84=(a51*a84);
  a78=(a78*a57);
  a84=(a84-a78);
  a78=(a91*a84);
  a82=(a76*a83);
  a78=(a78-a82);
  a85=(a85-a78);
  a78=(a56*a85);
  a23=(a23*a57);
  a69=(a69*a34);
  a23=(a23-a69);
  a43=(a43*a92);
  a51=(a51*a68);
  a43=(a43-a51);
  a23=(a23+a43);
  a43=(a76*a12);
  a51=(a77*a84);
  a43=(a43-a51);
  a23=(a23-a43);
  a43=(a99*a23);
  a78=(a78+a43);
  a96=(a96+a78);
  if (res[0]!=0) res[0][36]=a96;
  a96=(a42*a19);
  a78=(a62*a85);
  a43=(a44*a23);
  a78=(a78+a43);
  a96=(a96+a78);
  if (res[0]!=0) res[0][37]=a96;
  a19=(a61*a19);
  a85=(a63*a85);
  a23=(a90*a23);
  a85=(a85+a23);
  a19=(a19+a85);
  if (res[0]!=0) res[0][38]=a19;
  a19=(a38*a84);
  a85=(a56*a12);
  a23=(a99*a83);
  a85=(a85+a23);
  a19=(a19+a85);
  if (res[0]!=0) res[0][39]=a19;
  a19=(a42*a84);
  a85=(a62*a12);
  a23=(a44*a83);
  a85=(a85+a23);
  a19=(a19+a85);
  if (res[0]!=0) res[0][40]=a19;
  a84=(a61*a84);
  a12=(a63*a12);
  a83=(a90*a83);
  a12=(a12+a83);
  a84=(a84+a12);
  if (res[0]!=0) res[0][41]=a84;
  a84=(a70*a20);
  a12=(a72*a30);
  a84=(a84-a12);
  a16=(a16-a84);
  a84=(a28*a16);
  a72=(a72*a21);
  a67=(a67-a72);
  a72=(a32*a67);
  a70=(a70*a21);
  a14=(a14+a70);
  a70=(a35*a14);
  a72=(a72+a70);
  a84=(a84+a72);
  a72=(a53*a84);
  a70=(a39*a16);
  a12=(a41*a67);
  a14=(a25*a14);
  a12=(a12+a14);
  a70=(a70+a12);
  a12=(a58*a70);
  a16=(a6*a16);
  a16=(a16-a67);
  a67=(a60*a16);
  a12=(a12+a67);
  a72=(a72+a12);
  a28=(a28*a21);
  a32=(a32*a30);
  a35=(a35*a20);
  a32=(a32+a35);
  a28=(a28+a32);
  a32=(a29*a28);
  a39=(a39*a21);
  a41=(a41*a30);
  a25=(a25*a20);
  a41=(a41+a25);
  a39=(a39+a41);
  a41=(a40*a39);
  a25=arg[1]? arg[1][7] : 0;
  a21=(a6*a21);
  a21=(a21-a30);
  a25=(a25+a21);
  a21=(a27*a25);
  a41=(a41+a21);
  a32=(a32+a41);
  a41=(a0*a32);
  a21=(a86*a28);
  a30=(a89*a39);
  a20=(a88*a25);
  a30=(a30+a20);
  a21=(a21+a30);
  a30=(a97*a21);
  a41=(a41-a30);
  a72=(a72+a41);
  a41=(a72*a88);
  a86=(a86*a84);
  a89=(a89*a70);
  a30=(a88*a16);
  a89=(a89+a30);
  a86=(a86+a89);
  a53=(a53*a28);
  a58=(a58*a39);
  a89=(a60*a25);
  a58=(a58+a89);
  a53=(a53+a58);
  a58=(a97*a53);
  a89=(a71*a32);
  a58=(a58-a89);
  a86=(a86+a58);
  a58=(a86*a60);
  a41=(a41-a58);
  a58=(a97*a60);
  a89=(a71*a27);
  a58=(a58-a89);
  a89=(a53*a58);
  a30=(a0*a27);
  a97=(a97*a88);
  a30=(a30-a97);
  a97=(a21*a30);
  a89=(a89-a97);
  a41=(a41+a89);
  a89=(a32*a60);
  a97=(a53*a27);
  a89=(a89-a97);
  a97=(a77*a89);
  a20=(a21*a27);
  a35=(a32*a88);
  a20=(a20-a35);
  a35=(a91*a20);
  a97=(a97-a35);
  a41=(a41-a97);
  a97=(a38*a41);
  a86=(a86*a27);
  a29=(a29*a84);
  a40=(a40*a70);
  a35=(a27*a16);
  a40=(a40+a35);
  a29=(a29+a40);
  a40=(a71*a21);
  a35=(a0*a53);
  a40=(a40-a35);
  a29=(a29+a40);
  a40=(a29*a88);
  a86=(a86-a40);
  a71=(a71*a88);
  a0=(a0*a60);
  a71=(a71-a0);
  a0=(a21*a71);
  a58=(a32*a58);
  a0=(a0-a58);
  a86=(a86+a0);
  a88=(a53*a88);
  a21=(a21*a60);
  a88=(a88-a21);
  a21=(a91*a88);
  a0=(a76*a89);
  a21=(a21-a0);
  a86=(a86-a21);
  a21=(a56*a86);
  a29=(a29*a60);
  a72=(a72*a27);
  a29=(a29-a72);
  a32=(a32*a30);
  a53=(a53*a71);
  a32=(a32-a53);
  a29=(a29+a32);
  a32=(a76*a20);
  a53=(a77*a88);
  a32=(a32-a53);
  a29=(a29-a32);
  a32=(a99*a29);
  a21=(a21+a32);
  a97=(a97+a21);
  if (res[0]!=0) res[0][42]=a97;
  a97=(a42*a41);
  a21=(a62*a86);
  a32=(a44*a29);
  a21=(a21+a32);
  a97=(a97+a21);
  if (res[0]!=0) res[0][43]=a97;
  a41=(a61*a41);
  a86=(a63*a86);
  a29=(a90*a29);
  a86=(a86+a29);
  a41=(a41+a86);
  if (res[0]!=0) res[0][44]=a41;
  a41=(a38*a88);
  a86=(a56*a20);
  a29=(a99*a89);
  a86=(a86+a29);
  a41=(a41+a86);
  if (res[0]!=0) res[0][45]=a41;
  a41=(a42*a88);
  a86=(a62*a20);
  a29=(a44*a89);
  a86=(a86+a29);
  a41=(a41+a86);
  if (res[0]!=0) res[0][46]=a41;
  a88=(a61*a88);
  a20=(a63*a20);
  a89=(a90*a89);
  a20=(a20+a89);
  a88=(a88+a20);
  if (res[0]!=0) res[0][47]=a88;
  a88=(a75*a39);
  a84=(a84+a88);
  a88=(a37*a84);
  a75=(a75*a28);
  a20=(a73*a25);
  a75=(a75-a20);
  a70=(a70-a75);
  a75=(a36*a70);
  a73=(a73*a39);
  a16=(a16-a73);
  a73=(a33*a16);
  a75=(a75-a73);
  a88=(a88+a75);
  a75=(a56*a88);
  a73=(a22*a84);
  a20=(a33*a70);
  a89=(a36*a16);
  a20=(a20+a89);
  a73=(a73-a20);
  a20=(a62*a73);
  a70=(a6*a70);
  a16=(a6*a16);
  a70=(a70+a16);
  a70=(a70-a84);
  a84=(a63*a70);
  a20=(a20+a84);
  a75=(a75+a20);
  a37=(a37*a28);
  a20=(a36*a39);
  a84=(a33*a25);
  a20=(a20-a84);
  a37=(a37+a20);
  a20=(a38*a37);
  a22=(a22*a28);
  a33=(a33*a39);
  a36=(a36*a25);
  a33=(a33+a36);
  a22=(a22-a33);
  a33=(a42*a22);
  a36=arg[1]? arg[1][8] : 0;
  a39=(a6*a39);
  a6=(a6*a25);
  a39=(a39+a6);
  a39=(a39-a28);
  a36=(a36+a39);
  a39=(a61*a36);
  a33=(a33+a39);
  a20=(a20+a33);
  a33=(a87*a20);
  a39=(a99*a37);
  a28=(a44*a22);
  a6=(a90*a36);
  a28=(a28+a6);
  a39=(a39+a28);
  a28=(a98*a39);
  a33=(a33-a28);
  a75=(a75+a33);
  a33=(a75*a90);
  a28=(a99*a88);
  a6=(a44*a73);
  a25=(a90*a70);
  a6=(a6+a25);
  a28=(a28+a6);
  a37=(a56*a37);
  a22=(a62*a22);
  a36=(a63*a36);
  a22=(a22+a36);
  a37=(a37+a22);
  a22=(a98*a37);
  a36=(a74*a20);
  a22=(a22-a36);
  a28=(a28+a22);
  a22=(a28*a63);
  a33=(a33-a22);
  a22=(a98*a63);
  a36=(a74*a61);
  a22=(a22-a36);
  a36=(a37*a22);
  a6=(a87*a61);
  a98=(a98*a90);
  a6=(a6-a98);
  a98=(a39*a6);
  a36=(a36-a98);
  a33=(a33+a36);
  a36=(a20*a63);
  a98=(a37*a61);
  a36=(a36-a98);
  a98=(a77*a36);
  a25=(a39*a61);
  a84=(a20*a90);
  a25=(a25-a84);
  a84=(a91*a25);
  a98=(a98-a84);
  a33=(a33-a98);
  a98=(a38*a33);
  a28=(a28*a61);
  a88=(a38*a88);
  a73=(a42*a73);
  a70=(a61*a70);
  a73=(a73+a70);
  a88=(a88+a73);
  a73=(a74*a39);
  a70=(a87*a37);
  a73=(a73-a70);
  a88=(a88+a73);
  a73=(a88*a90);
  a28=(a28-a73);
  a74=(a74*a90);
  a87=(a87*a63);
  a74=(a74-a87);
  a87=(a39*a74);
  a22=(a20*a22);
  a87=(a87-a22);
  a28=(a28+a87);
  a87=(a37*a90);
  a39=(a39*a63);
  a87=(a87-a39);
  a91=(a91*a87);
  a39=(a76*a36);
  a91=(a91-a39);
  a28=(a28-a91);
  a91=(a56*a28);
  a88=(a88*a63);
  a75=(a75*a61);
  a88=(a88-a75);
  a20=(a20*a6);
  a37=(a37*a74);
  a20=(a20-a37);
  a88=(a88+a20);
  a76=(a76*a25);
  a77=(a77*a87);
  a76=(a76-a77);
  a88=(a88-a76);
  a76=(a99*a88);
  a91=(a91+a76);
  a98=(a98+a91);
  if (res[0]!=0) res[0][48]=a98;
  a98=(a42*a33);
  a91=(a62*a28);
  a76=(a44*a88);
  a91=(a91+a76);
  a98=(a98+a91);
  if (res[0]!=0) res[0][49]=a98;
  a33=(a61*a33);
  a28=(a63*a28);
  a88=(a90*a88);
  a28=(a28+a88);
  a33=(a33+a28);
  if (res[0]!=0) res[0][50]=a33;
  a38=(a38*a87);
  a56=(a56*a25);
  a99=(a99*a36);
  a56=(a56+a99);
  a38=(a38+a56);
  if (res[0]!=0) res[0][51]=a38;
  a42=(a42*a87);
  a62=(a62*a25);
  a44=(a44*a36);
  a62=(a62+a44);
  a42=(a42+a62);
  if (res[0]!=0) res[0][52]=a42;
  a61=(a61*a87);
  a63=(a63*a25);
  a90=(a90*a36);
  a63=(a63+a90);
  a61=(a61+a63);
  if (res[0]!=0) res[0][53]=a61;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int dJ_b_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_b_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int dJ_b_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_b_release(int mem) {
}

CASADI_SYMBOL_EXPORT void dJ_b_incref(void) {
}

CASADI_SYMBOL_EXPORT void dJ_b_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int dJ_b_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int dJ_b_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real dJ_b_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_b_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "v";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_b_name_out(casadi_int i) {
  switch (i) {
    case 0: return "dJ_b";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_b_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_b_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int dJ_b_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
