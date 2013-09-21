/*
  cpgf Library
  Copyright (C) 2011 - 2013 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


#ifndef __GMETADATA_OPENGL_H
#define __GMETADATA_OPENGL_H


#include "cpgf/metadata/gmetadataconfig.h"

#include "cpgf/metadata/private/gmetadata_header.h"


namespace cpgf {


namespace metadata_internal {


template <typename MetaDefine>
void doBuildMetaData_open_gl_constants(const GMetaDataConfigFlags & /*config*/, MetaDefine define)
{
	define.CPGF_MD_TEMPLATE _enum<int>("gl_enum")

		/* Version */
		GENUM_VALUE(GL_VERSION_1_1)

		/* AccumOp */
		GENUM_VALUE(GL_ACCUM)
		GENUM_VALUE(GL_LOAD)
		GENUM_VALUE(GL_RETURN)
		GENUM_VALUE(GL_MULT)
		GENUM_VALUE(GL_ADD)

		/* AlphaFunction */
		GENUM_VALUE(GL_NEVER)
		GENUM_VALUE(GL_LESS)
		GENUM_VALUE(GL_EQUAL)
		GENUM_VALUE(GL_LEQUAL)
		GENUM_VALUE(GL_GREATER)
		GENUM_VALUE(GL_NOTEQUAL)
		GENUM_VALUE(GL_GEQUAL)
		GENUM_VALUE(GL_ALWAYS)

		/* AttribMask */
		GENUM_VALUE(GL_CURRENT_BIT)
		GENUM_VALUE(GL_POINT_BIT)
		GENUM_VALUE(GL_LINE_BIT)
		GENUM_VALUE(GL_POLYGON_BIT)
		GENUM_VALUE(GL_POLYGON_STIPPLE_BIT)
		GENUM_VALUE(GL_PIXEL_MODE_BIT)
		GENUM_VALUE(GL_LIGHTING_BIT)
		GENUM_VALUE(GL_FOG_BIT)
		GENUM_VALUE(GL_DEPTH_BUFFER_BIT)
		GENUM_VALUE(GL_ACCUM_BUFFER_BIT)
		GENUM_VALUE(GL_STENCIL_BUFFER_BIT)
		GENUM_VALUE(GL_VIEWPORT_BIT)
		GENUM_VALUE(GL_TRANSFORM_BIT)
		GENUM_VALUE(GL_ENABLE_BIT)
		GENUM_VALUE(GL_COLOR_BUFFER_BIT)
		GENUM_VALUE(GL_HINT_BIT)
		GENUM_VALUE(GL_EVAL_BIT)
		GENUM_VALUE(GL_LIST_BIT)
		GENUM_VALUE(GL_TEXTURE_BIT)
		GENUM_VALUE(GL_SCISSOR_BIT)
		GENUM_VALUE(GL_ALL_ATTRIB_BITS)

		/* BeginMode */
		GENUM_VALUE(GL_POINTS)
		GENUM_VALUE(GL_LINES)
		GENUM_VALUE(GL_LINE_LOOP)
		GENUM_VALUE(GL_LINE_STRIP)
		GENUM_VALUE(GL_TRIANGLES)
		GENUM_VALUE(GL_TRIANGLE_STRIP)
		GENUM_VALUE(GL_TRIANGLE_FAN)
		GENUM_VALUE(GL_QUADS)
		GENUM_VALUE(GL_QUAD_STRIP)
		GENUM_VALUE(GL_POLYGON)

		/* BlendingFactorDest */
		GENUM_VALUE(GL_ZERO)
		GENUM_VALUE(GL_ONE)
		GENUM_VALUE(GL_SRC_COLOR)
		GENUM_VALUE(GL_ONE_MINUS_SRC_COLOR)
		GENUM_VALUE(GL_SRC_ALPHA)
		GENUM_VALUE(GL_ONE_MINUS_SRC_ALPHA)
		GENUM_VALUE(GL_DST_ALPHA)
		GENUM_VALUE(GL_ONE_MINUS_DST_ALPHA)

		/* BlendingFactorSrc */
		/*      GL_ZERO */
		/*      GL_ONE */
		GENUM_VALUE(GL_DST_COLOR)
		GENUM_VALUE(GL_ONE_MINUS_DST_COLOR)
		GENUM_VALUE(GL_SRC_ALPHA_SATURATE)
		/*      GL_SRC_ALPHA */
		/*      GL_ONE_MINUS_SRC_ALPHA */
		/*      GL_DST_ALPHA */
		/*      GL_ONE_MINUS_DST_ALPHA */

		/* Boolean */
		GENUM_VALUE(GL_TRUE)
		GENUM_VALUE(GL_FALSE)

		/* ClearBufferMask */
		/*      GL_COLOR_BUFFER_BIT */
		/*      GL_ACCUM_BUFFER_BIT */
		/*      GL_STENCIL_BUFFER_BIT */
		/*      GL_DEPTH_BUFFER_BIT */

		/* ClientArrayType */
		/*      GL_VERTEX_ARRAY */
		/*      GL_NORMAL_ARRAY */
		/*      GL_COLOR_ARRAY */
		/*      GL_INDEX_ARRAY */
		/*      GL_TEXTURE_COORD_ARRAY */
		/*      GL_EDGE_FLAG_ARRAY */

		/* ClipPlaneName */
		GENUM_VALUE(GL_CLIP_PLANE0)
		GENUM_VALUE(GL_CLIP_PLANE1)
		GENUM_VALUE(GL_CLIP_PLANE2)
		GENUM_VALUE(GL_CLIP_PLANE3)
		GENUM_VALUE(GL_CLIP_PLANE4)
		GENUM_VALUE(GL_CLIP_PLANE5)

		/* ColorMaterialFace */
		/*      GL_FRONT */
		/*      GL_BACK */
		/*      GL_FRONT_AND_BACK */

		/* ColorMaterialParameter */
		/*      GL_AMBIENT */
		/*      GL_DIFFUSE */
		/*      GL_SPECULAR */
		/*      GL_EMISSION */
		/*      GL_AMBIENT_AND_DIFFUSE */

		/* ColorPointerType */
		/*      GL_BYTE */
		/*      GL_UNSIGNED_BYTE */
		/*      GL_SHORT */
		/*      GL_UNSIGNED_SHORT */
		/*      GL_INT */
		/*      GL_UNSIGNED_INT */
		/*      GL_FLOAT */
		/*      GL_DOUBLE */

		/* CullFaceMode */
		/*      GL_FRONT */
		/*      GL_BACK */
		/*      GL_FRONT_AND_BACK */

		/* DataType */
		GENUM_VALUE(GL_BYTE)
		GENUM_VALUE(GL_UNSIGNED_BYTE)
		GENUM_VALUE(GL_SHORT)
		GENUM_VALUE(GL_UNSIGNED_SHORT)
		GENUM_VALUE(GL_INT)
		GENUM_VALUE(GL_UNSIGNED_INT)
		GENUM_VALUE(GL_FLOAT)
		GENUM_VALUE(GL_2_BYTES)
		GENUM_VALUE(GL_3_BYTES)
		GENUM_VALUE(GL_4_BYTES)
		GENUM_VALUE(GL_DOUBLE)

		/* DepthFunction */
		/*      GL_NEVER */
		/*      GL_LESS */
		/*      GL_EQUAL */
		/*      GL_LEQUAL */
		/*      GL_GREATER */
		/*      GL_NOTEQUAL */
		/*      GL_GEQUAL */
		/*      GL_ALWAYS */

		/* DrawBufferMode */
		GENUM_VALUE(GL_NONE)
		GENUM_VALUE(GL_FRONT_LEFT)
		GENUM_VALUE(GL_FRONT_RIGHT)
		GENUM_VALUE(GL_BACK_LEFT)
		GENUM_VALUE(GL_BACK_RIGHT)
		GENUM_VALUE(GL_FRONT)
		GENUM_VALUE(GL_BACK)
		GENUM_VALUE(GL_LEFT)
		GENUM_VALUE(GL_RIGHT)
		GENUM_VALUE(GL_FRONT_AND_BACK)
		GENUM_VALUE(GL_AUX0)
		GENUM_VALUE(GL_AUX1)
		GENUM_VALUE(GL_AUX2)
		GENUM_VALUE(GL_AUX3)

		/* Enable */
		/*      GL_FOG */
		/*      GL_LIGHTING */
		/*      GL_TEXTURE_1D */
		/*      GL_TEXTURE_2D */
		/*      GL_LINE_STIPPLE */
		/*      GL_POLYGON_STIPPLE */
		/*      GL_CULL_FACE */
		/*      GL_ALPHA_TEST */
		/*      GL_BLEND */
		/*      GL_INDEX_LOGIC_OP */
		/*      GL_COLOR_LOGIC_OP */
		/*      GL_DITHER */
		/*      GL_STENCIL_TEST */
		/*      GL_DEPTH_TEST */
		/*      GL_CLIP_PLANE0 */
		/*      GL_CLIP_PLANE1 */
		/*      GL_CLIP_PLANE2 */
		/*      GL_CLIP_PLANE3 */
		/*      GL_CLIP_PLANE4 */
		/*      GL_CLIP_PLANE5 */
		/*      GL_LIGHT0 */
		/*      GL_LIGHT1 */
		/*      GL_LIGHT2 */
		/*      GL_LIGHT3 */
		/*      GL_LIGHT4 */
		/*      GL_LIGHT5 */
		/*      GL_LIGHT6 */
		/*      GL_LIGHT7 */
		/*      GL_TEXTURE_GEN_S */
		/*      GL_TEXTURE_GEN_T */
		/*      GL_TEXTURE_GEN_R */
		/*      GL_TEXTURE_GEN_Q */
		/*      GL_MAP1_VERTEX_3 */
		/*      GL_MAP1_VERTEX_4 */
		/*      GL_MAP1_COLOR_4 */
		/*      GL_MAP1_INDEX */
		/*      GL_MAP1_NORMAL */
		/*      GL_MAP1_TEXTURE_COORD_1 */
		/*      GL_MAP1_TEXTURE_COORD_2 */
		/*      GL_MAP1_TEXTURE_COORD_3 */
		/*      GL_MAP1_TEXTURE_COORD_4 */
		/*      GL_MAP2_VERTEX_3 */
		/*      GL_MAP2_VERTEX_4 */
		/*      GL_MAP2_COLOR_4 */
		/*      GL_MAP2_INDEX */
		/*      GL_MAP2_NORMAL */
		/*      GL_MAP2_TEXTURE_COORD_1 */
		/*      GL_MAP2_TEXTURE_COORD_2 */
		/*      GL_MAP2_TEXTURE_COORD_3 */
		/*      GL_MAP2_TEXTURE_COORD_4 */
		/*      GL_POINT_SMOOTH */
		/*      GL_LINE_SMOOTH */
		/*      GL_POLYGON_SMOOTH */
		/*      GL_SCISSOR_TEST */
		/*      GL_COLOR_MATERIAL */
		/*      GL_NORMALIZE */
		/*      GL_AUTO_NORMAL */
		/*      GL_VERTEX_ARRAY */
		/*      GL_NORMAL_ARRAY */
		/*      GL_COLOR_ARRAY */
		/*      GL_INDEX_ARRAY */
		/*      GL_TEXTURE_COORD_ARRAY */
		/*      GL_EDGE_FLAG_ARRAY */
		/*      GL_POLYGON_OFFSET_POINT */
		/*      GL_POLYGON_OFFSET_LINE */
		/*      GL_POLYGON_OFFSET_FILL */

		/* ErrorCode */
		GENUM_VALUE(GL_NO_ERROR)
		GENUM_VALUE(GL_INVALID_ENUM)
		GENUM_VALUE(GL_INVALID_VALUE)
		GENUM_VALUE(GL_INVALID_OPERATION)
		GENUM_VALUE(GL_STACK_OVERFLOW)
		GENUM_VALUE(GL_STACK_UNDERFLOW)
		GENUM_VALUE(GL_OUT_OF_MEMORY)

		/* FeedBackMode */
		GENUM_VALUE(GL_2D)
		GENUM_VALUE(GL_3D)
		GENUM_VALUE(GL_3D_COLOR)
		GENUM_VALUE(GL_3D_COLOR_TEXTURE)
		GENUM_VALUE(GL_4D_COLOR_TEXTURE)

		/* FeedBackToken */
		GENUM_VALUE(GL_PASS_THROUGH_TOKEN)
		GENUM_VALUE(GL_POINT_TOKEN)
		GENUM_VALUE(GL_LINE_TOKEN)
		GENUM_VALUE(GL_POLYGON_TOKEN)
		GENUM_VALUE(GL_BITMAP_TOKEN)
		GENUM_VALUE(GL_DRAW_PIXEL_TOKEN)
		GENUM_VALUE(GL_COPY_PIXEL_TOKEN)
		GENUM_VALUE(GL_LINE_RESET_TOKEN)

		/* FogMode */
		/*      GL_LINEAR */
		GENUM_VALUE(GL_EXP)
		GENUM_VALUE(GL_EXP2)


		/* FogParameter */
		/*      GL_FOG_COLOR */
		/*      GL_FOG_DENSITY */
		/*      GL_FOG_END */
		/*      GL_FOG_INDEX */
		/*      GL_FOG_MODE */
		/*      GL_FOG_START */

		/* FrontFaceDirection */
		GENUM_VALUE(GL_CW)
		GENUM_VALUE(GL_CCW)

		/* GetMapTarget */
		GENUM_VALUE(GL_COEFF)
		GENUM_VALUE(GL_ORDER)
		GENUM_VALUE(GL_DOMAIN)

		/* GetPixelMap */
		/*      GL_PIXEL_MAP_I_TO_I */
		/*      GL_PIXEL_MAP_S_TO_S */
		/*      GL_PIXEL_MAP_I_TO_R */
		/*      GL_PIXEL_MAP_I_TO_G */
		/*      GL_PIXEL_MAP_I_TO_B */
		/*      GL_PIXEL_MAP_I_TO_A */
		/*      GL_PIXEL_MAP_R_TO_R */
		/*      GL_PIXEL_MAP_G_TO_G */
		/*      GL_PIXEL_MAP_B_TO_B */
		/*      GL_PIXEL_MAP_A_TO_A */

		/* GetPointerTarget */
		/*      GL_VERTEX_ARRAY_POINTER */
		/*      GL_NORMAL_ARRAY_POINTER */
		/*      GL_COLOR_ARRAY_POINTER */
		/*      GL_INDEX_ARRAY_POINTER */
		/*      GL_TEXTURE_COORD_ARRAY_POINTER */
		/*      GL_EDGE_FLAG_ARRAY_POINTER */

		/* GetTarget */
		GENUM_VALUE(GL_CURRENT_COLOR)
		GENUM_VALUE(GL_CURRENT_INDEX)
		GENUM_VALUE(GL_CURRENT_NORMAL)
		GENUM_VALUE(GL_CURRENT_TEXTURE_COORDS)
		GENUM_VALUE(GL_CURRENT_RASTER_COLOR)
		GENUM_VALUE(GL_CURRENT_RASTER_INDEX)
		GENUM_VALUE(GL_CURRENT_RASTER_TEXTURE_COORDS)
		GENUM_VALUE(GL_CURRENT_RASTER_POSITION)
		GENUM_VALUE(GL_CURRENT_RASTER_POSITION_VALID)
		GENUM_VALUE(GL_CURRENT_RASTER_DISTANCE)
		GENUM_VALUE(GL_POINT_SMOOTH)
		GENUM_VALUE(GL_POINT_SIZE)
		GENUM_VALUE(GL_POINT_SIZE_RANGE)
		GENUM_VALUE(GL_POINT_SIZE_GRANULARITY)
		GENUM_VALUE(GL_LINE_SMOOTH)
		GENUM_VALUE(GL_LINE_WIDTH)
		GENUM_VALUE(GL_LINE_WIDTH_RANGE)
		GENUM_VALUE(GL_LINE_WIDTH_GRANULARITY)
		GENUM_VALUE(GL_LINE_STIPPLE)
		GENUM_VALUE(GL_LINE_STIPPLE_PATTERN)
		GENUM_VALUE(GL_LINE_STIPPLE_REPEAT)
		GENUM_VALUE(GL_LIST_MODE)
		GENUM_VALUE(GL_MAX_LIST_NESTING)
		GENUM_VALUE(GL_LIST_BASE)
		GENUM_VALUE(GL_LIST_INDEX)
		GENUM_VALUE(GL_POLYGON_MODE)
		GENUM_VALUE(GL_POLYGON_SMOOTH)
		GENUM_VALUE(GL_POLYGON_STIPPLE)
		GENUM_VALUE(GL_EDGE_FLAG)
		GENUM_VALUE(GL_CULL_FACE)
		GENUM_VALUE(GL_CULL_FACE_MODE)
		GENUM_VALUE(GL_FRONT_FACE)
		GENUM_VALUE(GL_LIGHTING)
		GENUM_VALUE(GL_LIGHT_MODEL_LOCAL_VIEWER)
		GENUM_VALUE(GL_LIGHT_MODEL_TWO_SIDE)
		GENUM_VALUE(GL_LIGHT_MODEL_AMBIENT)
		GENUM_VALUE(GL_SHADE_MODEL)
		GENUM_VALUE(GL_COLOR_MATERIAL_FACE)
		GENUM_VALUE(GL_COLOR_MATERIAL_PARAMETER)
		GENUM_VALUE(GL_COLOR_MATERIAL)
		GENUM_VALUE(GL_FOG)
		GENUM_VALUE(GL_FOG_INDEX)
		GENUM_VALUE(GL_FOG_DENSITY)
		GENUM_VALUE(GL_FOG_START)
		GENUM_VALUE(GL_FOG_END)
		GENUM_VALUE(GL_FOG_MODE)
		GENUM_VALUE(GL_FOG_COLOR)
		GENUM_VALUE(GL_DEPTH_RANGE)
		GENUM_VALUE(GL_DEPTH_TEST)
		GENUM_VALUE(GL_DEPTH_WRITEMASK)
		GENUM_VALUE(GL_DEPTH_CLEAR_VALUE)
		GENUM_VALUE(GL_DEPTH_FUNC)
		GENUM_VALUE(GL_ACCUM_CLEAR_VALUE)
		GENUM_VALUE(GL_STENCIL_TEST)
		GENUM_VALUE(GL_STENCIL_CLEAR_VALUE)
		GENUM_VALUE(GL_STENCIL_FUNC)
		GENUM_VALUE(GL_STENCIL_VALUE_MASK)
		GENUM_VALUE(GL_STENCIL_FAIL)
		GENUM_VALUE(GL_STENCIL_PASS_DEPTH_FAIL)
		GENUM_VALUE(GL_STENCIL_PASS_DEPTH_PASS)
		GENUM_VALUE(GL_STENCIL_REF)
		GENUM_VALUE(GL_STENCIL_WRITEMASK)
		GENUM_VALUE(GL_MATRIX_MODE)
		GENUM_VALUE(GL_NORMALIZE)
		GENUM_VALUE(GL_VIEWPORT)
		GENUM_VALUE(GL_MODELVIEW_STACK_DEPTH)
		GENUM_VALUE(GL_PROJECTION_STACK_DEPTH)
		GENUM_VALUE(GL_TEXTURE_STACK_DEPTH)
		GENUM_VALUE(GL_MODELVIEW_MATRIX)
		GENUM_VALUE(GL_PROJECTION_MATRIX)
		GENUM_VALUE(GL_TEXTURE_MATRIX)
		GENUM_VALUE(GL_ATTRIB_STACK_DEPTH)
		GENUM_VALUE(GL_CLIENT_ATTRIB_STACK_DEPTH)
		GENUM_VALUE(GL_ALPHA_TEST)
		GENUM_VALUE(GL_ALPHA_TEST_FUNC)
		GENUM_VALUE(GL_ALPHA_TEST_REF)
		GENUM_VALUE(GL_DITHER)
		GENUM_VALUE(GL_BLEND_DST)
		GENUM_VALUE(GL_BLEND_SRC)
		GENUM_VALUE(GL_BLEND)
		GENUM_VALUE(GL_LOGIC_OP_MODE)
		GENUM_VALUE(GL_INDEX_LOGIC_OP)
		GENUM_VALUE(GL_COLOR_LOGIC_OP)
		GENUM_VALUE(GL_AUX_BUFFERS)
		GENUM_VALUE(GL_DRAW_BUFFER)
		GENUM_VALUE(GL_READ_BUFFER)
		GENUM_VALUE(GL_SCISSOR_BOX)
		GENUM_VALUE(GL_SCISSOR_TEST)
		GENUM_VALUE(GL_INDEX_CLEAR_VALUE)
		GENUM_VALUE(GL_INDEX_WRITEMASK)
		GENUM_VALUE(GL_COLOR_CLEAR_VALUE)
		GENUM_VALUE(GL_COLOR_WRITEMASK)
		GENUM_VALUE(GL_INDEX_MODE)
		GENUM_VALUE(GL_RGBA_MODE)
		GENUM_VALUE(GL_DOUBLEBUFFER)
		GENUM_VALUE(GL_STEREO)
		GENUM_VALUE(GL_RENDER_MODE)
		GENUM_VALUE(GL_PERSPECTIVE_CORRECTION_HINT)
		GENUM_VALUE(GL_POINT_SMOOTH_HINT)
		GENUM_VALUE(GL_LINE_SMOOTH_HINT)
		GENUM_VALUE(GL_POLYGON_SMOOTH_HINT)
		GENUM_VALUE(GL_FOG_HINT)
		GENUM_VALUE(GL_TEXTURE_GEN_S)
		GENUM_VALUE(GL_TEXTURE_GEN_T)
		GENUM_VALUE(GL_TEXTURE_GEN_R)
		GENUM_VALUE(GL_TEXTURE_GEN_Q)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_I)
		GENUM_VALUE(GL_PIXEL_MAP_S_TO_S)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_R)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_G)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_B)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_A)
		GENUM_VALUE(GL_PIXEL_MAP_R_TO_R)
		GENUM_VALUE(GL_PIXEL_MAP_G_TO_G)
		GENUM_VALUE(GL_PIXEL_MAP_B_TO_B)
		GENUM_VALUE(GL_PIXEL_MAP_A_TO_A)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_I_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_S_TO_S_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_R_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_G_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_B_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_I_TO_A_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_R_TO_R_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_G_TO_G_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_B_TO_B_SIZE)
		GENUM_VALUE(GL_PIXEL_MAP_A_TO_A_SIZE)
		GENUM_VALUE(GL_UNPACK_SWAP_BYTES)
		GENUM_VALUE(GL_UNPACK_LSB_FIRST)
		GENUM_VALUE(GL_UNPACK_ROW_LENGTH)
		GENUM_VALUE(GL_UNPACK_SKIP_ROWS)
		GENUM_VALUE(GL_UNPACK_SKIP_PIXELS)
		GENUM_VALUE(GL_UNPACK_ALIGNMENT)
		GENUM_VALUE(GL_PACK_SWAP_BYTES)
		GENUM_VALUE(GL_PACK_LSB_FIRST)
		GENUM_VALUE(GL_PACK_ROW_LENGTH)
		GENUM_VALUE(GL_PACK_SKIP_ROWS)
		GENUM_VALUE(GL_PACK_SKIP_PIXELS)
		GENUM_VALUE(GL_PACK_ALIGNMENT)
		GENUM_VALUE(GL_MAP_COLOR)
		GENUM_VALUE(GL_MAP_STENCIL)
		GENUM_VALUE(GL_INDEX_SHIFT)
		GENUM_VALUE(GL_INDEX_OFFSET)
		GENUM_VALUE(GL_RED_SCALE)
		GENUM_VALUE(GL_RED_BIAS)
		GENUM_VALUE(GL_ZOOM_X)
		GENUM_VALUE(GL_ZOOM_Y)
		GENUM_VALUE(GL_GREEN_SCALE)
		GENUM_VALUE(GL_GREEN_BIAS)
		GENUM_VALUE(GL_BLUE_SCALE)
		GENUM_VALUE(GL_BLUE_BIAS)
		GENUM_VALUE(GL_ALPHA_SCALE)
		GENUM_VALUE(GL_ALPHA_BIAS)
		GENUM_VALUE(GL_DEPTH_SCALE)
		GENUM_VALUE(GL_DEPTH_BIAS)
		GENUM_VALUE(GL_MAX_EVAL_ORDER)
		GENUM_VALUE(GL_MAX_LIGHTS)
		GENUM_VALUE(GL_MAX_CLIP_PLANES)
		GENUM_VALUE(GL_MAX_TEXTURE_SIZE)
		GENUM_VALUE(GL_MAX_PIXEL_MAP_TABLE)
		GENUM_VALUE(GL_MAX_ATTRIB_STACK_DEPTH)
		GENUM_VALUE(GL_MAX_MODELVIEW_STACK_DEPTH)
		GENUM_VALUE(GL_MAX_NAME_STACK_DEPTH)
		GENUM_VALUE(GL_MAX_PROJECTION_STACK_DEPTH)
		GENUM_VALUE(GL_MAX_TEXTURE_STACK_DEPTH)
		GENUM_VALUE(GL_MAX_VIEWPORT_DIMS)
		GENUM_VALUE(GL_MAX_CLIENT_ATTRIB_STACK_DEPTH)
		GENUM_VALUE(GL_SUBPIXEL_BITS)
		GENUM_VALUE(GL_INDEX_BITS)
		GENUM_VALUE(GL_RED_BITS)
		GENUM_VALUE(GL_GREEN_BITS)
		GENUM_VALUE(GL_BLUE_BITS)
		GENUM_VALUE(GL_ALPHA_BITS)
		GENUM_VALUE(GL_DEPTH_BITS)
		GENUM_VALUE(GL_STENCIL_BITS)
		GENUM_VALUE(GL_ACCUM_RED_BITS)
		GENUM_VALUE(GL_ACCUM_GREEN_BITS)
		GENUM_VALUE(GL_ACCUM_BLUE_BITS)
		GENUM_VALUE(GL_ACCUM_ALPHA_BITS)
		GENUM_VALUE(GL_NAME_STACK_DEPTH)
		GENUM_VALUE(GL_AUTO_NORMAL)
		GENUM_VALUE(GL_MAP1_COLOR_4)
		GENUM_VALUE(GL_MAP1_INDEX)
		GENUM_VALUE(GL_MAP1_NORMAL)
		GENUM_VALUE(GL_MAP1_TEXTURE_COORD_1)
		GENUM_VALUE(GL_MAP1_TEXTURE_COORD_2)
		GENUM_VALUE(GL_MAP1_TEXTURE_COORD_3)
		GENUM_VALUE(GL_MAP1_TEXTURE_COORD_4)
		GENUM_VALUE(GL_MAP1_VERTEX_3)
		GENUM_VALUE(GL_MAP1_VERTEX_4)
		GENUM_VALUE(GL_MAP2_COLOR_4)
		GENUM_VALUE(GL_MAP2_INDEX)
		GENUM_VALUE(GL_MAP2_NORMAL)
		GENUM_VALUE(GL_MAP2_TEXTURE_COORD_1)
		GENUM_VALUE(GL_MAP2_TEXTURE_COORD_2)
		GENUM_VALUE(GL_MAP2_TEXTURE_COORD_3)
		GENUM_VALUE(GL_MAP2_TEXTURE_COORD_4)
		GENUM_VALUE(GL_MAP2_VERTEX_3)
		GENUM_VALUE(GL_MAP2_VERTEX_4)
		GENUM_VALUE(GL_MAP1_GRID_DOMAIN)
		GENUM_VALUE(GL_MAP1_GRID_SEGMENTS)
		GENUM_VALUE(GL_MAP2_GRID_DOMAIN)
		GENUM_VALUE(GL_MAP2_GRID_SEGMENTS)
		GENUM_VALUE(GL_TEXTURE_1D)
		GENUM_VALUE(GL_TEXTURE_2D)
		GENUM_VALUE(GL_FEEDBACK_BUFFER_POINTER)
		GENUM_VALUE(GL_FEEDBACK_BUFFER_SIZE)
		GENUM_VALUE(GL_FEEDBACK_BUFFER_TYPE)
		GENUM_VALUE(GL_SELECTION_BUFFER_POINTER)
		GENUM_VALUE(GL_SELECTION_BUFFER_SIZE)
		/*      GL_TEXTURE_BINDING_1D */
		/*      GL_TEXTURE_BINDING_2D */
		/*      GL_VERTEX_ARRAY */
		/*      GL_NORMAL_ARRAY */
		/*      GL_COLOR_ARRAY */
		/*      GL_INDEX_ARRAY */
		/*      GL_TEXTURE_COORD_ARRAY */
		/*      GL_EDGE_FLAG_ARRAY */
		/*      GL_VERTEX_ARRAY_SIZE */
		/*      GL_VERTEX_ARRAY_TYPE */
		/*      GL_VERTEX_ARRAY_STRIDE */
		/*      GL_NORMAL_ARRAY_TYPE */
		/*      GL_NORMAL_ARRAY_STRIDE */
		/*      GL_COLOR_ARRAY_SIZE */
		/*      GL_COLOR_ARRAY_TYPE */
		/*      GL_COLOR_ARRAY_STRIDE */
		/*      GL_INDEX_ARRAY_TYPE */
		/*      GL_INDEX_ARRAY_STRIDE */
		/*      GL_TEXTURE_COORD_ARRAY_SIZE */
		/*      GL_TEXTURE_COORD_ARRAY_TYPE */
		/*      GL_TEXTURE_COORD_ARRAY_STRIDE */
		/*      GL_EDGE_FLAG_ARRAY_STRIDE */
		/*      GL_POLYGON_OFFSET_FACTOR */
		/*      GL_POLYGON_OFFSET_UNITS */

		/* GetTextureParameter */
		/*      GL_TEXTURE_MAG_FILTER */
		/*      GL_TEXTURE_MIN_FILTER */
		/*      GL_TEXTURE_WRAP_S */
		/*      GL_TEXTURE_WRAP_T */
		GENUM_VALUE(GL_TEXTURE_WIDTH)
		GENUM_VALUE(GL_TEXTURE_HEIGHT)
		GENUM_VALUE(GL_TEXTURE_INTERNAL_FORMAT)
		GENUM_VALUE(GL_TEXTURE_BORDER_COLOR)
		GENUM_VALUE(GL_TEXTURE_BORDER)
		/*      GL_TEXTURE_RED_SIZE */
		/*      GL_TEXTURE_GREEN_SIZE */
		/*      GL_TEXTURE_BLUE_SIZE */
		/*      GL_TEXTURE_ALPHA_SIZE */
		/*      GL_TEXTURE_LUMINANCE_SIZE */
		/*      GL_TEXTURE_INTENSITY_SIZE */
		/*      GL_TEXTURE_PRIORITY */
		/*      GL_TEXTURE_RESIDENT */

		/* HintMode */
		GENUM_VALUE(GL_DONT_CARE)
		GENUM_VALUE(GL_FASTEST)
		GENUM_VALUE(GL_NICEST)

		/* HintTarget */
		/*      GL_PERSPECTIVE_CORRECTION_HINT */
		/*      GL_POINT_SMOOTH_HINT */
		/*      GL_LINE_SMOOTH_HINT */
		/*      GL_POLYGON_SMOOTH_HINT */
		/*      GL_FOG_HINT */
		/*      GL_PHONG_HINT */

		/* IndexPointerType */
		/*      GL_SHORT */
		/*      GL_INT */
		/*      GL_FLOAT */
		/*      GL_DOUBLE */

		/* LightModelParameter */
		/*      GL_LIGHT_MODEL_AMBIENT */
		/*      GL_LIGHT_MODEL_LOCAL_VIEWER */
		/*      GL_LIGHT_MODEL_TWO_SIDE */

		/* LightName */
		GENUM_VALUE(GL_LIGHT0)
		GENUM_VALUE(GL_LIGHT1)
		GENUM_VALUE(GL_LIGHT2)
		GENUM_VALUE(GL_LIGHT3)
		GENUM_VALUE(GL_LIGHT4)
		GENUM_VALUE(GL_LIGHT5)
		GENUM_VALUE(GL_LIGHT6)
		GENUM_VALUE(GL_LIGHT7)

		/* LightParameter */
		GENUM_VALUE(GL_AMBIENT)
		GENUM_VALUE(GL_DIFFUSE)
		GENUM_VALUE(GL_SPECULAR)
		GENUM_VALUE(GL_POSITION)
		GENUM_VALUE(GL_SPOT_DIRECTION)
		GENUM_VALUE(GL_SPOT_EXPONENT)
		GENUM_VALUE(GL_SPOT_CUTOFF)
		GENUM_VALUE(GL_CONSTANT_ATTENUATION)
		GENUM_VALUE(GL_LINEAR_ATTENUATION)
		GENUM_VALUE(GL_QUADRATIC_ATTENUATION)

		/* InterleavedArrays */
		/*      GL_V2F */
		/*      GL_V3F */
		/*      GL_C4UB_V2F */
		/*      GL_C4UB_V3F */
		/*      GL_C3F_V3F */
		/*      GL_N3F_V3F */
		/*      GL_C4F_N3F_V3F */
		/*      GL_T2F_V3F */
		/*      GL_T4F_V4F */
		/*      GL_T2F_C4UB_V3F */
		/*      GL_T2F_C3F_V3F */
		/*      GL_T2F_N3F_V3F */
		/*      GL_T2F_C4F_N3F_V3F */
		/*      GL_T4F_C4F_N3F_V4F */

		/* ListMode */
		GENUM_VALUE(GL_COMPILE)
		GENUM_VALUE(GL_COMPILE_AND_EXECUTE)

		/* ListNameType */
		/*      GL_BYTE */
		/*      GL_UNSIGNED_BYTE */
		/*      GL_SHORT */
		/*      GL_UNSIGNED_SHORT */
		/*      GL_INT */
		/*      GL_UNSIGNED_INT */
		/*      GL_FLOAT */
		/*      GL_2_BYTES */
		/*      GL_3_BYTES */
		/*      GL_4_BYTES */

		/* LogicOp */
		GENUM_VALUE(GL_CLEAR)
		GENUM_VALUE(GL_AND)
		GENUM_VALUE(GL_AND_REVERSE)
		GENUM_VALUE(GL_COPY)
		GENUM_VALUE(GL_AND_INVERTED)
		GENUM_VALUE(GL_NOOP)
		GENUM_VALUE(GL_XOR)
		GENUM_VALUE(GL_OR)
		GENUM_VALUE(GL_NOR)
		GENUM_VALUE(GL_EQUIV)
		GENUM_VALUE(GL_INVERT)
		GENUM_VALUE(GL_OR_REVERSE)
		GENUM_VALUE(GL_COPY_INVERTED)
		GENUM_VALUE(GL_OR_INVERTED)
		GENUM_VALUE(GL_NAND)
		GENUM_VALUE(GL_SET)

		/* MapTarget */
		/*      GL_MAP1_COLOR_4 */
		/*      GL_MAP1_INDEX */
		/*      GL_MAP1_NORMAL */
		/*      GL_MAP1_TEXTURE_COORD_1 */
		/*      GL_MAP1_TEXTURE_COORD_2 */
		/*      GL_MAP1_TEXTURE_COORD_3 */
		/*      GL_MAP1_TEXTURE_COORD_4 */
		/*      GL_MAP1_VERTEX_3 */
		/*      GL_MAP1_VERTEX_4 */
		/*      GL_MAP2_COLOR_4 */
		/*      GL_MAP2_INDEX */
		/*      GL_MAP2_NORMAL */
		/*      GL_MAP2_TEXTURE_COORD_1 */
		/*      GL_MAP2_TEXTURE_COORD_2 */
		/*      GL_MAP2_TEXTURE_COORD_3 */
		/*      GL_MAP2_TEXTURE_COORD_4 */
		/*      GL_MAP2_VERTEX_3 */
		/*      GL_MAP2_VERTEX_4 */

		/* MaterialFace */
		/*      GL_FRONT */
		/*      GL_BACK */
		/*      GL_FRONT_AND_BACK */

		/* MaterialParameter */
		GENUM_VALUE(GL_EMISSION)
		GENUM_VALUE(GL_SHININESS)
		GENUM_VALUE(GL_AMBIENT_AND_DIFFUSE)
		GENUM_VALUE(GL_COLOR_INDEXES)
		/*      GL_AMBIENT */
		/*      GL_DIFFUSE */
		/*      GL_SPECULAR */

		/* MatrixMode */
		GENUM_VALUE(GL_MODELVIEW)
		GENUM_VALUE(GL_PROJECTION)
		GENUM_VALUE(GL_TEXTURE)

		/* MeshMode1 */
		/*      GL_POINT */
		/*      GL_LINE */

		/* MeshMode2 */
		/*      GL_POINT */
		/*      GL_LINE */
		/*      GL_FILL */

		/* NormalPointerType */
		/*      GL_BYTE */
		/*      GL_SHORT */
		/*      GL_INT */
		/*      GL_FLOAT */
		/*      GL_DOUBLE */

		/* PixelCopyType */
		GENUM_VALUE(GL_COLOR)
		GENUM_VALUE(GL_DEPTH)
		GENUM_VALUE(GL_STENCIL)

		/* PixelFormat */
		GENUM_VALUE(GL_COLOR_INDEX)
		GENUM_VALUE(GL_STENCIL_INDEX)
		GENUM_VALUE(GL_DEPTH_COMPONENT)
		GENUM_VALUE(GL_RED)
		GENUM_VALUE(GL_GREEN)
		GENUM_VALUE(GL_BLUE)
		GENUM_VALUE(GL_ALPHA)
		GENUM_VALUE(GL_RGB)
		GENUM_VALUE(GL_RGBA)
		GENUM_VALUE(GL_LUMINANCE)
		GENUM_VALUE(GL_LUMINANCE_ALPHA)

		/* PixelMap */
		/*      GL_PIXEL_MAP_I_TO_I */
		/*      GL_PIXEL_MAP_S_TO_S */
		/*      GL_PIXEL_MAP_I_TO_R */
		/*      GL_PIXEL_MAP_I_TO_G */
		/*      GL_PIXEL_MAP_I_TO_B */
		/*      GL_PIXEL_MAP_I_TO_A */
		/*      GL_PIXEL_MAP_R_TO_R */
		/*      GL_PIXEL_MAP_G_TO_G */
		/*      GL_PIXEL_MAP_B_TO_B */
		/*      GL_PIXEL_MAP_A_TO_A */

		/* PixelStore */
		/*      GL_UNPACK_SWAP_BYTES */
		/*      GL_UNPACK_LSB_FIRST */
		/*      GL_UNPACK_ROW_LENGTH */
		/*      GL_UNPACK_SKIP_ROWS */
		/*      GL_UNPACK_SKIP_PIXELS */
		/*      GL_UNPACK_ALIGNMENT */
		/*      GL_PACK_SWAP_BYTES */
		/*      GL_PACK_LSB_FIRST */
		/*      GL_PACK_ROW_LENGTH */
		/*      GL_PACK_SKIP_ROWS */
		/*      GL_PACK_SKIP_PIXELS */
		/*      GL_PACK_ALIGNMENT */

		/* PixelTransfer */
		/*      GL_MAP_COLOR */
		/*      GL_MAP_STENCIL */
		/*      GL_INDEX_SHIFT */
		/*      GL_INDEX_OFFSET */
		/*      GL_RED_SCALE */
		/*      GL_RED_BIAS */
		/*      GL_GREEN_SCALE */
		/*      GL_GREEN_BIAS */
		/*      GL_BLUE_SCALE */
		/*      GL_BLUE_BIAS */
		/*      GL_ALPHA_SCALE */
		/*      GL_ALPHA_BIAS */
		/*      GL_DEPTH_SCALE */
		/*      GL_DEPTH_BIAS */

		/* PixelType */
		GENUM_VALUE(GL_BITMAP)
		/*      GL_BYTE */
		/*      GL_UNSIGNED_BYTE */
		/*      GL_SHORT */
		/*      GL_UNSIGNED_SHORT */
		/*      GL_INT */
		/*      GL_UNSIGNED_INT */
		/*      GL_FLOAT */

		/* PolygonMode */
		GENUM_VALUE(GL_POINT)
		GENUM_VALUE(GL_LINE)
		GENUM_VALUE(GL_FILL)

		/* ReadBufferMode */
		/*      GL_FRONT_LEFT */
		/*      GL_FRONT_RIGHT */
		/*      GL_BACK_LEFT */
		/*      GL_BACK_RIGHT */
		/*      GL_FRONT */
		/*      GL_BACK */
		/*      GL_LEFT */
		/*      GL_RIGHT */
		/*      GL_AUX0 */
		/*      GL_AUX1 */
		/*      GL_AUX2 */
		/*      GL_AUX3 */

		/* RenderingMode */
		GENUM_VALUE(GL_RENDER)
		GENUM_VALUE(GL_FEEDBACK)
		GENUM_VALUE(GL_SELECT)

		/* ShadingModel */
		GENUM_VALUE(GL_FLAT)
		GENUM_VALUE(GL_SMOOTH)


		/* StencilFunction */
		/*      GL_NEVER */
		/*      GL_LESS */
		/*      GL_EQUAL */
		/*      GL_LEQUAL */
		/*      GL_GREATER */
		/*      GL_NOTEQUAL */
		/*      GL_GEQUAL */
		/*      GL_ALWAYS */

		/* StencilOp */
		/*      GL_ZERO */
		GENUM_VALUE(GL_KEEP)
		GENUM_VALUE(GL_REPLACE)
		GENUM_VALUE(GL_INCR)
		GENUM_VALUE(GL_DECR)
		/*      GL_INVERT */

		/* StringName */
		GENUM_VALUE(GL_VENDOR)
		GENUM_VALUE(GL_RENDERER)
		GENUM_VALUE(GL_VERSION)
		GENUM_VALUE(GL_EXTENSIONS)

		/* TextureCoordName */
		GENUM_VALUE(GL_S)
		GENUM_VALUE(GL_T)
		GENUM_VALUE(GL_R)
		GENUM_VALUE(GL_Q)

		/* TexCoordPointerType */
		/*      GL_SHORT */
		/*      GL_INT */
		/*      GL_FLOAT */
		/*      GL_DOUBLE */

		/* TextureEnvMode */
		GENUM_VALUE(GL_MODULATE)
		GENUM_VALUE(GL_DECAL)
		/*      GL_BLEND */
		/*      GL_REPLACE */

		/* TextureEnvParameter */
		GENUM_VALUE(GL_TEXTURE_ENV_MODE)
		GENUM_VALUE(GL_TEXTURE_ENV_COLOR)

		/* TextureEnvTarget */
		GENUM_VALUE(GL_TEXTURE_ENV)

		/* TextureGenMode */
		GENUM_VALUE(GL_EYE_LINEAR)
		GENUM_VALUE(GL_OBJECT_LINEAR)
		GENUM_VALUE(GL_SPHERE_MAP)

		/* TextureGenParameter */
		GENUM_VALUE(GL_TEXTURE_GEN_MODE)
		GENUM_VALUE(GL_OBJECT_PLANE)
		GENUM_VALUE(GL_EYE_PLANE)

		/* TextureMagFilter */
		GENUM_VALUE(GL_NEAREST)
		GENUM_VALUE(GL_LINEAR)

		/* TextureMinFilter */
		/*      GL_NEAREST */
		/*      GL_LINEAR */
		GENUM_VALUE(GL_NEAREST_MIPMAP_NEAREST)
		GENUM_VALUE(GL_LINEAR_MIPMAP_NEAREST)
		GENUM_VALUE(GL_NEAREST_MIPMAP_LINEAR)
		GENUM_VALUE(GL_LINEAR_MIPMAP_LINEAR)

		/* TextureParameterName */
		GENUM_VALUE(GL_TEXTURE_MAG_FILTER)
		GENUM_VALUE(GL_TEXTURE_MIN_FILTER)
		GENUM_VALUE(GL_TEXTURE_WRAP_S)
		GENUM_VALUE(GL_TEXTURE_WRAP_T)
		/*      GL_TEXTURE_BORDER_COLOR */
		/*      GL_TEXTURE_PRIORITY */

		/* TextureTarget */
		/*      GL_TEXTURE_1D */
		/*      GL_TEXTURE_2D */
		/*      GL_PROXY_TEXTURE_1D */
		/*      GL_PROXY_TEXTURE_2D */

		/* TextureWrapMode */
		GENUM_VALUE(GL_CLAMP)
		GENUM_VALUE(GL_REPEAT)

		/* VertexPointerType */
		/*      GL_SHORT */
		/*      GL_INT */
		/*      GL_FLOAT */
		/*      GL_DOUBLE */

		/* ClientAttribMask */
		GENUM_VALUE(GL_CLIENT_PIXEL_STORE_BIT)
		GENUM_VALUE(GL_CLIENT_VERTEX_ARRAY_BIT)
		GENUM_VALUE(GL_CLIENT_ALL_ATTRIB_BITS)

		/* polygon_offset */
		GENUM_VALUE(GL_POLYGON_OFFSET_FACTOR)
		GENUM_VALUE(GL_POLYGON_OFFSET_UNITS)
		GENUM_VALUE(GL_POLYGON_OFFSET_POINT)
		GENUM_VALUE(GL_POLYGON_OFFSET_LINE)
		GENUM_VALUE(GL_POLYGON_OFFSET_FILL)

		/* texture */
		GENUM_VALUE(GL_ALPHA4)
		GENUM_VALUE(GL_ALPHA8)
		GENUM_VALUE(GL_ALPHA12)
		GENUM_VALUE(GL_ALPHA16)
		GENUM_VALUE(GL_LUMINANCE4)
		GENUM_VALUE(GL_LUMINANCE8)
		GENUM_VALUE(GL_LUMINANCE12)
		GENUM_VALUE(GL_LUMINANCE16)
		GENUM_VALUE(GL_LUMINANCE4_ALPHA4)
		GENUM_VALUE(GL_LUMINANCE6_ALPHA2)
		GENUM_VALUE(GL_LUMINANCE8_ALPHA8)
		GENUM_VALUE(GL_LUMINANCE12_ALPHA4)
		GENUM_VALUE(GL_LUMINANCE12_ALPHA12)
		GENUM_VALUE(GL_LUMINANCE16_ALPHA16)
		GENUM_VALUE(GL_INTENSITY)
		GENUM_VALUE(GL_INTENSITY4)
		GENUM_VALUE(GL_INTENSITY8)
		GENUM_VALUE(GL_INTENSITY12)
		GENUM_VALUE(GL_INTENSITY16)
		GENUM_VALUE(GL_R3_G3_B2)
		GENUM_VALUE(GL_RGB4)
		GENUM_VALUE(GL_RGB5)
		GENUM_VALUE(GL_RGB8)
		GENUM_VALUE(GL_RGB10)
		GENUM_VALUE(GL_RGB12)
		GENUM_VALUE(GL_RGB16)
		GENUM_VALUE(GL_RGBA2)
		GENUM_VALUE(GL_RGBA4)
		GENUM_VALUE(GL_RGB5_A1)
		GENUM_VALUE(GL_RGBA8)
		GENUM_VALUE(GL_RGB10_A2)
		GENUM_VALUE(GL_RGBA12)
		GENUM_VALUE(GL_RGBA16)
		GENUM_VALUE(GL_TEXTURE_RED_SIZE)
		GENUM_VALUE(GL_TEXTURE_GREEN_SIZE)
		GENUM_VALUE(GL_TEXTURE_BLUE_SIZE)
		GENUM_VALUE(GL_TEXTURE_ALPHA_SIZE)
		GENUM_VALUE(GL_TEXTURE_LUMINANCE_SIZE)
		GENUM_VALUE(GL_TEXTURE_INTENSITY_SIZE)
		GENUM_VALUE(GL_PROXY_TEXTURE_1D)
		GENUM_VALUE(GL_PROXY_TEXTURE_2D)

		/* texture_object */
		GENUM_VALUE(GL_TEXTURE_PRIORITY)
		GENUM_VALUE(GL_TEXTURE_RESIDENT)
		GENUM_VALUE(GL_TEXTURE_BINDING_1D)
		GENUM_VALUE(GL_TEXTURE_BINDING_2D)

		/* vertex_array */
		GENUM_VALUE(GL_VERTEX_ARRAY)
		GENUM_VALUE(GL_NORMAL_ARRAY)
		GENUM_VALUE(GL_COLOR_ARRAY)
		GENUM_VALUE(GL_INDEX_ARRAY)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY)
		GENUM_VALUE(GL_VERTEX_ARRAY_SIZE)
		GENUM_VALUE(GL_VERTEX_ARRAY_TYPE)
		GENUM_VALUE(GL_VERTEX_ARRAY_STRIDE)
		GENUM_VALUE(GL_NORMAL_ARRAY_TYPE)
		GENUM_VALUE(GL_NORMAL_ARRAY_STRIDE)
		GENUM_VALUE(GL_COLOR_ARRAY_SIZE)
		GENUM_VALUE(GL_COLOR_ARRAY_TYPE)
		GENUM_VALUE(GL_COLOR_ARRAY_STRIDE)
		GENUM_VALUE(GL_INDEX_ARRAY_TYPE)
		GENUM_VALUE(GL_INDEX_ARRAY_STRIDE)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_SIZE)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_TYPE)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_STRIDE)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY_STRIDE)
		GENUM_VALUE(GL_VERTEX_ARRAY_POINTER)
		GENUM_VALUE(GL_NORMAL_ARRAY_POINTER)
		GENUM_VALUE(GL_COLOR_ARRAY_POINTER)
		GENUM_VALUE(GL_INDEX_ARRAY_POINTER)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_POINTER)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY_POINTER)
		GENUM_VALUE(GL_V2F)
		GENUM_VALUE(GL_V3F)
		GENUM_VALUE(GL_C4UB_V2F)
		GENUM_VALUE(GL_C4UB_V3F)
		GENUM_VALUE(GL_C3F_V3F)
		GENUM_VALUE(GL_N3F_V3F)
		GENUM_VALUE(GL_C4F_N3F_V3F)
		GENUM_VALUE(GL_T2F_V3F)
		GENUM_VALUE(GL_T4F_V4F)
		GENUM_VALUE(GL_T2F_C4UB_V3F)
		GENUM_VALUE(GL_T2F_C3F_V3F)
		GENUM_VALUE(GL_T2F_N3F_V3F)
		GENUM_VALUE(GL_T2F_C4F_N3F_V3F)
		GENUM_VALUE(GL_T4F_C4F_N3F_V4F)

