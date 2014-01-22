// Auto generated file, don't modify.

#ifndef __META_QTGUI_QOPENGLTEXTURE_H
#define __META_QTGUI_QOPENGLTEXTURE_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QOpenGLTexture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QOpenGLTexture::Target)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QImage &, QOpenGLTexture::MipMapGeneration)>()
        ._default(copyVariantFromCopyable(QOpenGLTexture::GenerateMipMaps))
    ;
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create);
    _d.CPGF_MD_TEMPLATE _method("destroy", &D::ClassType::destroy);
    _d.CPGF_MD_TEMPLATE _method("isCreated", &D::ClassType::isCreated);
    _d.CPGF_MD_TEMPLATE _method("textureId", &D::ClassType::textureId);
    _d.CPGF_MD_TEMPLATE _method("bind", (void (D::ClassType::*) ())&D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("bind", (void (D::ClassType::*) (uint, QOpenGLTexture::TextureUnitReset))&D::ClassType::bind)
        ._default(copyVariantFromCopyable(QOpenGLTexture::DontResetTextureUnit))
    ;
    _d.CPGF_MD_TEMPLATE _method("release", (void (D::ClassType::*) ())&D::ClassType::release);
    _d.CPGF_MD_TEMPLATE _method("release", (void (D::ClassType::*) (uint, QOpenGLTexture::TextureUnitReset))&D::ClassType::release)
        ._default(copyVariantFromCopyable(QOpenGLTexture::DontResetTextureUnit))
    ;
    _d.CPGF_MD_TEMPLATE _method("isBound", (bool (D::ClassType::*) () const)&D::ClassType::isBound);
    _d.CPGF_MD_TEMPLATE _method("isBound", (bool (D::ClassType::*) (uint))&D::ClassType::isBound);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize)
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("depth", &D::ClassType::depth);
    _d.CPGF_MD_TEMPLATE _method("setMipLevels", &D::ClassType::setMipLevels);
    _d.CPGF_MD_TEMPLATE _method("mipLevels", &D::ClassType::mipLevels);
    _d.CPGF_MD_TEMPLATE _method("maximumMipLevels", &D::ClassType::maximumMipLevels);
    _d.CPGF_MD_TEMPLATE _method("setLayers", &D::ClassType::setLayers);
    _d.CPGF_MD_TEMPLATE _method("layers", &D::ClassType::layers);
    _d.CPGF_MD_TEMPLATE _method("faces", &D::ClassType::faces);
    _d.CPGF_MD_TEMPLATE _method("allocateStorage", &D::ClassType::allocateStorage);
    _d.CPGF_MD_TEMPLATE _method("isStorageAllocated", &D::ClassType::isStorageAllocated);
    _d.CPGF_MD_TEMPLATE _method("createTextureView", &D::ClassType::createTextureView);
    _d.CPGF_MD_TEMPLATE _method("isTextureView", &D::ClassType::isTextureView);
    _d.CPGF_MD_TEMPLATE _method("setData", (void (D::ClassType::*) (int, int, QOpenGLTexture::CubeMapFace, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", (void (D::ClassType::*) (int, int, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", (void (D::ClassType::*) (int, QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", (void (D::ClassType::*) (QOpenGLTexture::PixelFormat, QOpenGLTexture::PixelType, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCompressedData", (void (D::ClassType::*) (int, int, QOpenGLTexture::CubeMapFace, int, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setCompressedData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCompressedData", (void (D::ClassType::*) (int, int, int, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setCompressedData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCompressedData", (void (D::ClassType::*) (int, int, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setCompressedData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCompressedData", (void (D::ClassType::*) (int, void *, const QOpenGLPixelTransferOptions *const))&D::ClassType::setCompressedData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", (void (D::ClassType::*) (const QImage &, QOpenGLTexture::MipMapGeneration))&D::ClassType::setData)
        ._default(copyVariantFromCopyable(QOpenGLTexture::GenerateMipMaps))
    ;
    _d.CPGF_MD_TEMPLATE _method("setMipBaseLevel", &D::ClassType::setMipBaseLevel);
    _d.CPGF_MD_TEMPLATE _method("mipBaseLevel", &D::ClassType::mipBaseLevel);
    _d.CPGF_MD_TEMPLATE _method("setMipMaxLevel", &D::ClassType::setMipMaxLevel);
    _d.CPGF_MD_TEMPLATE _method("mipMaxLevel", &D::ClassType::mipMaxLevel);
    _d.CPGF_MD_TEMPLATE _method("setMipLevelRange", &D::ClassType::setMipLevelRange);
    _d.CPGF_MD_TEMPLATE _method("mipLevelRange", &D::ClassType::mipLevelRange);
    _d.CPGF_MD_TEMPLATE _method("setAutoMipMapGenerationEnabled", &D::ClassType::setAutoMipMapGenerationEnabled);
    _d.CPGF_MD_TEMPLATE _method("isAutoMipMapGenerationEnabled", &D::ClassType::isAutoMipMapGenerationEnabled);
    _d.CPGF_MD_TEMPLATE _method("generateMipMaps", (void (D::ClassType::*) ())&D::ClassType::generateMipMaps);
    _d.CPGF_MD_TEMPLATE _method("generateMipMaps", (void (D::ClassType::*) (int, bool))&D::ClassType::generateMipMaps)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setSwizzleMask", (void (D::ClassType::*) (QOpenGLTexture::SwizzleComponent, QOpenGLTexture::SwizzleValue))&D::ClassType::setSwizzleMask);
    _d.CPGF_MD_TEMPLATE _method("setSwizzleMask", (void (D::ClassType::*) (QOpenGLTexture::SwizzleValue, QOpenGLTexture::SwizzleValue, QOpenGLTexture::SwizzleValue, QOpenGLTexture::SwizzleValue))&D::ClassType::setSwizzleMask);
    _d.CPGF_MD_TEMPLATE _method("swizzleMask", &D::ClassType::swizzleMask);
    _d.CPGF_MD_TEMPLATE _method("setDepthStencilMode", &D::ClassType::setDepthStencilMode);
    _d.CPGF_MD_TEMPLATE _method("depthStencilMode", &D::ClassType::depthStencilMode);
    _d.CPGF_MD_TEMPLATE _method("setMinificationFilter", &D::ClassType::setMinificationFilter);
    _d.CPGF_MD_TEMPLATE _method("minificationFilter", &D::ClassType::minificationFilter);
    _d.CPGF_MD_TEMPLATE _method("setMagnificationFilter", &D::ClassType::setMagnificationFilter);
    _d.CPGF_MD_TEMPLATE _method("magnificationFilter", &D::ClassType::magnificationFilter);
    _d.CPGF_MD_TEMPLATE _method("setMinMagFilters", &D::ClassType::setMinMagFilters);
    _d.CPGF_MD_TEMPLATE _method("minMagFilters", &D::ClassType::minMagFilters);
    _d.CPGF_MD_TEMPLATE _method("setMaximumAnisotropy", &D::ClassType::setMaximumAnisotropy);
    _d.CPGF_MD_TEMPLATE _method("maximumAnisotropy", &D::ClassType::maximumAnisotropy);
    _d.CPGF_MD_TEMPLATE _method("setWrapMode", (void (D::ClassType::*) (QOpenGLTexture::WrapMode))&D::ClassType::setWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setWrapMode", (void (D::ClassType::*) (QOpenGLTexture::CoordinateDirection, QOpenGLTexture::WrapMode))&D::ClassType::setWrapMode);
    _d.CPGF_MD_TEMPLATE _method("wrapMode", &D::ClassType::wrapMode);
    _d.CPGF_MD_TEMPLATE _method("setBorderColor", (void (D::ClassType::*) (QColor))&D::ClassType::setBorderColor);
    _d.CPGF_MD_TEMPLATE _method("setBorderColor", (void (D::ClassType::*) (float, float, float, float))&D::ClassType::setBorderColor);
    _d.CPGF_MD_TEMPLATE _method("setBorderColor", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setBorderColor);
    _d.CPGF_MD_TEMPLATE _method("setBorderColor", (void (D::ClassType::*) (uint, uint, uint, uint))&D::ClassType::setBorderColor);
    _d.CPGF_MD_TEMPLATE _method("borderColor", (QColor (D::ClassType::*) () const)&D::ClassType::borderColor);
    _d.CPGF_MD_TEMPLATE _method("borderColor", (void (D::ClassType::*) (float *) const)&D::ClassType::borderColor);
    _d.CPGF_MD_TEMPLATE _method("borderColor", (void (D::ClassType::*) (int *) const)&D::ClassType::borderColor);
    _d.CPGF_MD_TEMPLATE _method("borderColor", (void (D::ClassType::*) (unsigned int *) const)&D::ClassType::borderColor);
    _d.CPGF_MD_TEMPLATE _method("setMinimumLevelOfDetail", &D::ClassType::setMinimumLevelOfDetail);
    _d.CPGF_MD_TEMPLATE _method("minimumLevelOfDetail", &D::ClassType::minimumLevelOfDetail);
    _d.CPGF_MD_TEMPLATE _method("setMaximumLevelOfDetail", &D::ClassType::setMaximumLevelOfDetail);
    _d.CPGF_MD_TEMPLATE _method("maximumLevelOfDetail", &D::ClassType::maximumLevelOfDetail);
    _d.CPGF_MD_TEMPLATE _method("setLevelOfDetailRange", &D::ClassType::setLevelOfDetailRange);
    _d.CPGF_MD_TEMPLATE _method("levelOfDetailRange", &D::ClassType::levelOfDetailRange);
    _d.CPGF_MD_TEMPLATE _method("setLevelofDetailBias", &D::ClassType::setLevelofDetailBias);
    _d.CPGF_MD_TEMPLATE _method("levelofDetailBias", &D::ClassType::levelofDetailBias);
    _d.CPGF_MD_TEMPLATE _method("boundTextureId", (GLuint (*) (QOpenGLTexture::BindingTarget))&D::ClassType::boundTextureId);
    _d.CPGF_MD_TEMPLATE _method("boundTextureId", (GLuint (*) (uint, QOpenGLTexture::BindingTarget))&D::ClassType::boundTextureId);
    _d.CPGF_MD_TEMPLATE _method("hasFeature", &D::ClassType::hasFeature);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Target>("Target")
        ._element("Target1D", D::ClassType::Target1D)
        ._element("Target1DArray", D::ClassType::Target1DArray)
        ._element("Target2D", D::ClassType::Target2D)
        ._element("Target2DArray", D::ClassType::Target2DArray)
        ._element("Target3D", D::ClassType::Target3D)
        ._element("TargetCubeMap", D::ClassType::TargetCubeMap)
        ._element("TargetCubeMapArray", D::ClassType::TargetCubeMapArray)
        ._element("Target2DMultisample", D::ClassType::Target2DMultisample)
        ._element("Target2DMultisampleArray", D::ClassType::Target2DMultisampleArray)
        ._element("TargetRectangle", D::ClassType::TargetRectangle)
        ._element("TargetBuffer", D::ClassType::TargetBuffer)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::BindingTarget>("BindingTarget")
        ._element("BindingTarget1D", D::ClassType::BindingTarget1D)
        ._element("BindingTarget1DArray", D::ClassType::BindingTarget1DArray)
        ._element("BindingTarget2D", D::ClassType::BindingTarget2D)
        ._element("BindingTarget2DArray", D::ClassType::BindingTarget2DArray)
        ._element("BindingTarget3D", D::ClassType::BindingTarget3D)
        ._element("BindingTargetCubeMap", D::ClassType::BindingTargetCubeMap)
        ._element("BindingTargetCubeMapArray", D::ClassType::BindingTargetCubeMapArray)
        ._element("BindingTarget2DMultisample", D::ClassType::BindingTarget2DMultisample)
        ._element("BindingTarget2DMultisampleArray", D::ClassType::BindingTarget2DMultisampleArray)
        ._element("BindingTargetRectangle", D::ClassType::BindingTargetRectangle)
        ._element("BindingTargetBuffer", D::ClassType::BindingTargetBuffer)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MipMapGeneration>("MipMapGeneration")
        ._element("GenerateMipMaps", D::ClassType::GenerateMipMaps)
        ._element("DontGenerateMipMaps", D::ClassType::DontGenerateMipMaps)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextureUnitReset>("TextureUnitReset")
        ._element("ResetTextureUnit", D::ClassType::ResetTextureUnit)
        ._element("DontResetTextureUnit", D::ClassType::DontResetTextureUnit)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextureFormat>("TextureFormat")
        ._element("NoFormat", D::ClassType::NoFormat)
        ._element("R8_UNorm", D::ClassType::R8_UNorm)
        ._element("RG8_UNorm", D::ClassType::RG8_UNorm)
        ._element("RGB8_UNorm", D::ClassType::RGB8_UNorm)
        ._element("RGBA8_UNorm", D::ClassType::RGBA8_UNorm)
        ._element("R16_UNorm", D::ClassType::R16_UNorm)
        ._element("RG16_UNorm", D::ClassType::RG16_UNorm)
        ._element("RGB16_UNorm", D::ClassType::RGB16_UNorm)
        ._element("RGBA16_UNorm", D::ClassType::RGBA16_UNorm)
        ._element("R8_SNorm", D::ClassType::R8_SNorm)
        ._element("RG8_SNorm", D::ClassType::RG8_SNorm)
        ._element("RGB8_SNorm", D::ClassType::RGB8_SNorm)
        ._element("RGBA8_SNorm", D::ClassType::RGBA8_SNorm)
        ._element("R16_SNorm", D::ClassType::R16_SNorm)
        ._element("RG16_SNorm", D::ClassType::RG16_SNorm)
        ._element("RGB16_SNorm", D::ClassType::RGB16_SNorm)
        ._element("RGBA16_SNorm", D::ClassType::RGBA16_SNorm)
        ._element("R8U", D::ClassType::R8U)
        ._element("RG8U", D::ClassType::RG8U)
        ._element("RGB8U", D::ClassType::RGB8U)
        ._element("RGBA8U", D::ClassType::RGBA8U)
        ._element("R16U", D::ClassType::R16U)
        ._element("RG16U", D::ClassType::RG16U)
        ._element("RGB16U", D::ClassType::RGB16U)
        ._element("RGBA16U", D::ClassType::RGBA16U)
        ._element("R32U", D::ClassType::R32U)
        ._element("RG32U", D::ClassType::RG32U)
        ._element("RGB32U", D::ClassType::RGB32U)
        ._element("RGBA32U", D::ClassType::RGBA32U)
        ._element("R8I", D::ClassType::R8I)
        ._element("RG8I", D::ClassType::RG8I)
        ._element("RGB8I", D::ClassType::RGB8I)
        ._element("RGBA8I", D::ClassType::RGBA8I)
        ._element("R16I", D::ClassType::R16I)
        ._element("RG16I", D::ClassType::RG16I)
        ._element("RGB16I", D::ClassType::RGB16I)
        ._element("RGBA16I", D::ClassType::RGBA16I)
        ._element("R32I", D::ClassType::R32I)
        ._element("RG32I", D::ClassType::RG32I)
        ._element("RGB32I", D::ClassType::RGB32I)
        ._element("RGBA32I", D::ClassType::RGBA32I)
        ._element("R16F", D::ClassType::R16F)
        ._element("RG16F", D::ClassType::RG16F)
        ._element("RGB16F", D::ClassType::RGB16F)
        ._element("RGBA16F", D::ClassType::RGBA16F)
        ._element("R32F", D::ClassType::R32F)
        ._element("RG32F", D::ClassType::RG32F)
        ._element("RGB32F", D::ClassType::RGB32F)
        ._element("RGBA32F", D::ClassType::RGBA32F)
        ._element("RGB9E5", D::ClassType::RGB9E5)
        ._element("RG11B10F", D::ClassType::RG11B10F)
        ._element("RG3B2", D::ClassType::RG3B2)
        ._element("R5G6B5", D::ClassType::R5G6B5)
        ._element("RGB5A1", D::ClassType::RGB5A1)
        ._element("RGBA4", D::ClassType::RGBA4)
        ._element("RGB10A2", D::ClassType::RGB10A2)
        ._element("D16", D::ClassType::D16)
        ._element("D24", D::ClassType::D24)
        ._element("D24S8", D::ClassType::D24S8)
        ._element("D32", D::ClassType::D32)
        ._element("D32F", D::ClassType::D32F)
        ._element("D32FS8X24", D::ClassType::D32FS8X24)
        ._element("RGB_DXT1", D::ClassType::RGB_DXT1)
        ._element("RGBA_DXT1", D::ClassType::RGBA_DXT1)
        ._element("RGBA_DXT3", D::ClassType::RGBA_DXT3)
        ._element("RGBA_DXT5", D::ClassType::RGBA_DXT5)
        ._element("R_ATI1N_UNorm", D::ClassType::R_ATI1N_UNorm)
        ._element("R_ATI1N_SNorm", D::ClassType::R_ATI1N_SNorm)
        ._element("RG_ATI2N_UNorm", D::ClassType::RG_ATI2N_UNorm)
        ._element("RG_ATI2N_SNorm", D::ClassType::RG_ATI2N_SNorm)
        ._element("RGB_BP_UNSIGNED_FLOAT", D::ClassType::RGB_BP_UNSIGNED_FLOAT)
        ._element("RGB_BP_SIGNED_FLOAT", D::ClassType::RGB_BP_SIGNED_FLOAT)
        ._element("RGB_BP_UNorm", D::ClassType::RGB_BP_UNorm)
        ._element("SRGB8", D::ClassType::SRGB8)
        ._element("SRGB8_Alpha8", D::ClassType::SRGB8_Alpha8)
        ._element("SRGB_DXT1", D::ClassType::SRGB_DXT1)
        ._element("SRGB_Alpha_DXT1", D::ClassType::SRGB_Alpha_DXT1)
        ._element("SRGB_Alpha_DXT3", D::ClassType::SRGB_Alpha_DXT3)
        ._element("SRGB_Alpha_DXT5", D::ClassType::SRGB_Alpha_DXT5)
        ._element("SRGB_BP_UNorm", D::ClassType::SRGB_BP_UNorm)
        ._element("DepthFormat", D::ClassType::DepthFormat)
        ._element("AlphaFormat", D::ClassType::AlphaFormat)
        ._element("RGBFormat", D::ClassType::RGBFormat)
        ._element("RGBAFormat", D::ClassType::RGBAFormat)
        ._element("LuminanceFormat", D::ClassType::LuminanceFormat)
        ._element("LuminanceAlphaFormat", D::ClassType::LuminanceAlphaFormat)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextureFormatClass>("TextureFormatClass")
        ._element("NoFormatClass", D::ClassType::NoFormatClass)
        ._element("FormatClass_128Bit", D::ClassType::FormatClass_128Bit)
        ._element("FormatClass_96Bit", D::ClassType::FormatClass_96Bit)
        ._element("FormatClass_64Bit", D::ClassType::FormatClass_64Bit)
        ._element("FormatClass_48Bit", D::ClassType::FormatClass_48Bit)
        ._element("FormatClass_32Bit", D::ClassType::FormatClass_32Bit)
        ._element("FormatClass_24Bit", D::ClassType::FormatClass_24Bit)
        ._element("FormatClass_16Bit", D::ClassType::FormatClass_16Bit)
        ._element("FormatClass_8Bit", D::ClassType::FormatClass_8Bit)
        ._element("FormatClass_RGTC1_R", D::ClassType::FormatClass_RGTC1_R)
        ._element("FormatClass_RGTC2_RG", D::ClassType::FormatClass_RGTC2_RG)
        ._element("FormatClass_BPTC_Unorm", D::ClassType::FormatClass_BPTC_Unorm)
        ._element("FormatClass_BPTC_Float", D::ClassType::FormatClass_BPTC_Float)
        ._element("FormatClass_S3TC_DXT1_RGB", D::ClassType::FormatClass_S3TC_DXT1_RGB)
        ._element("FormatClass_S3TC_DXT1_RGBA", D::ClassType::FormatClass_S3TC_DXT1_RGBA)
        ._element("FormatClass_S3TC_DXT3_RGBA", D::ClassType::FormatClass_S3TC_DXT3_RGBA)
        ._element("FormatClass_S3TC_DXT5_RGBA", D::ClassType::FormatClass_S3TC_DXT5_RGBA)
        ._element("FormatClass_Unique", D::ClassType::FormatClass_Unique)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CubeMapFace>("CubeMapFace")
        ._element("CubeMapPositiveX", D::ClassType::CubeMapPositiveX)
        ._element("CubeMapNegativeX", D::ClassType::CubeMapNegativeX)
        ._element("CubeMapPositiveY", D::ClassType::CubeMapPositiveY)
        ._element("CubeMapNegativeY", D::ClassType::CubeMapNegativeY)
        ._element("CubeMapPositiveZ", D::ClassType::CubeMapPositiveZ)
        ._element("CubeMapNegativeZ", D::ClassType::CubeMapNegativeZ)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PixelFormat>("PixelFormat")
        ._element("NoSourceFormat", D::ClassType::NoSourceFormat)
        ._element("Red", D::ClassType::Red)
        ._element("RG", D::ClassType::RG)
        ._element("RGB", D::ClassType::RGB)
        ._element("BGR", D::ClassType::BGR)
        ._element("RGBA", D::ClassType::RGBA)
        ._element("BGRA", D::ClassType::BGRA)
        ._element("Red_Integer", D::ClassType::Red_Integer)
        ._element("RG_Integer", D::ClassType::RG_Integer)
        ._element("RGB_Integer", D::ClassType::RGB_Integer)
        ._element("BGR_Integer", D::ClassType::BGR_Integer)
        ._element("RGBA_Integer", D::ClassType::RGBA_Integer)
        ._element("BGRA_Integer", D::ClassType::BGRA_Integer)
        ._element("Depth", D::ClassType::Depth)
        ._element("DepthStencil", D::ClassType::DepthStencil)
        ._element("Alpha", D::ClassType::Alpha)
        ._element("Luminance", D::ClassType::Luminance)
        ._element("LuminanceAlpha", D::ClassType::LuminanceAlpha)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PixelType>("PixelType")
        ._element("NoPixelType", D::ClassType::NoPixelType)
        ._element("Int8", D::ClassType::Int8)
        ._element("UInt8", D::ClassType::UInt8)
        ._element("Int16", D::ClassType::Int16)
        ._element("UInt16", D::ClassType::UInt16)
        ._element("Int32", D::ClassType::Int32)
        ._element("UInt32", D::ClassType::UInt32)
        ._element("Float16", D::ClassType::Float16)
        ._element("Float16OES", D::ClassType::Float16OES)
        ._element("Float32", D::ClassType::Float32)
        ._element("UInt32_RGB9_E5", D::ClassType::UInt32_RGB9_E5)
        ._element("UInt32_RG11B10F", D::ClassType::UInt32_RG11B10F)
        ._element("UInt8_RG3B2", D::ClassType::UInt8_RG3B2)
        ._element("UInt8_RG3B2_Rev", D::ClassType::UInt8_RG3B2_Rev)
        ._element("UInt16_RGB5A1", D::ClassType::UInt16_RGB5A1)
        ._element("UInt16_RGB5A1_Rev", D::ClassType::UInt16_RGB5A1_Rev)
        ._element("UInt16_R5G6B5", D::ClassType::UInt16_R5G6B5)
        ._element("UInt16_R5G6B5_Rev", D::ClassType::UInt16_R5G6B5_Rev)
        ._element("UInt16_RGBA4", D::ClassType::UInt16_RGBA4)
        ._element("UInt16_RGBA4_Rev", D::ClassType::UInt16_RGBA4_Rev)
        ._element("UInt32_RGB10A2", D::ClassType::UInt32_RGB10A2)
        ._element("UInt32_RGB10A2_Rev", D::ClassType::UInt32_RGB10A2_Rev)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Feature>("Feature")
        ._element("ImmutableStorage", D::ClassType::ImmutableStorage)
        ._element("ImmutableMultisampleStorage", D::ClassType::ImmutableMultisampleStorage)
        ._element("TextureRectangle", D::ClassType::TextureRectangle)
        ._element("TextureArrays", D::ClassType::TextureArrays)
        ._element("Texture3D", D::ClassType::Texture3D)
        ._element("TextureMultisample", D::ClassType::TextureMultisample)
        ._element("TextureBuffer", D::ClassType::TextureBuffer)
        ._element("TextureCubeMapArrays", D::ClassType::TextureCubeMapArrays)
        ._element("Swizzle", D::ClassType::Swizzle)
        ._element("StencilTexturing", D::ClassType::StencilTexturing)
        ._element("AnisotropicFiltering", D::ClassType::AnisotropicFiltering)
        ._element("NPOTTextures", D::ClassType::NPOTTextures)
        ._element("NPOTTextureRepeat", D::ClassType::NPOTTextureRepeat)
        ._element("MaxFeatureFlag", D::ClassType::MaxFeatureFlag)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SwizzleComponent>("SwizzleComponent")
        ._element("SwizzleRed", D::ClassType::SwizzleRed)
        ._element("SwizzleGreen", D::ClassType::SwizzleGreen)
        ._element("SwizzleBlue", D::ClassType::SwizzleBlue)
        ._element("SwizzleAlpha", D::ClassType::SwizzleAlpha)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SwizzleValue>("SwizzleValue")
        ._element("RedValue", D::ClassType::RedValue)
        ._element("GreenValue", D::ClassType::GreenValue)
        ._element("BlueValue", D::ClassType::BlueValue)
        ._element("AlphaValue", D::ClassType::AlphaValue)
        ._element("ZeroValue", D::ClassType::ZeroValue)
        ._element("OneValue", D::ClassType::OneValue)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DepthStencilMode>("DepthStencilMode")
        ._element("DepthMode", D::ClassType::DepthMode)
        ._element("StencilMode", D::ClassType::StencilMode)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Filter>("Filter")
        ._element("Nearest", D::ClassType::Nearest)
        ._element("Linear", D::ClassType::Linear)
        ._element("NearestMipMapNearest", D::ClassType::NearestMipMapNearest)
        ._element("NearestMipMapLinear", D::ClassType::NearestMipMapLinear)
        ._element("LinearMipMapNearest", D::ClassType::LinearMipMapNearest)
        ._element("LinearMipMapLinear", D::ClassType::LinearMipMapLinear)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WrapMode>("WrapMode")
        ._element("Repeat", D::ClassType::Repeat)
        ._element("MirroredRepeat", D::ClassType::MirroredRepeat)
        ._element("ClampToEdge", D::ClassType::ClampToEdge)
        ._element("ClampToBorder", D::ClassType::ClampToBorder)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CoordinateDirection>("CoordinateDirection")
        ._element("DirectionS", D::ClassType::DirectionS)
        ._element("DirectionT", D::ClassType::DirectionT)
        ._element("DirectionR", D::ClassType::DirectionR)
    ;
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
