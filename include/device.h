#pragma once

#include "device_plugin_container.h"

namespace dronecore {

class DeviceImpl;

class Device : public DevicePluginContainer
{
public:
    explicit Device(DeviceImpl *impl);
    ~Device();

private:

    // Non-copyable
    Device(const Device &) = delete;
    const Device &operator=(const Device &) = delete;
};

} // namespace dronecore
