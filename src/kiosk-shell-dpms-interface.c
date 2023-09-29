/* Generated by wayland-scanner 1.21.0 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif


static const struct wl_interface *kiosk_shell_dpms_management_types[] = {
	NULL,
};

static const struct wl_message kiosk_shell_dpms_manager_requests[] = {
	{ "set_mode", "u", kiosk_shell_dpms_management_types + 0 },
};

WL_PRIVATE const struct wl_interface kiosk_shell_dpms_manager_interface = {
	"kiosk_shell_dpms_manager", 1,
	1, kiosk_shell_dpms_manager_requests,
	0, NULL,
};

