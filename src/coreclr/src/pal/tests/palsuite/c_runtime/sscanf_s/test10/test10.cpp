// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

/*============================================================================
**
** Source:  test10.c
**
** Purpose:  Tests sscanf_s with wide characters
**
**
**==========================================================================*/



#include <palsuite.h>
#include "../sscanf_s.h"

int __cdecl main(int argc, char *argv[])
{
    if (PAL_Initialize(argc, argv))
    {
        return FAIL;
    }

    DoWCharTest("1234d", "%C", convert("1"), 1);
    DoWCharTest("1234d", "%C", convert("1"), 1);
    DoWCharTest("abc", "%2C", convert("ab"), 2);
    DoWCharTest(" ab", "%C", convert(" "), 1);
    DoCharTest("ab", "%hC", "a", 1);
    DoWCharTest("ab", "%lC", convert("a"), 1);
    DoWCharTest("ab", "%LC", convert("a"), 1);
    DoWCharTest("ab", "%I64C", convert("a"), 1);

    PAL_Terminate();
    return PASS;
}
