/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "RootInterfaceDBusStubAdapter.h"
#include <commonapi/tests/managed/RootInterface.h>

namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createRootInterfaceDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<RootInterfaceDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

INITIALIZER(registerRootInterfaceDBusStubAdapter) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(RootInterface::getInterfaceId(),
                                                               &createRootInterfaceDBusStubAdapter);
}



RootInterfaceDBusStubAdapterInternal::~RootInterfaceDBusStubAdapterInternal() {
    deactivateManagedInstances();
    RootInterfaceDBusStubAdapterHelper::deinit();
}

void RootInterfaceDBusStubAdapterInternal::deactivateManagedInstances() {
    std::set<std::string>::iterator iter;
    std::set<std::string>::iterator iterNext;

    iter = registeredLeafInterfaceInstances.begin();
    while (iter != registeredLeafInterfaceInstances.end()) {
        iterNext = std::next(iter);

        if (deregisterManagedStubLeafInterface(*iter)) {
            iter = iterNext;
        }
        else {
            iter++;
        }
    }
    iter = registeredBranchInterfaceInstances.begin();
    while (iter != registeredBranchInterfaceInstances.end()) {
        iterNext = std::next(iter);

        if (deregisterManagedStubBranchInterface(*iter)) {
            iter = iterNext;
        }
        else {
            iter++;
        }
    }
}

const char* RootInterfaceDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"testRootMethod\">\n"
            "<arg name=\"inInt\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"inString\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"methodError\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"outInt\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"outString\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        RootInterfaceStub,
        CommonAPI::Version
        > RootInterfaceDBusStubAdapterInternal::getRootInterfaceInterfaceVersionStubDispatcher(&RootInterfaceStub::getInterfaceVersion, "uu");



CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    RootInterfaceStub,
    std::tuple<int32_t, std::string>,
    std::tuple<RootInterface::testRootMethodError, int32_t, std::string>
    > RootInterfaceDBusStubAdapterInternal::testRootMethodStubDispatcher(&RootInterfaceStub::testRootMethod, "iis");





