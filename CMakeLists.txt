#设置cmake最低版本
cmake_minimum_required(VERSION 3.0.0)

#设置项目名称
project(planning
    LANGUAGES CXX
    VERSION 0.0.1
    HOMEPAGE_URL "https://github.com/anxinwang/cmake_planning_demo"
    DESCRIPTION "A demo for cmake planning"
)
#设置C++标准
set(CMAKE_CXX_STANDARD 11)

#设置可执行文件输出路径
#windows下需要使用set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
#linux下需要使用set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin) 
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${PROJECT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${PROJECT_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)
