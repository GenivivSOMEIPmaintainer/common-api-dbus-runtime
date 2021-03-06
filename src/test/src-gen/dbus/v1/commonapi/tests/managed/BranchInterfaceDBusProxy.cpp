/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/commonapi/tests/managed/BranchInterfaceDBusProxy.hpp>

namespace v1 {
namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createBranchInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<BranchInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerBranchInterfaceDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		BranchInterface::getInterface(),
		&createBranchInterfaceDBusProxy);
}

BranchInterfaceDBusProxy::BranchInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
{
}


    
    void BranchInterfaceDBusProxy::testBranchMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_internalCallStatus, BranchInterface::testBranchMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<BranchInterface::testBranchMethodError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_inInt(_inInt, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_inString(_inString, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_outInt(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_outString(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<BranchInterface::testBranchMethodError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<int32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "testBranchMethod",
        "is",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_inInt, deploy_inString,
_internalCallStatus,
deploy_error,
deploy_outInt, deploy_outString);
_error = deploy_error.getValue();
_outInt = deploy_outInt.getValue();
_outString = deploy_outString.getValue();
}
    std::future<CommonAPI::CallStatus> BranchInterfaceDBusProxy::testBranchMethodAsync(const int32_t &_inInt, const std::string &_inString, TestBranchMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<BranchInterface::testBranchMethodError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_inInt(_inInt, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_inString(_inString, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_outInt(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_outString(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<BranchInterface::testBranchMethodError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<int32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodAsync(
        *this,
        "testBranchMethod",
        "is",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_inInt, deploy_inString,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<BranchInterface::testBranchMethodError, CommonAPI::EmptyDeployment> _deploy_error, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> _outInt, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _outString) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue(), _outInt.getValue(), _outString.getValue());
        },
        std::make_tuple(deploy_error, deploy_outInt, deploy_outString));
    }


void BranchInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace managed
      } // namespace tests
      } // namespace commonapi
      } // namespace v1
