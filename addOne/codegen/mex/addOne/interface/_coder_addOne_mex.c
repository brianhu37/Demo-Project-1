/*
 * _coder_addOne_mex.c
 *
 * Code generation for function '_coder_addOne_mex'
 *
 */

/* Include files */
#include "_coder_addOne_mex.h"
#include "addOne.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void addOne_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
void addOne_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const
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
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4, 6,
                        "addOne");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "addOne");
  }

  /* Call the function. */
  addOne_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&addOne_atexit);

  /* Module initialization. */
  addOne_initialize();

  /* Dispatch the entry-point. */
  addOne_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  addOne_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_addOne_mex.c) */