const RootInterfaceDBusStubAdapterHelper::StubDispatcherTable& RootInterfaceDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& RootInterfaceDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

  bool RootInterfaceDBusStubAdapterInternal::registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub> stub, const std::string& instance) {
      if (registeredLeafInterfaceInstances.find(instance) == registeredLeafInterfaceInstances.end()) {
          std::string commonApiAddress = "local:commonapi.tests.managed.LeafInterface:" + instance;

          std::string interfaceName;
          std::string connectionName;
          std::string objectPath;

          CommonAPI::DBus::DBusAddressTranslator::getInstance().searchForDBusAddress(
                  commonApiAddress,
                  interfaceName,
                  connectionName,
                  objectPath);

          if (objectPath.compare(0, dbusObjectPath_.length(), dbusObjectPath_) == 0) {
              auto dbusStubAdapter = factory_->createDBusStubAdapter(stub, "commonapi.tests.managed.LeafInterface",
                      instance, "commonapi.tests.managed.LeafInterface", "local");

              bool success = CommonAPI::DBus::DBusServicePublisher::getInstance()->registerManagedService(dbusStubAdapter);
              if (success) {
                  bool isServiceExportSuccessful = dbusConnection_->getDBusObjectManager()->exportManagedDBusStubAdapter(dbusObjectPath_, dbusStubAdapter);
                  if (isServiceExportSuccessful) {
                      registeredLeafInterfaceInstances.insert(instance);
                      return true;
                  } else {
                      CommonAPI::DBus::DBusServicePublisher::getInstance()->unregisterManagedService(commonApiAddress);
                  }
              }
          }
      }
      return false;
  }

  bool RootInterfaceDBusStubAdapterInternal::deregisterManagedStubLeafInterface(const std::string& instance) {
      std::string commonApiAddress = "local:commonapi.tests.managed.LeafInterface:" + instance;
      if (registeredLeafInterfaceInstances.find(instance) != registeredLeafInterfaceInstances.end()) {
          std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> dbusStubAdapter =
                      CommonAPI::DBus::DBusServicePublisher::getInstance()->getRegisteredService(commonApiAddress);
          if (dbusStubAdapter != nullptr) {
              dbusConnection_->getDBusObjectManager()->unexportManagedDBusStubAdapter(dbusObjectPath_, dbusStubAdapter);
              CommonAPI::DBus::DBusServicePublisher::getInstance()->unregisterManagedService(commonApiAddress);
              registeredLeafInterfaceInstances.erase(instance);
              return true;
          }
      }
      return false;
  }

  std::set<std::string>& RootInterfaceDBusStubAdapterInternal::getLeafInterfaceInstances() {
      return registeredLeafInterfaceInstances;
  }

  bool RootInterfaceDBusStubAdapterInternal::registerManagedStubBranchInterface(std::shared_ptr<BranchInterfaceStub> stub, const std::string& instance) {
      if (registeredBranchInterfaceInstances.find(instance) == registeredBranchInterfaceInstances.end()) {
          std::string commonApiAddress = "local:commonapi.tests.managed.BranchInterface:" + instance;

          std::string interfaceName;
          std::string connectionName;
          std::string objectPath;

          CommonAPI::DBus::DBusAddressTranslator::getInstance().searchForDBusAddress(
                  commonApiAddress,
                  interfaceName,
                  connectionName,
                  objectPath);

          if (objectPath.compare(0, dbusObjectPath_.length(), dbusObjectPath_) == 0) {
              auto dbusStubAdapter = factory_->createDBusStubAdapter(stub, "commonapi.tests.managed.BranchInterface",
                      instance, "commonapi.tests.managed.BranchInterface", "local");

              bool success = CommonAPI::DBus::DBusServicePublisher::getInstance()->registerManagedService(dbusStubAdapter);
              if (success) {
                  bool isServiceExportSuccessful = dbusConnection_->getDBusObjectManager()->exportManagedDBusStubAdapter(dbusObjectPath_, dbusStubAdapter);
                  if (isServiceExportSuccessful) {
                      registeredBranchInterfaceInstances.insert(instance);
                      return true;
                  } else {
                      CommonAPI::DBus::DBusServicePublisher::getInstance()->unregisterManagedService(commonApiAddress);
                  }
              }
          }
      }
      return false;
  }

  bool RootInterfaceDBusStubAdapterInternal::deregisterManagedStubBranchInterface(const std::string& instance) {
      std::string commonApiAddress = "local:commonapi.tests.managed.BranchInterface:" + instance;
      if (registeredBranchInterfaceInstances.find(instance) != registeredBranchInterfaceInstances.end()) {
          std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> dbusStubAdapter =
                      CommonAPI::DBus::DBusServicePublisher::getInstance()->getRegisteredService(commonApiAddress);
          if (dbusStubAdapter != nullptr) {
              dbusConnection_->getDBusObjectManager()->unexportManagedDBusStubAdapter(dbusObjectPath_, dbusStubAdapter);
              CommonAPI::DBus::DBusServicePublisher::getInstance()->unregisterManagedService(commonApiAddress);
              registeredBranchInterfaceInstances.erase(instance);
              return true;
          }
      }
      return false;
  }

  std::set<std::string>& RootInterfaceDBusStubAdapterInternal::getBranchInterfaceInstances() {
      return registeredBranchInterfaceInstances;
  }

RootInterfaceDBusStubAdapterInternal::RootInterfaceDBusStubAdapterInternal(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        CommonAPI::DBus::DBusStubAdapter(
                factory,
                commonApiAddress,
                dbusInterfaceName,
                dbusBusName,
                dbusObjectPath,
                dbusConnection,
                true),
        RootInterfaceDBusStubAdapterHelper(
            factory,
            commonApiAddress,
            dbusInterfaceName,
            dbusBusName,
            dbusObjectPath,
            dbusConnection,
            std::dynamic_pointer_cast<RootInterfaceStub>(stub),
            true),
        stubDispatcherTable_({
            { { "testRootMethod", "is" }, &commonapi::tests::managed::RootInterfaceDBusStubAdapterInternal::testRootMethodStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &commonapi::tests::managed::RootInterfaceDBusStubAdapterInternal::getRootInterfaceInterfaceVersionStubDispatcher });
}

const bool RootInterfaceDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace managed
} // namespace tests
} // namespace commonapi