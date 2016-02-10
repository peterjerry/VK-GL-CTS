#ifndef _VKTPIPELINECLEARUTIL_HPP
#define _VKTPIPELINECLEARUTIL_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2015 The Khronos Group Inc.
 * Copyright (c) 2015 Imagination Technologies Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and/or associated documentation files (the
 * "Materials"), to deal in the Materials without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Materials, and to
 * permit persons to whom the Materials are furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice(s) and this permission notice shall be included
 * in all copies or substantial portions of the Materials.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
 *
 *//*!
 * \file
 * \brief Utilities for clear values.
 *//*--------------------------------------------------------------------*/

#include "tcuTexture.hpp"
#include "tcuVectorUtil.hpp"
#include "vkDefs.hpp"

namespace vkt
{
namespace pipeline
{

tcu::Vec4						defaultClearColor				(const tcu::TextureFormat& format);
tcu::IVec4						defaultClearColorInt			(const tcu::TextureFormat& format);
tcu::UVec4						defaultClearColorUint			(const tcu::TextureFormat& format);
tcu::Vec4						defaultClearColorUnorm			(void);
float							defaultClearDepth				(void);
deUint32						defaultClearStencil				(void);

vk::VkClearDepthStencilValue	defaultClearDepthStencilValue	(void);
vk::VkClearValue				defaultClearValue				(vk::VkFormat format);

} // pipeline
} // vkt

#endif // _VKTPIPELINECLEARUTIL_HPP
