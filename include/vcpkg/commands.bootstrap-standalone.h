#pragma once

#include <vcpkg/base/fwd/files.h>

#include <vcpkg/fwd/vcpkgcmdarguments.h>

namespace vcpkg
{
    void command_bootstrap_standalone_and_exit(const VcpkgCmdArguments& args, const Filesystem& fs);
}
