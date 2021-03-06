/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/fake/legacy/service/LegacyInterfaceNoObjectManager.hpp>
#include <v1/fake/legacy/service/LegacyInterfaceNoObjectManagerDBusStubAdapter.hpp>

namespace v1 {
namespace fake {
namespace legacy {
namespace service {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createLegacyInterfaceNoObjectManagerDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<LegacyInterfaceNoObjectManagerDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerLegacyInterfaceNoObjectManagerDBusStubAdapter) {
     CommonAPI::DBus::DBusAddressTranslator::get()->insert(
         "local:fake.legacy.service.LegacyInterfaceNoObjectManager:fake.legacy.service.LegacyInterfaceNoObjectManager",
         "",
         "",
         "");
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	LegacyInterfaceNoObjectManager::getInterface(), &createLegacyInterfaceNoObjectManagerDBusStubAdapter);
}

LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::~LegacyInterfaceNoObjectManagerDBusStubAdapterInternal() {
    deactivateManagedInstances();
    LegacyInterfaceNoObjectManagerDBusStubAdapterHelper::deinit();
}

void LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        std::string(LegacyInterfaceDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData()) +

        ""
    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::fake::legacy::service::LegacyInterfaceNoObjectManagerStub,
        CommonAPI::Version
        > LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getLegacyInterfaceNoObjectManagerInterfaceVersionStubDispatcher(&LegacyInterfaceNoObjectManagerStub::getInterfaceVersion, "uu");


#ifdef WIN32
#endif


#ifdef WIN32

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::fake::legacy::service::LegacyInterfaceNoObjectManagerStub,
    std::tuple<int32_t>,
    std::tuple<int32_t, int32_t>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>
    
    > LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::testMethodStubDispatcher(
    &LegacyInterfaceNoObjectManagerStub::TestMethod, "ii",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::fake::legacy::service::LegacyInterfaceNoObjectManagerStub,
    std::tuple<>,
    std::tuple<std::string, int32_t>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::StringDeployment, CommonAPI::EmptyDeployment>
    
    > LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::otherTestMethodStubDispatcher(
    &LegacyInterfaceNoObjectManagerStub::OtherTestMethod, "si",
					std::make_tuple(),
                	std::make_tuple(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::fake::legacy::service::LegacyInterfaceNoObjectManagerStub,
    std::tuple<>,
    std::tuple<>,
    std::tuple<>,
    std::tuple<>
    
    > LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::finishStubDispatcher(
    &LegacyInterfaceNoObjectManagerStub::finish, "",
					std::make_tuple(),
                	std::make_tuple());
#endif



#ifdef WIN32
#endif

const LegacyInterfaceNoObjectManagerDBusStubAdapterHelper::StubDispatcherTable& LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      LegacyInterfaceNoObjectManagerDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<LegacyInterfaceNoObjectManagerStub>(_stub), false),
      LegacyInterfaceDBusStubAdapterInternal(_address, _connection, _stub),
      stubDispatcherTable_({
            #ifdef WIN32
            { { "TestMethod", "i" }, &fake::legacy::service::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::testMethodStubDispatcher },
            { { "OtherTestMethod", "" }, &fake::legacy::service::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::otherTestMethodStubDispatcher },
            { { "finish", "" }, &fake::legacy::service::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::finishStubDispatcher }
            #endif
            }),
        stubAttributeTable_() {

    #ifdef WIN32
    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &fake::legacy::service::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getLegacyInterfaceNoObjectManagerInterfaceVersionStubDispatcher });
    #else
    auto parentDispatcherTable = LegacyInterfaceDBusStubAdapterInternal::getStubDispatcherTable();
    stubDispatcherTable_.insert(parentDispatcherTable.begin(), parentDispatcherTable.end());

    auto interfaceVersionGetter = stubDispatcherTable_.find({ "getInterfaceVersion", "" });
    if(interfaceVersionGetter != stubDispatcherTable_.end()) {
        interfaceVersionGetter->second = &fake::legacy::service::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getLegacyInterfaceNoObjectManagerInterfaceVersionStubDispatcher;
    } else {
        stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &fake::legacy::service::LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::getLegacyInterfaceNoObjectManagerInterfaceVersionStubDispatcher });
    }

    auto parentAttributeTable = LegacyInterfaceDBusStubAdapterInternal::getStubAttributeTable();
    stubAttributeTable_.insert(parentAttributeTable.begin(), parentAttributeTable.end());

    #endif
}

bool LegacyInterfaceNoObjectManagerDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace service
} // namespace legacy
} // namespace fake
} // namespace v1
