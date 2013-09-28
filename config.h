// Copyright (c) 2013 Kazumasa Kohtaka. All rights reserved.
// This file is available under the MIT license.

#ifndef CONFIG_D
#define CONFIG_D 1

#define DWORD unsigned int
#define WORD unsigned short
#define BYTE unsigned char
#define INITRNG(x) srandom((unsigned int)x)
#define COINTOSS() (random()&1)

#endif/* CONFIG_D */

