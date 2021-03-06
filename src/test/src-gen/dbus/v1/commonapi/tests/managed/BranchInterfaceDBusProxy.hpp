/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_TESTS_MANAGED_Branch_Interface_DBUS_PROXY_HPP_
#define V1_COMMONAPI_TESTS_MANAGED_Branch_Interface_DBUS_PROXY_HPP_

#include <v1/commonapi/tests/managed/BranchInterfaceProxyBase.hpp>
#include "v1/commonapi/tests/managed/BranchInterfaceDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace commonapi {
namespace tests {
namespace managed {

class BranchInterfaceDBusProxy
    : virtual public BranchInterfaceProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    BranchInterfaceDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~BranchInterfaceDBusProxy() { }



    virtual void testBranchMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_internalCallStatus, BranchInterface::testBranchMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> testBranchMethodAsync(const int32_t &_inInt, const std::string &_inString, TestBranchMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   


};

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_TESTS_MANAGED_Branch_Interface_DBUS_PROXY_HPP_

