#pragma once

#include <cpgf/scriptbind/gscriptuserconverter.h>


namespace qtjs_binder {

class QtTypesConverter : public cpgf::GScriptUserConverterBase
{
protected:
    virtual uint32_t canConvert(const cpgf::GScriptUserConverterParamData * paramData);
    virtual void convert(cpgf::GVariantData * outputValue, const cpgf::GScriptUserConverterParamData * paramData, uint32_t tag);
};

}
