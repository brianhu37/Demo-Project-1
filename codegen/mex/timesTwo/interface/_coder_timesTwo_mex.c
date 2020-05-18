/*
 * _coder_timesTwo_mex.c
 *
 * Code generation for function '_coder_timesTwo_mex'
 *
 */

/* Include files */
#include "_coder_timesTwo_mex.h"
#include "timesTwo.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void timesTwo_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
void timesTwo_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const
  mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4, 8,
                        "timesTwo");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "timesTwo");
  }

  /* Call the function. */
  timesTwo_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&timesTwo_atexit);

  /* Module initialization. */
  timesTwo_initialize();

  /* Dispatch the entry-point. */
  timesTwo_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  timesTwo_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_timesTwo_mex.c) */
