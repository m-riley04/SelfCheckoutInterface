cmake_minimum_required(VERSION 3.5)

project(SelfCheckoutInterface VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.h
        src/mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SelfCheckoutInterface
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

        src/statuslight.h src/statuslight.cpp
        src/scanner.h src/scanner.cpp
        src/handheldscanner.h src/handheldscanner.cpp
        src/cashmanager.h src/cashmanager.cpp
        src/cardreader.h src/cardreader.cpp
        src/scale.h src/scale.cpp
        src/receiptprinter.h src/receiptprinter.cpp
        src/camera.h src/camera.cpp
        src/station.h src/station.cpp
        src/stationcomponent.h src/stationcomponent.cpp
        src/item.ui
        src/item.h src/item.cpp

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET SelfCheckoutInterface APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(SelfCheckoutInterface SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(SelfCheckoutInterface
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(SelfCheckoutInterface PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.SelfCheckoutInterface)
endif()
set_target_properties(SelfCheckoutInterface PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS SelfCheckoutInterface
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(SelfCheckoutInterface)
endif()
