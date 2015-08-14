/**
 * \file	config.h
 * \author	Thibaut Mattio <thibaut.mattio@gmail.com>
 * \date	28/06/2015
 * \copyright Copyright (c) 2015 Thibaut Mattio. All rights reserved.
 * Use of this source code is governed by the MIT license that can be
 * found in the LICENSE file.
 */

#include <string>

#ifndef ATLAS_DETAILS_CONFIG_H_
#define ATLAS_DETAILS_CONFIG_H_

namespace atlas {

namespace details {

/// The path where the system will save all the configurations.
const auto kConfigPath = strcat(getenv("ROS_SONIA_WS"), "config");

/// The path where the system will save all the log files (e.g. from Logger).
const auto kLogPath = strcat(getenv("ROS_SONIA_WS"), "log");

}  // namespace details

}  // namespace atlas

#endif  // ATLAS_DETAILS_CONFIG_H_
