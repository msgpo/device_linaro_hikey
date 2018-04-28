/*******************************************************************************
* Copyright (C) 2018 Cadence Design Systems, Inc.
* 
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to use this Software with Cadence processor cores only and 
* not with any other processors and platforms, subject to
* the following conditions:
* 
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

******************************************************************************/

/* $Id: //depot/dev/Cottonwood/Xtensa/OS/mpg2/tinyput.h#2 $ */

#include <stdarg.h>

extern void tiny_putc(char c);
extern int  tiny_puts(const char *s);
extern int  tiny_atoi(const char *s);
extern int  tiny_vsprintf(char *out, const char *fmt, va_list ap);
extern int  tiny_sprintf(char *out, const char *fmt, ...);
