//===-- working_set.h -------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is a part of EfficiencySanitizer, a family of performance tuners.
//
// Header for working-set-specific code.
//===----------------------------------------------------------------------===//

#ifndef WORKING_SET_H
#define WORKING_SET_H

#include "interception/interception.h"
#include "sanitizer_common/sanitizer_internal_defs.h"

namespace __esan {

void initializeWorkingSet();
int finalizeWorkingSet();
void processRangeAccessWorkingSet(uptr PC, uptr Addr, SIZE_T Size,
                                  bool IsWrite);

} // namespace __esan

#endif // WORKING_SET_H