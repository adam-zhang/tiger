set(sources gui.cpp)
set(headers gui.h)
add_library(gui SHARED ${headers} 
	${sources}
	)
target_include_directories(gui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
