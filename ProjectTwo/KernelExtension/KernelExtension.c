//
//  KernelExtension.c
//  KernelExtension
//
//  Created by Joel Saltzman on 7/15/18.
//  Copyright © 2018 Joel Saltzman. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t KernelExtension_start(kmod_info_t * ki, void *d);
kern_return_t KernelExtension_stop(kmod_info_t *ki, void *d);

kern_return_t KernelExtension_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t KernelExtension_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
