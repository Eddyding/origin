# Copyright (c) 2009-2015 Andrew Sutton
# All rights reserved

link_libraries(origin-core)

add_run_test(core_same                  same.cpp)
add_run_test(core_derived               derived.cpp)
add_run_test(core_convertible           convertible.cpp)
add_run_test(core_common_type           common_type.cpp)
add_run_test(core_common                common.cpp)

add_run_test(core_void                  void.cpp)
add_run_test(core_character             character.cpp)
add_run_test(core_signed_integer        signed_integer.cpp)
add_run_test(core_unsigned_integer      unsigned_integer.cpp)
add_run_test(core_integral              integral.cpp)

add_run_test(core_boolean               boolean.cpp)
add_run_test(core_equality_comparable   equality_comparable.cpp)
add_run_test(core_weakly_ordered        weakly_ordered.cpp)
add_run_test(core_totally_ordered       totally_ordered.cpp)
add_run_test(core_destructible          destructible.cpp)
add_run_test(core_constructible         constructible.cpp)
add_run_test(core_assignable            assignable.cpp)
add_run_test(core_default_constructible default_constructible.cpp)
add_run_test(core_move_constructible    move_constructible.cpp)
add_run_test(core_move_assignable       move_assignable.cpp)
add_run_test(core_copy_constructible    copy_constructible.cpp)
add_run_test(core_copy_assignable       copy_assignable.cpp)
add_run_test(core_movable               movable.cpp)
add_run_test(core_copyable              copyable.cpp)
add_run_test(core_semiregular           semiregular.cpp)
add_run_test(core_regular               regular.cpp)
add_run_test(core_ordered               ordered.cpp)

add_run_test(core_function              function.cpp)
add_run_test(core_predicate             predicate.cpp)
add_run_test(core_relation              relation.cpp)
add_run_test(core_unary_operation       unary_operation.cpp)
add_run_test(core_binary_operation      binary_operation.cpp)

add_run_test(core_value_type            value_type.cpp)
add_run_test(core_difference_type       difference_type.cpp)
