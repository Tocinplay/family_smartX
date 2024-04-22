#############################################################################
# Makefile for building: family_smartX
# Generated by qmake (3.1) (Qt 5.12.9)
# Project:  family_smartX.pro
# Template: app
# Command: F:/software/qtcreator/5.12.9/mingw73_64/bin/qmake.exe -o Makefile family_smartX.pro -spec win32-g++ CONFIG+=qtquickcompiler
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = F:/software/qtcreator/5.12.9/mingw73_64/bin/qmake.exe
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = cp -f
INSTALL_PROGRAM = cp -f
INSTALL_DIR   = cp -f -R
QINSTALL      = F:/software/qtcreator/5.12.9/mingw73_64/bin/qmake.exe -install qinstall
QINSTALL_PROGRAM = F:/software/qtcreator/5.12.9/mingw73_64/bin/qmake.exe -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: family_smartX.pro F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/win32-g++/qmake.conf F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/spec_pre.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/qdevice.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/device_config.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/sanitize.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/gcc-base.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/g++-base.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/angle.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/windows-vulkan.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/g++-win32.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/qconfig.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3danimation.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dcore.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dextras.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dinput.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dlogic.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquick.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3drender.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3drender_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axbase.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axbase_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axcontainer.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axcontainer_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axserver.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axserver_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_bluetooth.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_concurrent.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_core.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_core_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_dbus.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_dbus_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_designer.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_designer_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_edid_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gamepad.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gui.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gui_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_help.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_help_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_location.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_location_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimedia.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_network.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_network_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_nfc.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_nfc_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_opengl.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_opengl_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_openglextensions.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioning.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioning_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioningquick.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_printsupport.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qml.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qml_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmltest.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quick.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quick_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_remoteobjects.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_repparser.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_repparser_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_scxml.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_scxml_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sensors.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sensors_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialbus.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialport.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialport_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sql.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sql_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_svg.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_svg_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_testlib.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_testlib_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_texttospeech.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_texttospeech_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_uiplugin.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_uitools.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_uitools_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_webchannel.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_websockets.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_websockets_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_widgets.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_widgets_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_winextras.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_winextras_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xml.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xml_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qt_functions.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qt_config.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/win32-g++/qmake.conf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/exclusive_builds.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/toolchain.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/default_pre.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/default_pre.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/resolve_config.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/exclusive_builds_post.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/default_post.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/resources.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qtquickcompiler.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/precompile_header.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/warn_on.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qt.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/moc.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/opengl.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/uic.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qmake_use.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/file_copies.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/windows.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/testcase_targets.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/exceptions.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/yacc.prf \
		F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/lex.prf \
		family_smartX.pro \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5WinExtras.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5MultimediaWidgets.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Multimedia.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Widgets.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Gui.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Network.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Core.prl \
		F:/software/qtcreator/5.12.9/mingw73_64/lib/qtmain.prl
	$(QMAKE) -o Makefile family_smartX.pro -spec win32-g++ CONFIG+=qtquickcompiler
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/spec_pre.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/qdevice.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/device_config.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/sanitize.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/gcc-base.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/g++-base.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/angle.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/windows-vulkan.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/common/g++-win32.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/qconfig.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3danimation.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3danimation_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dcore.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dcore_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dextras.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dextras_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dinput.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dinput_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dlogic.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquick.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquick_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickextras.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickinput.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickrender.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3drender.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_3drender_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_accessibility_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axbase.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axbase_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axcontainer.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axcontainer_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axserver.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_axserver_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_bluetooth.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_concurrent.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_concurrent_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_core.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_core_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_dbus.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_dbus_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_designer.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_designer_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_edid_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_egl_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_fb_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gamepad.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gamepad_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gui.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_gui_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_help.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_help_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_location.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_location_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimedia.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimedia_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_network.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_network_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_nfc.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_nfc_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_opengl.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_opengl_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_openglextensions.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioning.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioning_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioningquick.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_positioningquick_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_printsupport.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_printsupport_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qml.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qml_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmltest.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qmltest_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quick.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quick_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickwidgets.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_remoteobjects.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_remoteobjects_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_repparser.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_repparser_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_scxml.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_scxml_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sensors.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sensors_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialbus.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialbus_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialport.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_serialport_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sql.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_sql_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_svg.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_svg_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_testlib.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_testlib_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_texttospeech.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_texttospeech_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_theme_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_uiplugin.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_uitools.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_uitools_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_vulkan_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_webchannel.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_webchannel_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_websockets.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_websockets_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_widgets.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_widgets_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_winextras.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_winextras_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xml.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xml_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qt_functions.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qt_config.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/win32-g++/qmake.conf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/spec_post.prf:
.qmake.stash:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/exclusive_builds.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/toolchain.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/default_pre.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/default_pre.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/resolve_config.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/exclusive_builds_post.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/default_post.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/resources.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qtquickcompiler.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/precompile_header.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/warn_on.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qt.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/moc.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/opengl.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/uic.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/qmake_use.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/file_copies.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/win32/windows.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/testcase_targets.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/exceptions.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/yacc.prf:
F:/software/qtcreator/5.12.9/mingw73_64/mkspecs/features/lex.prf:
family_smartX.pro:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5WinExtras.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5MultimediaWidgets.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Multimedia.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Widgets.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Gui.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Network.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/Qt5Core.prl:
F:/software/qtcreator/5.12.9/mingw73_64/lib/qtmain.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile family_smartX.pro -spec win32-g++ CONFIG+=qtquickcompiler

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
