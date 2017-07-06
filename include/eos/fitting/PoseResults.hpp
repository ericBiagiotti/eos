/*
 * eos - A 3D Morphable Model fitting library written in modern C++11/14.
 *
 * File: include/eos/fitting/fitting.hpp
 *
 * Copyright 2015 Patrik Huber
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#ifndef POSERESULTS_HPP_
#define POSERESULTS_HPP_

#include "Eigen/Core"
#include "eos/core/Mesh.hpp"
#include "eos/fitting/orthographic_camera_estimation_linear.hpp"
#include "eos/fitting/RenderingParameters.hpp"

#include "opencv2/core/core.hpp"

#include <vector>

namespace eos {
        namespace fitting {

struct PoseResults {
    Eigen::VectorXf blendshapes_as_basis;
    Eigen::VectorXf current_pca_shape;
    Eigen::VectorXf  current_combined_shape;
    eos::core::Mesh current_mesh;
    std::vector<cv::Vec4f> model_points;
    std::vector<int> vertex_indices;
    std::vector<cv::Vec2f> image_points;
    eos::fitting::ScaledOrthoProjectionParameters current_pose;
    eos::fitting::RenderingParameters rendering_params;
    int num_shape_coefficients_to_fit;
};

        } /* namespace fitting */
} /* namespace eos */

#endif /* POSERESULTS_HPP_ */