#ifdef GL_EXT_vertex_array
		/* Extensions */
		GENUM_VALUE(GL_EXT_vertex_array)
		GENUM_VALUE(GL_EXT_bgra)
		GENUM_VALUE(GL_EXT_paletted_texture)
//		GENUM_VALUE(GL_WIN_swap_hint)
//		GENUM_VALUE(GL_WIN_draw_range_elements)
		// GENUM_VALUE(GL_WIN_phong_shading)
		// GENUM_VALUE(GL_WIN_specular_fog)

		/* EXT_vertex_array */
		GENUM_VALUE(GL_VERTEX_ARRAY_EXT)
		GENUM_VALUE(GL_NORMAL_ARRAY_EXT)
		GENUM_VALUE(GL_COLOR_ARRAY_EXT)
		GENUM_VALUE(GL_INDEX_ARRAY_EXT)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_EXT)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY_EXT)
		GENUM_VALUE(GL_VERTEX_ARRAY_SIZE_EXT)
		GENUM_VALUE(GL_VERTEX_ARRAY_TYPE_EXT)
		GENUM_VALUE(GL_VERTEX_ARRAY_STRIDE_EXT)
		GENUM_VALUE(GL_VERTEX_ARRAY_COUNT_EXT)
		GENUM_VALUE(GL_NORMAL_ARRAY_TYPE_EXT)
		GENUM_VALUE(GL_NORMAL_ARRAY_STRIDE_EXT)
		GENUM_VALUE(GL_NORMAL_ARRAY_COUNT_EXT)
		GENUM_VALUE(GL_COLOR_ARRAY_SIZE_EXT)
		GENUM_VALUE(GL_COLOR_ARRAY_TYPE_EXT)
		GENUM_VALUE(GL_COLOR_ARRAY_STRIDE_EXT)
		GENUM_VALUE(GL_COLOR_ARRAY_COUNT_EXT)
		GENUM_VALUE(GL_INDEX_ARRAY_TYPE_EXT)
		GENUM_VALUE(GL_INDEX_ARRAY_STRIDE_EXT)
		GENUM_VALUE(GL_INDEX_ARRAY_COUNT_EXT)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_SIZE_EXT)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_TYPE_EXT)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_STRIDE_EXT)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_COUNT_EXT)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY_STRIDE_EXT)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY_COUNT_EXT)
		GENUM_VALUE(GL_VERTEX_ARRAY_POINTER_EXT)
		GENUM_VALUE(GL_NORMAL_ARRAY_POINTER_EXT)
		GENUM_VALUE(GL_COLOR_ARRAY_POINTER_EXT)
		GENUM_VALUE(GL_INDEX_ARRAY_POINTER_EXT)
		GENUM_VALUE(GL_TEXTURE_COORD_ARRAY_POINTER_EXT)
		GENUM_VALUE(GL_EDGE_FLAG_ARRAY_POINTER_EXT)
