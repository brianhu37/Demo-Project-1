/*
 * addOne.h
 *
 * Code generation for function 'addOne'
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
#include "addOne_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
real_T addOne(real_T x);
void addOne_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray *
                plhs[1]);
void addOne_atexit(void);
void addOne_initialize(void);
void addOne_terminate(void);

/* End of code generation (addOne.h) */
