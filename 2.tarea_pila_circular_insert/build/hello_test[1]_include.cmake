if(EXISTS "/home/fabiola/Desktop/VI/1.TO/II/2.tarea_pila_circular_insert/build/hello_test[1]_tests.cmake")
  include("/home/fabiola/Desktop/VI/1.TO/II/2.tarea_pila_circular_insert/build/hello_test[1]_tests.cmake")
else()
  add_test(hello_test_NOT_BUILT hello_test_NOT_BUILT)
endif()
