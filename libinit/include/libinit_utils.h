/*
 * SPDX-FileCopyrightText: The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef LIBINIT_UTILS_H
#define LIBINIT_UTILS_H

#include <string>

void property_override(std::string prop, std::string value, bool add = true);

void set_ro_build_prop(const std::string &prop, const std::string &value, bool product = false);

std::string fingerprint_to_description(std::string fingerprint);

#endif // LIBINIT_UTILS_H
