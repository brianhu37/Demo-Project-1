/*
 * _coder_timesTwo_info.c
 *
 * Code generation for function '_coder_timesTwo_info'
 *
 */

/* Include files */
#include "_coder_timesTwo_info.h"
#include "emlrt.h"
#include "rt_nonfinite.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[4] = {
    "789cc552c14ec240101d08122f28270f9ef403b409891abd990209512a118c0763624b575be8eee2ee56510f7e82bfe397f839c66e4bcbd2d09404c54936d397"
    "37bb6fde4ca1d06a1700602338b5e08ccb10462538db45806a04a108b391e60b73724da95f83127cbf47f7625edeff98e03e25028d450488895172d3a6d82526",
    "11bd9711028638f59e901d32f7ae877a2e465d151812e1a642254052f25b77507fd8f53130874f3bf45410ce43c6a7e257f61ffb2dcd9987cac773b84cf98da3"
    "9ae26f1ab7fa8976c511e39ac55c9338be56477c28e8486b9b6c88844b1e763a8c0e505f704d3f3d8f415086690244e093f79ee93e9efa90ba774bfa2867fa88",
    "18d3b62f085a9d9e4d7dcb53f496ddd375a6de2cff5b7b8ae63549c1b2f2e6b6b9a00f35ab3e2ab01ed69fed7d8525abd26b3676df56a917c77fe98d33de5bf4"
    "3fdccad0aba6f8bac55fb98f8d033178745a063b3cb68eeafab48f4e8e4e5e1fa060b58fbf7eff078ad4a749",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 1680U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * epFieldName[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * propFieldName[4] = { "Version", "ResolvedFunctions",
    "EntryPoints", "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, epFieldName);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("timesTwo"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\Users\\brianhu\\Desktop\\Marketing Projects\\CAL Project\\Demo Project\\timesTwo.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737928.70361111115));
  xResult = emlrtCreateStructMatrix(1, 1, 4, propFieldName);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.8.0.1323502 (R2020a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_timesTwo_info.c) */
