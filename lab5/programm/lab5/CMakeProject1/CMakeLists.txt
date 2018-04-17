# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

find_package(CPPAN REQUIRED)
cppan_add_package(
	pvt.cppan.demo.intel.opencv.highgui-3
)
cppan_execute()

# Добавьте источник для исполняемого файла этого проекта.
add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
			
target_link_libraries(CMakeProject1 pvt.cppan.demo.intel.opencv.highgui)
