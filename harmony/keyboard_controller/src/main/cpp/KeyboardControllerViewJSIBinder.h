/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 */
#ifndef TESTER_HARMONY_KEYBOARD_CONTROLLER_SRC_MAIN_CPP_KEYBOARDCONTROLLERVIEWJSIBINDER_H
#define TESTER_HARMONY_KEYBOARD_CONTROLLER_SRC_MAIN_CPP_KEYBOARDCONTROLLERVIEWJSIBINDER_H

#pragma once

/**
 * This code was generated by "react-native codegen-harmony"
 *
 * Do not edit this file as changes may cause incorrect behavior and will be
 * lost once the code is regenerated.
 *
 * @generatorVersion: 1
 */

#include "RNOHCorePackage/ComponentBinders/ViewComponentJSIBinder.h"

namespace rnoh {
class KeyboardControllerViewJSIBinder : public ViewComponentJSIBinder {
protected:
    facebook::jsi::Object createNativeProps(facebook::jsi::Runtime &rt) override {
        auto object = ViewComponentJSIBinder::createNativeProps(rt);
        object.setProperty(rt, "enabled", "bool");
        object.setProperty(rt, "statusBarTranslucent", "bool");
        object.setProperty(rt, "navigationBarTranslucent", "bool");
        return object;
    }

    facebook::jsi::Object createBubblingEventTypes(facebook::jsi::Runtime &rt) override {
        facebook::jsi::Object events(rt);
        return events;
    }

    facebook::jsi::Object createDirectEventTypes(facebook::jsi::Runtime &rt) override {
        facebook::jsi::Object events(rt);
        events.setProperty(rt, "topKeyboardMoveStart", createDirectEvent(rt, "onKeyboardMoveStart"));
        events.setProperty(rt, "topKeyboardMove", createDirectEvent(rt, "onKeyboardMove"));
        events.setProperty(rt, "topKeyboardMoveEnd", createDirectEvent(rt, "onKeyboardMoveEnd"));
        events.setProperty(rt, "topKeyboardMoveInteractive", createDirectEvent(rt, "onKeyboardMoveInteractive"));
        events.setProperty(rt, "topFocusedInputLayoutChanged", createDirectEvent(rt, "onFocusedInputLayoutChanged"));
        events.setProperty(rt, "topFocusedInputTextChanged", createDirectEvent(rt, "onFocusedInputTextChanged"));
        events.setProperty(rt, "topFocusedInputSelectionChanged",
                           createDirectEvent(rt, "onFocusedInputSelectionChanged"));
        return events;
    }
};
} // namespace rnoh

#endif