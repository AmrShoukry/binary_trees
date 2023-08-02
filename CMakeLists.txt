cmake_minimum_required(VERSION 3.25)
project(binary_trees C)

set(CMAKE_C_STANDARD 90)

add_executable(binary_trees 0-binary_tree_node.c 120-main.c binary_tree_print.c 120-binary_tree_is_avl.c)
