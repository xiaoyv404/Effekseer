
#ifndef __EFFEKSEERRENDERER_VULKAN_BASE_PRE_H__
#define __EFFEKSEERRENDERER_VULKAN_BASE_PRE_H__

#include <Effekseer.h>

#ifdef _WIN32
#define VK_USE_PLATFORM_WIN32_KHR
#elif defined(__APPLE__)
#define VK_ENABLE_BETA_EXTENSIONS
#define VK_USE_PLATFORM_MACOS_MVK
#endif
#include <vulkan/vulkan.h>

#endif