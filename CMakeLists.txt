cmake_minimum_required(VERSION 3.0.0)
project(NeuronNetwork VERSION 0.0.0)

include(CTest)
enable_testing()

add_executable(NeuronNetwork main.cpp NeuronNetwork.cpp Neuron.cpp Layer.cpp Net.cpp)
# add_executable(NeuronNetwork main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
