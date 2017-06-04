# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kedarbrooks/Documents/Projects/AppStore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kedarbrooks/Documents/Projects/AppStore

# Utility rule file for pot.

# Include the progress variables for this target.
include po/CMakeFiles/pot.dir/progress.make

pot: po/CMakeFiles/pot.dir/build.make
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && /usr/bin/xgettext -d appcenter -o /home/kedarbrooks/Documents/Projects/AppStore/po/appcenter.pot --add-comments="/" --keyword="_" --keyword="N_" --keyword="C_:1c,2" --keyword="NC_:1c,2" --keyword="ngettext:1,2" --keyword="Q_:1g" --from-code=UTF-8 ../src/MainWindow.c ../src/Services/DBusServer.c ../src/Services/DbusInterfaces.c ../src/Settings.c ../src/Views/AppInfoView.c ../src/Views/Homepage.c ../src/Views/InstalledView.c ../src/Views/AppListView.c ../src/Views/View.c ../src/Views/SearchView.c ../src/Dialogs/RestartDialog.c ../src/Dialogs/MessageDialog.c ../src/Dialogs/StripeDialog.c ../src/Core/Package.c ../src/Core/Client.c ../src/Core/Task.c ../src/Core/ChangeInformation.c ../src/Core/Houston.c ../src/config.c ../src/Application.c ../src/SuspendControl.c ../src/Widgets/AbstractAppContainer.c ../src/Widgets/CategoryFlowBox.c ../src/Widgets/Banner.c ../src/Widgets/AbstractAppList.c ../src/Widgets/Carousel/CarouselItem.c ../src/Widgets/Carousel/Carousel.c ../src/Widgets/HumbleButton.c ../src/Widgets/Switcher.c ../src/Widgets/PackageRow.c ../src/Widgets/CategoryItem.c ../src/Widgets/UpdateHeaderRow.c ../src/Widgets/AppListRow.c
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && /usr/bin/xgettext -d appcenter -o /home/kedarbrooks/Documents/Projects/AppStore/po/appcenter.pot --add-comments="/" --keyword="_" --keyword="N_" --keyword="C_:1c,2" --keyword="NC_:1c,2" --keyword="ngettext:1,2" --keyword="Q_:1g" --from-code=UTF-8 -j -LC# ../src/SuspendControl.vala ../src/Settings.vala ../src/config.vala ../src/Services/DBusServer.vala ../src/Services/DbusInterfaces.vala ../src/Application.vala ../src/Views/AppListView.vala ../src/Views/View.vala ../src/Views/SearchView.vala ../src/Views/AppInfoView.vala ../src/Views/Homepage.vala ../src/Views/InstalledView.vala ../src/Dialogs/MessageDialog.vala ../src/Dialogs/RestartDialog.vala ../src/Dialogs/StripeDialog.vala ../src/Core/Houston.vala ../src/Core/Client.vala ../src/Core/Package.vala ../src/Core/Task.vala ../src/Core/ChangeInformation.vala ../src/MainWindow.vala ../src/Widgets/Switcher.vala ../src/Widgets/CategoryItem.vala ../src/Widgets/PackageRow.vala ../src/Widgets/Carousel/Carousel.vala ../src/Widgets/Carousel/CarouselItem.vala ../src/Widgets/AppListRow.vala ../src/Widgets/UpdateHeaderRow.vala ../src/Widgets/CategoryFlowBox.vala ../src/Widgets/HumbleButton.vala ../src/Widgets/AbstractAppList.vala ../src/Widgets/Banner.vala ../src/Widgets/AbstractAppContainer.vala
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && /usr/bin/intltool-extract --local --srcdir=/ --type=gettext/keys /home/kedarbrooks/Documents/Projects/AppStore/data/io.elementary.appcenter.desktop.in
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && /usr/bin/xgettext -d extra -o /home/kedarbrooks/Documents/Projects/AppStore/po/extra/extra.pot --no-location --from-code=UTF-8 --add-comments="/" --keyword="_" --keyword="N_" --keyword="C_:1c,2" --keyword="NC_:1c,2" --keyword="ngettext:1,2" --keyword="Q_:1g" /home/kedarbrooks/Documents/Projects/AppStore/po/tmp/io.elementary.appcenter.desktop.in.h
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && /usr/bin/intltool-extract --local --srcdir=/ --type=gettext/xml /home/kedarbrooks/Documents/Projects/AppStore/data/appcenter.appdata.xml.in
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && /usr/bin/xgettext -d extra -o /home/kedarbrooks/Documents/Projects/AppStore/po/extra/extra.pot --no-location --from-code=UTF-8 -j --add-comments="/" --keyword="_" --keyword="N_" --keyword="C_:1c,2" --keyword="NC_:1c,2" --keyword="ngettext:1,2" --keyword="Q_:1g" /home/kedarbrooks/Documents/Projects/AppStore/po/tmp/appcenter.appdata.xml.in.h
.PHONY : pot

# Rule to build all files generated by this target.
po/CMakeFiles/pot.dir/build: pot

.PHONY : po/CMakeFiles/pot.dir/build

po/CMakeFiles/pot.dir/clean:
	cd /home/kedarbrooks/Documents/Projects/AppStore/po && $(CMAKE_COMMAND) -P CMakeFiles/pot.dir/cmake_clean.cmake
.PHONY : po/CMakeFiles/pot.dir/clean

po/CMakeFiles/pot.dir/depend:
	cd /home/kedarbrooks/Documents/Projects/AppStore && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kedarbrooks/Documents/Projects/AppStore /home/kedarbrooks/Documents/Projects/AppStore/po /home/kedarbrooks/Documents/Projects/AppStore /home/kedarbrooks/Documents/Projects/AppStore/po /home/kedarbrooks/Documents/Projects/AppStore/po/CMakeFiles/pot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/CMakeFiles/pot.dir/depend
