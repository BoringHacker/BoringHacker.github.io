#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

char buf[1 << 21], *p1 = buf, *p2 = buf;
#ifndef ONLINE_JUDGE
#define gc() getchar()
#else
#define gc() (p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 1 <, 21, stdin), p1 == p2) ? EOF : *p1++)
#endif
#define is_number (ch >= '0' && ch <= '9')

