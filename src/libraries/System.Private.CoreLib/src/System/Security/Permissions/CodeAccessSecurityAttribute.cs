// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

namespace System.Security.Permissions
{
    [AttributeUsage((AttributeTargets)(109), AllowMultiple = true, Inherited = false)]
    public abstract partial class CodeAccessSecurityAttribute : SecurityAttribute
    {
        protected CodeAccessSecurityAttribute(SecurityAction action) : base(default) { }
    }
}
