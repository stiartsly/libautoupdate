/*
 * Copyright (c) 2017 Minqi Pan <pmq2001@gmail.com>
 *
 * This file is part of libautoupdate, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#ifndef AUTOUPDATE_H_8C141CA2
#define AUTOUPDATE_H_8C141CA2

#ifdef _WIN32
  #include <wchar.h>
  void autoupdate(int argc, wchar_t *wargv[]);
#else
  void autoupdate(int argc, char *argv[]);
#endif // _WIN32

#endif /* end of include guard: AUTOUPDATE_H_8C141CA2 */
