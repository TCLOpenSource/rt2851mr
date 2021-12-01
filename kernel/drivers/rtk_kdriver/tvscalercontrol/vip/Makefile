# Makefile for the Realtek scaler VIP drivers.
#
#obj-y := scalerColor.o color.o dcc.o di_ma.o film.o icm.o intra.o nr.o custom_sharpness.o xc.o peaking.o ultrazoom.o gibi_od.o pq_misc_table.o pq_adaptive.o localdimming.o pq_misc_table_AIPQ.o

#obj-y := ultrazoom.o di_ma.o scalerColor.o dcc.o color.o film.o icm.o intra.o nr.o custom_sharpness.o xc.o peaking.o gibi_od.o pq_misc_table.o pq_adaptive.o localdimming.o vip_panel_default.o viptable.o scalerColor_tv006.o scalerColor_tv043.o localcontrast.o memc_mux.o pq_3dlut_table.o pq_rpc.o still_logo_detect.o pcid.o fcic.o hdr_table.o ST2094.o tc_hdr.o tc_math.o tc_OEOTF_convert.o module_test_table.o pq_misc_table_AIPQ.o

#KBUILD_CFLAGS += -Werror


mkfile_path:=$(shell pwd)/$(lastword $(MAKEFILE_LIST))
mkfile_path:=$(shell dirname $(mkfile_path))

ST2094OBJ:=ST2094.o.static

ifeq ("", "$(wildcard $(mkfile_path)/$(ST2094OBJ))")
ST2094OBJ=ST2094.o
endif

obj-y := ultrazoom.o di_ma.o scalerColor.o dcc.o color.o film.o icm.o intra.o nr.o custom_sharpness.o xc.o peaking.o gibi_od.o pq_misc_table.o pq_adaptive.o localdimming.o vip_panel_default.o viptable.o scalerColor_tv006.o localcontrast.o memc_mux.o pq_3dlut_table.o pq_rpc.o still_logo_detect.o tc_hdr.o tc_math.o tc_OEOTF_convert.o pcid.o valc.o fcic.o hdr_table.o module_test_table.o $(ST2094OBJ) ai_pq.o pq_misc_table_AIPQ.o

KBUILD_CFLAGS += -Werror
