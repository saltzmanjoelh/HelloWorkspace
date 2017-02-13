//
//  KernelExtension.c
//  KernelExtension
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
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
