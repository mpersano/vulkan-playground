#pragma once

#include "noncopyable.h"
#include "vulkandevice.h"

#include <vulkan/vulkan.h>

namespace V {

class Semaphore : private NonCopyable
{
public:
    explicit Semaphore(const Device *device);
    ~Semaphore();

    const Device *device() const { return m_device; }
    VkDevice deviceHandle() const { return m_device->device(); }

    VkSemaphore handle() const { return m_handle; }

private:
    const Device *m_device;
    VkSemaphore m_handle = VK_NULL_HANDLE;
};

} // namespace V
