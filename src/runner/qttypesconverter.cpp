#include "qttypesconverter.h"

#include <cpgf/gmetaapiutil.h>
#include <cpgf/gvariant.h>

#include <QString>
#include <QDebug>
namespace qtjs_binder {

uint32_t QtTypesConverter::canConvert(const cpgf::GScriptUserConverterParamData * paramData)
{
    using namespace cpgf;

    GVariant value = createVariantFromData(paramData->sourceValue->value);
    if(canFromVariant<char *>(value)) {
        GMetaType paramType = metaGetParamType(paramData->callable, paramData->paramIndex);
        if (paramType.getBaseName()) {
            if(!strcmp(paramType.getBaseName(), "QString")) {
                return 1;
            }
        }
    }
    return 0;
}

void QtTypesConverter::convert(cpgf::GVariantData * outputValue,
    const cpgf::GScriptUserConverterParamData * paramData, uint32_t tag)
{
    using namespace cpgf;

    switch(tag) {
    case 1:
        GVariant value = createVariantFromData(paramData->sourceValue->value);
        QString str(fromVariant<char *>(value));
        GVariant output = createVariant<true>(str, true);
        *outputValue = output.takeData();
        return;
    }
    throw std::logic_error("unexpected tag for conversion");
}

}
