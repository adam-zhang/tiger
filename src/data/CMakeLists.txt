find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
set(QT_DONT_USE_QTGUI true)
set(sources 
	BaseData.cpp
	Account.cpp
	MailFolder.cpp
	)
set(headers
	BaseData.h
	Account.h
	MailFolder.h
	)
add_library(data SHARED ${sources} ${headers})
#target_link_libraries(${QT_LIBRARIES})
target_include_directories(data PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
