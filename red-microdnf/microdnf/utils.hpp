/*
Copyright (C) 2020 Red Hat, Inc.

This file is part of microdnf: https://github.com/rpm-software-management/libdnf/

Microdnf is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

Microdnf is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with microdnf.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef MICRODNF_UTILS_HPP
#define MICRODNF_UTILS_HPP

#include <libdnf/base/goal.hpp>
#include <sys/types.h>

#include <string>

namespace microdnf {

/// Returns "true" if program runs with effective user ID = 0
bool am_i_root() noexcept;

/// Gets the login uid, if available.
/// The getuid() is returned instead if there was a problem.
/// The value is cached.
uid_t get_login_uid() noexcept;

/// find the base architecture
const char * get_base_arch(const char * arch);

/// detect hardware architecture
std::string detect_arch();

/// detect operation system release
std::string detect_release(const std::string & install_root_path);

}  // namespace microdnf

#endif
