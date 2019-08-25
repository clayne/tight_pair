/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Morwenn
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef CRUFT_TIGHT_PAIR_H_
#define CRUFT_TIGHT_PAIR_H_

#if __cplusplus > 201703L
#   include "detail/tight_pair_cxx_2020.h"
#elif __cplusplus > 201402L
#   include "detail/tight_pair_cxx_2017.h"
#else
#   error "tight_pair needs C++17 or newer to work"
#endif

namespace cruft
{
#if __cplusplus > 201703L
    using ::cruft::cxx_2020::tight_pair;
    using ::cruft::cxx_2020::get;
#elif __cplusplus > 201402L
    using ::cruft::cxx_2017::tight_pair;
    using ::cruft::cxx_2017::get;
#endif
}

#endif // CRUFT_TIGHT_PAIR_H_
