cmake_minimum_required(VERSION 3.20)
project(SymmetricCheck)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")

# Включение clang-tidy
set(CMAKE_CXX_CLANG_TIDY "clang-tidy;--config={Checks: '*, -clang-analyzer-*'}")

# Основной исполняемый файл
add_executable(SymmetricCheck main.cpp symmetric_check.cpp)

# Подключение Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Тесты
add_executable(SymmetricCheckTests test_symmetric_check.cpp symmetric_check.cpp)
target_link_libraries(SymmetricCheckTests ${GTEST_LIBRARIES} pthread)

add_test(NAME SymmetricCheckTests COMMAND SymmetricCheckTests)

# # Проверка main.cpp с помощью clang-tidy без исправлений
# add_custom_target(lint_test
#     COMMAND clang-tidy main.cpp -- -std=c++17
#     DEPENDS SymmetricCheck
#     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#     COMMENT "Running clang-tidy on main.cpp"
# )

