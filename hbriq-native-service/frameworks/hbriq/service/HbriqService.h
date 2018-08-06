#ifndef __HBRIQ_SERVICE_H__
#define __HBRIQ_SERVICE_H__

#include <IHbriqService.h>
#include <BnHbriqService.h>
#include <utils/String16.h>

using namespace android;

class HbriqService : public BinderService<HbriqService>,public IHbriq::BnHbriqService
{

public:
	/**
     * Will be called by binder f/w when we register the service, refer main
     * call of this service
     */
    static char const* getServiceName() {
        return "HbriqService";
    }

    HbriqService();

    /**
     * This is for dumpsys - Do not get confused with dumpInternal
     */
    virtual status_t dump(int fd, const Vector<String16>& args);

    /**
     * Better keep the same definition as defined in native interface
     */
    virtual ::android::binder::Status openDevice(const ::android::String16& dev, int32_t* _aidl_return) {
        // call simpler form of api defined for actual service implementation
        int ret = openDevice(dev);
        *_aidl_return = ret;
        return binder::Status::ok();
    }
    int openDevice(String16 dev);
};

#endif /* __HBRIQ_SERVICE_H__ */








