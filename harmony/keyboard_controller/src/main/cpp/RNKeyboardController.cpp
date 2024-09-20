/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 */

/**
 * This code was generated by "react-native codegen-harmony"
 *
 * Do not edit this file as changes may cause incorrect behavior and will be
 * lost once the code is regenerated.
 *
 * @generatorVersion: 1
 */
#include "RNKeyboardController.h"

namespace rnoh {
using namespace facebook;
KeyboardController::KeyboardController(const ArkTSTurboModule::Context ctx, const std::string name) : ArkTSTurboModule(ctx, name)
{
    methodMap_ = {
        ARK_METHOD_METADATA(getConstants, 0),
        ARK_METHOD_METADATA(setInputMode, 1),
        ARK_METHOD_METADATA(setDefaultMode, 0),
        ARK_METHOD_METADATA(dismiss, 0),
        ARK_METHOD_METADATA(setFocusTo, 1),
        ARK_METHOD_METADATA(addListener, 1),
        ARK_METHOD_METADATA(removeListeners, 1),
    };
}

} // namespace rnoh