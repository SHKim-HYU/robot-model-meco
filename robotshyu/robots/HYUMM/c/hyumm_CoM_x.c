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
  #define CASADI_PREFIX(ID) hyumm_CoM_x_ ## ID
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
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};

/* centerOfMass:(q[9])->(CoM Position[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=-7.2832354877930494e-01;
  a3=arg[0]? arg[0][3] : 0;
  a4=cos(a3);
  a5=-2.7179413261715002e-03;
  a6=2.2204460492503131e-16;
  a7=arg[0]? arg[0][4] : 0;
  a8=cos(a7);
  a9=(a6*a8);
  a7=sin(a7);
  a9=(a9+a7);
  a10=-1.7237477117653406e+00;
  a11=arg[0]? arg[0][5] : 0;
  a12=cos(a11);
  a13=-4.5069389907530222e-01;
  a14=arg[0]? arg[0][6] : 0;
  a15=cos(a14);
  a16=(a6*a15);
  a17=-2.2204460492503131e-16;
  a14=sin(a14);
  a18=(a17*a14);
  a16=(a16+a18);
  a18=-5.7180719492369993e-04;
  a19=arg[0]? arg[0][7] : 0;
  a20=cos(a19);
  a21=(a6*a20);
  a19=sin(a19);
  a21=(a21+a19);
  a22=-2.1788022063628715e-01;
  a23=3.1166293100400009e-05;
  a24=arg[0]? arg[0][8] : 0;
  a25=cos(a24);
  a26=(a6*a25);
  a24=sin(a24);
  a27=(a17*a24);
  a26=(a26+a27);
  a26=(a23*a26);
  a27=-1.7809966141920004e-04;
  a28=(a17*a25);
  a29=(a6*a24);
  a28=(a28-a29);
  a28=(a27*a28);
  a29=-1.1779294635640402e-02;
  a28=(a28+a29);
  a26=(a26+a28);
  a28=-6.4268453760000011e-02;
  a26=(a26+a28);
  a22=(a22+a26);
  a21=(a21*a22);
  a26=(a6*a19);
  a26=(a20-a26);
  a28=-5.1408372318939989e-04;
  a29=(a23*a25);
  a30=2.6155288236663137e-18;
  a31=(a27*a24);
  a31=(a30-a31);
  a29=(a29+a31);
  a28=(a28+a29);
  a26=(a26*a28);
  a29=1.4336454783407315e-01;
  a27=(a27*a25);
  a30=(a30-a27);
  a23=(a23*a24);
  a30=(a30-a23);
  a23=2.6395972080000003e-02;
  a30=(a30+a23);
  a29=(a29+a30);
  a30=(a6*a29);
  a26=(a26+a30);
  a21=(a21+a26);
  a18=(a18+a21);
  a16=(a16*a18);
  a17=(a17*a15);
  a21=(a6*a14);
  a17=(a17-a21);
  a21=-1.5118780738012400e-01;
  a26=(a6*a19);
  a26=(a26*a22);
  a30=(a6*a20);
  a30=(a30*a28);
  a30=(a30-a29);
  a26=(a26+a30);
  a30=-2.9716072541999999e-01;
  a26=(a26+a30);
  a21=(a21+a26);
  a17=(a17*a21);
  a26=1.6291676631624880e-01;
  a30=(a6*a19);
  a30=(a30-a20);
  a30=(a30*a22);
  a20=(a6*a20);
  a19=(a19+a20);
  a19=(a19*a28);
  a30=(a30+a19);
  a19=2.1635386149000002e-01;
  a30=(a30+a19);
  a26=(a26+a30);
  a17=(a17-a26);
  a16=(a16+a17);
  a17=-1.2646579795799999e+00;
  a16=(a16+a17);
  a13=(a13+a16);
  a16=(a12*a13);
  a11=sin(a11);
  a17=5.7452420969439984e-04;
  a30=(a15*a18);
  a19=(a6*a26);
  a28=(a14*a21);
  a19=(a19-a28);
  a30=(a30+a19);
  a17=(a17+a30);
  a30=(a11*a17);
  a16=(a16-a30);
  a30=-3.3383733209999997e+00;
  a16=(a16+a30);
  a10=(a10+a16);
  a9=(a9*a10);
  a16=(a6*a7);
  a16=(a8-a16);
  a30=-1.3806338316329998e-04;
  a11=(a11*a13);
  a12=(a12*a17);
  a11=(a11+a12);
  a30=(a30+a11);
  a16=(a16*a30);
  a11=2.7849822860563617e-01;
  a12=-1.8775451709225113e-01;
  a26=(a6*a26);
  a15=(a15*a21);
  a26=(a26-a15);
  a14=(a14*a18);
  a26=(a26-a14);
  a14=-3.5524100549999998e-01;
  a26=(a26+a14);
  a12=(a12+a26);
  a26=-2.2626752508999998e-01;
  a12=(a12+a26);
  a11=(a11+a12);
  a12=(a6*a11);
  a16=(a16+a12);
  a9=(a9+a16);
  a5=(a5+a9);
  a9=(a4*a5);
  a3=sin(a3);
  a16=-4.9329141569894558e-01;
  a12=(a6*a7);
  a12=(a12*a10);
  a26=(a6*a8);
  a26=(a26*a30);
  a26=(a26-a11);
  a12=(a12+a26);
  a26=-1.4460237471899997e+00;
  a12=(a12+a26);
  a16=(a16+a12);
  a12=(a3*a16);
  a9=(a9-a12);
  a12=7.4132154779999997e+00;
  a9=(a9+a12);
  a2=(a2+a9);
  a9=(a1*a2);
  a0=sin(a0);
  a12=-3.4875641271113027e-02;
  a3=(a3*a5);
  a4=(a4*a16);
  a3=(a3+a4);
  a12=(a12+a3);
  a3=(a0*a12);
  a9=(a9-a3);
  a3=7.9617501299999986e+01;
  a4=arg[0]? arg[0][0] : 0;
  a4=(a3*a4);
  a9=(a9+a4);
  a9=(a9/a3);
  if (res[0]!=0) res[0][0]=a9;
  a0=(a0*a2);
  a1=(a1*a12);
  a0=(a0+a1);
  a1=7.9617500299999989e+01;
  a12=arg[0]? arg[0][1] : 0;
  a1=(a1*a12);
  a0=(a0+a1);
  a0=(a0/a3);
  if (res[0]!=0) res[0][1]=a0;
  a0=8.2492837815073212e+00;
  a1=1.5158621066110862e+00;
  a12=(a6*a7);
  a12=(a12-a8);
  a12=(a12*a10);
  a6=(a6*a8);
  a7=(a7+a6);
  a7=(a7*a30);
  a12=(a12+a7);
  a7=2.9451125860199996e+00;
  a12=(a12+a7);
  a1=(a1+a12);
  a12=7.5491244284299999e+00;
  a1=(a1+a12);
  a0=(a0+a1);
  a0=(a0/a3);
  if (res[0]!=0) res[0][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int centerOfMass(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int centerOfMass_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int centerOfMass_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void centerOfMass_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int centerOfMass_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void centerOfMass_release(int mem) {
}

CASADI_SYMBOL_EXPORT void centerOfMass_incref(void) {
}

CASADI_SYMBOL_EXPORT void centerOfMass_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int centerOfMass_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int centerOfMass_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real centerOfMass_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* centerOfMass_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* centerOfMass_name_out(casadi_int i) {
  switch (i) {
    case 0: return "CoM Position";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* centerOfMass_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* centerOfMass_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int centerOfMass_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
