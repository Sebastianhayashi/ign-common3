/*
 * Copyright (C) 2022 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include <gtest/gtest.h>

#include "test_config.h"

#include "gz/common/BVHLoader.hh"
#include "gz/common/Skeleton.hh"
#include "gz/common/SkeletonAnimation.hh"

using namespace ignition;

class BHVLoaderTest : public common::testing::AutoLogFixture { };

/////////////////////////////////////////////////
TEST_F(BHVLoaderTest, LoadBVH)
{
  common::BVHLoader loader;
  auto skel = loader.Load("", 1);
  EXPECT_EQ(nullptr, skel);

  skel = loader.Load(
      common::testing::TestFile("data", "cmu-13_26.bvh"), 1);
  EXPECT_NE(nullptr, skel->RootNode());

  EXPECT_EQ(skel->RootNode()->Name(), std::string("Hips"));
  EXPECT_EQ(31u, skel->NodeCount());
}
