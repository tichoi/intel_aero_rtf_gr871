//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: eye.cpp
//
// MATLAB Coder version            : 3.3
// C/C++ source code generated on  : 28-Apr-2017 12:27:39
//

// Include Files
#include "rt_nonfinite.h"
#include "ekf.h"
#include "eye.h"

// Function Definitions

//
// Arguments    : double I[4]
// Return Type  : void
//
void b_eye(double I[4])
{
  int k;
  for (k = 0; k < 4; k++) {
    I[k] = 0.0;
  }

  for (k = 0; k < 2; k++) {
    I[k + (k << 1)] = 1.0;
  }
}

//
// Arguments    : double I[361]
// Return Type  : void
//
void c_eye(double I[361])
{
  int k;
  memset(&I[0], 0, 361U * sizeof(double));
  for (k = 0; k < 19; k++) {
    I[k + 19 * k] = 1.0;
  }
}

//
// Arguments    : double I[9]
// Return Type  : void
//
void eye(double I[9])
{
  int k;
  memset(&I[0], 0, 9U * sizeof(double));
  for (k = 0; k < 3; k++) {
    I[k + 3 * k] = 1.0;
  }
}

//
// File trailer for eye.cpp
//
// [EOF]
//
