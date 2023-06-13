/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) mir250_ppr_fk_ ## ID
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

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s1[23] = {4, 4, 0, 4, 8, 12, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};

/* fk_T:(q[3])->(T_lin_x_joint[4x4],T_lin_y_joint[4x4],T_rot_z_joint[4x4],T_endeffector[4x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2, a3, a4, a5, a6;
  a0=1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a1;
  if (res[0]!=0) res[0][4]=a1;
  if (res[0]!=0) res[0][5]=a0;
  if (res[0]!=0) res[0][6]=a1;
  if (res[0]!=0) res[0][7]=a1;
  if (res[0]!=0) res[0][8]=a1;
  if (res[0]!=0) res[0][9]=a1;
  if (res[0]!=0) res[0][10]=a0;
  if (res[0]!=0) res[0][11]=a1;
  a2=arg[0]? arg[0][0] : 0;
  if (res[0]!=0) res[0][12]=a2;
  if (res[0]!=0) res[0][13]=a1;
  if (res[0]!=0) res[0][14]=a1;
  if (res[0]!=0) res[0][15]=a0;
  if (res[1]!=0) res[1][0]=a0;
  if (res[1]!=0) res[1][1]=a1;
  if (res[1]!=0) res[1][2]=a1;
  if (res[1]!=0) res[1][3]=a1;
  if (res[1]!=0) res[1][4]=a1;
  if (res[1]!=0) res[1][5]=a0;
  if (res[1]!=0) res[1][6]=a1;
  if (res[1]!=0) res[1][7]=a1;
  if (res[1]!=0) res[1][8]=a1;
  if (res[1]!=0) res[1][9]=a1;
  if (res[1]!=0) res[1][10]=a0;
  if (res[1]!=0) res[1][11]=a1;
  if (res[1]!=0) res[1][12]=a2;
  a3=arg[0]? arg[0][1] : 0;
  if (res[1]!=0) res[1][13]=a3;
  if (res[1]!=0) res[1][14]=a1;
  if (res[1]!=0) res[1][15]=a0;
  a4=arg[0]? arg[0][2] : 0;
  a5=cos(a4);
  if (res[2]!=0) res[2][0]=a5;
  a4=sin(a4);
  if (res[2]!=0) res[2][1]=a4;
  if (res[2]!=0) res[2][2]=a1;
  if (res[2]!=0) res[2][3]=a1;
  a6=(-a4);
  if (res[2]!=0) res[2][4]=a6;
  if (res[2]!=0) res[2][5]=a5;
  if (res[2]!=0) res[2][6]=a1;
  if (res[2]!=0) res[2][7]=a1;
  if (res[2]!=0) res[2][8]=a1;
  if (res[2]!=0) res[2][9]=a1;
  if (res[2]!=0) res[2][10]=a0;
  if (res[2]!=0) res[2][11]=a1;
  if (res[2]!=0) res[2][12]=a2;
  if (res[2]!=0) res[2][13]=a3;
  if (res[2]!=0) res[2][14]=a1;
  if (res[2]!=0) res[2][15]=a0;
  if (res[3]!=0) res[3][0]=a5;
  if (res[3]!=0) res[3][1]=a4;
  if (res[3]!=0) res[3][2]=a1;
  if (res[3]!=0) res[3][3]=a1;
  if (res[3]!=0) res[3][4]=a6;
  if (res[3]!=0) res[3][5]=a5;
  if (res[3]!=0) res[3][6]=a1;
  if (res[3]!=0) res[3][7]=a1;
  if (res[3]!=0) res[3][8]=a1;
  if (res[3]!=0) res[3][9]=a1;
  if (res[3]!=0) res[3][10]=a0;
  if (res[3]!=0) res[3][11]=a1;
  if (res[3]!=0) res[3][12]=a2;
  if (res[3]!=0) res[3][13]=a3;
  if (res[3]!=0) res[3][14]=a1;
  if (res[3]!=0) res[3][15]=a0;
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

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_real fk_T_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_out(casadi_int i){
  switch (i) {
    case 0: return "T_lin_x_joint";
    case 1: return "T_lin_y_joint";
    case 2: return "T_rot_z_joint";
    case 3: return "T_endeffector";
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
    case 1: return casadi_s1;
    case 2: return casadi_s1;
    case 3: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_T_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