//		GENUM_VALUE(GL_DOUBLE_EXT)

		/* EXT_bgra */
		GENUM_VALUE(GL_BGR_EXT)
		GENUM_VALUE(GL_BGRA_EXT)

		/* EXT_paletted_texture */

		/* These must match the GL_COLOR_TABLE_*_SGI enumerants */
//		GENUM_VALUE(GL_COLOR_TABLE_FORMAT_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_WIDTH_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_RED_SIZE_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_GREEN_SIZE_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_BLUE_SIZE_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_ALPHA_SIZE_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_LUMINANCE_SIZE_EXT)
//		GENUM_VALUE(GL_COLOR_TABLE_INTENSITY_SIZE_EXT)

		GENUM_VALUE(GL_COLOR_INDEX1_EXT)
		GENUM_VALUE(GL_COLOR_INDEX2_EXT)
		GENUM_VALUE(GL_COLOR_INDEX4_EXT)
		GENUM_VALUE(GL_COLOR_INDEX8_EXT)
		GENUM_VALUE(GL_COLOR_INDEX12_EXT)
		GENUM_VALUE(GL_COLOR_INDEX16_EXT)

		/* WIN_draw_range_elements */
//		GENUM_VALUE(GL_MAX_ELEMENTS_VERTICES_WIN)
//		GENUM_VALUE(GL_MAX_ELEMENTS_INDICES_WIN)

		/* WIN_phong_shading */
		GENUM_VALUE(GL_PHONG_WIN)
		GENUM_VALUE(GL_PHONG_HINT_WIN)

		/* WIN_specular_fog */
		GENUM_VALUE(GL_FOG_SPECULAR_TEXTURE_WIN)
