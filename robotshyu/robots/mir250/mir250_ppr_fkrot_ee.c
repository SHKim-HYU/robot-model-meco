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
  #define CASADI_PREFIX(ID) mir250_ppr_fkrot_ee_ ## ID
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
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* fk_rot:(q[3])->(Rot_endeffector[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  if (res[0]!=0) res[0][0]=a1;
  a0=sin(a0);
  if (res[0]!=0) res[0][1]=a0;
  a2=0.;
  if (res[0]!=0) res[0][2]=a2;
  a0=(-a0);
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a1;
  if (res[0]!=0) res[0][5]=a2;
  if (res[0]!=0) res[0][6]=a2;
  if (res[0]!=0) res[0][7]=a2;
  a2=1.;
  if (res[0]!=0) res[0][8]=a2;
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_rot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fk_rot_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_rot_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_rot_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fk_rot_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_rot_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fk_rot_incref(void) {
}

CASADI_SYMBOL_EXPORT void fk_rot_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fk_rot_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int fk_rot_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real fk_rot_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_rot_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_rot_name_out(casadi_int i){
  switch (i) {
    case 0: return "Rot_endeffector";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_rot_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_rot_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_rot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
