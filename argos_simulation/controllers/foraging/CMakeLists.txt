add_library(epuck_foraging MODULE epuck_foraging.h epuck_foraging.cpp)

target_link_libraries(epuck_foraging
  argos3core_simulator
  argos3plugin_simulator_epuck
  argos3plugin_simulator_genericrobot)
