find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
set(moc_headers 
	MainWindow.h
	AboutDialog.h
	AccountTreeView.h
	ContentWidget.h
	MailListView.h
	AccountDialog.h
	AccountListWidget.h
	AccountDetailWidget.h
	)
set(sources gui.cpp
	MainWindow.cpp
	AboutDialog.cpp
	AccountTreeView.cpp
	ContentWidget.cpp
	MailListView.cpp
	AccountDialog.cpp
	AccountListWidget.cpp
	AccountDetailWidget.cpp
	)
set(headers 
	gui.h 
	${moc_headers}
	)
QT4_WRAP_CPP(mocs ${moc_headers})
add_library(gui SHARED ${headers} 
	${sources}
	${mocs}
	)
target_link_libraries(gui ${QT_LIBRARIES}
	data)
target_include_directories(gui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
