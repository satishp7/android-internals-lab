/*
 * Copyright 2018, HiveBriq Software Consultancy.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdint.h>

#include <binder/BinderService.h>
#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>

#include <IHbriqService.h>

#include <utils/Log.h>
#include <utils/String8.h>

#include "HbriqService.h"

using namespace android;
// ---------------------------------------------------------------------------

HbriqService::HbriqService(){}
int HbriqService::openDevice(String16 dev)
{
  ALOGD("HbriqService::openDevice ==> device name:%s", String8(dev).string());
  return 0;
}

int HbriqService::setValue(int val)
{
  ALOGD("HbriqService::setValue ==> value:%d", val);
  return 0;
}

int HbriqService::getValue()
{
  ALOGD("HbriqService::getValue ==> returning dummy '82'");
  return 82;
}

status_t HbriqService::dump(int fd, const Vector<String16>& args) {
    ALOGD("HbriqService:dump ==> called from dumpsys");
    return NO_ERROR;
}

int main(int /* argc */, char** /*argv*/)
{
    /* Let's add the service and register with service manager */
    defaultServiceManager()->addService(String16("HBriqService"), new HbriqService());

    /* starts the Binder thread pool for that process */
    ProcessState::self()->startThreadPool();

    /* calling into the thread pool to serve incoming transactions */
    IPCThreadState::self()->joinThreadPool();
    return 0;
}
