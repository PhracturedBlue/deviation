SCREENSIZE  := 128x64x1
DISPLAY_DRIVER := spi/128x64x1_nt7538.c
FILESYSTEMS := common base_fonts 128x64x1
FONTS        = filesystem/$(FILESYSTEM)/media/12normal.fon \
               filesystem/$(FILESYSTEM)/media/04b03.fon

OPTIMIZE_DFU     := 1
MODULAR          := 0x20004000
DFU_ARGS         := -c 7 -b 0x08003000

include $(SDIR)/target/tx/devo/common/Makefile.inc

ifdef BUILD_TARGET
$(TARGET).fs_wrapper: $(LAST_MODEL)
	perl -p -i -e 's/; has_pa-cyrf6936 = 1/  has_pa-cyrf6936 = 0/' filesystem/$(FILESYSTEM)/hardware.ini

endif
