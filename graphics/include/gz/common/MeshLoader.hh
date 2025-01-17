/*
 * Copyright (C) 2016 Open Source Robotics Foundation
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
#ifndef GZ_COMMON_MESHLOADER_HH_
#define GZ_COMMON_MESHLOADER_HH_

#include <string>

#include <gz/common/graphics/Export.hh>

namespace ignition
{
  namespace common
  {
    class Mesh;

    /// \class MeshLoader MeshLoader.hh ignition/common/MeshLoader.hh
    /// \brief Base class for loading meshes
    class IGNITION_COMMON_GRAPHICS_VISIBLE MeshLoader
    {
      /// \brief Constructor
      public: MeshLoader() = default;

      /// \brief Destructor
      public: virtual ~MeshLoader() = default;

      /// \brief Load a 3D mesh
      /// \param[in] _filename the path to the mesh
      /// \return a pointer to the created mesh
      public: virtual Mesh *Load(const std::string &_filename) = 0;
    };
  }
}
#endif
