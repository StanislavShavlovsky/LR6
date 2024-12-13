cmake_minimum_required(VERSION 3.20)
project(LR6)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")

# #Включение clang-tidy
#set(CMAKE_CXX_CLANG_TIDY "clang-tidy;--config={Checks: '*, -clang-analyzer-*'}")

# Основной исполняемый файл
add_executable(LR6 main.cpp numbers.cpp)

# Подключение Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Добавление тестов
add_executable(LR6Tests test_numbers.cpp numbers.cpp)
target_link_libraries(LR6Tests ${GTEST_LIBRARIES} pthread)

add_test(NAME LR6Tests COMMAND LR6Tests)

# # Проверка main.cpp с помощью clang-tidy без исправлений
# add_custom_target(lint_test
#     COMMAND clang-tidy main.cpp -- -std=c++11
#     DEPENDS LR6
#     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#     COMMENT "Running clang-tidy on main.cpp"
# )
