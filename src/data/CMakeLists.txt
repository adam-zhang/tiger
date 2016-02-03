find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})
set(QT_DONT_USE_QTGUI true)
set(QT_USE_QTSQL TRUE)
set(sources 
	BaseData.cpp
	Account.cpp
	MailFolder.cpp
	Database.cpp
	)
set(headers
	BaseData.h
	Account.h
	MailFolder.h
	Database.h
	)
add_library(data SHARED ${sources} ${headers})
target_link_libraries(data ${QT_LIBRARIES})
target_include_directories(data PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
