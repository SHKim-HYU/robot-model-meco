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
  #define CASADI_PREFIX(ID) hyumm_offset_l_id_ ## ID
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

/* rnea:(q[9],dq[9],ddq[9])->(tau[9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a16, a160, a161, a162, a163, a164, a165, a166, a167, a168, a169, a17, a170, a171, a172, a173, a174, a175, a176, a177, a178, a179, a18, a180, a181, a182, a183, a184, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=5.5207671930000004e+01;
  a3=arg[1]? arg[1][2] : 0;
  a4=arg[1]? arg[1][1] : 0;
  a5=(a1*a4);
  a0=sin(a0);
  a6=arg[1]? arg[1][0] : 0;
  a7=(a0*a6);
  a5=(a5-a7);
  a7=(a3*a5);
  a8=arg[2]? arg[2][0] : 0;
  a9=(a1*a8);
  a10=arg[2]? arg[2][1] : 0;
  a11=(a0*a10);
  a9=(a9+a11);
  a7=(a7+a9);
  a9=3.9999993404411044e-01;
  a11=arg[2]? arg[2][2] : 0;
  a12=(a9*a11);
  a12=(a7-a12);
  a12=(a2*a12);
  a13=-1.3325055224028888e-02;
  a14=(a13*a3);
  a14=(a5+a14);
  a14=(a2*a14);
  a15=(a3*a14);
  a15=(a12-a15);
  a16=arg[0]? arg[0][3] : 0;
  a17=cos(a16);
  a18=1.1444445350000001e+01;
  a19=arg[1]? arg[1][3] : 0;
  a20=2.9999999999999999e-01;
  a21=(a20*a3);
  a21=(a5+a21);
  a22=(a17*a21);
  a16=sin(a16);
  a6=(a1*a6);
  a4=(a0*a4);
  a6=(a6+a4);
  a4=4.0000000000000002e-01;
  a23=(a4*a3);
  a23=(a6-a23);
  a24=(a16*a23);
  a22=(a22-a24);
  a24=(a19*a22);
  a25=(a4*a11);
  a7=(a7-a25);
  a25=(a17*a7);
  a10=(a1*a10);
  a8=(a0*a8);
  a10=(a10-a8);
  a8=(a3*a6);
  a10=(a10-a8);
  a8=(a20*a11);
  a8=(a10+a8);
  a26=(a16*a8);
  a25=(a25+a26);
  a24=(a24+a25);
  a25=-4.3103130000000003e-02;
  a26=arg[2]? arg[2][3] : 0;
  a26=(a26+a11);
  a27=(a25*a26);
  a27=(a24-a27);
  a27=(a18*a27);
  a28=(a19+a3);
  a29=-2.3749000000000000e-04;
  a30=(a29*a28);
  a30=(a22+a30);
  a30=(a18*a30);
  a31=(a28*a30);
  a31=(a27-a31);
  a32=2.2204460492503131e-16;
  a33=arg[0]? arg[0][4] : 0;
  a34=cos(a33);
  a35=(a32*a34);
  a33=sin(a33);
  a35=(a35+a33);
  a36=5.8476655299999996e+00;
  a37=arg[1]? arg[1][4] : 0;
  a38=(a32*a33);
  a38=(a34-a38);
  a23=(a17*a23);
  a21=(a16*a21);
  a23=(a23+a21);
  a21=-1.0900000000000000e-01;
  a39=(a21*a28);
  a39=(a23-a39);
  a40=(a38*a39);
  a41=(a32*a34);
  a42=(a41*a22);
  a40=(a40+a42);
  a42=(a37*a40);
  a43=(a21*a26);
  a24=(a24-a43);
  a43=(a35*a24);
  a44=(a32*a33);
  a8=(a17*a8);
  a7=(a16*a7);
  a8=(a8-a7);
  a19=(a19*a23);
  a8=(a8-a19);
  a19=(a44*a8);
  a7=9.8100000000000005e+00;
  a45=(a32*a33);
  a45=(a45-a34);
  a46=(a7*a45);
  a19=(a19+a46);
  a43=(a43+a19);
  a42=(a42+a43);
  a43=2.2540000000000001e-05;
  a19=arg[2]? arg[2][4] : 0;
  a46=(a43*a19);
  a47=4.4830689999999999e-02;
  a34=(a32*a34);
  a33=(a33+a34);
  a34=(a33*a26);
  a48=(a45*a28);
  a49=(a37*a48);
  a34=(a34-a49);
  a49=(a47*a34);
  a46=(a46-a49);
  a46=(a42-a46);
  a46=(a36*a46);
  a49=(a33*a28);
  a50=(a32*a39);
  a50=(a50-a22);
  a51=-2.9616699000000002e-01;
  a52=(a51*a49);
  a53=(a43*a48);
  a52=(a52-a53);
  a52=(a50-a52);
  a52=(a36*a52);
  a53=(a49*a52);
  a54=(a47*a48);
  a55=(a51*a37);
  a54=(a54-a55);
  a54=(a40-a54);
  a54=(a36*a54);
  a55=(a37*a54);
  a53=(a53-a55);
  a53=(a46+a53);
  a55=arg[0]? arg[0][5] : 0;
  a56=cos(a55);
  a57=2.6820606400000000e+00;
  a58=arg[1]? arg[1][5] : 0;
  a59=-3.0499999999999999e-02;
  a60=(a59*a48);
  a61=-4.5000000000000001e-01;
  a62=(a61*a37);
  a60=(a60-a62);
  a60=(a40-a60);
  a62=(a56*a60);
  a55=sin(a55);
  a39=(a35*a39);
  a63=(a44*a22);
  a39=(a39+a63);
  a63=(a59*a49);
  a63=(a39+a63);
  a64=(a55*a63);
  a62=(a62-a64);
  a64=(a58*a62);
  a65=(a59*a34);
  a42=(a42+a65);
  a65=(a56*a42);
  a66=(a38*a24);
  a67=(a41*a8);
  a7=(a7*a33);
  a67=(a67+a7);
  a66=(a66+a67);
  a67=(a37*a39);
  a66=(a66-a67);
  a67=(a37*a49);
  a7=(a45*a26);
  a67=(a67+a7);
  a7=(a59*a67);
  a68=(a61*a19);
  a7=(a7-a68);
  a7=(a66-a7);
  a68=(a55*a7);
  a65=(a65+a68);
  a64=(a64+a65);
  a65=2.1420999999999994e-04;
  a68=arg[2]? arg[2][5] : 0;
  a68=(a68+a19);
  a69=(a65*a68);
  a70=-7.0003829999999975e-02;
  a71=(a56*a34);
  a72=(a55*a67);
  a71=(a71-a72);
  a72=(a56*a48);
  a73=(a55*a49);
  a72=(a72+a73);
  a73=(a58*a72);
  a71=(a71-a73);
  a73=(a70*a71);
  a69=(a69-a73);
  a69=(a64-a69);
  a69=(a57*a69);
  a73=(a56*a49);
  a74=(a55*a48);
  a73=(a73-a74);
  a74=(a61*a49);
  a74=(a50-a74);
  a75=-1.6804015999999994e-01;
  a76=(a75*a73);
  a77=(a65*a72);
  a76=(a76-a77);
  a76=(a74-a76);
  a76=(a57*a76);
  a77=(a73*a76);
  a78=(a58+a37);
  a79=(a70*a72);
  a80=(a75*a78);
  a79=(a79-a80);
  a79=(a62-a79);
  a79=(a57*a79);
  a80=(a78*a79);
  a77=(a77-a80);
  a77=(a69+a77);
  a80=arg[0]? arg[0][6] : 0;
  a81=cos(a80);
  a82=(a32*a81);
  a83=-2.2204460492503131e-16;
  a80=sin(a80);
  a84=(a83*a80);
  a82=(a82+a84);
  a84=2.1298737100000000e+00;
  a85=arg[1]? arg[1][6] : 0;
  a86=(a83*a81);
  a87=(a32*a80);
  a86=(a86-a87);
  a63=(a56*a63);
  a60=(a55*a60);
  a63=(a63+a60);
  a60=-7.4999999999999997e-02;
  a87=(a60*a73);
  a87=(a63+a87);
  a88=(a86*a87);
  a89=(a60*a72);
  a90=-2.6700000000000002e-01;
  a91=(a90*a78);
  a89=(a89-a91);
  a89=(a62-a89);
  a91=(a80*a89);
  a92=(a90*a73);
  a92=(a74-a92);
  a93=(a81*a92);
  a91=(a91+a93);
  a88=(a88-a91);
  a91=(a85*a88);
  a93=(a60*a71);
  a64=(a64+a93);
  a93=(a82*a64);
  a7=(a56*a7);
  a42=(a55*a42);
  a7=(a7-a42);
  a42=(a58*a63);
  a7=(a7-a42);
  a58=(a58*a73);
  a42=(a56*a67);
  a94=(a55*a34);
  a42=(a42+a94);
  a58=(a58+a42);
  a42=(a60*a58);
  a94=(a90*a68);
  a42=(a42-a94);
  a42=(a7-a42);
  a94=(a81*a42);
  a24=(a32*a24);
  a24=(a24-a8);
  a95=(a61*a34);
  a95=(a24-a95);
  a96=(a90*a71);
  a96=(a95-a96);
  a97=(a80*a96);
  a94=(a94-a97);
  a93=(a93+a94);
  a91=(a91+a93);
  a93=-7.0984400000000003e-02;
  a94=arg[2]? arg[2][6] : 0;
  a97=(a32*a71);
  a98=(a32*a68);
  a97=(a97+a98);
  a97=(a97-a58);
  a94=(a94+a97);
  a97=(a93*a94);
  a98=7.6491279999999995e-02;
  a99=(a86*a58);
  a100=(a80*a71);
  a101=(a81*a68);
  a100=(a100+a101);
  a99=(a99-a100);
  a100=(a82*a72);
  a101=(a81*a73);
  a102=(a80*a78);
  a101=(a101-a102);
  a100=(a100+a101);
  a101=(a85*a100);
  a99=(a99-a101);
  a101=(a98*a99);
  a97=(a97-a101);
  a97=(a91-a97);
  a97=(a84*a97);
  a101=(a86*a72);
  a102=(a80*a73);
  a103=(a81*a78);
  a102=(a102+a103);
  a101=(a101-a102);
  a102=(a32*a89);
  a103=(a32*a92);
  a102=(a102+a103);
  a102=(a102-a87);
  a103=-2.6846999999999998e-04;
  a104=(a103*a101);
  a105=(a93*a100);
  a104=(a104-a105);
  a104=(a102-a104);
  a104=(a84*a104);
  a105=(a101*a104);
  a106=(a32*a73);
  a107=(a32*a78);
  a106=(a106+a107);
  a106=(a106-a72);
  a106=(a85+a106);
  a107=(a98*a100);
  a108=(a103*a106);
  a107=(a107-a108);
  a107=(a88-a107);
  a107=(a84*a107);
  a108=(a106*a107);
  a105=(a105-a108);
  a105=(a97+a105);
  a108=arg[0]? arg[0][7] : 0;
  a109=cos(a108);
  a110=(a32*a109);
  a108=sin(a108);
  a110=(a110+a108);
  a111=2.2241227100000001e+00;
  a112=arg[1]? arg[1][7] : 0;
  a113=(a32*a108);
  a113=(a109-a113);
  a87=(a82*a87);
  a89=(a81*a89);
  a92=(a80*a92);
  a89=(a89-a92);
  a87=(a87+a89);
  a89=-1.1400000000000000e-01;
  a92=(a89*a106);
  a114=8.3000000000000004e-02;
  a115=(a114*a101);
  a92=(a92-a115);
  a92=(a87-a92);
  a115=(a113*a92);
  a116=(a32*a109);
  a117=(a114*a100);
  a117=(a88-a117);
  a118=(a116*a117);
  a119=(a32*a109);
  a119=(a108+a119);
  a120=(a89*a100);
  a120=(a102+a120);
  a121=(a119*a120);
  a118=(a118+a121);
  a115=(a115+a118);
  a118=(a112*a115);
  a121=(a89*a94);
  a122=(a114*a99);
  a121=(a121-a122);
  a91=(a91-a121);
  a121=(a110*a91);
  a122=(a32*a108);
  a123=(a86*a64);
  a124=(a80*a42);
  a125=(a81*a96);
  a124=(a124+a125);
  a123=(a123-a124);
  a124=(a85*a87);
  a123=(a123-a124);
  a85=(a85*a101);
  a124=(a82*a58);
  a125=(a81*a71);
  a126=(a80*a68);
  a125=(a125-a126);
  a124=(a124+a125);
  a85=(a85+a124);
  a124=(a114*a85);
  a124=(a123-a124);
  a125=(a122*a124);
  a108=(a32*a108);
  a108=(a108-a109);
  a42=(a32*a42);
  a96=(a32*a96);
  a42=(a42+a96);
  a42=(a42-a64);
  a64=(a89*a85);
  a64=(a42+a64);
  a96=(a108*a64);
  a125=(a125+a96);
  a121=(a121+a125);
  a118=(a118+a121);
  a121=-2.3113999999999996e-04;
  a125=arg[2]? arg[2][7] : 0;
  a96=(a32*a85);
  a96=(a96-a99);
  a125=(a125+a96);
  a96=(a121*a125);
  a109=6.4458919999999975e-02;
  a126=(a113*a85);
  a127=(a116*a99);
  a128=(a119*a94);
  a127=(a127+a128);
  a126=(a126+a127);
  a127=(a110*a100);
  a128=(a122*a101);
  a129=(a108*a106);
  a128=(a128+a129);
  a127=(a127+a128);
  a128=(a112*a127);
  a126=(a126-a128);
  a128=(a109*a126);
  a96=(a96-a128);
  a96=(a118-a96);
  a96=(a111*a96);
  a128=(a113*a100);
  a129=(a116*a101);
  a130=(a119*a106);
  a129=(a129+a130);
  a128=(a128+a129);
  a129=(a32*a92);
  a129=(a129-a117);
  a130=-9.7962319999999978e-02;
  a131=(a130*a128);
  a132=(a121*a127);
  a131=(a131-a132);
  a131=(a129-a131);
  a131=(a111*a131);
  a132=(a128*a131);
  a133=(a32*a100);
  a133=(a133-a101);
  a133=(a112+a133);
  a134=(a109*a127);
  a135=(a130*a133);
  a134=(a134-a135);
  a134=(a115-a134);
  a134=(a111*a134);
  a135=(a133*a134);
  a132=(a132-a135);
  a132=(a96+a132);
  a135=arg[0]? arg[0][8] : 0;
  a136=cos(a135);
  a137=(a32*a136);
  a135=sin(a135);
  a138=(a83*a135);
  a137=(a137+a138);
  a138=3.8254932000000003e-01;
  a139=arg[1]? arg[1][8] : 0;
  a83=(a83*a136);
  a140=(a32*a135);
  a83=(a83-a140);
  a92=(a110*a92);
  a117=(a122*a117);
  a120=(a108*a120);
  a117=(a117+a120);
  a92=(a92+a117);
  a117=6.9000000000000006e-02;
  a120=(a117*a128);
  a120=(a92+a120);
  a140=(a83*a120);
  a141=(a117*a127);
  a142=-1.6800000000000001e-01;
  a143=(a142*a133);
  a141=(a141-a143);
  a141=(a115-a141);
  a143=(a135*a141);
  a144=(a142*a128);
  a144=(a129-a144);
  a145=(a136*a144);
  a143=(a143+a145);
  a140=(a140-a143);
  a143=(a139*a140);
  a145=(a117*a126);
  a118=(a118+a145);
  a145=(a137*a118);
  a146=(a113*a91);
  a147=(a116*a124);
  a64=(a119*a64);
  a147=(a147+a64);
  a146=(a146+a147);
  a147=(a112*a92);
  a146=(a146-a147);
  a112=(a112*a128);
  a147=(a110*a85);
  a64=(a122*a99);
  a148=(a108*a94);
  a64=(a64+a148);
  a147=(a147+a64);
  a112=(a112+a147);
  a147=(a117*a112);
  a64=(a142*a125);
  a147=(a147-a64);
  a147=(a146-a147);
  a64=(a136*a147);
  a91=(a32*a91);
  a91=(a91-a124);
  a124=(a142*a126);
  a124=(a91-a124);
  a148=(a135*a124);
  a64=(a64-a148);
  a145=(a145+a64);
  a143=(a143+a145);
  a145=-4.6556000000000001e-04;
  a64=arg[2]? arg[2][8] : 0;
  a148=(a32*a126);
  a149=(a32*a125);
  a148=(a148+a149);
  a148=(a148-a112);
  a64=(a64+a148);
  a148=(a145*a64);
  a149=3.0790970000000001e-02;
  a150=(a83*a112);
  a151=(a135*a126);
  a152=(a136*a125);
  a151=(a151+a152);
  a150=(a150-a151);
  a151=(a137*a127);
  a152=(a136*a128);
  a153=(a135*a133);
  a152=(a152-a153);
  a151=(a151+a152);
  a152=(a139*a151);
  a150=(a150-a152);
  a152=(a149*a150);
  a148=(a148-a152);
  a143=(a143-a148);
  a143=(a138*a143);
  a148=(a83*a127);
  a152=(a135*a128);
  a153=(a136*a133);
  a152=(a152+a153);
  a148=(a148-a152);
  a152=(a32*a141);
  a153=(a32*a144);
  a152=(a152+a153);
  a152=(a152-a120);
  a153=8.1470000000000004e-05;
  a154=(a153*a148);
  a155=(a145*a151);
  a154=(a154-a155);
  a154=(a152-a154);
  a154=(a138*a154);
  a155=(a148*a154);
  a156=(a32*a128);
  a157=(a32*a133);
  a156=(a156+a157);
  a156=(a156-a127);
  a156=(a139+a156);
  a157=(a149*a151);
  a158=(a153*a156);
  a157=(a157-a158);
  a157=(a140-a157);
  a157=(a138*a157);
  a158=(a156*a157);
  a155=(a155-a158);
  a155=(a143+a155);
  a158=(a137*a155);
  a159=(a83*a118);
  a160=(a135*a147);
  a161=(a136*a124);
  a160=(a160+a161);
  a159=(a159-a160);
  a120=(a137*a120);
  a141=(a136*a141);
  a144=(a135*a144);
  a141=(a141-a144);
  a120=(a120+a141);
  a141=(a139*a120);
  a159=(a159-a141);
  a139=(a139*a148);
  a141=(a137*a112);
  a144=(a136*a126);
  a160=(a135*a125);
  a144=(a144-a160);
  a141=(a141+a144);
  a139=(a139+a141);
  a141=(a149*a139);
  a144=(a153*a64);
  a141=(a141-a144);
  a159=(a159-a141);
  a159=(a138*a159);
  a141=(a145*a156);
  a144=(a149*a148);
  a141=(a141-a144);
  a141=(a120-a141);
  a141=(a138*a141);
  a144=(a156*a141);
  a160=(a151*a154);
  a144=(a144-a160);
  a144=(a159+a144);
  a160=(a83*a144);
  a147=(a32*a147);
  a124=(a32*a124);
  a147=(a147+a124);
  a147=(a147-a118);
  a118=(a153*a150);
  a124=(a145*a139);
  a118=(a118-a124);
  a147=(a147-a118);
  a138=(a138*a147);
  a147=(a151*a157);
  a118=(a148*a141);
  a147=(a147-a118);
  a147=(a138+a147);
  a160=(a160-a147);
  a158=(a158+a160);
  a132=(a132+a158);
  a160=(a110*a132);
  a118=(a109*a112);
  a124=(a130*a125);
  a118=(a118-a124);
  a146=(a146-a118);
  a146=(a111*a146);
  a118=(a121*a133);
  a124=(a109*a128);
  a118=(a118-a124);
  a118=(a92-a118);
  a118=(a111*a118);
  a124=(a133*a118);
  a161=(a127*a131);
  a124=(a124-a161);
  a124=(a146+a124);
  a161=(a136*a155);
  a162=(a32*a147);
  a163=(a135*a144);
  a162=(a162-a163);
  a161=(a161+a162);
  a124=(a124+a161);
  a162=(a113*a124);
  a163=(a130*a126);
  a164=(a121*a112);
  a163=(a163-a164);
  a91=(a91-a163);
  a111=(a111*a91);
  a91=(a127*a134);
  a163=(a128*a118);
  a91=(a91-a163);
  a91=(a111+a91);
  a147=(a32*a147);
  a144=(a136*a144);
  a147=(a147-a144);
  a155=(a135*a155);
  a147=(a147-a155);
  a91=(a91+a147);
  a155=(a32*a91);
  a162=(a162+a155);
  a160=(a160+a162);
  a105=(a105+a160);
  a162=(a82*a105);
  a155=(a98*a85);
  a144=(a103*a94);
  a155=(a155-a144);
  a123=(a123-a155);
  a123=(a84*a123);
  a155=(a93*a106);
  a144=(a98*a101);
  a155=(a155-a144);
  a155=(a87-a155);
  a155=(a84*a155);
  a144=(a106*a155);
  a163=(a100*a104);
  a144=(a144-a163);
  a144=(a123+a144);
  a163=(a122*a132);
  a164=(a116*a124);
  a164=(a164-a91);
  a163=(a163+a164);
  a144=(a144+a163);
  a164=(a86*a144);
  a91=(a103*a99);
  a165=(a93*a85);
  a91=(a91-a165);
  a42=(a42-a91);
  a84=(a84*a42);
  a42=(a100*a107);
  a91=(a101*a155);
  a42=(a42-a91);
  a42=(a84+a42);
  a132=(a108*a132);
  a124=(a119*a124);
  a132=(a132+a124);
  a42=(a42+a132);
  a164=(a164-a42);
  a162=(a162+a164);
  a77=(a77+a162);
  a164=(a56*a77);
  a124=(a70*a58);
  a91=(a75*a68);
  a124=(a124-a91);
  a7=(a7-a124);
  a7=(a57*a7);
  a124=(a65*a78);
  a91=(a70*a73);
  a124=(a124-a91);
  a124=(a63-a124);
  a124=(a57*a124);
  a91=(a78*a124);
  a165=(a72*a76);
  a91=(a91-a165);
  a91=(a7+a91);
  a165=(a81*a105);
  a166=(a32*a42);
  a167=(a80*a144);
  a166=(a166-a167);
  a165=(a165+a166);
  a91=(a91+a165);
  a166=(a55*a91);
  a164=(a164-a166);
  a53=(a53+a164);
  a35=(a35*a53);
  a166=(a47*a67);
  a167=(a51*a19);
  a166=(a166-a167);
  a66=(a66-a166);
  a66=(a36*a66);
  a166=(a43*a37);
  a167=(a47*a49);
  a166=(a166-a167);
  a166=(a39-a166);
  a166=(a36*a166);
  a167=(a37*a166);
  a168=(a48*a52);
  a167=(a167-a168);
  a167=(a66+a167);
  a77=(a55*a77);
  a91=(a56*a91);
  a77=(a77+a91);
  a167=(a167+a77);
  a38=(a38*a167);
  a91=(a51*a34);
  a168=(a43*a67);
  a91=(a91-a168);
  a24=(a24-a91);
  a36=(a36*a24);
  a24=(a48*a54);
  a91=(a49*a166);
  a24=(a24-a91);
  a24=(a36+a24);
  a91=(a75*a71);
  a168=(a65*a58);
  a91=(a91-a168);
  a95=(a95-a91);
  a57=(a57*a95);
  a95=(a72*a79);
  a91=(a73*a124);
  a95=(a95-a91);
  a95=(a57+a95);
  a42=(a32*a42);
  a144=(a81*a144);
  a42=(a42-a144);
  a105=(a80*a105);
  a42=(a42-a105);
  a95=(a95+a42);
  a24=(a24+a95);
  a105=(a32*a24);
  a38=(a38+a105);
  a35=(a35+a38);
  a31=(a31+a35);
  a38=(a17*a31);
  a105=(a29*a26);
  a8=(a8+a105);
  a8=(a18*a8);
  a105=(a25*a28);
  a105=(a23-a105);
  a18=(a18*a105);
  a28=(a28*a18);
  a28=(a8+a28);
  a44=(a44*a53);
  a41=(a41*a167);
  a41=(a41-a24);
  a44=(a44+a41);
  a28=(a28+a44);
  a44=(a16*a28);
  a38=(a38-a44);
  a15=(a15+a38);
  a44=(a1*a15);
  a41=(a13*a11);
  a10=(a10+a41);
  a10=(a2*a10);
  a41=(a9*a3);
  a41=(a6-a41);
  a2=(a2*a41);
  a3=(a3*a2);
  a3=(a10+a3);
  a16=(a16*a31);
  a17=(a17*a28);
  a16=(a16+a17);
  a3=(a3+a16);
  a17=(a0*a3);
  a44=(a44-a17);
  if (res[0]!=0) res[0][0]=a44;
  a0=(a0*a15);
  a1=(a1*a3);
  a0=(a0+a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=6.6272675688462561e+00;
  a0=(a0*a11);
  a13=(a13*a10);
  a9=(a9*a12);
  a13=(a13-a9);
  a0=(a0+a13);
  a6=(a6*a14);
  a5=(a5*a2);
  a6=(a6-a5);
  a0=(a0+a6);
  a6=6.0031470000000003e-02;
  a6=(a6*a26);
  a29=(a29*a8);
  a25=(a25*a27);
  a29=(a29-a25);
  a6=(a6+a29);
  a23=(a23*a30);
  a22=(a22*a18);
  a23=(a23-a22);
  a6=(a6+a23);
  a23=3.5997429999999997e-02;
  a22=(a23*a67);
  a18=-4.6930000000000000e-05;
  a30=(a18*a34);
  a22=(a22+a30);
  a30=-5.2403459999999999e-02;
  a29=(a30*a19);
  a22=(a22+a29);
  a29=(a43*a36);
  a25=(a47*a66);
  a29=(a29-a25);
  a22=(a22+a29);
  a29=(a30*a48);
  a25=1.7600000000000001e-06;
  a27=(a25*a49);
  a29=(a29+a27);
  a27=7.0024118999999996e-01;
  a8=(a27*a37);
  a29=(a29+a8);
  a8=(a51*a54);
  a26=(a43*a166);
  a8=(a8-a26);
  a29=(a29+a8);
  a8=(a49*a29);
  a26=(a18*a48);
  a5=7.2293306000000002e-01;
  a2=(a5*a49);
  a26=(a26+a2);
  a2=(a25*a37);
  a26=(a26+a2);
  a2=(a47*a166);
  a14=(a51*a52);
  a2=(a2-a14);
  a26=(a26+a2);
  a2=(a37*a26);
  a8=(a8-a2);
  a2=(a40*a52);
  a14=(a50*a54);
  a2=(a2-a14);
  a8=(a8+a2);
  a22=(a22+a8);
  a8=1.6172099999999995e-02;
  a2=(a8*a58);
  a14=-1.1817000000000000e-04;
  a13=(a14*a71);
  a2=(a2+a13);
  a13=3.3418820000000002e-02;
  a9=(a13*a68);
  a2=(a2+a9);
  a9=(a65*a57);
  a12=(a70*a7);
  a9=(a9-a12);
  a2=(a2+a9);
  a9=(a13*a72);
  a12=-4.3710000000000000e-05;
  a10=(a12*a73);
  a9=(a9+a10);
  a10=1.0022522000000000e-01;
  a11=(a10*a78);
  a9=(a9+a11);
  a11=(a75*a79);
  a1=(a65*a124);
  a11=(a11-a1);
  a9=(a9+a11);
  a11=(a73*a9);
  a1=(a14*a72);
  a3=1.1364055000000001e-01;
  a15=(a3*a73);
  a1=(a1+a15);
  a15=(a12*a78);
  a1=(a1+a15);
  a15=(a70*a124);
  a44=(a75*a76);
  a15=(a15-a44);
  a1=(a1+a15);
  a15=(a78*a1);
  a11=(a11-a15);
  a15=(a62*a76);
  a44=(a74*a79);
  a15=(a15-a44);
  a11=(a11+a15);
  a2=(a2+a11);
  a11=2.7988909999999999e-02;
  a15=(a11*a85);
  a44=3.8930000000000002e-05;
  a17=(a44*a99);
  a15=(a15+a17);
  a17=-4.7679999999999998e-05;
  a28=(a17*a94);
  a15=(a15+a28);
  a28=(a93*a84);
  a31=(a98*a123);
  a28=(a28-a31);
  a15=(a15+a28);
  a28=(a17*a100);
  a31=-1.2662959999999999e-02;
  a41=(a31*a101);
  a28=(a28+a41);
  a41=1.4962110000000001e-02;
  a24=(a41*a106);
  a28=(a28+a24);
  a24=(a103*a107);
  a167=(a93*a155);
  a24=(a24-a167);
  a28=(a28+a24);
  a24=(a101*a28);
  a167=(a44*a100);
  a53=1.4430760000000001e-02;
  a105=(a53*a101);
  a167=(a167+a105);
  a105=(a31*a106);
  a167=(a167+a105);
  a105=(a98*a155);
  a144=(a103*a104);
  a105=(a105-a144);
  a167=(a167+a105);
  a105=(a106*a167);
  a24=(a24-a105);
  a105=(a88*a104);
  a144=(a102*a107);
  a105=(a105-a144);
  a24=(a24+a105);
  a15=(a15+a24);
  a24=1.1052970000000002e-02;
  a105=(a24*a112);
  a144=5.5170000000000002e-05;
  a91=(a144*a126);
  a105=(a105+a91);
  a91=-1.4819769999999999e-02;
  a168=(a91*a125);
  a105=(a105+a168);
  a168=(a121*a111);
  a169=(a109*a146);
  a168=(a168-a169);
  a105=(a105+a168);
  a168=(a91*a127);
  a169=-3.7400000000000001e-05;
  a170=(a169*a128);
  a168=(a168+a170);
  a170=2.7547950000000002e-02;
  a171=(a170*a133);
  a168=(a168+a171);
  a171=(a130*a134);
  a172=(a121*a118);
  a171=(a171-a172);
  a168=(a168+a171);
  a171=(a128*a168);
  a172=(a144*a127);
  a173=3.6982910000000001e-02;
  a174=(a173*a128);
  a172=(a172+a174);
  a174=(a169*a133);
  a172=(a172+a174);
  a174=(a109*a118);
  a175=(a130*a131);
  a174=(a174-a175);
  a172=(a172+a174);
  a174=(a133*a172);
  a171=(a171-a174);
  a174=(a115*a131);
  a175=(a129*a134);
  a174=(a174-a175);
  a171=(a171+a174);
  a105=(a105+a171);
  a171=7.8982000000000000e-04;
  a174=(a171*a139);
  a175=-3.3999999999999997e-07;
  a176=(a175*a150);
  a174=(a174+a176);
  a176=8.2999999999999999e-07;
  a177=(a176*a64);
  a174=(a174+a177);
  a177=(a145*a138);
  a178=(a149*a159);
  a177=(a177-a178);
  a174=(a174+a177);
  a177=(a176*a151);
  a178=-5.0799999999999996e-06;
  a179=(a178*a148);
  a177=(a177+a179);
  a179=5.8319000000000003e-04;
  a180=(a179*a156);
  a177=(a177+a180);
  a180=(a153*a157);
  a181=(a145*a141);
  a180=(a180-a181);
  a177=(a177+a180);
  a180=(a148*a177);
  a181=(a175*a151);
  a182=7.9763999999999996e-04;
  a183=(a182*a148);
  a181=(a181+a183);
  a183=(a178*a156);
  a181=(a181+a183);
  a183=(a149*a141);
  a184=(a153*a154);
  a183=(a183-a184);
  a181=(a181+a183);
  a183=(a156*a181);
  a180=(a180-a183);
  a183=(a140*a154);
  a184=(a152*a157);
  a183=(a183-a184);
  a180=(a180+a183);
  a174=(a174+a180);
  a137=(a137*a174);
  a180=(a175*a139);
  a182=(a182*a150);
  a180=(a180+a182);
  a182=(a178*a64);
  a180=(a180+a182);
  a182=(a149*a143);
  a138=(a153*a138);
  a182=(a182-a138);
  a180=(a180+a182);
  a171=(a171*a151);
  a175=(a175*a148);
  a171=(a171+a175);
  a175=(a176*a156);
  a171=(a171+a175);
  a175=(a145*a154);
  a149=(a149*a157);
  a175=(a175-a149);
  a171=(a171+a175);
  a156=(a156*a171);
  a177=(a151*a177);
  a156=(a156-a177);
  a152=(a152*a141);
  a154=(a120*a154);
  a152=(a152-a154);
  a156=(a156+a152);
  a180=(a180+a156);
  a83=(a83*a180);
  a176=(a176*a139);
  a178=(a178*a150);
  a176=(a176+a178);
  a179=(a179*a64);
  a176=(a176+a179);
  a153=(a153*a159);
  a145=(a145*a143);
  a153=(a153-a145);
  a176=(a176+a153);
  a151=(a151*a181);
  a148=(a148*a171);
  a151=(a151-a148);
  a120=(a120*a157);
  a140=(a140*a141);
  a120=(a120-a140);
  a151=(a151+a120);
  a176=(a176+a151);
  a83=(a83-a176);
  a137=(a137+a83);
  a83=(a117*a161);
  a137=(a137-a83);
  a105=(a105+a137);
  a110=(a110*a105);
  a137=(a144*a112);
  a173=(a173*a126);
  a137=(a137+a173);
  a173=(a169*a125);
  a137=(a137+a173);
  a173=(a109*a96);
  a111=(a130*a111);
  a173=(a173-a111);
  a137=(a137+a173);
  a24=(a24*a127);
  a144=(a144*a128);
  a24=(a24+a144);
  a144=(a91*a133);
  a24=(a24+a144);
  a144=(a121*a131);
  a109=(a109*a134);
  a144=(a144-a109);
  a24=(a24+a144);
  a133=(a133*a24);
  a168=(a127*a168);
  a133=(a133-a168);
  a129=(a129*a118);
  a131=(a92*a131);
  a129=(a129-a131);
  a133=(a133+a129);
  a137=(a137+a133);
  a133=(a136*a174);
  a129=(a32*a176);
  a131=(a135*a180);
  a129=(a129-a131);
  a133=(a133+a129);
  a117=(a117*a158);
  a147=(a142*a147);
  a117=(a117-a147);
  a133=(a133+a117);
  a137=(a137+a133);
  a113=(a113*a137);
  a91=(a91*a112);
  a169=(a169*a126);
  a91=(a91+a169);
  a170=(a170*a125);
  a91=(a91+a170);
  a130=(a130*a146);
  a121=(a121*a96);
  a130=(a130-a121);
  a91=(a91+a130);
  a127=(a127*a172);
  a128=(a128*a24);
  a127=(a127-a128);
  a92=(a92*a134);
  a115=(a115*a118);
  a92=(a92-a115);
  a127=(a127+a92);
  a91=(a91+a127);
  a127=(a32*a176);
  a136=(a136*a180);
  a127=(a127-a136);
  a135=(a135*a174);
  a127=(a127-a135);
  a142=(a142*a161);
  a127=(a127+a142);
  a91=(a91+a127);
  a127=(a32*a91);
  a113=(a113+a127);
  a110=(a110+a113);
  a132=(a89*a132);
  a163=(a114*a163);
  a132=(a132-a163);
  a110=(a110+a132);
  a15=(a15+a110);
  a82=(a82*a15);
  a110=(a44*a85);
  a53=(a53*a99);
  a110=(a110+a53);
  a53=(a31*a94);
  a110=(a110+a53);
  a53=(a98*a97);
  a84=(a103*a84);
  a53=(a53-a84);
  a110=(a110+a53);
  a11=(a11*a100);
  a44=(a44*a101);
  a11=(a11+a44);
  a44=(a17*a106);
  a11=(a11+a44);
  a44=(a93*a104);
  a98=(a98*a107);
  a44=(a44-a98);
  a11=(a11+a44);
  a106=(a106*a11);
  a28=(a100*a28);
  a106=(a106-a28);
  a102=(a102*a155);
  a104=(a87*a104);
  a102=(a102-a104);
  a106=(a106+a102);
  a110=(a110+a106);
  a122=(a122*a105);
  a116=(a116*a137);
  a116=(a116-a91);
  a122=(a122+a116);
  a114=(a114*a160);
  a122=(a122+a114);
  a110=(a110+a122);
  a86=(a86*a110);
  a17=(a17*a85);
  a31=(a31*a99);
  a17=(a17+a31);
  a41=(a41*a94);
  a17=(a17+a41);
  a103=(a103*a123);
  a93=(a93*a97);
  a103=(a103-a93);
  a17=(a17+a103);
  a100=(a100*a167);
  a101=(a101*a11);
  a100=(a100-a101);
  a87=(a87*a107);
  a88=(a88*a155);
  a87=(a87-a88);
  a100=(a100+a87);
  a17=(a17+a100);
  a108=(a108*a105);
  a119=(a119*a137);
  a108=(a108+a119);
  a89=(a89*a160);
  a108=(a108-a89);
  a17=(a17+a108);
  a86=(a86-a17);
  a82=(a82+a86);
  a86=(a60*a165);
  a82=(a82-a86);
  a2=(a2+a82);
  a82=(a56*a2);
  a86=(a14*a58);
  a3=(a3*a71);
  a86=(a86+a3);
  a3=(a12*a68);
  a86=(a86+a3);
  a3=(a70*a69);
  a57=(a75*a57);
  a3=(a3-a57);
  a86=(a86+a3);
  a8=(a8*a72);
  a14=(a14*a73);
  a8=(a8+a14);
  a14=(a13*a78);
  a8=(a8+a14);
  a14=(a65*a76);
  a70=(a70*a79);
  a14=(a14-a70);
  a8=(a8+a14);
  a78=(a78*a8);
  a9=(a72*a9);
  a78=(a78-a9);
  a74=(a74*a124);
  a76=(a63*a76);
  a74=(a74-a76);
  a78=(a78+a74);
  a86=(a86+a78);
  a78=(a81*a15);
  a74=(a32*a17);
  a76=(a80*a110);
  a74=(a74-a76);
  a78=(a78+a74);
  a60=(a60*a162);
  a42=(a90*a42);
  a60=(a60-a42);
  a78=(a78+a60);
  a86=(a86+a78);
  a78=(a55*a86);
  a82=(a82-a78);
  a78=(a59*a77);
  a82=(a82-a78);
  a22=(a22+a82);
  a45=(a45*a22);
  a22=(a18*a67);
  a5=(a5*a34);
  a22=(a22+a5);
  a5=(a25*a19);
  a22=(a22+a5);
  a5=(a47*a46);
  a36=(a51*a36);
  a5=(a5-a36);
  a22=(a22+a5);
  a23=(a23*a48);
  a18=(a18*a49);
  a23=(a23+a18);
  a18=(a30*a37);
  a23=(a23+a18);
  a18=(a43*a52);
  a47=(a47*a54);
  a18=(a18-a47);
  a23=(a23+a18);
  a37=(a37*a23);
  a29=(a48*a29);
  a37=(a37-a29);
  a50=(a50*a166);
  a52=(a39*a52);
  a50=(a50-a52);
  a37=(a37+a50);
  a22=(a22+a37);
  a55=(a55*a2);
  a56=(a56*a86);
  a55=(a55+a56);
  a59=(a59*a164);
  a95=(a61*a95);
  a59=(a59-a95);
  a55=(a55+a59);
  a22=(a22+a55);
  a33=(a33*a22);
  a45=(a45+a33);
  a21=(a21*a35);
  a45=(a45-a21);
  a6=(a6+a45);
  a20=(a20*a16);
  a4=(a4*a38);
  a20=(a20-a4);
  a20=(a6+a20);
  a0=(a0+a20);
  if (res[0]!=0) res[0][2]=a0;
  if (res[0]!=0) res[0][3]=a6;
  a30=(a30*a67);
  a25=(a25*a34);
  a30=(a30+a25);
  a27=(a27*a19);
  a30=(a30+a27);
  a51=(a51*a66);
  a43=(a43*a46);
  a51=(a51-a43);
  a30=(a30+a51);
  a48=(a48*a26);
  a49=(a49*a23);
  a48=(a48-a49);
  a39=(a39*a54);
  a40=(a40*a166);
  a39=(a39-a40);
  a48=(a48+a39);
  a30=(a30+a48);
  a13=(a13*a58);
  a12=(a12*a71);
  a13=(a13+a12);
  a10=(a10*a68);
  a13=(a13+a10);
  a75=(a75*a7);
  a65=(a65*a69);
  a75=(a75-a65);
  a13=(a13+a75);
  a72=(a72*a1);
  a73=(a73*a8);
  a72=(a72-a73);
  a63=(a63*a79);
  a62=(a62*a124);
  a63=(a63-a62);
  a72=(a72+a63);
  a13=(a13+a72);
  a32=(a32*a17);
  a81=(a81*a110);
  a32=(a32-a81);
  a80=(a80*a15);
  a32=(a32-a80);
  a90=(a90*a165);
  a32=(a32+a90);
  a13=(a13+a32);
  a61=(a61*a77);
  a61=(a13+a61);
  a30=(a30+a61);
  if (res[0]!=0) res[0][4]=a30;
  if (res[0]!=0) res[0][5]=a13;
  if (res[0]!=0) res[0][6]=a17;
  if (res[0]!=0) res[0][7]=a91;
  if (res[0]!=0) res[0][8]=a176;
  return 0;
}

CASADI_SYMBOL_EXPORT int rnea(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int rnea_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int rnea_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void rnea_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int rnea_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void rnea_release(int mem) {
}

CASADI_SYMBOL_EXPORT void rnea_incref(void) {
}

CASADI_SYMBOL_EXPORT void rnea_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int rnea_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int rnea_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real rnea_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "dq";
    case 2: return "ddq";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_out(casadi_int i) {
  switch (i) {
    case 0: return "tau";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int rnea_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
