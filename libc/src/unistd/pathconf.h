//===-- Implementation header for pathconf ----------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_UNISTD_PATHCONF_H
#define LLVM_LIBC_SRC_UNISTD_PATHCONF_H

namespace LIBC_NAMESPACE {

long pathconf(const char *path, int name);

} // namespace LIBC_NAMESPACE

#endif // LLVM_LIBC_SRC_UNISTD_PREAD_H
