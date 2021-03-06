/*
 * This file is part of the Camera Streaming Daemon
 *
 * Copyright (C) 2017  Intel Corporation. All rights reserved.
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
 */
#include <librealsense/rs.h>

#include "stream_builder_realsense.h"
#include "stream_realsense.h"

static StreamBuilderRealsense stream_builder;

std::vector<Stream *> StreamBuilderRealsense::build_streams(ConfFile &conf)
{
    std::vector<Stream *> streams;

    streams.push_back(new StreamRealSense("/rsdepth", "RealSense Depth Camera", RS_STREAM_DEPTH));
    streams.push_back(new StreamRealSense("/rsir", "RealSense Infrared Camera", RS_STREAM_INFRARED));
    streams.push_back(new StreamRealSense("/rsir2", "RealSense Infrared Camera2", RS_STREAM_INFRARED2));

    return streams;
}
