#include "../main.h"

#ifndef _CSTRING_H
#define _CSTRING_H

int GetRandomPassword(char *rebuf, const pInput process_result);
int SplitURL(const char *url, char **host, char **suffix, int *port);

#endif