#endif

		/* For compatibility with OpenGL v1.0 */
		GENUM_VALUE(GL_LOGIC_OP)
		GENUM_VALUE(GL_TEXTURE_COMPONENTS)
	;

}

template <typename MetaDefine>
void doBuildMetaData_open_gl_functions(const GMetaDataConfigFlags & /*config*/, MetaDefine define)
{
	GM(glAccum)
	GM(glAlphaFunc)
	GM(glAreTexturesResident)
	GM(glArrayElement)
	GM(glBegin)
	GM(glBindTexture)
	GM(glBitmap)
	GM(glBlendFunc)
	GM(glCallList)
	GM(glCallLists)
	GM(glClear)
	GM(glClearAccum)
	GM(glClearColor)
	GM(glClearDepth)
	GM(glClearIndex)
	GM(glClearStencil)
	GM(glClipPlane)
	GM(glColor3b)
	GM(glColor3bv)
	GM(glColor3d)
	GM(glColor3dv)
	GM(glColor3f)
	GM(glColor3fv)
	GM(glColor3i)
	GM(glColor3iv)
	GM(glColor3s)
	GM(glColor3sv)
	GM(glColor3ub)
	GM(glColor3ubv)
	GM(glColor3ui)
	GM(glColor3uiv)
	GM(glColor3us)
	GM(glColor3usv)
	GM(glColor4b)
	GM(glColor4bv)
	GM(glColor4d)
	GM(glColor4dv)
	GM(glColor4f)
	GM(glColor4fv)
	GM(glColor4i)
	GM(glColor4iv)
	GM(glColor4s)
	GM(glColor4sv)
	GM(glColor4ub)
	GM(glColor4ubv)
	GM(glColor4ui)
	GM(glColor4uiv)
	GM(glColor4us)
	GM(glColor4usv)
	GM(glColorMask)
	GM(glColorMaterial)
	GM(glColorPointer)
	GM(glCopyPixels)
	GM(glCopyTexImage1D)
	GM(glCopyTexImage2D)
	GM(glCopyTexSubImage1D)
	GM(glCopyTexSubImage2D)
	GM(glCullFace)
	GM(glDeleteLists)
	GM(glDeleteTextures)
	GM(glDepthFunc)
	GM(glDepthMask)
	GM(glDepthRange)
	GM(glDisable)
	GM(glDisableClientState)
	GM(glDrawArrays)
	GM(glDrawBuffer)
	GM(glDrawElements)
	GM(glDrawPixels)
	GM(glEdgeFlag)
	GM(glEdgeFlagPointer)
	GM(glEdgeFlagv)
	GM(glEnable)
	GM(glEnableClientState)
	GM(glEnd)
	GM(glEndList)
	GM(glEvalCoord1d)
	GM(glEvalCoord1dv)
	GM(glEvalCoord1f)
	GM(glEvalCoord1fv)
	GM(glEvalCoord2d)
	GM(glEvalCoord2dv)
	GM(glEvalCoord2f)
	GM(glEvalCoord2fv)
	GM(glEvalMesh1)
	GM(glEvalMesh2)
	GM(glEvalPoint1)
	GM(glEvalPoint2)
	GM(glFeedbackBuffer)
	GM(glFinish)
	GM(glFlush)
	GM(glFogf)
	GM(glFogfv)
	GM(glFogi)
	GM(glFogiv)
	GM(glFrontFace)
	GM(glFrustum)
	GM(glGenLists)
	GM(glGenTextures)
	GM(glGetBooleanv)
	GM(glGetClipPlane)
	GM(glGetDoublev)
	GM(glGetError)
	GM(glGetFloatv)
	GM(glGetIntegerv)
	GM(glGetLightfv)
	GM(glGetLightiv)
	GM(glGetMapdv)
	GM(glGetMapfv)
	GM(glGetMapiv)
	GM(glGetMaterialfv)
	GM(glGetMaterialiv)
	GM(glGetPixelMapfv)
	GM(glGetPixelMapuiv)
	GM(glGetPixelMapusv)
	GM(glGetPointerv)
	GM(glGetPolygonStipple)
	GM(glGetString)
	GM(glGetTexEnvfv)
	GM(glGetTexEnviv)
	GM(glGetTexGendv)
	GM(glGetTexGenfv)
	GM(glGetTexGeniv)
	GM(glGetTexImage)
	GM(glGetTexLevelParameterfv)
	GM(glGetTexLevelParameteriv)
	GM(glGetTexParameterfv)
	GM(glGetTexParameteriv)
	GM(glHint)
	GM(glIndexMask)
	GM(glIndexPointer)
	GM(glIndexd)
	GM(glIndexdv)
	GM(glIndexf)
	GM(glIndexfv)
	GM(glIndexi)
	GM(glIndexiv)
	GM(glIndexs)
	GM(glIndexsv)
	GM(glIndexub)
	GM(glIndexubv)
	GM(glInitNames)
	GM(glInterleavedArrays)
	GM(glIsEnabled)
	GM(glIsList)
	GM(glIsTexture)
	GM(glLightModelf)
	GM(glLightModelfv)
	GM(glLightModeli)
	GM(glLightModeliv)
	GM(glLightf)
	GM(glLightfv)
	GM(glLighti)
	GM(glLightiv)
	GM(glLineStipple)
	GM(glLineWidth)
	GM(glListBase)
	GM(glLoadIdentity)
	GM(glLoadMatrixd)
	GM(glLoadMatrixf)
	GM(glLoadName)
	GM(glLogicOp)
	GM(glMap1d)
	GM(glMap1f)
	GM(glMap2d)
	GM(glMap2f)
	GM(glMapGrid1d)
	GM(glMapGrid1f)
	GM(glMapGrid2d)
	GM(glMapGrid2f)
	GM(glMaterialf)
	GM(glMaterialfv)
	GM(glMateriali)
	GM(glMaterialiv)
	GM(glMatrixMode)
	GM(glMultMatrixd)
	GM(glMultMatrixf)
	GM(glNewList)
	GM(glNormal3b)
	GM(glNormal3bv)
	GM(glNormal3d)
	GM(glNormal3dv)
	GM(glNormal3f)
	GM(glNormal3fv)
	GM(glNormal3i)
	GM(glNormal3iv)
	GM(glNormal3s)
	GM(glNormal3sv)
	GM(glNormalPointer)
	GM(glOrtho)
	GM(glPassThrough)
	GM(glPixelMapfv)
	GM(glPixelMapuiv)
	GM(glPixelMapusv)
	GM(glPixelStoref)
	GM(glPixelStorei)
	GM(glPixelTransferf)
	GM(glPixelTransferi)
	GM(glPixelZoom)
	GM(glPointSize)
	GM(glPolygonMode)
	GM(glPolygonOffset)
	GM(glPolygonStipple)
	GM(glPopAttrib)
	GM(glPopClientAttrib)
	GM(glPopMatrix)
	GM(glPopName)
	GM(glPrioritizeTextures)
	GM(glPushAttrib)
	GM(glPushClientAttrib)
	GM(glPushMatrix)
	GM(glPushName)
	GM(glRasterPos2d)
	GM(glRasterPos2dv)
	GM(glRasterPos2f)
	GM(glRasterPos2fv)
	GM(glRasterPos2i)
	GM(glRasterPos2iv)
	GM(glRasterPos2s)
	GM(glRasterPos2sv)
	GM(glRasterPos3d)
	GM(glRasterPos3dv)
	GM(glRasterPos3f)
	GM(glRasterPos3fv)
	GM(glRasterPos3i)
	GM(glRasterPos3iv)
	GM(glRasterPos3s)
	GM(glRasterPos3sv)
	GM(glRasterPos4d)
	GM(glRasterPos4dv)
	GM(glRasterPos4f)
	GM(glRasterPos4fv)
	GM(glRasterPos4i)
	GM(glRasterPos4iv)
	GM(glRasterPos4s)
	GM(glRasterPos4sv)
	GM(glReadBuffer)
	GM(glReadPixels)
	GM(glRectd)
	GM(glRectdv)
	GM(glRectf)
	GM(glRectfv)
	GM(glRecti)
	GM(glRectiv)
	GM(glRects)
	GM(glRectsv)
	GM(glRenderMode)
	GM(glRotated)
	GM(glRotatef)
	GM(glScaled)
	GM(glScalef)
	GM(glScissor)
	GM(glSelectBuffer)
	GM(glShadeModel)
	GM(glStencilFunc)
	GM(glStencilMask)
	GM(glStencilOp)
	GM(glTexCoord1d)
	GM(glTexCoord1dv)
	GM(glTexCoord1f)
	GM(glTexCoord1fv)
	GM(glTexCoord1i)
	GM(glTexCoord1iv)
	GM(glTexCoord1s)
	GM(glTexCoord1sv)
	GM(glTexCoord2d)
	GM(glTexCoord2dv)
	GM(glTexCoord2f)
	GM(glTexCoord2fv)
	GM(glTexCoord2i)
	GM(glTexCoord2iv)
	GM(glTexCoord2s)
	GM(glTexCoord2sv)
	GM(glTexCoord3d)
	GM(glTexCoord3dv)
	GM(glTexCoord3f)
	GM(glTexCoord3fv)
	GM(glTexCoord3i)
	GM(glTexCoord3iv)
	GM(glTexCoord3s)
	GM(glTexCoord3sv)
	GM(glTexCoord4d)
	GM(glTexCoord4dv)
	GM(glTexCoord4f)
	GM(glTexCoord4fv)
	GM(glTexCoord4i)
	GM(glTexCoord4iv)
	GM(glTexCoord4s)
	GM(glTexCoord4sv)
	GM(glTexCoordPointer)
	GM(glTexEnvf)
	GM(glTexEnvfv)
	GM(glTexEnvi)
	GM(glTexEnviv)
	GM(glTexGend)
	GM(glTexGendv)
	GM(glTexGenf)
	GM(glTexGenfv)
	GM(glTexGeni)
	GM(glTexGeniv)
	GM(glTexImage1D)
	GM(glTexImage2D)
	GM(glTexParameterf)
	GM(glTexParameterfv)
	GM(glTexParameteri)
	GM(glTexParameteriv)
	GM(glTexSubImage1D)
	GM(glTexSubImage2D)
	GM(glTranslated)
	GM(glTranslatef)
	GM(glVertex2d)
	GM(glVertex2dv)
	GM(glVertex2f)
	GM(glVertex2fv)
	GM(glVertex2i)
	GM(glVertex2iv)
	GM(glVertex2s)
	GM(glVertex2sv)
	GM(glVertex3d)
	GM(glVertex3dv)
	GM(glVertex3f)
	GM(glVertex3fv)
	GM(glVertex3i)
	GM(glVertex3iv)
	GM(glVertex3s)
	GM(glVertex3sv)
	GM(glVertex4d)
	GM(glVertex4dv)
	GM(glVertex4f)
	GM(glVertex4fv)
	GM(glVertex4i)
	GM(glVertex4iv)
	GM(glVertex4s)
	GM(glVertex4sv)
	GM(glVertexPointer)
	GM(glViewport)
}

template <typename MetaDefine>
void doBuildMetaData_open_gl(const GMetaDataConfigFlags & config, MetaDefine define)
{
	doBuildMetaData_open_gl_constants(config, define);
	doBuildMetaData_open_gl_functions(config, define);

}


} // namespace metadata_internal


template <typename MetaDefine>
void buildMetaData_open_gl(const GMetaDataConfigFlags & config, MetaDefine define)
{
	metadata_internal::doBuildMetaData_open_gl(config, define);
}

template <typename MetaDefine>
void buildMetaData_open_gl(MetaDefine define)
{
	buildMetaData_open_gl(mdcScriptable | mdcAutoProperty, define);
}


} // namespace cpgf


#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

