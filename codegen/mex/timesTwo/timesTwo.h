/*
 * timesTwo.h
 *
 * Code generation for function 'timesTwo'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "timesTwo_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
real_T timesTwo(real_T x);
void timesTwo_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray
                  *plhs[1]);
void timesTwo_atexit(void);
void timesTwo_initialize(void);
void timesTwo_terminate(void);

/* End of code generation (timesTwo.h) */
