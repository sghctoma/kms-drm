# $FreeBSD$

SRCDIR=	${.CURDIR:H}/drivers/gpu/drm/radeon

.PATH:	${SRCDIR}

KMOD=	radeonkms
SRCS=	atom.c \
	atombios_crtc.c \
	atombios_dp.c \
	atombios_encoders.c \
	atombios_i2c.c \
	btc_dpm.c \
	cayman_blit_shaders.c \
	ci_dpm.c \
	ci_smc.c \
	cik.c \
	cik_blit_shaders.c \
	cik_sdma.c \
	cypress_dpm.c \
	dce3_1_afmt.c \
	dce6_afmt.c \
	evergreen.c \
	evergreen_blit_shaders.c \
	evergreen_cs.c \
	evergreen_dma.c \
	evergreen_hdmi.c \
	kv_dpm.c \
	kv_smc.c \
	ni.c \
	ni_dma.c \
	ni_dpm.c \
	r100.c \
	r200.c \
	r300.c \
	r420.c \
	r520.c \
	r600.c \
	r600_blit_shaders.c \
	r600_cs.c \
	r600_dma.c \
	r600_dpm.c \
	r600_hdmi.c \
	radeon_acpi.c \
	radeon_agp.c \
	radeon_asic.c \
	radeon_atombios.c \
	radeon_atpx_handler.c \
	radeon_audio.c \
	radeon_benchmark.c \
	radeon_bios.c \
	radeon_clocks.c \
	radeon_combios.c \
	radeon_connectors.c \
	radeon_cs.c \
	radeon_cursor.c \
	radeon_device.c \
	radeon_display.c \
	radeon_dp_auxch.c \
	radeon_dp_mst.c \
	radeon_drv.c \
	radeon_encoders.c \
	radeon_fb.c \
	radeon_fence.c \
	radeon_freebsd.c \
	radeon_gart.c \
	radeon_gem.c \
	radeon_i2c.c \
	radeon_ib.c \
	radeon_irq_kms.c \
	radeon_kms.c \
	radeon_legacy_crtc.c \
	radeon_legacy_encoders.c \
	radeon_legacy_tv.c \
	radeon_object.c \
	radeon_pm.c \
	radeon_prime.c \
	radeon_ring.c \
	radeon_sa.c \
	radeon_semaphore.c \
	radeon_sync.c \
	radeon_test.c \
	radeon_trace_points.c \
	radeon_ttm.c \
	radeon_ucode.c \
	radeon_uvd.c \
	radeon_vce.c \
	radeon_vm.c \
	rs400.c \
	rs600.c \
	rs690.c \
	rs780_dpm.c \
	rv515.c \
	rv6xx_dpm.c \
	rv730_dpm.c \
	rv740_dpm.c \
	rv770.c \
	rv770_dma.c \
	rv770_dpm.c \
	rv770_smc.c \
	si.c \
	si_blit_shaders.c \
	si_dma.c \
	si_dpm.c \
	si_smc.c \
	sumo_dpm.c \
	sumo_smc.c \
	trinity_dpm.c \
	trinity_smc.c \
	uvd_v1_0.c \
	uvd_v2_2.c \
	uvd_v3_1.c \
	uvd_v4_2.c \
	vce_v1_0.c \
	vce_v2_0.c

CFLAGS+= -I${.CURDIR:H}/linuxkpi/gplv2/include
CFLAGS+= -I${SYSDIR}/compat/linuxkpi/common/include
CFLAGS+= -I${.CURDIR:H}/linuxkpi/dummy/include

CFLAGS+= -I${.CURDIR:H}/include
CFLAGS+= -I${.CURDIR:H}/include/drm
CFLAGS+= -I${.CURDIR:H}/include/uapi
CFLAGS+= -I${SRCDIR:H:H}
CFLAGS+= -I${SRCDIR:H}/amd/include

CFLAGS+= '-DKBUILD_MODNAME="${KMOD}"'
CFLAGS+= -include ${SRCDIR:H}/drm_os_config.h

SRCS+=	device_if.h vnode_if.h bus_if.h pci_if.h device_if.h iicbus_if.h opt_drm.h \
	opt_vm.h opt_compat.h opt_syscons.h opt_acpi.h

.include <bsd.kmod.mk>

CWARNFLAGS+= -Wno-format
CWARNFLAGS+= -Wno-expansion-to-defined

CWARNFLAGS.atombios_encoders.c=	-Wno-missing-prototypes
CWARNFLAGS.atombios_i2c.c=	-Wno-missing-prototypes
CWARNFLAGS.ci_dpm.c=		-Wno-unused-const-variable
CWARNFLAGS.cik.c=		-Wno-cast-qual -Wno-missing-prototypes
CWARNFLAGS.cik_sdma.c=		-Wno-missing-prototypes
CWARNFLAGS.dce3_1_afmt.c=	-Wno-missing-prototypes
CWARNFLAGS.dce6_afmt.c=		-Wno-missing-prototypes
CWARNFLAGS.evergreen.c=		-Wno-missing-prototypes -Wno-cast-qual
CWARNFLAGS.evergreen_cs.c=	-Wno-missing-prototypes
CWARNFLAGS.evergreen_hdmi.c=	-Wno-missing-prototypes
CWARNFLAGS.kv_dpm.c=		-Wno-unused-const-variable
CWARNFLAGS.ni.c=		-Wno-cast-qual -Wno-missing-prototypes
CWARNFLAGS.ni_dpm.c=		-Wno-missing-prototypes
CWARNFLAGS.r600.c=		-Wno-missing-prototypes -Wno-cast-qual
CWARNFLAGS.r600_cs.c=		-Wno-format -Wno-missing-prototypes
CWARNFLAGS.r600_hdmi.c=		-Wno-missing-prototypes
CWARNFLAGS.radeon_acpi.c=	-Wno-implicit-function-declaration
CWARNFLAGS.radeon_atombios.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_atpx_handler.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_clocks.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_device.c=	-Wno-cast-qual -Wno-missing-prototypes
CWARNFLAGS.radeon_dp_mst.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_gem.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_irq_kms.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_kms.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_legacy_encoders.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_mn.c=		-Wno-unused-variable
CWARNFLAGS.radeon_pm.c=		-Wno-missing-prototypes
CWARNFLAGS.radeon_prime.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_ring.c=	-Wno-cast-qual
CWARNFLAGS.radeon_ttm.c=	-Wno-missing-prototypes
CWARNFLAGS.radeon_ucode.c=	-Wno-incompatible-pointer-types-discards-qualifiers
CWARNFLAGS.radeon_uvd.c=	-Wno-cast-qual
CWARNFLAGS.rv770.c=		-Wno-missing-prototypes
CWARNFLAGS.rv770_dpm.c=		-Wno-missing-prototypes
CWARNFLAGS.si.c=		-Wno-missing-prototypes -Wno-cast-qual
CWARNFLAGS.si_dpm.c=		-Wno-missing-prototypes -Wno-unused-const-variable
CWARNFLAGS.sumo_dpm.c=		-Wno-missing-prototypes
CWARNFLAGS.trinity_dpm.c=	-Wno-unused-const-variable
CWARNFLAGS.vce_v1_0.c=		-Wno-missing-prototypes -Wno-cast-qual
CWARNFLAGS.vce_v2_0.c=		-Wno-missing-prototypes
CWARNFLAGS+=			-Wno-pointer-arith ${CWARNFLAGS.${.IMPSRC:T}}
