/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/commonapi/tests/managed/BranchInterface.hpp>
#include <v1/commonapi/tests/managed/BranchInterfaceDBusStubAdapter.hpp>

namespace v1 {
namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createBranchInterfaceDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<BranchInterfaceDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerBranchInterfaceDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	BranchInterface::getInterface(), &createBranchInterfaceDBusStubAdapter);
}

BranchInterfaceDBusStubAdapterInternal::~BranchInterfaceDBusStubAdapterInternal() {
    deactivateManagedInstances();
    BranchInterfaceDBusStubAdapterHelper::deinit();
}

void BranchInterfaceDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* BranchInterfaceDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"testBranchMethod\">\n"
            "<arg name=\"_inInt\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"_inString\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"_outInt\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"_outString\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::commonapi::tests::managed::BranchInterfaceStub,
        CommonAPI::Version
        > BranchInterfaceDBusStubAdapterInternal::getBranchInterfaceInterfaceVersionStubDispatcher(&BranchInterfaceStub::getInterfaceVersion, "uu");




CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::commonapi::tests::managed::BranchInterfaceStub,
    std::tuple<int32_t, std::string>,
    std::tuple<BranchInterface::testBranchMethodError, int32_t, std::string>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment>
    
    > BranchInterfaceDBusStubAdapterInternal::testBranchMethodStubDispatcher(
    &BranchInterfaceStub::testBranchMethod, "iis",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment *>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)));





const BranchInterfaceDBusStubAdapterHelper::StubDispatcherTable& BranchInterfaceDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& BranchInterfaceDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

BranchInterfaceDBusStubAdapterInternal::BranchInterfaceDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      BranchInterfaceDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<BranchInterfaceStub>(_stub), false),
      stubDispatcherTable_({
            { { "testBranchMethod", "is" }, &commonapi::tests::managed::BranchInterfaceDBusStubAdapterInternal::testBranchMethodStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &commonapi::tests::managed::BranchInterfaceDBusStubAdapterInternal::getBranchInterfaceInterfaceVersionStubDispatcher });
}

bool BranchInterfaceDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1
