#ifndef ASMARM_DMA_CONTIGUOUS_H
#define ASMARM_DMA_CONTIGUOUS_H

#ifdef __KERNEL__
#ifdef CONFIG_DMA_CMA

#include <linux/types.h>

void dma_contiguous_early_fixup(phys_addr_t base, unsigned long size);
static inline void __init dma_contiguous_early_removal_fixup(void) { }

#endif
#endif

#endif
