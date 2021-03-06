FILESYSTEMS := common base_fonts 128x64x1
SCREENSIZE  := 128x64x1
DISPLAY_DRIVER := 8080/128x64x1_nt7538.c
DFU_ARGS    := -c 12 -b 0x08004000
FONTS        = filesystem/$(FILESYSTEM)/media/12normal.fon \
               filesystem/$(FILESYSTEM)/media/04b03.fon
LANGUAGE    := devo10

include $(SDIR)/target/tx/devo/common/Makefile.inc

ifndef BUILD_TARGET
SRC_C   += $(SDIR)/target/devo10/backlight.c \
           $(SDIR)/target/devo10/tx_buttons.c
endif
