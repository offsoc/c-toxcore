if BUILD_AV

lib_LTLIBRARIES +=  libtoxav.la
                    libtoxav_la_include_HEADERS = ../toxav/toxav.h
                    libtoxav_la_includedir = $(includedir)/tox

libtoxav_la_SOURCES = ../toxav/rtp.h \
                    ../toxav/rtp.c \
                    ../toxav/msi.h \
                    ../toxav/msi.c \
                    ../toxav/groupav.h \
                    ../toxav/groupav.c \
                    ../toxav/audio.h \
                    ../toxav/audio.c \
                    ../toxav/video.h \
                    ../toxav/video.c \
                    ../toxav/bwcontroller.h \
                    ../toxav/bwcontroller.c \
                    ../toxav/ring_buffer.h \
                    ../toxav/ring_buffer.c \
                    ../toxav/toxav.h \
                    ../toxav/toxav_hacks.h \
                    ../toxav/toxav.c \
                    ../toxav/toxav_old.c

libtoxav_la_CFLAGS = -I../toxcore \
                    -I../toxav \
                    $(LIBSODIUM_CFLAGS) \
                    $(AV_CFLAGS) \
                    $(PTHREAD_CFLAGS)

libtoxav_la_LDFLAGS = $(LT_LDFLAGS) \
                    $(LIBSODIUM_LDFLAGS) \
                    $(EXTRA_LT_LDFLAGS) \
                    $(WINSOCK2_LIBS)

libtoxav_la_LIBADD =  libtoxcore.la \
                    $(LIBSODIUM_LIBS) \
                    $(PTHREAD_LIBS) \
                    $(AV_LIBS)

if SET_SO_VERSION

EXTRA_libtoxav_la_DEPENDENCIES = ../so.version

endif

endif
