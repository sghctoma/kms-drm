#include <sys/param.h>
#include <sys/kernel.h>

#include <machine/specialreg.h>
#include <machine/md_var.h>

#include <linux/bitops.h>
#include <linux/idr.h>
#include <linux/pci.h>

#include <asm/processor.h>

/*
 * intel_graphics_stolen_* are defined in sys/dev/pci/pcivar.h
 * and set at early boot from machdep.c. Copy over the values
 * here to a linux_resource struct.
 */
struct linux_resource intel_graphics_stolen_res;
struct cpuinfo_x86 boot_cpu_data;

struct ida *hwmon_idap;
DEFINE_IDA(hwmon_ida);

static void
linux_compat_init(void *arg __unused)
{

	if ((cpu_feature & CPUID_CLFSH) != 0)
		set_bit(X86_FEATURE_CLFLUSH, &boot_cpu_data.x86_capability);
	if ((cpu_feature & CPUID_PAT) != 0)
		set_bit(X86_FEATURE_PAT, &boot_cpu_data.x86_capability);
	boot_cpu_data.x86_clflush_size = cpu_clflush_line_size;
	boot_cpu_data.x86 = ((cpu_id & 0xf0000) >> 12) | ((cpu_id & 0xf0) >> 4);

	hwmon_idap = &hwmon_ida;
	/* Defined in $SYSDIR/dev/pci/pcivar.h */
#ifdef PCI_EARLY_QUIRKS_INTEL_GRAPHICS_STOLEN
	intel_graphics_stolen_res = (struct linux_resource)
	        DEFINE_RES_MEM(intel_graphics_stolen_base,
	            intel_graphics_stolen_size);
#else
	intel_graphics_stolen_res = (struct linux_resource)DEFINE_RES_MEM(0, 0);
#endif
}
SYSINIT(linux_compat, SI_SUB_VFS, SI_ORDER_ANY, linux_compat_init, NULL);
