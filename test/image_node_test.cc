/**
 * \file	time_test.cc
 * \author	Thibaut Mattio <thibaut.mattio@gmail.com>
 * \date	28/06/2015
 * \copyright Copyright (c) 2015 Thibaut Mattio. All rights reserved.
 * Use of this source code is governed by the MIT license that can be
 * found in the LICENSE file.
 */

#include <gtest/gtest.h>
#include <ros/ros.h>
#include <lib_atlas/ros/image_subscriber.h>
#include <lib_atlas/ros/image_publisher.h>

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  ros::init(argc, argv, "atlas_image_node_test");
  ros::NodeHandle nhl;

  static atlas::ImagePublisher publisher(nhl, "atlas_image_node_test/image");

  return RUN_ALL_TESTS();
}