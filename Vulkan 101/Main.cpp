// Copyright 2016 Intel Corporation All Rights Reserved
// 
// Intel makes no representations about the suitability of this software for any purpose.
// THIS SOFTWARE IS PROVIDED ""AS IS."" INTEL SPECIFICALLY DISCLAIMS ALL WARRANTIES,
// EXPRESS OR IMPLIED, AND ALL LIABILITY, INCLUDING CONSEQUENTIAL AND OTHER INDIRECT DAMAGES,
// FOR THE USE OF THIS SOFTWARE, INCLUDING LIABILITY FOR INFRINGEMENT OF ANY PROPRIETARY
// RIGHTS, AND INCLUDING THE WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
// Intel does not assume any responsibility for any errors which may appear in this software
// nor any responsibility to update it.

#include "Tutorial01.h"

int main(int argc, char **argv) {
	ApiWithoutSecrets::OS::Window window;
	ApiWithoutSecrets::Tutorial01 tutorial01;

	// Window creation
	if (!window.Create("01 - The Beginning")) {
		return -1;
	}

	// Vulkan preparations and initialization
	if (!tutorial01.PrepareVulkan()) {
		return -1;
	}

	// Rendering loop
	if (!window.RenderingLoop(tutorial01)) {
		return -1;
	}

	return 0;
}