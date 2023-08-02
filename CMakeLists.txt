cmake_minimum_required(VERSION 3.25)
project(binary_trees C)

set(CMAKE_C_STANDARD 90)

add_executable(binary_trees 0-binary_tree_node.c binary_tree_print.c 103-binary_tree_rotate_left.c 2-binary_tree_insert_right.c 121-avl_insert.c 121-main.c 104-binary_tree_rotate_right.c 14-binary_tree_balance.c)
