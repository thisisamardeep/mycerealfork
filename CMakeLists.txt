cmake_minimum_required(VERSION 3.27)
project(mycereal)

set(CMAKE_CXX_STANDARD 17)
#SET(CMAKE_CXX_FLAGS "-save-temps -finstrument-functions -O0 -g3")
SET(CMAKE_CXX_FLAGS "-save-temps -finstrument-functions -O0 -g3 -fno-elide-constructors")
set(CMAKE_VERBOSE_MAKEFILE ON)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(mycereal main.cpp)
target_include_directories(mycereal PUBLIC "include/")
target_compile_options(mycereal PUBLIC -Wall -Wextra -Wpedantic)
#target_compile_options(mycereal PUBLIC -Wall -Wextra -Wpedantic -Werror)

add_executable(mycerealnew mymain.cpp)
target_include_directories(mycerealnew PUBLIC "myinclude/")

target_compile_options(mycerealnew PUBLIC -Wall -Wextra -Wpedantic -fno-elide-constructors)
#target_compile_options(mycerealnew PUBLIC -Wall -Wextra -Wpedantic )
#target_compile_options(mycerealnew PUBLIC -Wall -Wextra -Wpedantic -Werror)

add_executable(blog blog.cpp)
#target_compile_options(blog PUBLIC -Wall -Wextra -Wpedantic -Werror)
target_compile_options(blog PUBLIC -Wall -Wextra -Wpedantic -fno-elide-constructors)


