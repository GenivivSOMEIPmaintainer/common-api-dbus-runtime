/* Copyright (C) 2013 BMW Group
 * Author: Manfred Bathelt (manfred.bathelt@bmw.de)
 * Author: Juergen Gehring (juergen.gehring@bmw.de)
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef COMMONAPI_TESTS_TEST_INTERFACE_STUB_DEFAULT_H_
#define COMMONAPI_TESTS_TEST_INTERFACE_STUB_DEFAULT_H_

#include "TestInterfaceStub.h"

namespace commonapi {
namespace tests {

class TestInterfaceStubDefault : public TestInterfaceStub {
 public:
    TestInterfaceStubDefault();

    TestInterfaceStubRemoteEvent* initStubAdapter(const std::shared_ptr<TestInterfaceStubAdapter>& stubAdapter);

    virtual const uint32_t& getTestPredefinedTypeAttributeAttribute();
    void setTestPredefinedTypeAttributeAttribute(uint32_t value);

    virtual const DerivedTypeCollection::TestStructExtended& getTestDerivedStructAttributeAttribute();
    void setTestDerivedStructAttributeAttribute(DerivedTypeCollection::TestStructExtended value);

    virtual const DerivedTypeCollection::TestArrayUInt64& getTestDerivedArrayAttributeAttribute();
    void setTestDerivedArrayAttributeAttribute(DerivedTypeCollection::TestArrayUInt64 value);


    virtual void testVoidPredefinedTypeMethod(uint32_t uint32Value, std::string stringValue);

    virtual void testPredefinedTypeMethod(uint32_t uint32InValue, std::string stringInValue, uint32_t& uint32OutValue, std::string& stringOutValue);

    virtual void testVoidDerivedTypeMethod(DerivedTypeCollection::TestEnumExtended2 testEnumExtended2Value, DerivedTypeCollection::TestMap testMapValue);

    virtual void testDerivedTypeMethod(DerivedTypeCollection::TestEnumExtended2 testEnumExtended2InValue, DerivedTypeCollection::TestMap testMapInValue, DerivedTypeCollection::TestEnumExtended2& testEnumExtended2OutValue, DerivedTypeCollection::TestMap& testMapOutValue);

    virtual void firePredefinedBroadcast(uint32_t value, std::string& sValue);

 protected:
    void onRemoteTestPredefinedTypeAttributeAttributeChanged();
    bool trySetTestPredefinedTypeAttributeAttribute(uint32_t value);
    bool validateTestPredefinedTypeAttributeAttributeRequestedValue(const uint32_t& value);

    void onRemoteTestDerivedStructAttributeAttributeChanged();
    bool trySetTestDerivedStructAttributeAttribute(DerivedTypeCollection::TestStructExtended value);
    bool validateTestDerivedStructAttributeAttributeRequestedValue(const DerivedTypeCollection::TestStructExtended& value);

    void onRemoteTestDerivedArrayAttributeAttributeChanged();
    bool trySetTestDerivedArrayAttributeAttribute(DerivedTypeCollection::TestArrayUInt64 value);
    bool validateTestDerivedArrayAttributeAttributeRequestedValue(const DerivedTypeCollection::TestArrayUInt64& value);


 private:
    class RemoteEventHandler: public TestInterfaceStubRemoteEvent {
     public:
        RemoteEventHandler(TestInterfaceStubDefault* defaultStub);

        virtual bool onRemoteSetTestPredefinedTypeAttributeAttribute(uint32_t value);
        virtual void onRemoteTestPredefinedTypeAttributeAttributeChanged();

        virtual bool onRemoteSetTestDerivedStructAttributeAttribute(DerivedTypeCollection::TestStructExtended value);
        virtual void onRemoteTestDerivedStructAttributeAttributeChanged();

        virtual bool onRemoteSetTestDerivedArrayAttributeAttribute(DerivedTypeCollection::TestArrayUInt64 value);
        virtual void onRemoteTestDerivedArrayAttributeAttributeChanged();


     private:
        TestInterfaceStubDefault* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;
    std::shared_ptr<TestInterfaceStubAdapter> stubAdapter_;

    uint32_t testPredefinedTypeAttributeAttributeValue_;
    DerivedTypeCollection::TestStructExtended testDerivedStructAttributeAttributeValue_;
    DerivedTypeCollection::TestArrayUInt64 testDerivedArrayAttributeAttributeValue_;
};

} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_TEST_INTERFACE_STUB_DEFAULT_H_
