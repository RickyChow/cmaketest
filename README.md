# cmaketest

Windows
download mingw
add mingw/bin to path
install basic packages

download cmake
add cmake to path

download boost
extract boost to c:/boost
run "bootstrap.bat mingw"
run b2.exe
set environment variable BOOST_ROOT to c:/boost_??_

mkdir build in root directory
cd into build and run "cmake -G "MinGW Makefiles" .."
run mingw32-make

Linux
install the following packages
	boost-devel
	cmake

mkdir build in root directory
cd into build/
run cmake ..
run make


